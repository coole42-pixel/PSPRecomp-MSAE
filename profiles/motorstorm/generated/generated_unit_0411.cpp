#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0411[1023] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 7, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0,
    12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26,
    0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 43, 0, 44, 0, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 89, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 0, 105, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0,
    171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0,
    0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0,
    195, 196, 0, 197, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205,
};
void recomp_unit_0411_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0899F000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0411[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899F000;
    case 2u: goto L_0899F024;
    case 3u: goto L_0899F030;
    case 4u: goto L_0899F03C;
    case 5u: goto L_0899F044;
    case 6u: goto L_0899F050;
    case 7u: goto L_0899F054;
    case 8u: goto L_0899F05C;
    case 9u: goto L_0899F068;
    case 10u: goto L_0899F070;
    case 11u: goto L_0899F078;
    case 12u: goto L_0899F080;
    case 13u: goto L_0899F088;
    case 14u: goto L_0899F090;
    case 15u: goto L_0899F098;
    case 16u: goto L_0899F0A0;
    case 17u: goto L_0899F0A8;
    case 18u: goto L_0899F0B0;
    case 19u: goto L_0899F0B8;
    case 20u: goto L_0899F0C0;
    case 21u: goto L_0899F0C8;
    case 22u: goto L_0899F0D0;
    case 23u: goto L_0899F0DC;
    case 24u: goto L_0899F0E8;
    case 25u: goto L_0899F0F4;
    case 26u: goto L_0899F0FC;
    case 27u: goto L_0899F104;
    case 28u: goto L_0899F10C;
    case 29u: goto L_0899F128;
    case 30u: goto L_0899F140;
    case 31u: goto L_0899F14C;
    case 32u: goto L_0899F154;
    case 33u: goto L_0899F158;
    case 34u: goto L_0899F16C;
    case 35u: goto L_0899F188;
    case 36u: goto L_0899F1A0;
    case 37u: goto L_0899F1AC;
    case 38u: goto L_0899F1B4;
    case 39u: goto L_0899F1B8;
    case 40u: goto L_0899F1CC;
    case 41u: goto L_0899F1E8;
    case 42u: goto L_0899F200;
    case 43u: goto L_0899F20C;
    case 44u: goto L_0899F214;
    case 45u: goto L_0899F21C;
    case 46u: goto L_0899F220;
    case 47u: goto L_0899F234;
    case 48u: goto L_0899F2A4;
    case 49u: goto L_0899F2B4;
    case 50u: goto L_0899F2C0;
    case 51u: goto L_0899F2C8;
    case 52u: goto L_0899F2D8;
    case 53u: goto L_0899F2E0;
    case 54u: goto L_0899F308;
    case 55u: goto L_0899F310;
    case 56u: goto L_0899F320;
    case 57u: goto L_0899F338;
    case 58u: goto L_0899F340;
    case 59u: goto L_0899F34C;
    case 60u: goto L_0899F35C;
    case 61u: goto L_0899F368;
    case 62u: goto L_0899F394;
    case 63u: goto L_0899F3F8;
    case 64u: goto L_0899F40C;
    case 65u: goto L_0899F414;
    case 66u: goto L_0899F41C;
    case 67u: goto L_0899F424;
    case 68u: goto L_0899F448;
    case 69u: goto L_0899F450;
    case 70u: goto L_0899F478;
    case 71u: goto L_0899F480;
    case 72u: goto L_0899F494;
    case 73u: goto L_0899F4AC;
    case 74u: goto L_0899F4B4;
    case 75u: goto L_0899F4C4;
    case 76u: goto L_0899F4D4;
    case 77u: goto L_0899F4E0;
    case 78u: goto L_0899F50C;
    case 79u: goto L_0899F530;
    case 80u: goto L_0899F560;
    case 81u: goto L_0899F578;
    case 82u: goto L_0899F59C;
    case 83u: goto L_0899F5CC;
    case 84u: goto L_0899F5E4;
    case 85u: goto L_0899F60C;
    case 86u: goto L_0899F620;
    case 87u: goto L_0899F634;
    case 88u: goto L_0899F650;
    case 89u: goto L_0899F654;
    case 90u: goto L_0899F65C;
    case 91u: goto L_0899F670;
    case 92u: goto L_0899F678;
    case 93u: goto L_0899F6A4;
    case 94u: goto L_0899F6C0;
    case 95u: goto L_0899F6CC;
    case 96u: goto L_0899F6D4;
    case 97u: goto L_0899F6E0;
    case 98u: goto L_0899F6FC;
    case 99u: goto L_0899F714;
    case 100u: goto L_0899F728;
    case 101u: goto L_0899F734;
    case 102u: goto L_0899F744;
    case 103u: goto L_0899F75C;
    case 104u: goto L_0899F760;
    case 105u: goto L_0899F76C;
    case 106u: goto L_0899F774;
    case 107u: goto L_0899F780;
    case 108u: goto L_0899F7A0;
    case 109u: goto L_0899F7A8;
    case 110u: goto L_0899F7B0;
    case 111u: goto L_0899F7B4;
    case 112u: goto L_0899F7C0;
    case 113u: goto L_0899F7F8;
    case 114u: goto L_0899F808;
    case 115u: goto L_0899F824;
    case 116u: goto L_0899F82C;
    case 117u: goto L_0899F834;
    case 118u: goto L_0899F848;
    case 119u: goto L_0899F850;
    case 120u: goto L_0899F878;
    case 121u: goto L_0899F894;
    case 122u: goto L_0899F8A0;
    case 123u: goto L_0899F8B8;
    case 124u: goto L_0899F8C0;
    case 125u: goto L_0899F8E8;
    case 126u: goto L_0899F904;
    case 127u: goto L_0899F910;
    case 128u: goto L_0899F92C;
    case 129u: goto L_0899F938;
    case 130u: goto L_0899F940;
    case 131u: goto L_0899F948;
    case 132u: goto L_0899F954;
    case 133u: goto L_0899F970;
    case 134u: goto L_0899F990;
    case 135u: goto L_0899FB30;
    case 136u: goto L_0899FB48;
    case 137u: goto L_0899FB5C;
    case 138u: goto L_0899FB64;
    case 139u: goto L_0899FB94;
    case 140u: goto L_0899FBB8;
    case 141u: goto L_0899FBC4;
    case 142u: goto L_0899FBCC;
    case 143u: goto L_0899FBD8;
    case 144u: goto L_0899FBE8;
    case 145u: goto L_0899FBF4;
    case 146u: goto L_0899FC00;
    case 147u: goto L_0899FC2C;
    case 148u: goto L_0899FC38;
    case 149u: goto L_0899FC50;
    case 150u: goto L_0899FC58;
    case 151u: goto L_0899FC64;
    case 152u: goto L_0899FC84;
    case 153u: goto L_0899FC8C;
    case 154u: goto L_0899FC98;
    case 155u: goto L_0899FCBC;
    case 156u: goto L_0899FCC4;
    case 157u: goto L_0899FCC8;
    case 158u: goto L_0899FCD4;
    case 159u: goto L_0899FCE4;
    case 160u: goto L_0899FCEC;
    case 161u: goto L_0899FD08;
    case 162u: goto L_0899FD14;
    case 163u: goto L_0899FD30;
    case 164u: goto L_0899FD38;
    case 165u: goto L_0899FD4C;
    case 166u: goto L_0899FD54;
    case 167u: goto L_0899FD5C;
    case 168u: goto L_0899FD68;
    case 169u: goto L_0899FD70;
    case 170u: goto L_0899FD78;
    case 171u: goto L_0899FD80;
    case 172u: goto L_0899FD98;
    case 173u: goto L_0899FDB4;
    case 174u: goto L_0899FDFC;
    case 175u: goto L_0899FE24;
    case 176u: goto L_0899FE3C;
    case 177u: goto L_0899FE44;
    case 178u: goto L_0899FE50;
    case 179u: goto L_0899FE64;
    case 180u: goto L_0899FE6C;
    case 181u: goto L_0899FE84;
    case 182u: goto L_0899FEA0;
    case 183u: goto L_0899FEB8;
    case 184u: goto L_0899FEC8;
    case 185u: goto L_0899FEE4;
    case 186u: goto L_0899FEEC;
    case 187u: goto L_0899FF04;
    case 188u: goto L_0899FF10;
    case 189u: goto L_0899FF24;
    case 190u: goto L_0899FF44;
    case 191u: goto L_0899FF4C;
    case 192u: goto L_0899FF54;
    case 193u: goto L_0899FF5C;
    case 194u: goto L_0899FF68;
    case 195u: goto L_0899FF80;
    case 196u: goto L_0899FF84;
    case 197u: goto L_0899FF8C;
    case 198u: goto L_0899FF90;
    case 199u: goto L_0899FFA8;
    case 200u: goto L_0899FFC4;
    case 201u: goto L_0899FFD0;
    case 202u: goto L_0899FFE0;
    case 203u: goto L_0899FFE8;
    case 204u: goto L_0899FFF0;
    case 205u: goto L_0899FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899F000:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2088)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2084)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2080)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2076)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2072)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2068)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2064)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F024:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0899F030u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_0899F16C;
L_0899F030:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0899F0B0;
      }
      goto L_0899F03C;
    }
L_0899F03C:
    aot_gpr[31] = (0x0899F044u);
    // nop
    goto L_0899F16C;
L_0899F044:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_0899F0A0;
      }
      goto L_0899F050;
    }
L_0899F050:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_0899F054;
L_0899F054:
    aot_gpr[31] = (0x0899F05Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_0899F578;
L_0899F05C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0899F068u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_0899F578;
L_0899F068:
    aot_gpr[31] = (0x0899F070u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 50u, 0x0899DD58u>(ctx, &aot_mem) && ctx.pc == 0x0899F070u) goto L_0899F070;
    return;
L_0899F070:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 224u, 0x0899EF38u>(ctx, &aot_mem); return;
      }
      goto L_0899F078;
    }
L_0899F078:
    aot_gpr[31] = (0x0899F080u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 45u, 0x0899DD24u>(ctx, &aot_mem) && ctx.pc == 0x0899F080u) goto L_0899F080;
    return;
L_0899F080:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 206u, 0x0899EE28u>(ctx, &aot_mem); return;
      }
      goto L_0899F088;
    }
L_0899F088:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 238u, 0x0899EFD0u>(ctx, &aot_mem); return;
L_0899F090:
    aot_gpr[31] = (0x0899F098u);
    // nop
    goto L_0899F50C;
L_0899F098:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 229u, 0x0899EF64u>(ctx, &aot_mem); return;
L_0899F0A0:
    aot_gpr[31] = (0x0899F0A8u);
    // nop
    goto L_0899F50C;
L_0899F0A8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_0899F054;
L_0899F0B0:
    aot_gpr[31] = (0x0899F0B8u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 42u, 0x0899DCD8u>(ctx, &aot_mem) && ctx.pc == 0x0899F0B8u) goto L_0899F0B8;
    return;
L_0899F0B8:
    aot_gpr[31] = (0x0899F0C0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 45u, 0x0899DD24u>(ctx, &aot_mem) && ctx.pc == 0x0899F0C0u) goto L_0899F0C0;
    return;
L_0899F0C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 206u, 0x0899EE28u>(ctx, &aot_mem); return;
      }
      goto L_0899F0C8;
    }
L_0899F0C8:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0410_entry, 410u, 238u, 0x0899EFD0u>(ctx, &aot_mem); return;
L_0899F0D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(508));
    goto L_0899F0DC;
L_0899F0DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F0FC;
      }
      goto L_0899F0E8;
    }
L_0899F0E8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0899F0DC;
      }
      goto L_0899F0F4;
    }
L_0899F0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F104;
      }
      goto L_0899F0FC;
    }
L_0899F0FC:
    aot_gpr[8] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[4])));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[8]);
    goto L_0899F104;
L_0899F104:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F10C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(508));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(508));
    goto L_0899F128;
L_0899F128:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F158;
      }
      goto L_0899F140;
    }
L_0899F140:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F154;
      }
      goto L_0899F14C;
    }
L_0899F14C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0899F128;
      }
      goto L_0899F154;
    }
L_0899F154:
    aot_gpr[2] = (0u | 0u);
    goto L_0899F158;
L_0899F158:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F16C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(508));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(508));
    goto L_0899F188;
L_0899F188:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F1B8;
      }
      goto L_0899F1A0;
    }
L_0899F1A0:
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F1B4;
      }
      goto L_0899F1AC;
    }
L_0899F1AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0899F188;
      }
      goto L_0899F1B4;
    }
L_0899F1B4:
    aot_gpr[2] = (0u | 0u);
    goto L_0899F1B8;
L_0899F1B8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F1CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(508));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(508));
    goto L_0899F1E8;
L_0899F1E8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F220;
      }
      goto L_0899F200;
    }
L_0899F200:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F21C;
      }
      goto L_0899F20C;
    }
L_0899F20C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0899F1E8;
      }
      goto L_0899F214;
    }
L_0899F214:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899F220;
      }
      goto L_0899F21C;
    }
L_0899F21C:
    aot_gpr[2] = (0u | 0u);
    goto L_0899F220;
L_0899F220:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F234:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[4] << 27u);
    aot_gpr[5] = (aot_gpr[5] >> 5u);
    aot_gpr[4] = (aot_gpr[4] >> 27u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(128));
    // nop
    aot_gpr[4] = (aot_gpr[16] << 2u);
    // nop
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    goto L_0899F2A4;
L_0899F2A4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F2C8;
      }
      goto L_0899F2B4;
    }
L_0899F2B4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    if (aot_gpr[16] != aot_gpr[5]) {
    // nop
        goto L_0899F2A4;
    }
    goto L_0899F2C0;
L_0899F2C0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0899F2C8;
L_0899F2C8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0899F338;
      }
      goto L_0899F2D8;
    }
L_0899F2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F308;
      }
      goto L_0899F2E0;
    }
L_0899F2E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] >> (aot_gpr[8] & 31u));
    aot_gpr[4] = (aot_gpr[4] << (aot_gpr[9] & 31u));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0899F308;
L_0899F308:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F2E0;
      }
      goto L_0899F310;
    }
L_0899F310:
    aot_gpr[6] = (aot_gpr[6] >> (aot_gpr[8] & 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899F35C;
      }
      goto L_0899F320;
    }
L_0899F320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0899F338;
L_0899F338:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F320;
      }
      goto L_0899F340;
    }
L_0899F340:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899F35C;
      }
      goto L_0899F34C;
    }
L_0899F34C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    // nop
    goto L_0899F35C;
L_0899F35C:
    // nop
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F34C;
      }
      goto L_0899F368;
    }
L_0899F368:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F394:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[4] & 31u);
    aot_gpr[5] = (aot_gpr[5] >> 5u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[16] = (aot_gpr[16] << 2u);
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] >> 2u);
    aot_gpr[18] = (aot_gpr[17] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    goto L_0899F3F8;
L_0899F3F8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F424;
      }
      goto L_0899F40C;
    }
L_0899F40C:
    if (aot_gpr[16] != aot_gpr[5]) {
    // nop
        goto L_0899F3F8;
    }
    goto L_0899F414;
L_0899F414:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F4B4;
      }
      goto L_0899F41C;
    }
L_0899F41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F480;
      }
      goto L_0899F424;
    }
L_0899F424:
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] << 2u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899F4AC;
      }
      goto L_0899F448;
    }
L_0899F448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F478;
      }
      goto L_0899F450;
    }
L_0899F450:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] << (aot_gpr[8] & 31u));
    aot_gpr[4] = (aot_gpr[4] >> (aot_gpr[9] & 31u));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0899F478;
L_0899F478:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F450;
      }
      goto L_0899F480;
    }
L_0899F480:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (aot_gpr[6] << (aot_gpr[8] & 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899F4D4;
      }
      goto L_0899F494;
    }
L_0899F494:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0899F4AC;
L_0899F4AC:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F494;
      }
      goto L_0899F4B4;
    }
L_0899F4B4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899F4D4;
      }
      goto L_0899F4C4;
    }
L_0899F4C4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    // nop
    goto L_0899F4D4;
L_0899F4D4:
    // nop
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F4C4;
      }
      goto L_0899F4E0;
    }
L_0899F4E0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F50C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u | 0u);
    goto L_0899F530;
L_0899F530:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[1] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[1]);
      if (branch_taken) {
          goto L_0899F530;
      }
      goto L_0899F560;
    }
L_0899F560:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u | 0u);
    goto L_0899F59C;
L_0899F59C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[1] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-4), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[1]);
      if (branch_taken) {
          goto L_0899F59C;
      }
      goto L_0899F5CC;
    }
L_0899F5CC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F5E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0899F60Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0899F0D0;
L_0899F60C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31));
    aot_gpr[2] = (aot_gpr[2] >> 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[31] = (0x0899F620u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0899F0D0;
L_0899F620:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[10] = (aot_gpr[2] >> 5u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0899F634;
L_0899F634:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    // nop
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F634;
      }
      goto L_0899F650;
    }
L_0899F650:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0899F654;
L_0899F654:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899F6D4;
      }
      goto L_0899F65C;
    }
L_0899F65C:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_0899F670;
L_0899F670:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F6CC;
      }
      goto L_0899F678;
    }
L_0899F678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    goto L_0899F6A4;
L_0899F6A4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F6A4;
      }
      goto L_0899F6C0;
    }
L_0899F6C0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0899F670;
      }
      goto L_0899F6CC;
    }
L_0899F6CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0899F654;
      }
      goto L_0899F6D4;
    }
L_0899F6D4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(128));
    goto L_0899F6E0;
L_0899F6E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F6E0;
      }
      goto L_0899F6FC;
    }
L_0899F6FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F714:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[31] = (0x0899F728u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0899F5E4;
L_0899F728:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0899F734u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 85u, 0x0899DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F734u) goto L_0899F734;
    return;
L_0899F734:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F744:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[6] << 2u);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[5]);
    { const bool signed_ok = ctx.execute_signed_add(4u, 9u, 4u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0899F750u, 0x01242020u); return; } }
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0899F760;
      }
      goto L_0899F75C;
    }
L_0899F75C:
    rt.unsupported(0x0899F75Cu, 0x0007000Du, "special? not lowered yet"); return;
L_0899F760:
    aot_gpr[8] = (ctx.lo);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (ctx.hi);
    goto L_0899F76C;
L_0899F76C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899F7A8;
      }
      goto L_0899F774;
    }
L_0899F774:
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_0899F780;
L_0899F780:
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[9]) * static_cast<std::uint64_t>(aot_gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (ctx.lo);
    aot_gpr[9] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F76C;
      }
      goto L_0899F7A0;
    }
L_0899F7A0:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F780;
      }
      goto L_0899F7A8;
    }
L_0899F7A8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0899F7B4;
      }
      goto L_0899F7B0;
    }
L_0899F7B0:
    rt.unsupported(0x0899F7B0u, 0x0007000Du, "special? not lowered yet"); return;
L_0899F7B4:
    aot_gpr[2] = (ctx.lo);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (ctx.hi);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F7C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(592), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(576), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(560), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(544), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0899F7F8u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0899F0D0;
L_0899F7F8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31));
    aot_gpr[7] = (aot_gpr[2] >> 5u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0899F808;
L_0899F808:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    // nop
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F808;
      }
      goto L_0899F824;
    }
L_0899F824:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 0u);
    goto L_0899F82C;
L_0899F82C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0899F92C;
      }
      goto L_0899F834;
    }
L_0899F834:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0899F848;
L_0899F848:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899F8A0;
      }
      goto L_0899F850;
    }
L_0899F850:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    goto L_0899F878;
L_0899F878:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F878;
      }
      goto L_0899F894;
    }
L_0899F894:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_0899F848;
      }
      goto L_0899F8A0;
    }
L_0899F8A0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u | 0u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[6]) * static_cast<std::uint64_t>(aot_gpr[20]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[6] = (ctx.lo);
    goto L_0899F8B8;
L_0899F8B8:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899F910;
      }
      goto L_0899F8C0;
    }
L_0899F8C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[3] = (ctx.hi);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    goto L_0899F8E8;
L_0899F8E8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F8E8;
      }
      goto L_0899F904;
    }
L_0899F904:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_0899F8B8;
      }
      goto L_0899F910;
    }
L_0899F910:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899F82C;
      }
      goto L_0899F92C;
    }
L_0899F92C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0899F938u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0899F10C;
L_0899F938:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0899F948;
      }
      goto L_0899F940;
    }
L_0899F940:
    aot_gpr[31] = (0x0899F948u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0899F578;
L_0899F948:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(128));
    goto L_0899F954;
L_0899F954:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F954;
      }
      goto L_0899F970;
    }
L_0899F970:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(608)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(544)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(560)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(576)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F990:
    aot_gpr[2] = (2202u << 16u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10960));
    aot_gpr[3] = (2202u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16104));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16104), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1048));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1036));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1024));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8220));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-748));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8076));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(7932));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(10496));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(7856));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(7536));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(7460));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6868));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6792));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6200));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6012));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5660));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(5472));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5120));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4932));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4780));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4604));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4332));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4172));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-616));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4020));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3860));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(724));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1156));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(840));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(3608));
    aot_gpr[3] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(516));
    aot_gpr[2] = (2202u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(124), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(156));
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2812), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FB30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FB48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x0899FB5Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_0899F990;
L_0899FB5C:
    aot_gpr[31] = (0x0899FB64u);
    // nop
    goto L_0899F990;
L_0899FB64:
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2812)));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(132), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FB94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16244));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16096)));
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0899FBC4;
      }
      goto L_0899FBB8;
    }
L_0899FBB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FBC4:
    aot_gpr[31] = (0x0899FBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 89u, 0x08990908u>(ctx, &aot_mem) && ctx.pc == 0x0899FBCCu) goto L_0899FBCC;
    return;
L_0899FBCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FBD8:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16244));
    aot_gpr[5] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 105u, 0x089909C0u>(ctx, &aot_mem); return;
L_0899FBE8:
    aot_gpr[3] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-20912)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FBF4:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16744));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FC00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16244));
      if (branch_taken) {
          goto L_0899FC50;
      }
      goto L_0899FC2C;
    }
L_0899FC2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16100), aot_gpr[2]);
    goto L_0899FC38;
L_0899FC38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FC50:
    aot_gpr[31] = (0x0899FC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 77u, 0x08990860u>(ctx, &aot_mem) && ctx.pc == 0x0899FC58u) goto L_0899FC58;
    return;
L_0899FC58:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899FC38;
      }
      goto L_0899FC64;
    }
L_0899FC64:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16096), aot_gpr[5]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16088), 0u);
    aot_gpr[31] = (0x0899FC84u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16092), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 9u, 0x089A3058u>(ctx, &aot_mem) && ctx.pc == 0x0899FC84u) goto L_0899FC84;
    return;
L_0899FC84:
    aot_gpr[31] = (0x0899FC8Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 22u, 0x089A711Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FC8Cu) goto L_0899FC8C;
    return;
L_0899FC8C:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[3] = (aot_gpr[2]);
    goto L_0899FC2C;
L_0899FC98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16088)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899FCC8;
      }
      goto L_0899FCBC;
    }
L_0899FCBC:
    aot_gpr[31] = (0x0899FCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899FCC4u) goto L_0899FCC4;
    return;
L_0899FCC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0899FCC8;
L_0899FCC8:
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FCD4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16088)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_0899FCEC;
      }
      goto L_0899FCE4;
    }
L_0899FCE4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FCEC:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16092)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FCE4;
      }
      goto L_0899FD08;
    }
L_0899FD08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FD14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0899FD30u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    goto L_0899FB94;
L_0899FD30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899FD4C;
      }
      goto L_0899FD38;
    }
L_0899FD38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FD4C:
    aot_gpr[31] = (0x0899FD54u);
    // nop
    goto L_0899FCD4;
L_0899FD54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0899FD70;
      }
      goto L_0899FD5C;
    }
L_0899FD5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899FD70;
      }
      goto L_0899FD68;
    }
L_0899FD68:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0899FD70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FD70u) goto L_0899FD70;
    return;
L_0899FD70:
    aot_gpr[31] = (0x0899FD78u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899FC98;
L_0899FD78:
    aot_gpr[31] = (0x0899FD80u);
    // nop
    goto L_0899FBD8;
L_0899FD80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FD98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x0899FDB4u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FDB4u) goto L_0899FDB4;
    return;
L_0899FDB4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(10075));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[4] = (0u | 32768u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(30));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FDFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
      if (branch_taken) {
          goto L_0899FE3C;
      }
      goto L_0899FE24;
    }
L_0899FE24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FE3C:
    aot_gpr[31] = (0x0899FE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x0899FE44u) goto L_0899FE44;
    return;
L_0899FE44:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0899FE50u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x0899FE50u) goto L_0899FE50;
    return;
L_0899FE50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(-8));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[6] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0899FE24;
      }
      goto L_0899FE64;
    }
L_0899FE64:
    aot_gpr[31] = (0x0899FE6Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0899FE6Cu) goto L_0899FE6C;
    return;
L_0899FE6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FE84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[10] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0899FEB8;
      }
      goto L_0899FEA0;
    }
L_0899FEA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(1)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0899FEB8u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FEB8u) goto L_0899FEB8;
    return;
L_0899FEB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FEC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[31] = (0x0899FEE4u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x0899FEE4u) goto L_0899FEE4;
    return;
L_0899FEE4:
    aot_gpr[31] = (0x0899FEECu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 204u, 0x08992EE4u>(ctx, &aot_mem) && ctx.pc == 0x0899FEECu) goto L_0899FEEC;
    return;
L_0899FEEC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0899FF04u);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x0899FF04u) goto L_0899FF04;
    return;
L_0899FF04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0899FF10u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 209u, 0x08992F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FF10u) goto L_0899FF10;
    return;
L_0899FF10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FF24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0899FF44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    goto L_0899FB94;
L_0899FF44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899FF90;
      }
      goto L_0899FF4C;
    }
L_0899FF4C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0899FF84;
      }
      goto L_0899FF54;
    }
L_0899FF54:
    aot_gpr[31] = (0x0899FF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 204u, 0x08992EE4u>(ctx, &aot_mem) && ctx.pc == 0x0899FF5Cu) goto L_0899FF5C;
    return;
L_0899FF5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0899FF68u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x0899FF68u) goto L_0899FF68;
    return;
L_0899FF68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0899FF80u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(45));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FF80u) goto L_0899FF80;
    return;
L_0899FF80:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_0899FF84;
L_0899FF84:
    aot_gpr[31] = (0x0899FF8Cu);
    // nop
    goto L_0899FBD8;
L_0899FF8C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_0899FF90;
L_0899FF90:
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
L_0899FFA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 7u, 0x089A004Cu>(ctx, &aot_mem); return;
      }
      goto L_0899FFC4;
    }
L_0899FFC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 8u, 0x089A0050u>(ctx, &aot_mem); return;
      }
      goto L_0899FFD0;
    }
L_0899FFD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 9u, 0x089A0054u>(ctx, &aot_mem); return;
      }
      goto L_0899FFE0;
    }
L_0899FFE0:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0899FFE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FFE8u) goto L_0899FFE8;
    return;
L_0899FFE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 7u, 0x089A004Cu>(ctx, &aot_mem); return;
      }
      goto L_0899FFF0;
    }
L_0899FFF0:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
    goto L_0899FFF8;
L_0899FFF8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 5u, 0x089A0028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 2u, 0x089A0004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0411(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0411_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_411(Runtime &runtime) {
    runtime.register_generated_unit(411u, 0x0899F000u, 4096u, &recomp_unit_0411, &recomp_unit_0411_entry);
    runtime.register_function(0x0899F000u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F024u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F030u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F03Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F044u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F050u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F054u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F05Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F068u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F070u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F078u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F080u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F088u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F090u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F098u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0A0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0A8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0B0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0B8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0C0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0C8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0D0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0DCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0E8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0F4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F0FCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F104u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F10Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F128u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F140u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F14Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F154u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F158u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F16Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F188u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F1A0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F1ACu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F1B4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F1B8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F1CCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F1E8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F200u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F20Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F214u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F21Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F220u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F234u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F2A4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F2B4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F2C0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F2C8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F2D8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F2E0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F308u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F310u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F320u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F338u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F340u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F34Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F35Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F368u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F394u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F3F8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F40Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F414u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F41Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F424u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F448u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F450u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F478u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F480u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F494u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F4ACu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F4B4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F4C4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F4D4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F4E0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F50Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F530u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F560u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F578u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F59Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F5CCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F5E4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F60Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F620u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F634u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F650u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F654u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F65Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F670u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F678u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F6A4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F6C0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F6CCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F6D4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F6E0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F6FCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F714u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F728u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F734u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F744u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F75Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F760u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F76Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F774u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F780u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F7A0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F7A8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F7B0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F7B4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F7C0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F7F8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F808u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F824u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F82Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F834u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F848u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F850u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F878u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F894u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F8A0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F8B8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F8C0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F8E8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F904u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F910u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F92Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F938u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F940u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F948u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F954u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F970u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899F990u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FB30u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FB48u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FB5Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FB64u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FB94u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FBB8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FBC4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FBCCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FBD8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FBE8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FBF4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC00u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC2Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC38u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC50u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC58u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC64u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC84u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC8Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FC98u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FCBCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FCC4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FCC8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FCD4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FCE4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FCECu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD08u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD14u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD30u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD38u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD4Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD54u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD5Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD68u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD70u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD78u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD80u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FD98u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FDB4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FDFCu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE24u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE3Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE44u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE50u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE64u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE6Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FE84u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FEA0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FEB8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FEC8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FEE4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FEECu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF04u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF10u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF24u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF44u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF4Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF54u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF5Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF68u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF80u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF84u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF8Cu, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FF90u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFA8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFC4u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFD0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFE0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFE8u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFF0u, &recomp_unit_0411, "recomp_unit_0411");
    runtime.register_function(0x0899FFF8u, &recomp_unit_0411, "recomp_unit_0411");
}
} // namespace psprecomp
