#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0469[1011] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0,
    21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 38, 0, 0, 39, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0,
    0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 75, 76, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0,
    81, 82, 0, 83, 0, 84, 0, 85, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102,
    0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111,
    0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0,
    0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 155, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 172,
    173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 180, 0, 181, 0, 0, 182,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 187, 0, 188, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 202,
};
void recomp_unit_0469_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D9000u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0469[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D9000;
    case 2u: goto L_089D9030;
    case 3u: goto L_089D9038;
    case 4u: goto L_089D9058;
    case 5u: goto L_089D9060;
    case 6u: goto L_089D90B8;
    case 7u: goto L_089D90C0;
    case 8u: goto L_089D90D0;
    case 9u: goto L_089D90EC;
    case 10u: goto L_089D90F0;
    case 11u: goto L_089D9100;
    case 12u: goto L_089D9110;
    case 13u: goto L_089D9118;
    case 14u: goto L_089D9124;
    case 15u: goto L_089D912C;
    case 16u: goto L_089D9134;
    case 17u: goto L_089D9144;
    case 18u: goto L_089D914C;
    case 19u: goto L_089D9168;
    case 20u: goto L_089D916C;
    case 21u: goto L_089D9180;
    case 22u: goto L_089D9188;
    case 23u: goto L_089D9190;
    case 24u: goto L_089D91C8;
    case 25u: goto L_089D91D4;
    case 26u: goto L_089D91DC;
    case 27u: goto L_089D91EC;
    case 28u: goto L_089D91F4;
    case 29u: goto L_089D9210;
    case 30u: goto L_089D9220;
    case 31u: goto L_089D9228;
    case 32u: goto L_089D9234;
    case 33u: goto L_089D923C;
    case 34u: goto L_089D924C;
    case 35u: goto L_089D9264;
    case 36u: goto L_089D9280;
    case 37u: goto L_089D9290;
    case 38u: goto L_089D9298;
    case 39u: goto L_089D92A4;
    case 40u: goto L_089D92A8;
    case 41u: goto L_089D92B4;
    case 42u: goto L_089D92C4;
    case 43u: goto L_089D92D0;
    case 44u: goto L_089D9304;
    case 45u: goto L_089D930C;
    case 46u: goto L_089D9318;
    case 47u: goto L_089D9324;
    case 48u: goto L_089D9330;
    case 49u: goto L_089D9338;
    case 50u: goto L_089D9344;
    case 51u: goto L_089D9358;
    case 52u: goto L_089D935C;
    case 53u: goto L_089D9380;
    case 54u: goto L_089D9388;
    case 55u: goto L_089D93C4;
    case 56u: goto L_089D93D4;
    case 57u: goto L_089D9418;
    case 58u: goto L_089D9440;
    case 59u: goto L_089D9448;
    case 60u: goto L_089D9450;
    case 61u: goto L_089D9458;
    case 62u: goto L_089D9460;
    case 63u: goto L_089D946C;
    case 64u: goto L_089D9478;
    case 65u: goto L_089D9488;
    case 66u: goto L_089D9490;
    case 67u: goto L_089D94A4;
    case 68u: goto L_089D94AC;
    case 69u: goto L_089D94BC;
    case 70u: goto L_089D94C8;
    case 71u: goto L_089D94DC;
    case 72u: goto L_089D9804;
    case 73u: goto L_089D9838;
    case 74u: goto L_089D9844;
    case 75u: goto L_089D9848;
    case 76u: goto L_089D984C;
    case 77u: goto L_089D985C;
    case 78u: goto L_089D9864;
    case 79u: goto L_089D9870;
    case 80u: goto L_089D9878;
    case 81u: goto L_089D9880;
    case 82u: goto L_089D9884;
    case 83u: goto L_089D988C;
    case 84u: goto L_089D9894;
    case 85u: goto L_089D989C;
    case 86u: goto L_089D98A0;
    case 87u: goto L_089D98B4;
    case 88u: goto L_089D98C0;
    case 89u: goto L_089D98C8;
    case 90u: goto L_089D98D0;
    case 91u: goto L_089D98D8;
    case 92u: goto L_089D98F0;
    case 93u: goto L_089D9924;
    case 94u: goto L_089D9928;
    case 95u: goto L_089D9938;
    case 96u: goto L_089D9940;
    case 97u: goto L_089D9948;
    case 98u: goto L_089D9950;
    case 99u: goto L_089D9954;
    case 100u: goto L_089D9964;
    case 101u: goto L_089D9970;
    case 102u: goto L_089D997C;
    case 103u: goto L_089D9984;
    case 104u: goto L_089D998C;
    case 105u: goto L_089D9994;
    case 106u: goto L_089D99B4;
    case 107u: goto L_089D99C4;
    case 108u: goto L_089D99D4;
    case 109u: goto L_089D99E4;
    case 110u: goto L_089D99F4;
    case 111u: goto L_089D99FC;
    case 112u: goto L_089D9A0C;
    case 113u: goto L_089D9A20;
    case 114u: goto L_089D9A38;
    case 115u: goto L_089D9A48;
    case 116u: goto L_089D9A50;
    case 117u: goto L_089D9A58;
    case 118u: goto L_089D9A80;
    case 119u: goto L_089D9A88;
    case 120u: goto L_089D9A9C;
    case 121u: goto L_089D9AA4;
    case 122u: goto L_089D9AAC;
    case 123u: goto L_089D9AB8;
    case 124u: goto L_089D9ADC;
    case 125u: goto L_089D9B3C;
    case 126u: goto L_089D9B50;
    case 127u: goto L_089D9B6C;
    case 128u: goto L_089D9B90;
    case 129u: goto L_089D9B9C;
    case 130u: goto L_089D9BA8;
    case 131u: goto L_089D9BAC;
    case 132u: goto L_089D9BBC;
    case 133u: goto L_089D9BC8;
    case 134u: goto L_089D9BD4;
    case 135u: goto L_089D9BD8;
    case 136u: goto L_089D9BE0;
    case 137u: goto L_089D9BEC;
    case 138u: goto L_089D9BF8;
    case 139u: goto L_089D9C08;
    case 140u: goto L_089D9C28;
    case 141u: goto L_089D9C2C;
    case 142u: goto L_089D9C3C;
    case 143u: goto L_089D9C44;
    case 144u: goto L_089D9C54;
    case 145u: goto L_089D9C64;
    case 146u: goto L_089D9C70;
    case 147u: goto L_089D9C84;
    case 148u: goto L_089D9C90;
    case 149u: goto L_089D9C9C;
    case 150u: goto L_089D9CA8;
    case 151u: goto L_089D9CB0;
    case 152u: goto L_089D9CB4;
    case 153u: goto L_089D9CCC;
    case 154u: goto L_089D9CD8;
    case 155u: goto L_089D9CDC;
    case 156u: goto L_089D9CF4;
    case 157u: goto L_089D9D04;
    case 158u: goto L_089D9D10;
    case 159u: goto L_089D9D28;
    case 160u: goto L_089D9D38;
    case 161u: goto L_089D9D44;
    case 162u: goto L_089D9D54;
    case 163u: goto L_089D9D94;
    case 164u: goto L_089D9D98;
    case 165u: goto L_089D9DA4;
    case 166u: goto L_089D9DBC;
    case 167u: goto L_089D9DC4;
    case 168u: goto L_089D9DCC;
    case 169u: goto L_089D9DDC;
    case 170u: goto L_089D9DF0;
    case 171u: goto L_089D9DF8;
    case 172u: goto L_089D9DFC;
    case 173u: goto L_089D9E00;
    case 174u: goto L_089D9E0C;
    case 175u: goto L_089D9E28;
    case 176u: goto L_089D9E30;
    case 177u: goto L_089D9E3C;
    case 178u: goto L_089D9E4C;
    case 179u: goto L_089D9E64;
    case 180u: goto L_089D9E68;
    case 181u: goto L_089D9E70;
    case 182u: goto L_089D9E7C;
    case 183u: goto L_089D9E84;
    case 184u: goto L_089D9EC4;
    case 185u: goto L_089D9ED4;
    case 186u: goto L_089D9EE0;
    case 187u: goto L_089D9EE4;
    case 188u: goto L_089D9EEC;
    case 189u: goto L_089D9F00;
    case 190u: goto L_089D9F14;
    case 191u: goto L_089D9F1C;
    case 192u: goto L_089D9F2C;
    case 193u: goto L_089D9F38;
    case 194u: goto L_089D9F44;
    case 195u: goto L_089D9F48;
    case 196u: goto L_089D9F50;
    case 197u: goto L_089D9F60;
    case 198u: goto L_089D9F68;
    case 199u: goto L_089D9F78;
    case 200u: goto L_089D9FB8;
    case 201u: goto L_089D9FBC;
    case 202u: goto L_089D9FC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D9000:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(340)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(344)));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(348)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    goto L_089D9030;
L_089D9030:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9038:
    aot_gpr[8] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2800)));
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(256)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(276)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089D90B8;
      }
      goto L_089D9058;
    }
L_089D9058:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D90B8;
      }
      goto L_089D9060;
    }
L_089D9060:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(276)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(364)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(276)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(368)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(276)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(276)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    goto L_089D90B8;
L_089D90B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[9] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D90C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D90D0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D90D0u) goto L_089D90D0;
    return;
L_089D90D0:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22672), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D90F0;
      }
      goto L_089D90EC;
    }
L_089D90EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(288), 0u);
    goto L_089D90F0;
L_089D90F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22672)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem); return;
L_089D9100:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9124;
      }
      goto L_089D9110;
    }
L_089D9110:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9124;
      }
      goto L_089D9118;
    }
L_089D9118:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D912C;
      }
      goto L_089D9124;
    }
L_089D9124:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D912C:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D9124;
      }
      goto L_089D9134;
    }
L_089D9134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(22672)));
    aot_gpr[2] = (aot_gpr[5] << 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089D9124;
      }
      goto L_089D9144;
    }
L_089D9144:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D914C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089D9180;
      }
      goto L_089D9168;
    }
L_089D9168:
    aot_gpr[6] = (0u + 0u);
    goto L_089D916C;
L_089D916C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9180:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089D9168;
      }
      goto L_089D9188;
    }
L_089D9188:
    aot_gpr[31] = (0x089D9190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D9190u) goto L_089D9190;
    return;
L_089D9190:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(22672)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_089D916C;
L_089D91C8:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D91EC;
      }
      goto L_089D91D4;
    }
L_089D91D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089D91EC;
      }
      goto L_089D91DC;
    }
L_089D91DC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22672)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    (void)rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem); return;
L_089D91EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D91F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D923C;
      }
      goto L_089D9210;
    }
L_089D9210:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22672)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D923C;
      }
      goto L_089D9220;
    }
L_089D9220:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089D9228;
L_089D9228:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D9234u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D91C8;
L_089D9234:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D9228;
      }
      goto L_089D923C;
    }
L_089D923C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(288), 0u);
        goto L_089D924C;
    }
    goto L_089D924C;
L_089D924C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22672)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D92A4;
      }
      goto L_089D9280;
    }
L_089D9280:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D92A8;
      }
      goto L_089D9290;
    }
L_089D9290:
    aot_gpr[31] = (0x089D9298u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089D91F4;
L_089D9298:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D9290;
      }
      goto L_089D92A4;
    }
L_089D92A4:
    aot_gpr[2] = (2217u << 16u);
    goto L_089D92A8;
L_089D92A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(288), 0u);
        goto L_089D92B4;
    }
    goto L_089D92B4;
L_089D92B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D92C4:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22672));
    (void)rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem); return;
L_089D92D0:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
      if (branch_taken) {
          goto L_089D935C;
      }
      goto L_089D9304;
    }
L_089D9304:
    if (aot_gpr[4] == 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(10));
        goto L_089D935C;
    }
    goto L_089D930C;
L_089D930C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D9440;
      }
      goto L_089D9318;
    }
L_089D9318:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_089D935C;
      }
      goto L_089D9324;
    }
L_089D9324:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D9330u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1028)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D9330u) goto L_089D9330;
    return;
L_089D9330:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D9358;
      }
      goto L_089D9338;
    }
L_089D9338:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_089D935C;
      }
      goto L_089D9344;
    }
L_089D9344:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
        goto L_089D9380;
    }
    goto L_089D9358;
L_089D9358:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(19));
    goto L_089D935C;
L_089D935C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9380:
    aot_gpr[31] = (0x089D9388u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D9388u) goto L_089D9388;
    return;
L_089D9388:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089D93C4u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089D93C4u) goto L_089D93C4;
    return;
L_089D93C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D93D4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D93D4u) goto L_089D93D4;
    return;
L_089D93D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[7]);
    aot_gpr[31] = (0x089D9418u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9418u) goto L_089D9418;
    return;
L_089D9418:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9440:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(10));
    goto L_089D935C;
L_089D9448:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D9488;
      }
      goto L_089D9450;
    }
L_089D9450:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089D9488;
      }
      goto L_089D9458;
    }
L_089D9458:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9488;
      }
      goto L_089D9460;
    }
L_089D9460:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089D9478;
      }
      goto L_089D946C;
    }
L_089D946C:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9478:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9488:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9490:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = ((aot_gpr[4] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089D94A4u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x089D94A4u) goto L_089D94A4;
    return;
L_089D94A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D94C8;
      }
      goto L_089D94AC;
    }
L_089D94AC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22944)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D94C8;
      }
      goto L_089D94BC;
    }
L_089D94BC:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D94C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D94DC:
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17320));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22676), aot_gpr[2]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(22676));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-4640));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17200));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16584));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16492));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16468));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16364));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16332));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16300));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16016));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16064));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15816));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15776));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15736));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15572));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13760));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13488));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13472));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-12984));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12008));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-11172));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-10660));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10092));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-9320));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-9296));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-9176));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-9088));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-8652));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8084));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(14520));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(14656));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(14768));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(15020));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(15148));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-5848));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13448));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(13584));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13760));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-5712));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11216));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-5548));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-27576));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-5356));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(164), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-5280));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-5196));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-5152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-22012));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(180), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-23680));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3012));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(188), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-2968));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(192), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-2864));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-2824));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-2596));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(204), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(14044));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(14404));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(212), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-5968));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13460));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13356));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(224), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13340));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-6088));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6168));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(236), aot_gpr[3]);
    aot_gpr[3] = (2206u << 16u);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    aot_gpr[2] = (2206u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-6132));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6112));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[6] | 11264u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3658));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(248), aot_gpr[2]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(252), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(256), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(268), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2792), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089D985C;
      }
      goto L_089D9838;
    }
L_089D9838:
    aot_gpr[2] = (0u | 55008u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D985C;
      }
      goto L_089D9844;
    }
L_089D9844:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089D9848;
L_089D9848:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D984C;
L_089D984C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D985C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089D9848;
      }
      goto L_089D9864;
    }
L_089D9864:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089D9884;
    }
    goto L_089D9870;
L_089D9870:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D984C;
L_089D9878:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089D9848;
      }
      goto L_089D9880;
    }
L_089D9880:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089D9884;
L_089D9884:
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_089D9878;
    }
    goto L_089D988C;
L_089D988C:
    aot_gpr[31] = (0x089D9894u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 169u, 0x089E3C70u>(ctx, &aot_mem) && ctx.pc == 0x089D9894u) goto L_089D9894;
    return;
L_089D9894:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089D9848;
      }
      goto L_089D989C;
    }
L_089D989C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D98A0;
L_089D98A0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D9844;
      }
      goto L_089D98B4;
    }
L_089D98B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D98C8;
      }
      goto L_089D98C0;
    }
L_089D98C0:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D98C8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D98C8u) goto L_089D98C8;
    return;
L_089D98C8:
    aot_gpr[31] = (0x089D98D0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 160u, 0x089E3BCCu>(ctx, &aot_mem) && ctx.pc == 0x089D98D0u) goto L_089D98D0;
    return;
L_089D98D0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089D98A0;
    }
    goto L_089D98D8;
L_089D98D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D98F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089D9938;
      }
      goto L_089D9924;
    }
L_089D9924:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D9928;
L_089D9928:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9938:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089D9928;
      }
      goto L_089D9940;
    }
L_089D9940:
    aot_gpr[31] = (0x089D9948u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 169u, 0x089E3C70u>(ctx, &aot_mem) && ctx.pc == 0x089D9948u) goto L_089D9948;
    return;
L_089D9948:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089D9928;
      }
      goto L_089D9950;
    }
L_089D9950:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D9954;
L_089D9954:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D9924;
      }
      goto L_089D9964;
    }
L_089D9964:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D997C;
      }
      goto L_089D9970;
    }
L_089D9970:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089D997Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D997Cu) goto L_089D997C;
    return;
L_089D997C:
    aot_gpr[31] = (0x089D9984u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 160u, 0x089E3BCCu>(ctx, &aot_mem) && ctx.pc == 0x089D9984u) goto L_089D9984;
    return;
L_089D9984:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D9954;
      }
      goto L_089D998C;
    }
L_089D998C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D9928;
L_089D9994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(204), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D99C4;
      }
      goto L_089D99B4;
    }
L_089D99B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D99C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D99C4u) goto L_089D99C4;
    return;
L_089D99C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D99D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(228)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_089D9A48;
      }
      goto L_089D99E4;
    }
L_089D99E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(216)));
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[8] = (0u | 59000u);
        goto L_089D9A50;
    }
    goto L_089D99F4;
L_089D99F4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(220)));
        goto L_089D9A38;
    }
    goto L_089D99FC;
L_089D99FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(220)));
        goto L_089D9A38;
    }
    goto L_089D9A0C;
L_089D9A0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(228)));
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[8] = (0u | 59000u);
        goto L_089D9A50;
    }
    goto L_089D9A20;
L_089D9A20:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(232), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(220)));
    goto L_089D9A38;
L_089D9A38:
    aot_gpr[3] = (aot_gpr[7] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(216), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(220), aot_gpr[2]);
    goto L_089D9A48;
L_089D9A48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9A50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[18] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D9AB8;
      }
      goto L_089D9A80;
    }
L_089D9A80:
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[17] = (0u + 0u);
    goto L_089D9A88;
L_089D9A88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D9AAC;
      }
      goto L_089D9A9C;
    }
L_089D9A9C:
    aot_gpr[31] = (0x089D9AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9AA4u) goto L_089D9AA4;
    return;
L_089D9AA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    goto L_089D9AAC;
L_089D9AAC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D9A88;
      }
      goto L_089D9AB8;
    }
L_089D9AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(68), 0u);
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
L_089D9ADC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(260));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(76));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089D9B3Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089D9B3Cu) goto L_089D9B3C;
    return;
L_089D9B3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 25u, 0x089DA168u>(ctx, &aot_mem); return;
    }
    goto L_089D9B50;
L_089D9B50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(110)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), 0u);
    aot_gpr[31] = (0x089D9B6Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 119u, 0x089DF684u>(ctx, &aot_mem) && ctx.pc == 0x089D9B6Cu) goto L_089D9B6C;
    return;
L_089D9B6C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(280)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 5u, 0x089DA030u>(ctx, &aot_mem); return;
      }
      goto L_089D9B90;
    }
L_089D9B90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D9B9Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089D9B9Cu) goto L_089D9B9C;
    return;
L_089D9B9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 10u, 0x089DA088u>(ctx, &aot_mem); return;
      }
      goto L_089D9BA8;
    }
L_089D9BA8:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    goto L_089D9BAC;
L_089D9BAC:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D9BBCu);
    aot_gpr[30] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    goto L_089D9448;
L_089D9BBC:
    aot_gpr[20] = (0u + 0u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089D9DFC;
      }
      goto L_089D9BC8;
    }
L_089D9BC8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D9DFC;
      }
      goto L_089D9BD4;
    }
L_089D9BD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), 0u);
    goto L_089D9BD8;
L_089D9BD8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 1u, 0x089DA004u>(ctx, &aot_mem); return;
      }
      goto L_089D9BE0;
    }
L_089D9BE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089D9BEC;
L_089D9BEC:
    aot_gpr[22] = (0u < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[22] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089D9C2C;
    }
    goto L_089D9BF8;
L_089D9BF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D9C08u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 174u, 0x08992B84u>(ctx, &aot_mem) && ctx.pc == 0x089D9C08u) goto L_089D9C08;
    return;
L_089D9C08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(104)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089D9DF0;
    }
    goto L_089D9C28;
L_089D9C28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089D9C2C;
L_089D9C2C:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D9C3Cu);
    aot_gpr[7] = (aot_gpr[30] + 0u);
    goto L_089D99D4;
L_089D9C3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089D9DFC;
      }
      goto L_089D9C44;
    }
L_089D9C44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089D9C54u);
    aot_gpr[20] = (aot_gpr[19] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089D9C54u) goto L_089D9C54;
    return;
L_089D9C54:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D9C64u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089D9C64u) goto L_089D9C64;
    return;
L_089D9C64:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D9C70u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089D9C70u) goto L_089D9C70;
    return;
L_089D9C70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] & 63488u);
    aot_gpr[3] = (aot_gpr[4] & 8192u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089D9F2C;
      }
      goto L_089D9C84;
    }
L_089D9C84:
    aot_gpr[2] = (aot_gpr[4] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089D9F2C;
      }
      goto L_089D9C90;
    }
L_089D9C90:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D9C9Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 208u, 0x089DFC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9C9Cu) goto L_089D9C9C;
    return;
L_089D9C9C:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089D9F48;
      }
      goto L_089D9CA8;
    }
L_089D9CA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089D9CB0;
L_089D9CB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_089D9CB4;
L_089D9CB4:
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[5] != 0u) aot_gpr[17] = (aot_gpr[3]);
      if (branch_taken) {
          goto L_089D9CD8;
      }
      goto L_089D9CCC;
    }
L_089D9CCC:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_089D9F68;
      }
      goto L_089D9CD8;
    }
L_089D9CD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089D9CDC;
L_089D9CDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089D9CF4u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 132u, 0x0898E970u>(ctx, &aot_mem) && ctx.pc == 0x089D9CF4u) goto L_089D9CF4;
    return;
L_089D9CF4:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 27u, 0x089DA178u>(ctx, &aot_mem); return;
      }
      goto L_089D9D04;
    }
L_089D9D04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (aot_gpr[4] + 0u);
        goto L_089D9DFC;
    }
    goto L_089D9D10;
L_089D9D10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[31] = (0x089D9D28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 233u, 0x089DFE30u>(ctx, &aot_mem) && ctx.pc == 0x089D9D28u) goto L_089D9D28;
    return;
L_089D9D28:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(110)));
    aot_gpr[31] = (0x089D9D38u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 119u, 0x089DF684u>(ctx, &aot_mem) && ctx.pc == 0x089D9D38u) goto L_089D9D38;
    return;
L_089D9D38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089D9D44u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089D9D44u) goto L_089D9D44;
    return;
L_089D9D44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D9D98;
      }
      goto L_089D9D54;
    }
L_089D9D54:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
      if (branch_taken) {
          goto L_089D9F78;
      }
      goto L_089D9D94;
    }
L_089D9D94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D9D98;
L_089D9D98:
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_089D9FBC;
      }
      goto L_089D9DA4;
    }
L_089D9DA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(260)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(264)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 7u, 0x089DA064u>(ctx, &aot_mem); return;
      }
      goto L_089D9DBC;
    }
L_089D9DBC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089D9DC4;
L_089D9DC4:
    if (aot_gpr[22] != 0u) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089D9DF0;
    }
    goto L_089D9DCC;
L_089D9DCC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & 4096u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089D9DF0;
    }
    goto L_089D9DDC;
L_089D9DDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) > static_cast<std::int32_t>(aot_gpr[22]) ? aot_gpr[2] : aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_089D9DF0;
L_089D9DF0:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089D9BD8;
      }
      goto L_089D9DF8;
    }
L_089D9DF8:
    aot_gpr[20] = (0u + 0u);
    goto L_089D9DFC;
L_089D9DFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_089D9E00;
L_089D9E00:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089D9E68;
      }
      goto L_089D9E0C;
    }
L_089D9E0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089D9E28u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 132u, 0x0898E970u>(ctx, &aot_mem) && ctx.pc == 0x089D9E28u) goto L_089D9E28;
    return;
L_089D9E28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D9E3C;
      }
      goto L_089D9E30;
    }
L_089D9E30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(264)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 23u, 0x089DA148u>(ctx, &aot_mem); return;
    }
    goto L_089D9E3C;
L_089D9E3C:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089D9E4Cu);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    goto L_089D9A58;
L_089D9E4C:
    aot_gpr[2] = (65535u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 12501u);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 53006u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 15u, 0x089DA0E8u>(ctx, &aot_mem); return;
      }
      goto L_089D9E64;
    }
L_089D9E64:
    aot_gpr[20] = (0u + 0u);
    goto L_089D9E68;
L_089D9E68:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 3u, 0x089DA024u>(ctx, &aot_mem); return;
      }
      goto L_089D9E70;
    }
L_089D9E70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 3u, 0x089DA024u>(ctx, &aot_mem); return;
      }
      goto L_089D9E7C;
    }
L_089D9E7C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    goto L_089D9EE4;
L_089D9E84:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D9ED4;
      }
      goto L_089D9EC4;
    }
L_089D9EC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) > static_cast<std::int32_t>(aot_gpr[17]) ? aot_gpr[2] : aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    goto L_089D9ED4;
L_089D9ED4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 3u, 0x089DA024u>(ctx, &aot_mem); return;
      }
      goto L_089D9EE0;
    }
L_089D9EE0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    goto L_089D9EE4;
L_089D9EE4:
    aot_gpr[31] = (0x089D9EECu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089D9EECu) goto L_089D9EEC;
    return;
L_089D9EEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[3] & 16384u);
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089D9ED4;
      }
      goto L_089D9F00;
    }
L_089D9F00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089D9E84;
      }
      goto L_089D9F14;
    }
L_089D9F14:
    aot_gpr[31] = (0x089D9F1Cu);
    // nop
    goto L_089D9A58;
L_089D9F1C:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), 0u);
    goto L_089D9E84;
L_089D9F2C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089D9F38u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 208u, 0x089DFC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9F38u) goto L_089D9F38;
    return;
L_089D9F38:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) >= 0;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D9CA8;
      }
      goto L_089D9F44;
    }
L_089D9F44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089D9F48;
L_089D9F48:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D9CB0;
      }
      goto L_089D9F50;
    }
L_089D9F50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 17u, 0x089DA0F8u>(ctx, &aot_mem); return;
      }
      goto L_089D9F60;
    }
L_089D9F60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_089D9CB4;
L_089D9F68:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1448) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089D9CDC;
      }
      goto L_089D9F78;
    }
L_089D9F78:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[4]);
      if (branch_taken) {
          goto L_089D9DA4;
      }
      goto L_089D9FB8;
    }
L_089D9FB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_089D9FBC;
L_089D9FBC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[30] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 8u, 0x089DA070u>(ctx, &aot_mem); return;
    }
    goto L_089D9FC8;
L_089D9FC8:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    goto L_089D9DC4;
}

void recomp_unit_0469(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0469_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_469(Runtime &runtime) {
    runtime.register_generated_unit(469u, 0x089D9000u, 4096u, &recomp_unit_0469, &recomp_unit_0469_entry);
    runtime.register_function(0x089D9000u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9030u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9038u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9058u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9060u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D90B8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D90C0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D90D0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D90ECu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D90F0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9100u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9110u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9118u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9124u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D912Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9134u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9144u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D914Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9168u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D916Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9180u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9188u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9190u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D91C8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D91D4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D91DCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D91ECu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D91F4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9210u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9220u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9228u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9234u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D923Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D924Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9264u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9280u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9290u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9298u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D92A4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D92A8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D92B4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D92C4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D92D0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9304u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D930Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9318u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9324u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9330u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9338u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9344u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9358u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D935Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9380u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9388u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D93C4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D93D4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9418u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9440u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9448u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9450u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9458u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9460u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D946Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9478u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9488u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9490u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D94A4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D94ACu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D94BCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D94C8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D94DCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9804u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9838u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9844u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9848u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D984Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D985Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9864u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9870u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9878u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9880u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9884u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D988Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9894u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D989Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98A0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98B4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98C0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98C8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98D0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98D8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D98F0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9924u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9928u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9938u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9940u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9948u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9950u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9954u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9964u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9970u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D997Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9984u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D998Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9994u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D99B4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D99C4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D99D4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D99E4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D99F4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D99FCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A0Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A20u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A38u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A48u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A50u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A58u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A80u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A88u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9A9Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9AA4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9AACu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9AB8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9ADCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9B3Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9B50u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9B6Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9B90u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9B9Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BA8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BACu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BBCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BC8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BD4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BD8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BE0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BECu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9BF8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C08u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C28u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C2Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C3Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C44u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C54u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C64u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C70u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C84u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C90u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9C9Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CA8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CB0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CB4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CCCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CD8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CDCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9CF4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D04u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D10u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D28u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D38u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D44u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D54u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D94u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9D98u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DA4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DBCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DC4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DCCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DDCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DF0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DF8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9DFCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E00u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E0Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E28u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E30u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E3Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E4Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E64u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E68u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E70u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E7Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9E84u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9EC4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9ED4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9EE0u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9EE4u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9EECu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F00u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F14u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F1Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F2Cu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F38u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F44u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F48u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F50u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F60u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F68u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9F78u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9FB8u, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9FBCu, &recomp_unit_0469, "recomp_unit_0469");
    runtime.register_function(0x089D9FC8u, &recomp_unit_0469, "recomp_unit_0469");
}
} // namespace psprecomp
