#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0213[1008] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 10, 0, 0, 11, 0, 12, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0,
    43, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103,
    0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0,
    154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0,
    176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0,
    210, 211, 0, 0, 0, 0, 0, 212, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218,
};
void recomp_unit_0213_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088D9000u;
        entry_id = (entry_delta < 4032u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0213[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D9000;
    case 2u: goto L_088D9008;
    case 3u: goto L_088D9010;
    case 4u: goto L_088D9018;
    case 5u: goto L_088D9030;
    case 6u: goto L_088D9038;
    case 7u: goto L_088D9040;
    case 8u: goto L_088D9048;
    case 9u: goto L_088D9058;
    case 10u: goto L_088D905C;
    case 11u: goto L_088D9068;
    case 12u: goto L_088D9070;
    case 13u: goto L_088D9078;
    case 14u: goto L_088D909C;
    case 15u: goto L_088D90A4;
    case 16u: goto L_088D90B0;
    case 17u: goto L_088D90B8;
    case 18u: goto L_088D90CC;
    case 19u: goto L_088D90D4;
    case 20u: goto L_088D90E4;
    case 21u: goto L_088D90EC;
    case 22u: goto L_088D90FC;
    case 23u: goto L_088D911C;
    case 24u: goto L_088D912C;
    case 25u: goto L_088D913C;
    case 26u: goto L_088D9144;
    case 27u: goto L_088D9160;
    case 28u: goto L_088D9168;
    case 29u: goto L_088D9178;
    case 30u: goto L_088D9180;
    case 31u: goto L_088D9190;
    case 32u: goto L_088D91B0;
    case 33u: goto L_088D91C0;
    case 34u: goto L_088D91C8;
    case 35u: goto L_088D91D0;
    case 36u: goto L_088D91DC;
    case 37u: goto L_088D91F0;
    case 38u: goto L_088D91F8;
    case 39u: goto L_088D9208;
    case 40u: goto L_088D9238;
    case 41u: goto L_088D9268;
    case 42u: goto L_088D9278;
    case 43u: goto L_088D9280;
    case 44u: goto L_088D9284;
    case 45u: goto L_088D9290;
    case 46u: goto L_088D92A0;
    case 47u: goto L_088D92DC;
    case 48u: goto L_088D92EC;
    case 49u: goto L_088D92F4;
    case 50u: goto L_088D9304;
    case 51u: goto L_088D9314;
    case 52u: goto L_088D931C;
    case 53u: goto L_088D932C;
    case 54u: goto L_088D9340;
    case 55u: goto L_088D9370;
    case 56u: goto L_088D9384;
    case 57u: goto L_088D9398;
    case 58u: goto L_088D93A8;
    case 59u: goto L_088D93BC;
    case 60u: goto L_088D93C8;
    case 61u: goto L_088D93D4;
    case 62u: goto L_088D93E4;
    case 63u: goto L_088D93F8;
    case 64u: goto L_088D940C;
    case 65u: goto L_088D9424;
    case 66u: goto L_088D942C;
    case 67u: goto L_088D9444;
    case 68u: goto L_088D9454;
    case 69u: goto L_088D9488;
    case 70u: goto L_088D949C;
    case 71u: goto L_088D94C4;
    case 72u: goto L_088D94E8;
    case 73u: goto L_088D9504;
    case 74u: goto L_088D950C;
    case 75u: goto L_088D953C;
    case 76u: goto L_088D954C;
    case 77u: goto L_088D9578;
    case 78u: goto L_088D9584;
    case 79u: goto L_088D95BC;
    case 80u: goto L_088D95D0;
    case 81u: goto L_088D95F4;
    case 82u: goto L_088D9608;
    case 83u: goto L_088D9638;
    case 84u: goto L_088D9640;
    case 85u: goto L_088D964C;
    case 86u: goto L_088D9658;
    case 87u: goto L_088D9664;
    case 88u: goto L_088D9678;
    case 89u: goto L_088D969C;
    case 90u: goto L_088D96A4;
    case 91u: goto L_088D96AC;
    case 92u: goto L_088D96B0;
    case 93u: goto L_088D96D0;
    case 94u: goto L_088D971C;
    case 95u: goto L_088D9728;
    case 96u: goto L_088D9738;
    case 97u: goto L_088D9740;
    case 98u: goto L_088D9748;
    case 99u: goto L_088D9750;
    case 100u: goto L_088D975C;
    case 101u: goto L_088D9764;
    case 102u: goto L_088D976C;
    case 103u: goto L_088D977C;
    case 104u: goto L_088D9788;
    case 105u: goto L_088D9790;
    case 106u: goto L_088D97A4;
    case 107u: goto L_088D97A8;
    case 108u: goto L_088D97B4;
    case 109u: goto L_088D97C4;
    case 110u: goto L_088D97CC;
    case 111u: goto L_088D97D0;
    case 112u: goto L_088D97D8;
    case 113u: goto L_088D97F8;
    case 114u: goto L_088D982C;
    case 115u: goto L_088D9834;
    case 116u: goto L_088D9850;
    case 117u: goto L_088D9890;
    case 118u: goto L_088D9898;
    case 119u: goto L_088D98BC;
    case 120u: goto L_088D98D0;
    case 121u: goto L_088D98E4;
    case 122u: goto L_088D98F0;
    case 123u: goto L_088D98F8;
    case 124u: goto L_088D9910;
    case 125u: goto L_088D9920;
    case 126u: goto L_088D9930;
    case 127u: goto L_088D9940;
    case 128u: goto L_088D9948;
    case 129u: goto L_088D9954;
    case 130u: goto L_088D995C;
    case 131u: goto L_088D9974;
    case 132u: goto L_088D997C;
    case 133u: goto L_088D9998;
    case 134u: goto L_088D99AC;
    case 135u: goto L_088D99BC;
    case 136u: goto L_088D99DC;
    case 137u: goto L_088D9A00;
    case 138u: goto L_088D9A0C;
    case 139u: goto L_088D9A14;
    case 140u: goto L_088D9A2C;
    case 141u: goto L_088D9A38;
    case 142u: goto L_088D9A40;
    case 143u: goto L_088D9A60;
    case 144u: goto L_088D9A70;
    case 145u: goto L_088D9A80;
    case 146u: goto L_088D9A88;
    case 147u: goto L_088D9AA4;
    case 148u: goto L_088D9AC8;
    case 149u: goto L_088D9AD0;
    case 150u: goto L_088D9AD8;
    case 151u: goto L_088D9AE4;
    case 152u: goto L_088D9AEC;
    case 153u: goto L_088D9AF4;
    case 154u: goto L_088D9B00;
    case 155u: goto L_088D9B08;
    case 156u: goto L_088D9B20;
    case 157u: goto L_088D9B48;
    case 158u: goto L_088D9B50;
    case 159u: goto L_088D9B58;
    case 160u: goto L_088D9B64;
    case 161u: goto L_088D9B6C;
    case 162u: goto L_088D9B84;
    case 163u: goto L_088D9BAC;
    case 164u: goto L_088D9BB4;
    case 165u: goto L_088D9BBC;
    case 166u: goto L_088D9BD0;
    case 167u: goto L_088D9C00;
    case 168u: goto L_088D9C08;
    case 169u: goto L_088D9C34;
    case 170u: goto L_088D9C4C;
    case 171u: goto L_088D9C54;
    case 172u: goto L_088D9C5C;
    case 173u: goto L_088D9C64;
    case 174u: goto L_088D9C70;
    case 175u: goto L_088D9C78;
    case 176u: goto L_088D9C80;
    case 177u: goto L_088D9C88;
    case 178u: goto L_088D9C94;
    case 179u: goto L_088D9CA0;
    case 180u: goto L_088D9CA8;
    case 181u: goto L_088D9CC4;
    case 182u: goto L_088D9CD4;
    case 183u: goto L_088D9CE4;
    case 184u: goto L_088D9CEC;
    case 185u: goto L_088D9CF8;
    case 186u: goto L_088D9D14;
    case 187u: goto L_088D9D24;
    case 188u: goto L_088D9D34;
    case 189u: goto L_088D9D3C;
    case 190u: goto L_088D9D48;
    case 191u: goto L_088D9D8C;
    case 192u: goto L_088D9D94;
    case 193u: goto L_088D9DC0;
    case 194u: goto L_088D9DC4;
    case 195u: goto L_088D9DD8;
    case 196u: goto L_088D9DEC;
    case 197u: goto L_088D9E00;
    case 198u: goto L_088D9E2C;
    case 199u: goto L_088D9E50;
    case 200u: goto L_088D9E8C;
    case 201u: goto L_088D9EA0;
    case 202u: goto L_088D9EB0;
    case 203u: goto L_088D9EC8;
    case 204u: goto L_088D9ED0;
    case 205u: goto L_088D9ED8;
    case 206u: goto L_088D9EE0;
    case 207u: goto L_088D9EE8;
    case 208u: goto L_088D9EF0;
    case 209u: goto L_088D9EF8;
    case 210u: goto L_088D9F00;
    case 211u: goto L_088D9F04;
    case 212u: goto L_088D9F1C;
    case 213u: goto L_088D9F20;
    case 214u: goto L_088D9F28;
    case 215u: goto L_088D9F84;
    case 216u: goto L_088D9FA0;
    case 217u: goto L_088D9FAC;
    case 218u: goto L_088D9FBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D9000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9208;
      }
      goto L_088D9008;
    }
L_088D9008:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9168;
      }
      goto L_088D9010;
    }
L_088D9010:
    aot_gpr[31] = (0x088D9018u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9018u) goto L_088D9018;
    return;
L_088D9018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088D913C;
      }
      goto L_088D9030;
    }
L_088D9030:
    aot_gpr[20] = (0u | 2u);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_088D9038;
L_088D9038:
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088D9068;
      }
      goto L_088D9040;
    }
L_088D9040:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D905C;
      }
      goto L_088D9048;
    }
L_088D9048:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x088D9058u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 224u, 0x088D8F38u>(ctx, &aot_mem) && ctx.pc == 0x088D9058u) goto L_088D9058;
    return;
L_088D9058:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088D905C;
L_088D905C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_088D90B0;
      }
      goto L_088D9068;
    }
L_088D9068:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D90A4;
      }
      goto L_088D9070;
    }
L_088D9070:
    aot_gpr[31] = (0x088D9078u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9078u) goto L_088D9078;
    return;
L_088D9078:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 8u);
    aot_gpr[31] = (0x088D909Cu);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088D909Cu) goto L_088D909C;
    return;
L_088D909C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_088D90B0;
      }
      goto L_088D90A4;
    }
L_088D90A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[20]));
    goto L_088D90B0;
L_088D90B0:
    aot_gpr[31] = (0x088D90B8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D90B8u) goto L_088D90B8;
    return;
L_088D90B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088D90CCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D90CCu) goto L_088D90CC;
    return;
L_088D90CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D912C;
      }
      goto L_088D90D4;
    }
L_088D90D4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D90E4u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 169u, 0x088D8B98u>(ctx, &aot_mem) && ctx.pc == 0x088D90E4u) goto L_088D90E4;
    return;
L_088D90E4:
    aot_gpr[31] = (0x088D90ECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D90ECu) goto L_088D90EC;
    return;
L_088D90EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088D90FCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(860)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D90FCu) goto L_088D90FC;
    return;
L_088D90FC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088D911Cu);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088D911Cu) goto L_088D911C;
    return;
L_088D911C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D912Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 39u, 0x088D8290u>(ctx, &aot_mem) && ctx.pc == 0x088D912Cu) goto L_088D912C;
    return;
L_088D912C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9038;
      }
      goto L_088D913C;
    }
L_088D913C:
    aot_gpr[31] = (0x088D9144u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9144u) goto L_088D9144;
    return;
L_088D9144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088D9160u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D9160u) goto L_088D9160;
    return;
L_088D9160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91C0;
      }
      goto L_088D9168;
    }
L_088D9168:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D9178u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 169u, 0x088D8B98u>(ctx, &aot_mem) && ctx.pc == 0x088D9178u) goto L_088D9178;
    return;
L_088D9178:
    aot_gpr[31] = (0x088D9180u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9180u) goto L_088D9180;
    return;
L_088D9180:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088D9190u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(860)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D9190u) goto L_088D9190;
    return;
L_088D9190:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088D91B0u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088D91B0u) goto L_088D91B0;
    return;
L_088D91B0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D91C0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 39u, 0x088D8290u>(ctx, &aot_mem) && ctx.pc == 0x088D91C0u) goto L_088D91C0;
    return;
L_088D91C0:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1430), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_088D91C8;
L_088D91C8:
    aot_gpr[31] = (0x088D91D0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D91D0u) goto L_088D91D0;
    return;
L_088D91D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088D91DCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D91DCu) goto L_088D91DC;
    return;
L_088D91DC:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088D91F0u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 149u, 0x088E2A54u>(ctx, &aot_mem) && ctx.pc == 0x088D91F0u) goto L_088D91F0;
    return;
L_088D91F0:
    aot_gpr[31] = (0x088D91F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D91F8u) goto L_088D91F8;
    return;
L_088D91F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D9208u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 21u, 0x088E316Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9208u) goto L_088D9208;
    return;
L_088D9208:
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
L_088D9238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9280;
      }
      goto L_088D9268;
    }
L_088D9268:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D9278u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9278u) goto L_088D9278;
    return;
L_088D9278:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D9284;
      }
      goto L_088D9280;
    }
L_088D9280:
    aot_gpr[2] = (0u | 0u);
    goto L_088D9284;
L_088D9284:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088D92A0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D92A0u) goto L_088D92A0;
    return;
L_088D92A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D92DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088D92ECu);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D92ECu) goto L_088D92EC;
    return;
L_088D92EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D93C8;
      }
      goto L_088D92F4;
    }
L_088D92F4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088D9304u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9304u) goto L_088D9304;
    return;
L_088D9304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[6] = (0u | 0u);
    goto L_088D9314;
L_088D9314:
    aot_gpr[31] = (0x088D931Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D931Cu) goto L_088D931C;
    return;
L_088D931C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(21))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D93C8;
      }
      goto L_088D932C;
    }
L_088D932C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088D93BC;
      }
      goto L_088D9340;
    }
L_088D9340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(15)));
    aot_gpr[2] = (aot_gpr[11] << 5u);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] << 2u);
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[4]);
    aot_gpr[11] = (aot_gpr[4] & 65535u);
    aot_gpr[31] = (0x088D9370u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D9370u) goto L_088D9370;
    return;
L_088D9370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D93A8;
      }
      goto L_088D9384;
    }
L_088D9384:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[31] = (0x088D9398u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D9398u) goto L_088D9398;
    return;
L_088D9398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_088D93BC;
      }
      goto L_088D93A8;
    }
L_088D93A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088D9340;
      }
      goto L_088D93BC;
    }
L_088D93BC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9314;
      }
      goto L_088D93C8;
    }
L_088D93C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D93D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2188)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088D93F8;
      }
      goto L_088D93E4;
    }
L_088D93E4:
    aot_gpr[6] = (16025u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2188), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088D93F8;
L_088D93F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1456)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D9504;
      }
      goto L_088D940C;
    }
L_088D940C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088D942C;
      }
      goto L_088D9424;
    }
L_088D9424:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1456), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088D942C;
L_088D942C:
    aot_gpr[6] = (16025u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (17279u << 16u);
      if (branch_taken) {
          goto L_088D9454;
      }
      goto L_088D9444;
    }
L_088D9444:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[5] = (17279u << 16u);
    goto L_088D9454;
L_088D9454:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(876)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_088D9504;
      }
      goto L_088D9488;
    }
L_088D9488:
    aot_gpr[5] = (aot_gpr[8] << 24u);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (16384u << 16u);
    goto L_088D949C;
L_088D949C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(40)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(876)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[8]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[7]);
    if (aot_gpr[2] != 0u) {
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
        goto L_088D94E8;
    }
    goto L_088D94C4;
L_088D94C4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(88)));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(28), aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[2] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(88), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    goto L_088D94E8;
L_088D94E8:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(40)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(876)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088D949C;
      }
      goto L_088D9504;
    }
L_088D9504:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D950C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9578;
      }
      goto L_088D953C;
    }
L_088D953C:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x088D954Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 174u, 0x088D7EC0u>(ctx, &aot_mem) && ctx.pc == 0x088D954Cu) goto L_088D954C;
    return;
L_088D954C:
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1460), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D953C;
      }
      goto L_088D9578;
    }
L_088D9578:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9584:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D95F4;
      }
      goto L_088D95BC;
    }
L_088D95BC:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1460))))));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D95D0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 183u, 0x088D7FA0u>(ctx, &aot_mem) && ctx.pc == 0x088D95D0u) goto L_088D95D0;
    return;
L_088D95D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D95BC;
      }
      goto L_088D95F4;
    }
L_088D95F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9608:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 1000u);
    aot_gpr[18] = (0u | 100u);
    goto L_088D9638;
L_088D9638:
    aot_gpr[31] = (0x088D9640u);
    aot_gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 186u, 0x08872DB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9640u) goto L_088D9640;
    return;
L_088D9640:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D96AC;
      }
      goto L_088D964C;
    }
L_088D964C:
    aot_gpr[4] = (0u | 9u);
    aot_gpr[31] = (0x088D9658u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088D9658u) goto L_088D9658;
    return;
L_088D9658:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D96A4;
      }
      goto L_088D9664;
    }
L_088D9664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D96A4;
      }
      goto L_088D9678;
    }
L_088D9678:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D96A4;
      }
      goto L_088D969C;
    }
L_088D969C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_088D96B0;
      }
      goto L_088D96A4;
    }
L_088D96A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9638;
      }
      goto L_088D96AC;
    }
L_088D96AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088D96B0;
L_088D96B0:
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
L_088D96D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2176)));
    aot_gpr[6] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(516));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088D97A4;
      }
      goto L_088D971C;
    }
L_088D971C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088D9728u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9728u) goto L_088D9728;
    return;
L_088D9728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9790;
      }
      goto L_088D9738;
    }
L_088D9738:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9764;
      }
      goto L_088D9740;
    }
L_088D9740:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D9750;
      }
      goto L_088D9748;
    }
L_088D9748:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9790;
      }
      goto L_088D9750;
    }
L_088D9750:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088D975Cu);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D975Cu) goto L_088D975C;
    return;
L_088D975C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D97A8;
      }
      goto L_088D9764;
    }
L_088D9764:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D9748;
      }
      goto L_088D976C;
    }
L_088D976C:
    aot_gpr[7] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088D977Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D977Cu) goto L_088D977C;
    return;
L_088D977C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088D9788u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9788u) goto L_088D9788;
    return;
L_088D9788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D97A8;
      }
      goto L_088D9790;
    }
L_088D9790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D971C;
      }
      goto L_088D97A4;
    }
L_088D97A4:
    aot_gpr[2] = (0u | 0u);
    goto L_088D97A8;
L_088D97A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D97B4:
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
      if (branch_taken) {
          goto L_088D97CC;
      }
      goto L_088D97C4;
    }
L_088D97C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1492));
      if (branch_taken) {
          goto L_088D97D0;
      }
      goto L_088D97CC;
    }
L_088D97CC:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1476));
    goto L_088D97D0;
L_088D97D0:
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_088D9834;
    }
    goto L_088D97D8;
L_088D97D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(868)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D982C;
      }
      goto L_088D97F8;
    }
L_088D97F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1508)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(868)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(68)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D97F8;
      }
      goto L_088D982C;
    }
L_088D982C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9890;
      }
      goto L_088D9834;
    }
L_088D9834:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(868)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9890;
      }
      goto L_088D9850;
    }
L_088D9850:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(868)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(68)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9850;
      }
      goto L_088D9890;
    }
L_088D9890:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088D98BCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D98BCu) goto L_088D98BC;
    return;
L_088D98BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(23)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D9948;
      }
      goto L_088D98D0;
    }
L_088D98D0:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1962), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D98E4u);
    aot_gpr[6] = (0u | 0u);
    goto L_088D96D0;
L_088D98E4:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_088D98F0;
L_088D98F0:
    aot_gpr[31] = (0x088D98F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D98F8u) goto L_088D98F8;
    return;
L_088D98F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9930;
      }
      goto L_088D9910;
    }
L_088D9910:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[31] = (0x088D9920u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088D9920u) goto L_088D9920;
    return;
L_088D9920:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1508), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D98F0;
      }
      goto L_088D9930;
    }
L_088D9930:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D9940u);
    aot_gpr[6] = (0u | 1u);
    goto L_088D97B4;
L_088D9940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99BC;
      }
      goto L_088D9948;
    }
L_088D9948:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_088D9954;
L_088D9954:
    aot_gpr[31] = (0x088D995Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D995Cu) goto L_088D995C;
    return;
L_088D995C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99AC;
      }
      goto L_088D9974;
    }
L_088D9974:
    aot_gpr[31] = (0x088D997Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088D997Cu) goto L_088D997C;
    return;
L_088D997C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D9998u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088D9998u) goto L_088D9998;
    return;
L_088D9998:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1508), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9954;
      }
      goto L_088D99AC;
    }
L_088D99AC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(1960))))));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1962), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2189), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088D99BC;
L_088D99BC:
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
L_088D99DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2189)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D9A88;
      }
      goto L_088D9A00;
    }
L_088D9A00:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088D9A0C;
L_088D9A0C:
    aot_gpr[31] = (0x088D9A14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9A14u) goto L_088D9A14;
    return;
L_088D9A14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A80;
      }
      goto L_088D9A2C;
    }
L_088D9A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A70;
      }
      goto L_088D9A38;
    }
L_088D9A38:
    aot_gpr[31] = (0x088D9A40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9A40u) goto L_088D9A40;
    return;
L_088D9A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x088D9A60u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9A60u) goto L_088D9A60;
    return;
L_088D9A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D9A70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 100u, 0x088DE784u>(ctx, &aot_mem) && ctx.pc == 0x088D9A70u) goto L_088D9A70;
    return;
L_088D9A70:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9A0C;
      }
      goto L_088D9A80;
    }
L_088D9A80:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(1962))))));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1960), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088D9A88;
L_088D9A88:
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
L_088D9AA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[17] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_088D9AD8;
      }
      goto L_088D9AC8;
    }
L_088D9AC8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D9C34;
      }
      goto L_088D9AD0;
    }
L_088D9AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9AF4;
      }
      goto L_088D9AD8;
    }
L_088D9AD8:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D9B58;
      }
      goto L_088D9AE4;
    }
L_088D9AE4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BBC;
      }
      goto L_088D9AEC;
    }
L_088D9AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C34;
      }
      goto L_088D9AF4;
    }
L_088D9AF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2096), aot_gpr[6]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (2218u << 16u);
    goto L_088D9B00;
L_088D9B00:
    aot_gpr[31] = (0x088D9B08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9B08u) goto L_088D9B08;
    return;
L_088D9B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B50;
      }
      goto L_088D9B20;
    }
L_088D9B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1980)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D9B48u);
    aot_gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088D9B48u) goto L_088D9B48;
    return;
L_088D9B48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9B00;
      }
      goto L_088D9B50;
    }
L_088D9B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C34;
      }
      goto L_088D9B58;
    }
L_088D9B58:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1980), aot_gpr[6]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (2218u << 16u);
    goto L_088D9B64;
L_088D9B64:
    aot_gpr[31] = (0x088D9B6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088D9B6Cu) goto L_088D9B6C;
    return;
L_088D9B6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BB4;
      }
      goto L_088D9B84;
    }
L_088D9B84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2096)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1980)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D9BACu);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088D9BACu) goto L_088D9BAC;
    return;
L_088D9BAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9B64;
      }
      goto L_088D9BB4;
    }
L_088D9BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C34;
      }
      goto L_088D9BBC;
    }
L_088D9BBC:
    aot_gpr[18] = (aot_gpr[7] << 2u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2012), aot_gpr[6]);
      if (branch_taken) {
          goto L_088D9C00;
      }
      goto L_088D9BD0;
    }
L_088D9BD0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2012)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D9C00u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088D9C00u) goto L_088D9C00;
    return;
L_088D9C00:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D9C34;
      }
      goto L_088D9C08;
    }
L_088D9C08:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x088D9C34u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 82u, 0x088E0744u>(ctx, &aot_mem) && ctx.pc == 0x088D9C34u) goto L_088D9C34;
    return;
L_088D9C34:
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
L_088D9C4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D9C64;
      }
      goto L_088D9C54;
    }
L_088D9C54:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D9CA0;
      }
      goto L_088D9C5C;
    }
L_088D9C5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
      if (branch_taken) {
          goto L_088D9CA0;
      }
      goto L_088D9C64;
    }
L_088D9C64:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D9C80;
      }
      goto L_088D9C70;
    }
L_088D9C70:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C88;
      }
      goto L_088D9C78;
    }
L_088D9C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9CA0;
      }
      goto L_088D9C80;
    }
L_088D9C80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1980)));
      if (branch_taken) {
          goto L_088D9CA0;
      }
      goto L_088D9C88;
    }
L_088D9C88:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9CA0;
      }
      goto L_088D9C94;
    }
L_088D9C94:
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2012)));
    goto L_088D9CA0;
L_088D9CA0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9CA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D9CEC;
      }
      goto L_088D9CC4;
    }
L_088D9CC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9CEC;
      }
      goto L_088D9CD4;
    }
L_088D9CD4:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D9CE4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9CE4u) goto L_088D9CE4;
    return;
L_088D9CE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088D9CEC;
L_088D9CEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9CF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D9D3C;
      }
      goto L_088D9D14;
    }
L_088D9D14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D3C;
      }
      goto L_088D9D24;
    }
L_088D9D24:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D9D34u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9D34u) goto L_088D9D34;
    return;
L_088D9D34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088D9D3C;
L_088D9D3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2176)));
    aot_gpr[8] = (0u | 1000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(504));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9DD8;
      }
      goto L_088D9D8C;
    }
L_088D9D8C:
    aot_gpr[31] = (0x088D9D94u);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D9D94u) goto L_088D9D94;
    return;
L_088D9D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2176)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 100 ? 1u : 0u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(504));
      if (branch_taken) {
          goto L_088D9DC4;
      }
      goto L_088D9DC0;
    }
L_088D9DC0:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    goto L_088D9DC4;
L_088D9DC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D8C;
      }
      goto L_088D9DD8;
    }
L_088D9DD8:
    aot_gpr[2] = (aot_gpr[10] << 16u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 16u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9DEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1984), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1988), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1992), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1996), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9E00:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2036), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2048), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2060), aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2072), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9E2C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1988)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1992)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1996)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9E50:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2036)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2048)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2060)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2072)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9E8C:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2084)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9EA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9EB0;
    }
L_088D9EB0:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-32632)));
    jump_target = aot_gpr[1];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9EC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 146u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9ED0;
    }
L_088D9ED0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 149u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9ED8;
    }
L_088D9ED8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 151u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9EE0;
    }
L_088D9EE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 152u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9EE8;
    }
L_088D9EE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 153u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9EF0;
    }
L_088D9EF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 150u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9EF8;
    }
L_088D9EF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 158u);
      if (branch_taken) {
          goto L_088D9F04;
      }
      goto L_088D9F00;
    }
L_088D9F00:
    aot_gpr[2] = (0u | 159u);
    goto L_088D9F04;
L_088D9F04:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9F20;
      }
      goto L_088D9F1C;
    }
L_088D9F1C:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_088D9F20;
L_088D9F20:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9F28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1442), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1443), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1444), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(1452), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1448), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(1442));
    aot_gpr[23] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1312));
    goto L_088D9F84;
L_088D9F84:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D9FA0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 132u, 0x0885B95Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9FA0u) goto L_088D9FA0;
    return;
L_088D9FA0:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 2u, 0x088DA004u>(ctx, &aot_mem); return;
      }
      goto L_088D9FAC;
    }
L_088D9FAC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088D9FBCu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088D9EA0;
L_088D9FBC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[18] << 24u);
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[2] << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1312));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[23]));
    ctx.pc = 0x088DA000u; return;
}

void recomp_unit_0213(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0213_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_213(Runtime &runtime) {
    runtime.register_generated_unit(213u, 0x088D9000u, 4096u, &recomp_unit_0213, &recomp_unit_0213_entry);
    runtime.register_function(0x088D9000u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9008u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9010u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9018u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9030u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9038u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9040u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9048u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9058u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D905Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9068u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9070u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9078u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D909Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D90FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D911Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D912Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D913Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9144u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9160u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9168u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9178u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9180u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9190u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D91F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9208u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9238u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9268u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9278u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9280u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9284u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9290u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D92A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D92DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D92ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D92F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9304u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9314u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D931Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D932Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9340u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9370u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9384u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9398u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D93A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D93BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D93C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D93D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D93E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D93F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D940Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9424u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D942Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9444u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9454u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9488u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D949Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D94C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D94E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9504u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D950Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D953Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D954Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9578u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9584u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D95BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D95D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D95F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9608u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9638u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9640u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D964Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9658u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9664u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9678u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D969Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D96A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D96ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D96B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D96D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D971Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9728u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9738u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9740u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9748u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9750u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D975Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9764u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D976Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D977Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9788u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9790u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D97F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D982Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9834u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9850u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9890u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9898u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D98BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D98D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D98E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D98F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D98F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9910u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9920u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9930u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9940u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9948u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9954u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D995Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9974u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D997Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9998u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D99ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D99BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D99DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9A88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9AF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9B84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9BACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9BB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9BBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9BD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9C94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9CF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9D94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9DC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9DC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9DD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9DECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9E00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9E2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9E50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9E8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9ED0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9ED8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9EF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9F00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9F04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9F1Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9F20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9F28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9F84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9FA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9FACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x088D9FBCu, &recomp_unit_0213, "recomp_unit_0213");
}
} // namespace psprecomp
