#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0476[1015] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0,
    15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 75, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0,
    95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 99, 0, 100, 0, 0, 101, 102, 103, 0, 104, 105, 106, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126,
    0, 0, 127, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0,
    0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 163, 0, 164, 0,
    0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    178, 0, 179, 0, 180, 0, 181, 0, 0, 182, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0,
    204, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 219, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223,
};
void recomp_unit_0476_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E0000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0476[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E0000;
    case 2u: goto L_089E000C;
    case 3u: goto L_089E002C;
    case 4u: goto L_089E0048;
    case 5u: goto L_089E0054;
    case 6u: goto L_089E0060;
    case 7u: goto L_089E006C;
    case 8u: goto L_089E0090;
    case 9u: goto L_089E00B4;
    case 10u: goto L_089E00BC;
    case 11u: goto L_089E00D0;
    case 12u: goto L_089E00DC;
    case 13u: goto L_089E00E8;
    case 14u: goto L_089E00F4;
    case 15u: goto L_089E0100;
    case 16u: goto L_089E0108;
    case 17u: goto L_089E0120;
    case 18u: goto L_089E0140;
    case 19u: goto L_089E015C;
    case 20u: goto L_089E0174;
    case 21u: goto L_089E017C;
    case 22u: goto L_089E0190;
    case 23u: goto L_089E01A4;
    case 24u: goto L_089E01B4;
    case 25u: goto L_089E01BC;
    case 26u: goto L_089E01C8;
    case 27u: goto L_089E01E8;
    case 28u: goto L_089E0238;
    case 29u: goto L_089E0240;
    case 30u: goto L_089E0250;
    case 31u: goto L_089E0280;
    case 32u: goto L_089E02B0;
    case 33u: goto L_089E02B8;
    case 34u: goto L_089E02C0;
    case 35u: goto L_089E02D4;
    case 36u: goto L_089E02DC;
    case 37u: goto L_089E02F8;
    case 38u: goto L_089E0338;
    case 39u: goto L_089E0340;
    case 40u: goto L_089E0344;
    case 41u: goto L_089E0350;
    case 42u: goto L_089E0360;
    case 43u: goto L_089E039C;
    case 44u: goto L_089E03A4;
    case 45u: goto L_089E03B0;
    case 46u: goto L_089E03BC;
    case 47u: goto L_089E03C0;
    case 48u: goto L_089E03D8;
    case 49u: goto L_089E03E4;
    case 50u: goto L_089E03F4;
    case 51u: goto L_089E0430;
    case 52u: goto L_089E044C;
    case 53u: goto L_089E0454;
    case 54u: goto L_089E0468;
    case 55u: goto L_089E0470;
    case 56u: goto L_089E0494;
    case 57u: goto L_089E04D0;
    case 58u: goto L_089E04E4;
    case 59u: goto L_089E04EC;
    case 60u: goto L_089E0508;
    case 61u: goto L_089E0514;
    case 62u: goto L_089E0538;
    case 63u: goto L_089E0544;
    case 64u: goto L_089E0554;
    case 65u: goto L_089E0558;
    case 66u: goto L_089E0590;
    case 67u: goto L_089E05D0;
    case 68u: goto L_089E05E0;
    case 69u: goto L_089E05E8;
    case 70u: goto L_089E05F0;
    case 71u: goto L_089E05F8;
    case 72u: goto L_089E0600;
    case 73u: goto L_089E0620;
    case 74u: goto L_089E0634;
    case 75u: goto L_089E0638;
    case 76u: goto L_089E063C;
    case 77u: goto L_089E0658;
    case 78u: goto L_089E0664;
    case 79u: goto L_089E0670;
    case 80u: goto L_089E0688;
    case 81u: goto L_089E06D4;
    case 82u: goto L_089E06D8;
    case 83u: goto L_089E06E4;
    case 84u: goto L_089E06F0;
    case 85u: goto L_089E06FC;
    case 86u: goto L_089E070C;
    case 87u: goto L_089E0738;
    case 88u: goto L_089E0764;
    case 89u: goto L_089E076C;
    case 90u: goto L_089E07B0;
    case 91u: goto L_089E07D0;
    case 92u: goto L_089E07DC;
    case 93u: goto L_089E07E8;
    case 94u: goto L_089E07F4;
    case 95u: goto L_089E0800;
    case 96u: goto L_089E080C;
    case 97u: goto L_089E0818;
    case 98u: goto L_089E0824;
    case 99u: goto L_089E0828;
    case 100u: goto L_089E0830;
    case 101u: goto L_089E083C;
    case 102u: goto L_089E0840;
    case 103u: goto L_089E0844;
    case 104u: goto L_089E084C;
    case 105u: goto L_089E0850;
    case 106u: goto L_089E0854;
    case 107u: goto L_089E0858;
    case 108u: goto L_089E087C;
    case 109u: goto L_089E0888;
    case 110u: goto L_089E0894;
    case 111u: goto L_089E08A0;
    case 112u: goto L_089E08AC;
    case 113u: goto L_089E08B8;
    case 114u: goto L_089E08C4;
    case 115u: goto L_089E08D0;
    case 116u: goto L_089E08D8;
    case 117u: goto L_089E08E4;
    case 118u: goto L_089E08F0;
    case 119u: goto L_089E0900;
    case 120u: goto L_089E090C;
    case 121u: goto L_089E0918;
    case 122u: goto L_089E0940;
    case 123u: goto L_089E0960;
    case 124u: goto L_089E096C;
    case 125u: goto L_089E0974;
    case 126u: goto L_089E097C;
    case 127u: goto L_089E0988;
    case 128u: goto L_089E098C;
    case 129u: goto L_089E0994;
    case 130u: goto L_089E099C;
    case 131u: goto L_089E09A4;
    case 132u: goto L_089E09B0;
    case 133u: goto L_089E09BC;
    case 134u: goto L_089E09CC;
    case 135u: goto L_089E09E0;
    case 136u: goto L_089E09EC;
    case 137u: goto L_089E09F4;
    case 138u: goto L_089E0A04;
    case 139u: goto L_089E0A14;
    case 140u: goto L_089E0A20;
    case 141u: goto L_089E0A30;
    case 142u: goto L_089E0A3C;
    case 143u: goto L_089E0A40;
    case 144u: goto L_089E0A48;
    case 145u: goto L_089E0A60;
    case 146u: goto L_089E0A6C;
    case 147u: goto L_089E0A74;
    case 148u: goto L_089E0AA0;
    case 149u: goto L_089E0AA8;
    case 150u: goto L_089E0AB0;
    case 151u: goto L_089E0ABC;
    case 152u: goto L_089E0AC4;
    case 153u: goto L_089E0AD0;
    case 154u: goto L_089E0AD8;
    case 155u: goto L_089E0AE0;
    case 156u: goto L_089E0AF4;
    case 157u: goto L_089E0B28;
    case 158u: goto L_089E0B34;
    case 159u: goto L_089E0B40;
    case 160u: goto L_089E0B4C;
    case 161u: goto L_089E0B60;
    case 162u: goto L_089E0B6C;
    case 163u: goto L_089E0B70;
    case 164u: goto L_089E0B78;
    case 165u: goto L_089E0B84;
    case 166u: goto L_089E0B90;
    case 167u: goto L_089E0BA0;
    case 168u: goto L_089E0BAC;
    case 169u: goto L_089E0BBC;
    case 170u: goto L_089E0BC4;
    case 171u: goto L_089E0BE0;
    case 172u: goto L_089E0BEC;
    case 173u: goto L_089E0C30;
    case 174u: goto L_089E0C38;
    case 175u: goto L_089E0C4C;
    case 176u: goto L_089E0C54;
    case 177u: goto L_089E0C78;
    case 178u: goto L_089E0C80;
    case 179u: goto L_089E0C88;
    case 180u: goto L_089E0C90;
    case 181u: goto L_089E0C98;
    case 182u: goto L_089E0CA4;
    case 183u: goto L_089E0CA8;
    case 184u: goto L_089E0CF4;
    case 185u: goto L_089E0D0C;
    case 186u: goto L_089E0D24;
    case 187u: goto L_089E0D2C;
    case 188u: goto L_089E0D34;
    case 189u: goto L_089E0D3C;
    case 190u: goto L_089E0D40;
    case 191u: goto L_089E0D54;
    case 192u: goto L_089E0D8C;
    case 193u: goto L_089E0D98;
    case 194u: goto L_089E0DA8;
    case 195u: goto L_089E0DC8;
    case 196u: goto L_089E0DE4;
    case 197u: goto L_089E0E10;
    case 198u: goto L_089E0E20;
    case 199u: goto L_089E0E2C;
    case 200u: goto L_089E0E3C;
    case 201u: goto L_089E0E4C;
    case 202u: goto L_089E0E64;
    case 203u: goto L_089E0E74;
    case 204u: goto L_089E0E80;
    case 205u: goto L_089E0E90;
    case 206u: goto L_089E0E98;
    case 207u: goto L_089E0EA4;
    case 208u: goto L_089E0EBC;
    case 209u: goto L_089E0ED0;
    case 210u: goto L_089E0EE8;
    case 211u: goto L_089E0F34;
    case 212u: goto L_089E0F3C;
    case 213u: goto L_089E0F44;
    case 214u: goto L_089E0F54;
    case 215u: goto L_089E0F60;
    case 216u: goto L_089E0F68;
    case 217u: goto L_089E0F70;
    case 218u: goto L_089E0F7C;
    case 219u: goto L_089E0F98;
    case 220u: goto L_089E0FA0;
    case 221u: goto L_089E0FA4;
    case 222u: goto L_089E0FCC;
    case 223u: goto L_089E0FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E0000:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E006C;
      }
      goto L_089E000C;
    }
L_089E000C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] ^ 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] != 0u) aot_gpr[3] = (aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[5];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E0090;
      }
      goto L_089E002C;
    }
L_089E002C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0048:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E0054u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0054u) goto L_089E0054;
    return;
L_089E0054:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_089E0100;
    }
    goto L_089E0060;
L_089E0060:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E006Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E006Cu) goto L_089E006C;
    return;
L_089E006C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
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
L_089E0090:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2788)));
    aot_gpr[5] = (2206u << 16u);
    aot_gpr[6] = (2206u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-92));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-52));
    aot_gpr[4] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E00B4u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E00B4u) goto L_089E00B4;
    return;
L_089E00B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E006C;
      }
      goto L_089E00BC;
    }
L_089E00BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E00D0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E00D0u) goto L_089E00D0;
    return;
L_089E00D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E00DCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E00DCu) goto L_089E00DC;
    return;
L_089E00DC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(20));
    if (aot_gpr[2] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_089E0048;
    }
    goto L_089E00E8;
L_089E00E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E00F4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E00F4u) goto L_089E00F4;
    return;
L_089E00F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E002C;
L_089E0100:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E0108u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0108u) goto L_089E0108;
    return;
L_089E0108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    goto L_089E002C;
L_089E0120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E01C8;
      }
      goto L_089E0140;
    }
L_089E0140:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[3] = (aot_gpr[2] ^ 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (aot_gpr[3] != 0u) aot_gpr[6] = (aot_gpr[2]);
    if (aot_gpr[6] == aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(204)));
        goto L_089E0174;
    }
    goto L_089E015C;
L_089E015C:
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
L_089E0174:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089E01C8;
      }
      goto L_089E017C;
    }
L_089E017C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(208)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E01C8;
      }
      goto L_089E0190;
    }
L_089E0190:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E01A4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E01A4u) goto L_089E01A4;
    return;
L_089E01A4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089E01C8;
      }
      goto L_089E01B4;
    }
L_089E01B4:
    aot_gpr[31] = (0x089E01BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 28u, 0x08990324u>(ctx, &aot_mem) && ctx.pc == 0x089E01BCu) goto L_089E01BC;
    return;
L_089E01BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E015C;
L_089E01C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E01E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20480));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[31] = (0x089E0238u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E0238u) goto L_089E0238;
    return;
L_089E0238:
    aot_gpr[31] = (0x089E0240u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089E0240u) goto L_089E0240;
    return;
L_089E0240:
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E0250u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E0250u) goto L_089E0250;
    return;
L_089E0250:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[10] = (0u + 0u);
      if (branch_taken) {
          goto L_089E02B0;
      }
      goto L_089E0280;
    }
L_089E0280:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    goto L_089E02B0;
L_089E02B0:
    aot_gpr[31] = (0x089E02B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E02B8u) goto L_089E02B8;
    return;
L_089E02B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E02DC;
      }
      goto L_089E02C0;
    }
L_089E02C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(118)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089E02DC;
      }
      goto L_089E02D4;
    }
L_089E02D4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E02DC;
L_089E02DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E02F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_089E04EC;
      }
      goto L_089E0338;
    }
L_089E0338:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[20] = (2217u << 16u);
    goto L_089E0340;
L_089E0340:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_089E0344;
L_089E0344:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089E0350u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089E0350u) goto L_089E0350;
    return;
L_089E0350:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_089E039C;
      }
      goto L_089E0360;
    }
L_089E0360:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    goto L_089E039C;
L_089E039C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089E03C0;
      }
      goto L_089E03A4;
    }
L_089E03A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E04D0;
      }
      goto L_089E03B0;
    }
L_089E03B0:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089E0494;
      }
      goto L_089E03BC;
    }
L_089E03BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089E03C0;
L_089E03C0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20480));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E03D8u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E03D8u) goto L_089E03D8;
    return;
L_089E03D8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E03E4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E03E4u) goto L_089E03E4;
    return;
L_089E03E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E0430;
      }
      goto L_089E03F4;
    }
L_089E03F4:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089E0430;
L_089E0430:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089E044Cu);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E044Cu) goto L_089E044C;
    return;
L_089E044C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E0470;
      }
      goto L_089E0454;
    }
L_089E0454:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(118)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089E0470;
      }
      goto L_089E0468;
    }
L_089E0468:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E0470;
L_089E0470:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0494:
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    goto L_089E03C0;
L_089E04D0:
    aot_gpr[2] = (aot_gpr[2] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089E03C0;
    }
    goto L_089E04E4;
L_089E04E4:
    aot_gpr[3] = (aot_gpr[3] << 3u);
    goto L_089E0494;
L_089E04EC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2788)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = aot_gpr[3] == 0u;
    if (aot_gpr[2] == 0u) aot_gpr[19] = (0u);
      if (branch_taken) {
          goto L_089E0340;
      }
      goto L_089E0508;
    }
L_089E0508:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(152)));
        goto L_089E05E8;
    }
    goto L_089E0514;
L_089E0514:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(3)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < 8 ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] | 512u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E0590;
      }
      goto L_089E0538;
    }
L_089E0538:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E0544u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089E0544u) goto L_089E0544;
    return;
L_089E0544:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
        goto L_089E0344;
    }
    goto L_089E0554;
L_089E0554:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    goto L_089E0558;
L_089E0558:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    goto L_089E0340;
L_089E0590:
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[31] = (0x089E05D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089E05D0u) goto L_089E05D0;
    return;
L_089E05D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
        goto L_089E0344;
    }
    goto L_089E05E0;
L_089E05E0:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    goto L_089E0558;
L_089E05E8:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E05F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E05F0u) goto L_089E05F0;
    return;
L_089E05F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E0514;
      }
      goto L_089E05F8;
    }
L_089E05F8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_089E0344;
L_089E0600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E0634;
      }
      goto L_089E0620;
    }
L_089E0620:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E0658;
      }
      goto L_089E0634;
    }
L_089E0634:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_089E0638;
L_089E0638:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089E063C;
L_089E063C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0658:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089E0634;
      }
      goto L_089E0664;
    }
L_089E0664:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E0670u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0670u) goto L_089E0670;
    return;
L_089E0670:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
    aot_gpr[2] = (aot_gpr[16] | aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_089E070C;
      }
      goto L_089E0688;
    }
L_089E0688:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E0688;
      }
      goto L_089E06D4;
    }
L_089E06D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E06D8;
L_089E06D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E0638;
      }
      goto L_089E06E4;
    }
L_089E06E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(208)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
        goto L_089E063C;
    }
    goto L_089E06F0;
L_089E06F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E06FCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E06FCu) goto L_089E06FC;
    return;
L_089E06FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    goto L_089E063C;
L_089E070C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E06D4;
      }
      goto L_089E0738;
    }
L_089E0738:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E070C;
      }
      goto L_089E0764;
    }
L_089E0764:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E06D8;
L_089E076C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[20] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089E087C;
      }
      goto L_089E07B0;
    }
L_089E07B0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x089E07D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089E07D0u) goto L_089E07D0;
    return;
L_089E07D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E07DCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E07DCu) goto L_089E07DC;
    return;
L_089E07DC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E07E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E07E8u) goto L_089E07E8;
    return;
L_089E07E8:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(9));
    aot_gpr[31] = (0x089E07F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E07F4u) goto L_089E07F4;
    return;
L_089E07F4:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089E0800u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E0800u) goto L_089E0800;
    return;
L_089E0800:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E080Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E080Cu) goto L_089E080C;
    return;
L_089E080C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(14));
    aot_gpr[31] = (0x089E0818u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0818u) goto L_089E0818;
    return;
L_089E0818:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(15));
    aot_gpr[31] = (0x089E0824u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0824u) goto L_089E0824;
    return;
L_089E0824:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    goto L_089E0828;
L_089E0828:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10)));
      if (branch_taken) {
          goto L_089E083C;
      }
      goto L_089E0830;
    }
L_089E0830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E09F4;
      }
      goto L_089E083C;
    }
L_089E083C:
    aot_gpr[3] = (aot_gpr[4] & 255u);
    goto L_089E0840;
L_089E0840:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E0844;
L_089E0844:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11)));
        goto L_089E08D8;
    }
    goto L_089E084C;
L_089E084C:
    aot_gpr[2] = (0u + 0u);
    goto L_089E0850;
L_089E0850:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), 0u);
    goto L_089E0854;
L_089E0854:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089E0858;
L_089E0858:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089E087C:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089E0888u);
    aot_gpr[5] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E0888u) goto L_089E0888;
    return;
L_089E0888:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E0894u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0894u) goto L_089E0894;
    return;
L_089E0894:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089E08A0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E08A0u) goto L_089E08A0;
    return;
L_089E08A0:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089E08ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E08ACu) goto L_089E08AC;
    return;
L_089E08AC:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E08B8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089E08B8u) goto L_089E08B8;
    return;
L_089E08B8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089E08C4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E08C4u) goto L_089E08C4;
    return;
L_089E08C4:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(11));
    aot_gpr[31] = (0x089E08D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E08D0u) goto L_089E08D0;
    return;
L_089E08D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    goto L_089E0828;
L_089E08D8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E0850;
      }
      goto L_089E08E4;
    }
L_089E08E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E0850;
      }
      goto L_089E08F0;
    }
L_089E08F0:
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089E084C;
      }
      goto L_089E0900;
    }
L_089E0900:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E090Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089E090Cu) goto L_089E090C;
    return;
L_089E090C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E0A74;
      }
      goto L_089E0918;
    }
L_089E0918:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(169));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    goto L_089E0940;
L_089E0940:
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
      if (branch_taken) {
          goto L_089E0988;
      }
      goto L_089E0960;
    }
L_089E0960:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089E0AA0;
      }
      goto L_089E096C;
    }
L_089E096C:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(16));
    goto L_089E0974;
L_089E0974:
    aot_gpr[31] = (0x089E097Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089E097Cu) goto L_089E097C;
    return;
L_089E097C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[18];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E0974;
      }
      goto L_089E0988;
    }
L_089E0988:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    goto L_089E098C;
L_089E098C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
        goto L_089E0A60;
    }
    goto L_089E0994;
L_089E0994:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), aot_gpr[6]);
    goto L_089E099C;
L_089E099C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E0854;
      }
      goto L_089E09A4;
    }
L_089E09A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_089E09CC;
      }
      goto L_089E09B0;
    }
L_089E09B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089E0850;
      }
      goto L_089E09BC;
    }
L_089E09BC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(284)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E09CCu);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E09CCu) goto L_089E09CC;
    return;
L_089E09CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E09E0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(17));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E09E0u) goto L_089E09E0;
    return;
L_089E09E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E0854;
      }
      goto L_089E09EC;
    }
L_089E09EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), 0u);
    goto L_089E0854;
L_089E09F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E0850;
      }
      goto L_089E0A04;
    }
L_089E0A04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E0844;
      }
      goto L_089E0A14;
    }
L_089E0A14:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E0844;
      }
      goto L_089E0A20;
    }
L_089E0A20:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_089E0840;
      }
      goto L_089E0A30;
    }
L_089E0A30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E0AC4;
      }
      goto L_089E0A3C;
    }
L_089E0A3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E0A40;
L_089E0A40:
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(196)));
        goto L_089E0AE0;
    }
    goto L_089E0A48;
L_089E0A48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(284), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    goto L_089E083C;
L_089E0A60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089E099C;
      }
      goto L_089E0A6C;
    }
L_089E0A6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(148), 0u);
    goto L_089E0854;
L_089E0A74:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(185));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    goto L_089E0940;
L_089E0AA0:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(16));
    goto L_089E0AA8;
L_089E0AA8:
    aot_gpr[31] = (0x089E0AB0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0AB0u) goto L_089E0AB0;
    return;
L_089E0AB0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[18];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E0AA8;
      }
      goto L_089E0ABC;
    }
L_089E0ABC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(156)));
    goto L_089E098C;
L_089E0AC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(6)));
    aot_gpr[31] = (0x089E0AD0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 148u, 0x089E3B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0AD0u) goto L_089E0AD0;
    return;
L_089E0AD0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E0A40;
      }
      goto L_089E0AD8;
    }
L_089E0AD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089E0858;
L_089E0AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(284), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    goto L_089E083C;
L_089E0AF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (771u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[31] = (0x089E0B28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089E0B28u) goto L_089E0B28;
    return;
L_089E0B28:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089E0B34u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089E0B34u) goto L_089E0B34;
    return;
L_089E0B34:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(11));
    aot_gpr[31] = (0x089E0B40u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089E0B40u) goto L_089E0B40;
    return;
L_089E0B40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (0x089E0B4Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089E0B4Cu) goto L_089E0B4C;
    return;
L_089E0B4C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_089E0C78;
      }
      goto L_089E0B60;
    }
L_089E0B60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (0x089E0B6Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089E0B6Cu) goto L_089E0B6C;
    return;
L_089E0B6C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089E0B70;
L_089E0B70:
    aot_gpr[31] = (0x089E0B78u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089E0B78u) goto L_089E0B78;
    return;
L_089E0B78:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089E0B84u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089E0B84u) goto L_089E0B84;
    return;
L_089E0B84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089E0BC4;
      }
      goto L_089E0B90;
    }
L_089E0B90:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(17));
      if (branch_taken) {
          goto L_089E0BBC;
      }
      goto L_089E0BA0;
    }
L_089E0BA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E0BACu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(152));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0BACu) goto L_089E0BAC;
    return;
L_089E0BAC:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0C88;
      }
      goto L_089E0BBC;
    }
L_089E0BBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(148), 0u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(12));
    goto L_089E0BC4;
L_089E0BC4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20480));
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E0BE0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089E0BE0u) goto L_089E0BE0;
    return;
L_089E0BE0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E0BECu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089E0BECu) goto L_089E0BEC;
    return;
L_089E0BEC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (aot_gpr[11] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (0u | 34816u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[31] = (0x089E0C30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089E0C30u) goto L_089E0C30;
    return;
L_089E0C30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E0C54;
      }
      goto L_089E0C38;
    }
L_089E0C38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(118)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089E0C54;
      }
      goto L_089E0C4C;
    }
L_089E0C4C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089E0C54;
L_089E0C54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0C78:
    aot_gpr[31] = (0x089E0C80u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089E0C80u) goto L_089E0C80;
    return;
L_089E0C80:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089E0B70;
L_089E0C88:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089E0BC4;
      }
      goto L_089E0C90;
    }
L_089E0C90:
    aot_gpr[31] = (0x089E0C98u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089E0C98u) goto L_089E0C98;
    return;
L_089E0C98:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(185));
      if (branch_taken) {
          goto L_089E0CA8;
      }
      goto L_089E0CA4;
    }
L_089E0CA4:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(169));
    goto L_089E0CA8;
L_089E0CA8:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(22));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    goto L_089E0BC4;
L_089E0CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u | 54003u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089E0D40;
      }
      goto L_089E0D0C;
    }
L_089E0D0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E0D40;
      }
      goto L_089E0D24;
    }
L_089E0D24:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089E0D40;
      }
      goto L_089E0D2C;
    }
L_089E0D2C:
    aot_gpr[31] = (0x089E0D34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 136u, 0x08A43700u>(ctx, &aot_mem) && ctx.pc == 0x089E0D34u) goto L_089E0D34;
    return;
L_089E0D34:
    aot_gpr[31] = (0x089E0D3Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 136u, 0x08A43700u>(ctx, &aot_mem) && ctx.pc == 0x089E0D3Cu) goto L_089E0D3C;
    return;
L_089E0D3C:
    aot_gpr[5] = (0u + 0u);
    goto L_089E0D40;
L_089E0D40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0D54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x089E0D8Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089E0D8Cu) goto L_089E0D8C;
    return;
L_089E0D8C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E0D98u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(110)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 119u, 0x089DF684u>(ctx, &aot_mem) && ctx.pc == 0x089E0D98u) goto L_089E0D98;
    return;
L_089E0D98:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E0DA8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 59u, 0x089D9448u>(ctx, &aot_mem) && ctx.pc == 0x089E0DA8u) goto L_089E0DA8;
    return;
L_089E0DA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E0DC8u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0DC8u) goto L_089E0DC8;
    return;
L_089E0DC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (0u | 54003u);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E0E4C;
      }
      goto L_089E0E10;
    }
L_089E0E10:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E0E20u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 123u, 0x089DA7A8u>(ctx, &aot_mem) && ctx.pc == 0x089E0E20u) goto L_089E0E20;
    return;
L_089E0E20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E0E98;
      }
      goto L_089E0E2C;
    }
L_089E0E2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E0E64;
      }
      goto L_089E0E3C;
    }
L_089E0E3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E0E4Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089E0D54;
L_089E0E4C:
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
L_089E0E64:
    aot_gpr[4] = (aot_gpr[2] << (aot_gpr[3] & 31u));
    aot_gpr[3] = (aot_gpr[4] & 440u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (aot_gpr[17] + 0u);
        goto L_089E0E98;
    }
    goto L_089E0E74;
L_089E0E74:
    aot_gpr[2] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089E0EBC;
      }
      goto L_089E0E80;
    }
L_089E0E80:
    aot_gpr[2] = (2048u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[2]);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
        goto L_089E0E3C;
    }
    goto L_089E0E90;
L_089E0E90:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_089E0EBC;
L_089E0E98:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E0EA4u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E0EA4u) goto L_089E0EA4;
    return;
L_089E0EA4:
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
L_089E0EBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E0ED0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089E0ED0u) goto L_089E0ED0;
    return;
L_089E0ED0:
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
L_089E0EE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089E0F34u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089E0F34u) goto L_089E0F34;
    return;
L_089E0F34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089E0FA0;
      }
      goto L_089E0F3C;
    }
L_089E0F3C:
    aot_gpr[31] = (0x089E0F44u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 148u, 0x089DF914u>(ctx, &aot_mem) && ctx.pc == 0x089E0F44u) goto L_089E0F44;
    return;
L_089E0F44:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089E0F54u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089E0F54u) goto L_089E0F54;
    return;
L_089E0F54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 20u, 0x089E132Cu>(ctx, &aot_mem); return;
      }
      goto L_089E0F60;
    }
L_089E0F60:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u | 54005u);
        goto L_089E0FA0;
    }
    goto L_089E0F68;
L_089E0F68:
    aot_gpr[31] = (0x089E0F70u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 173u, 0x089DB8BCu>(ctx, &aot_mem) && ctx.pc == 0x089E0F70u) goto L_089E0F70;
    return;
L_089E0F70:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54007u);
      if (branch_taken) {
          goto L_089E0FA0;
      }
      goto L_089E0F7C;
    }
L_089E0F7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089E0F98u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E076C;
L_089E0F98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E0FCC;
      }
      goto L_089E0FA0;
    }
L_089E0FA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_089E0FA4;
L_089E0FA4:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0FCC:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089E0FD8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 153u, 0x089DF984u>(ctx, &aot_mem) && ctx.pc == 0x089E0FD8u) goto L_089E0FD8;
    return;
L_089E0FD8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(11)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(15)));
    ctx.pc = 0x089E1000u; return;
}

void recomp_unit_0476(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0476_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_476(Runtime &runtime) {
    runtime.register_generated_unit(476u, 0x089E0000u, 4096u, &recomp_unit_0476, &recomp_unit_0476_entry);
    runtime.register_function(0x089E0000u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E000Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E002Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0048u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0054u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0060u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E006Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0090u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E00B4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E00BCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E00D0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E00DCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E00E8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E00F4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0100u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0108u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0120u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0140u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E015Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0174u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E017Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0190u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E01A4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E01B4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E01BCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E01C8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E01E8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0238u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0240u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0250u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0280u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E02B0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E02B8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E02C0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E02D4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E02DCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E02F8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0338u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0340u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0344u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0350u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0360u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E039Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03A4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03B0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03BCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03C0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03D8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03E4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E03F4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0430u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E044Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0454u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0468u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0470u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0494u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E04D0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E04E4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E04ECu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0508u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0514u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0538u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0544u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0554u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0558u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0590u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E05D0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E05E0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E05E8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E05F0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E05F8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0600u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0620u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0634u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0638u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E063Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0658u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0664u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0670u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0688u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E06D4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E06D8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E06E4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E06F0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E06FCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E070Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0738u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0764u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E076Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E07B0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E07D0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E07DCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E07E8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E07F4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0800u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E080Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0818u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0824u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0828u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0830u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E083Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0840u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0844u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E084Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0850u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0854u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0858u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E087Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0888u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0894u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08A0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08ACu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08B8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08C4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08D0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08D8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08E4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E08F0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0900u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E090Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0918u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0940u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0960u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E096Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0974u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E097Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0988u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E098Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0994u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E099Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09A4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09B0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09BCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09CCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09E0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09ECu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E09F4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A04u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A14u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A20u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A30u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A3Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A40u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A48u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A60u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A6Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0A74u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AA0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AA8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AB0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0ABCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AC4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AD0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AD8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AE0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0AF4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B28u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B34u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B40u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B4Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B60u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B6Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B70u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B78u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B84u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0B90u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0BA0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0BACu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0BBCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0BC4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0BE0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0BECu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C30u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C38u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C4Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C54u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C78u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C80u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C88u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C90u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0C98u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0CA4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0CA8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0CF4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D0Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D24u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D2Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D34u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D3Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D40u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D54u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D8Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0D98u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0DA8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0DC8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0DE4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E10u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E20u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E2Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E3Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E4Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E64u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E74u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E80u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E90u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0E98u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0EA4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0EBCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0ED0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0EE8u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F34u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F3Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F44u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F54u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F60u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F68u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F70u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F7Cu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0F98u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0FA0u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0FA4u, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0FCCu, &recomp_unit_0476, "recomp_unit_0476");
    runtime.register_function(0x089E0FD8u, &recomp_unit_0476, "recomp_unit_0476");
}
} // namespace psprecomp
