#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0428[1020] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19,
    0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 26, 0, 27, 0, 0, 0, 28, 0, 29, 30, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0,
    48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 62,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 112,
    0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0,
    0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188,
};
void recomp_unit_0428_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B0000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0428[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B0000;
    case 2u: goto L_089B0004;
    case 3u: goto L_089B007C;
    case 4u: goto L_089B00AC;
    case 5u: goto L_089B00B8;
    case 6u: goto L_089B00C0;
    case 7u: goto L_089B00DC;
    case 8u: goto L_089B00E4;
    case 9u: goto L_089B0120;
    case 10u: goto L_089B014C;
    case 11u: goto L_089B0178;
    case 12u: goto L_089B01AC;
    case 13u: goto L_089B01B8;
    case 14u: goto L_089B01C0;
    case 15u: goto L_089B01D0;
    case 16u: goto L_089B01D8;
    case 17u: goto L_089B01E0;
    case 18u: goto L_089B01F0;
    case 19u: goto L_089B01FC;
    case 20u: goto L_089B0204;
    case 21u: goto L_089B020C;
    case 22u: goto L_089B0214;
    case 23u: goto L_089B021C;
    case 24u: goto L_089B0224;
    case 25u: goto L_089B022C;
    case 26u: goto L_089B0230;
    case 27u: goto L_089B0238;
    case 28u: goto L_089B0248;
    case 29u: goto L_089B0250;
    case 30u: goto L_089B0254;
    case 31u: goto L_089B025C;
    case 32u: goto L_089B0268;
    case 33u: goto L_089B0270;
    case 34u: goto L_089B0278;
    case 35u: goto L_089B02B0;
    case 36u: goto L_089B02DC;
    case 37u: goto L_089B0310;
    case 38u: goto L_089B0330;
    case 39u: goto L_089B0334;
    case 40u: goto L_089B034C;
    case 41u: goto L_089B0358;
    case 42u: goto L_089B0360;
    case 43u: goto L_089B0374;
    case 44u: goto L_089B03C4;
    case 45u: goto L_089B03CC;
    case 46u: goto L_089B03E8;
    case 47u: goto L_089B03EC;
    case 48u: goto L_089B0400;
    case 49u: goto L_089B0408;
    case 50u: goto L_089B0410;
    case 51u: goto L_089B0418;
    case 52u: goto L_089B0420;
    case 53u: goto L_089B0428;
    case 54u: goto L_089B0430;
    case 55u: goto L_089B043C;
    case 56u: goto L_089B0444;
    case 57u: goto L_089B0450;
    case 58u: goto L_089B0458;
    case 59u: goto L_089B0460;
    case 60u: goto L_089B0468;
    case 61u: goto L_089B0474;
    case 62u: goto L_089B047C;
    case 63u: goto L_089B048C;
    case 64u: goto L_089B049C;
    case 65u: goto L_089B04A8;
    case 66u: goto L_089B04B0;
    case 67u: goto L_089B04BC;
    case 68u: goto L_089B04C4;
    case 69u: goto L_089B04D0;
    case 70u: goto L_089B04D8;
    case 71u: goto L_089B04E0;
    case 72u: goto L_089B04E8;
    case 73u: goto L_089B04F0;
    case 74u: goto L_089B04F8;
    case 75u: goto L_089B051C;
    case 76u: goto L_089B0520;
    case 77u: goto L_089B053C;
    case 78u: goto L_089B0544;
    case 79u: goto L_089B0584;
    case 80u: goto L_089B058C;
    case 81u: goto L_089B0594;
    case 82u: goto L_089B05CC;
    case 83u: goto L_089B05D4;
    case 84u: goto L_089B05DC;
    case 85u: goto L_089B05E4;
    case 86u: goto L_089B0620;
    case 87u: goto L_089B0630;
    case 88u: goto L_089B0644;
    case 89u: goto L_089B064C;
    case 90u: goto L_089B068C;
    case 91u: goto L_089B0694;
    case 92u: goto L_089B06C0;
    case 93u: goto L_089B06D0;
    case 94u: goto L_089B06DC;
    case 95u: goto L_089B06F4;
    case 96u: goto L_089B0700;
    case 97u: goto L_089B0734;
    case 98u: goto L_089B073C;
    case 99u: goto L_089B076C;
    case 100u: goto L_089B0798;
    case 101u: goto L_089B07A8;
    case 102u: goto L_089B07B4;
    case 103u: goto L_089B07CC;
    case 104u: goto L_089B07D8;
    case 105u: goto L_089B0800;
    case 106u: goto L_089B0828;
    case 107u: goto L_089B0830;
    case 108u: goto L_089B0838;
    case 109u: goto L_089B0840;
    case 110u: goto L_089B085C;
    case 111u: goto L_089B0878;
    case 112u: goto L_089B087C;
    case 113u: goto L_089B0890;
    case 114u: goto L_089B0898;
    case 115u: goto L_089B08A8;
    case 116u: goto L_089B08B4;
    case 117u: goto L_089B08D8;
    case 118u: goto L_089B08F4;
    case 119u: goto L_089B08F8;
    case 120u: goto L_089B0910;
    case 121u: goto L_089B091C;
    case 122u: goto L_089B0924;
    case 123u: goto L_089B0938;
    case 124u: goto L_089B097C;
    case 125u: goto L_089B0984;
    case 126u: goto L_089B0998;
    case 127u: goto L_089B09D0;
    case 128u: goto L_089B09D8;
    case 129u: goto L_089B0A1C;
    case 130u: goto L_089B0A28;
    case 131u: goto L_089B0A30;
    case 132u: goto L_089B0A34;
    case 133u: goto L_089B0A5C;
    case 134u: goto L_089B0A7C;
    case 135u: goto L_089B0AC8;
    case 136u: goto L_089B0ACC;
    case 137u: goto L_089B0AD8;
    case 138u: goto L_089B0AFC;
    case 139u: goto L_089B0B08;
    case 140u: goto L_089B0B10;
    case 141u: goto L_089B0B24;
    case 142u: goto L_089B0B2C;
    case 143u: goto L_089B0B3C;
    case 144u: goto L_089B0B44;
    case 145u: goto L_089B0B58;
    case 146u: goto L_089B0B70;
    case 147u: goto L_089B0B78;
    case 148u: goto L_089B0B84;
    case 149u: goto L_089B0B98;
    case 150u: goto L_089B0BA0;
    case 151u: goto L_089B0BB4;
    case 152u: goto L_089B0BC8;
    case 153u: goto L_089B0C00;
    case 154u: goto L_089B0C1C;
    case 155u: goto L_089B0C38;
    case 156u: goto L_089B0C54;
    case 157u: goto L_089B0C70;
    case 158u: goto L_089B0C90;
    case 159u: goto L_089B0CAC;
    case 160u: goto L_089B0CCC;
    case 161u: goto L_089B0CE4;
    case 162u: goto L_089B0D04;
    case 163u: goto L_089B0D20;
    case 164u: goto L_089B0D40;
    case 165u: goto L_089B0D5C;
    case 166u: goto L_089B0D7C;
    case 167u: goto L_089B0D98;
    case 168u: goto L_089B0DB4;
    case 169u: goto L_089B0DD0;
    case 170u: goto L_089B0DEC;
    case 171u: goto L_089B0E08;
    case 172u: goto L_089B0E24;
    case 173u: goto L_089B0E40;
    case 174u: goto L_089B0E5C;
    case 175u: goto L_089B0E78;
    case 176u: goto L_089B0E98;
    case 177u: goto L_089B0EB4;
    case 178u: goto L_089B0ED0;
    case 179u: goto L_089B0EE8;
    case 180u: goto L_089B0F04;
    case 181u: goto L_089B0F1C;
    case 182u: goto L_089B0F38;
    case 183u: goto L_089B0F54;
    case 184u: goto L_089B0F74;
    case 185u: goto L_089B0F90;
    case 186u: goto L_089B0FB0;
    case 187u: goto L_089B0FCC;
    case 188u: goto L_089B0FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B0000:
    aot_gpr[6] = (aot_gpr[6] | 13107u);
    goto L_089B0004;
L_089B0004:
    aot_gpr[3] = (aot_gpr[2] >> 2u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (3855u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 3855u);
    aot_gpr[3] = (aot_gpr[2] >> 4u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (255u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 255u);
    aot_gpr[3] = (aot_gpr[2] >> 8u);
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[2] >> 16u);
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) > static_cast<std::int32_t>(aot_gpr[6]) ? aot_gpr[2] : aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (0u | 65535u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    jump_target = aot_gpr[31];
    if (aot_gpr[4] != 0u) aot_gpr[2] = (aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B007C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-14752));
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B014C;
      }
      goto L_089B00AC;
    }
L_089B00AC:
    aot_gpr[2] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-14752));
      if (branch_taken) {
          goto L_089B014C;
      }
      goto L_089B00B8;
    }
L_089B00B8:
    aot_gpr[31] = (0x089B00C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 225u, 0x089AFFCCu>(ctx, &aot_mem) && ctx.pc == 0x089B00C0u) goto L_089B00C0;
    return;
L_089B00C0:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[3] = (0u | 65535u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-14752));
      if (branch_taken) {
          goto L_089B0120;
      }
      goto L_089B00DC;
    }
L_089B00DC:
    aot_gpr[31] = (0x089B00E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 224u, 0x089AFF94u>(ctx, &aot_mem) && ctx.pc == 0x089B00E4u) goto L_089B00E4;
    return;
L_089B00E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0120:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-14752)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B014C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14752)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0178:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B01AC:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
      if (branch_taken) {
          goto L_089B01D8;
      }
      goto L_089B01B8;
    }
L_089B01B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089B01D8;
      }
      goto L_089B01C0;
    }
L_089B01C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089B01D8;
      }
      goto L_089B01D0;
    }
L_089B01D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B01D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B01E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089B01F0u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 225u, 0x089AFFCCu>(ctx, &aot_mem) && ctx.pc == 0x089B01F0u) goto L_089B01F0;
    return;
L_089B01F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B01FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0204:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(10)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B020C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B021C;
      }
      goto L_089B0214;
    }
L_089B0214:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(10)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_089B021C;
L_089B021C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0224:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B0230;
      }
      goto L_089B022C;
    }
L_089B022C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089B0230;
L_089B0230:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0238:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = ((aot_gpr[6] >> 1u) & 0x0000FFFFu);
    (void)rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 178u, 0x089AFC40u>(ctx, &aot_mem); return;
L_089B0248:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B0254;
      }
      goto L_089B0250;
    }
L_089B0250:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B0254;
L_089B0254:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B025C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0268:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0270:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0278:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    aot_gpr[12] = (aot_gpr[4] + 0u);
    aot_gpr[11] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    goto L_089B02B0;
L_089B02B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(16));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[11] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B02B0;
      }
      goto L_089B02DC;
    }
L_089B02DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(92) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-92));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B034C;
      }
      goto L_089B0330;
    }
L_089B0330:
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B0334;
L_089B0334:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[10] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B034C:
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_089B0330;
      }
      goto L_089B0358;
    }
L_089B0358:
    aot_gpr[31] = (0x089B0360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0360u) goto L_089B0360;
    return;
L_089B0360:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(92));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B0374u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089B0374u) goto L_089B0374;
    return;
L_089B0374:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(92));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089B0334;
L_089B03C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B03CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B0400;
      }
      goto L_089B03E8;
    }
L_089B03E8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B03EC;
L_089B03EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0400:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B0408;
    }
L_089B0408:
    aot_gpr[31] = (0x089B0410u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B0410u) goto L_089B0410;
    return;
L_089B0410:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_089B0420;
    }
    goto L_089B0418;
L_089B0418:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089B03EC;
L_089B0420:
    aot_gpr[31] = (0x089B0428u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089B0428u) goto L_089B0428;
    return;
L_089B0428:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B0430;
    }
L_089B0430:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B043Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089B043Cu) goto L_089B043C;
    return;
L_089B043C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B0444;
    }
L_089B0444:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_089B0458;
    }
    goto L_089B0450;
L_089B0450:
    aot_gpr[2] = (0u + 0u);
    goto L_089B03EC;
L_089B0458:
    aot_gpr[31] = (0x089B0460u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B0460u) goto L_089B0460;
    return;
L_089B0460:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B0468;
    }
L_089B0468:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B0474u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B0474u) goto L_089B0474;
    return;
L_089B0474:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B047C;
    }
L_089B047C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B04E0;
      }
      goto L_089B048C;
    }
L_089B048C:
    aot_gpr[3] = (aot_gpr[3] & 255u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B049C;
    }
L_089B049C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B04A8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B04A8u) goto L_089B04A8;
    return;
L_089B04A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B04B0;
    }
L_089B04B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B04BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B04BCu) goto L_089B04BC;
    return;
L_089B04BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B04C4;
    }
L_089B04C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B04D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B04D0u) goto L_089B04D0;
    return;
L_089B04D0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (0u + 0u);
        goto L_089B03EC;
    }
    goto L_089B04D8;
L_089B04D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089B03EC;
L_089B04E0:
    aot_gpr[31] = (0x089B04E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B04E8u) goto L_089B04E8;
    return;
L_089B04E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_089B03EC;
      }
      goto L_089B04F0;
    }
L_089B04F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    goto L_089B048C;
L_089B04F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
      if (branch_taken) {
          goto L_089B053C;
      }
      goto L_089B051C;
    }
L_089B051C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B0520;
L_089B0520:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B053C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B0520;
      }
      goto L_089B0544;
    }
L_089B0544:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[9]);
    aot_gpr[31] = (0x089B0584u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    goto L_089B03CC;
L_089B0584:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089B0594;
    }
    goto L_089B058C;
L_089B058C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089B0520;
L_089B0594:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[2] - aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[3] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x089B05CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B05CCu) goto L_089B05CC;
    return;
L_089B05CC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
        goto L_089B0520;
    }
    goto L_089B05D4;
L_089B05D4:
    if (aot_gpr[19] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_089B0630;
    }
    goto L_089B05DC;
L_089B05DC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_089B05E4;
L_089B05E4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[8] = (aot_gpr[8] ^ 1u);
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    if (aot_gpr[8] != 0u) aot_gpr[10] = (0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B0620u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0620u) goto L_089B0620;
    return;
L_089B0620:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-5));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_089B0520;
L_089B0630:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[18] = (aot_gpr[2] - aot_gpr[18]);
    aot_gpr[31] = (0x089B0644u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x089B0644u) goto L_089B0644;
    return;
L_089B0644:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_089B05E4;
L_089B064C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B06C0;
      }
      goto L_089B068C;
    }
L_089B068C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089B0694;
L_089B0694:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B06C0:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-15120));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089B068C;
      }
      goto L_089B06D0;
    }
L_089B06D0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089B06DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B06DCu) goto L_089B06DC;
    return;
L_089B06DC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089B06F4u);
    aot_gpr[4] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B06F4u) goto L_089B06F4;
    return;
L_089B06F4:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089B0700u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0700u) goto L_089B0700;
    return;
L_089B0700:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089B0734u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    goto L_089B04F8;
L_089B0734:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089B0694;
L_089B073C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B0798;
      }
      goto L_089B076C;
    }
L_089B076C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0798:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-15120));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089B076C;
      }
      goto L_089B07A8;
    }
L_089B07A8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089B07B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B07B4u) goto L_089B07B4;
    return;
L_089B07B4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089B07CCu);
    aot_gpr[4] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B07CCu) goto L_089B07CC;
    return;
L_089B07CC:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x089B07D8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B07D8u) goto L_089B07D8;
    return;
L_089B07D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[31] = (0x089B0800u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089B04F8;
L_089B0800:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_089B0828:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0838;
      }
      goto L_089B0830;
    }
L_089B0830:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0838:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0830;
      }
      goto L_089B0840;
    }
L_089B0840:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    goto L_089B04F8;
L_089B085C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B0890;
      }
      goto L_089B0878;
    }
L_089B0878:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B087C;
L_089B087C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0890:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_089B0878;
      }
      goto L_089B0898;
    }
L_089B0898:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15704)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B08A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B08A8u) goto L_089B08A8;
    return;
L_089B08A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089B087C;
      }
      goto L_089B08B4;
    }
L_089B08B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089B04F8;
L_089B08D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B0910;
      }
      goto L_089B08F4;
    }
L_089B08F4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B08F8;
L_089B08F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0910:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089B08F4;
      }
      goto L_089B091C;
    }
L_089B091C:
    aot_gpr[31] = (0x089B0924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0924u) goto L_089B0924;
    return;
L_089B0924:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(92));
    aot_gpr[31] = (0x089B0938u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089B0938u) goto L_089B0938;
    return;
L_089B0938:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[9]);
    aot_gpr[31] = (0x089B097Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[10]);
    goto L_089B03CC;
L_089B097C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B08F8;
      }
      goto L_089B0984;
    }
L_089B0984:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_089B08F8;
L_089B0998:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[2];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B09D0;
    }
L_089B09D0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_089B0A30;
      }
      goto L_089B09D8;
    }
L_089B09D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(92));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[9]);
    aot_gpr[31] = (0x089B0A1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0A1Cu) goto L_089B0A1C;
    return;
L_089B0A1C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089B0A28u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089B03CC;
L_089B0A28:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_089B0A5C;
    }
    goto L_089B0A30;
L_089B0A30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089B0A34;
L_089B0A34:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0A5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089B0A7Cu);
    aot_gpr[20] = (aot_gpr[2] - aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089B0A7Cu) goto L_089B0A7C;
    return;
L_089B0A7C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[10]);
      if (branch_taken) {
          goto L_089B0B24;
      }
      goto L_089B0AC8;
    }
L_089B0AC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089B0ACC;
L_089B0ACC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B0AD8;
L_089B0AD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0AFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089B0B08u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B0B08u) goto L_089B0B08;
    return;
L_089B0B08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B0A34;
      }
      goto L_089B0B10;
    }
L_089B0B10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B0AD8;
L_089B0B24:
    if (aot_gpr[20] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089B0ACC;
    }
    goto L_089B0B2C;
L_089B0B2C:
    aot_gpr[5] = (aot_gpr[10] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089B0B3Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B0B3Cu) goto L_089B0B3C;
    return;
L_089B0B3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B0A34;
      }
      goto L_089B0B44;
    }
L_089B0B44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B0AD8;
L_089B0B58:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-20048)));
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_089B0BB4;
    }
    goto L_089B0B70;
L_089B0B70:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089B0BB4;
      }
      goto L_089B0B78;
    }
L_089B0B78:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-20040));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089B0B84;
L_089B0B84:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B0BA0;
      }
      goto L_089B0B98;
    }
L_089B0B98:
    if (aot_gpr[6] != aot_gpr[4]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089B0B84;
    }
    goto L_089B0BA0;
L_089B0BA0:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(-20048));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0BB4:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(-20048));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0BC8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5140));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2203u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2203u << 16u);
    aot_gpr[31] = (0x089B0C00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0C00u) goto L_089B0C00;
    return;
L_089B0C00:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8660));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0C1Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0C1Cu) goto L_089B0C1C;
    return;
L_089B0C1C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17480));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0C38u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0C38u) goto L_089B0C38;
    return;
L_089B0C38:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6844));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0C54u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0C54u) goto L_089B0C54;
    return;
L_089B0C54:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4520));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(39));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0C70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0C70u) goto L_089B0C70;
    return;
L_089B0C70:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30428));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6768));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0C90u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0C90u) goto L_089B0C90;
    return;
L_089B0C90:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6664));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0CACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0CACu) goto L_089B0CAC;
    return;
L_089B0CAC:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30656));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6596));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0CCCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0CCCu) goto L_089B0CCC;
    return;
L_089B0CCC:
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(23384));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0CE4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0CE4u) goto L_089B0CE4;
    return;
L_089B0CE4:
    aot_gpr[16] = (2203u << 16u);
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(23484));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30948));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0D04u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0D04u) goto L_089B0D04;
    return;
L_089B0D04:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28832));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0D20u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0D20u) goto L_089B0D20;
    return;
L_089B0D20:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31340));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23672));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(89));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B0D40u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0D40u) goto L_089B0D40;
    return;
L_089B0D40:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22696));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0D5Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0D5Cu) goto L_089B0D5C;
    return;
L_089B0D5C:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31800));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22572));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0D7Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0D7Cu) goto L_089B0D7C;
    return;
L_089B0D7C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21960));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(15));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0D98u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0D98u) goto L_089B0D98;
    return;
L_089B0D98:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31856));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0DB4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0DB4u) goto L_089B0DB4;
    return;
L_089B0DB4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21860));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0DD0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0DD0u) goto L_089B0DD0;
    return;
L_089B0DD0:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31912));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(18));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0DECu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0DECu) goto L_089B0DEC;
    return;
L_089B0DEC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-23020));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(19));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0E08u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E08u) goto L_089B0E08;
    return;
L_089B0E08:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28880));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0E24u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E24u) goto L_089B0E24;
    return;
L_089B0E24:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22764));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(21));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0E40u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E40u) goto L_089B0E40;
    return;
L_089B0E40:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31744));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(22));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0E5Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E5Cu) goto L_089B0E5C;
    return;
L_089B0E5C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22936));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(23));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0E78u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E78u) goto L_089B0E78;
    return;
L_089B0E78:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28824));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22852));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0E98u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E98u) goto L_089B0E98;
    return;
L_089B0E98:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20320));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0EB4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0EB4u) goto L_089B0EB4;
    return;
L_089B0EB4:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(23484));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31968));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(26));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B0ED0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0ED0u) goto L_089B0ED0;
    return;
L_089B0ED0:
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(23384));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(74));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0EE8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0EE8u) goto L_089B0EE8;
    return;
L_089B0EE8:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(23484));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32116));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(75));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B0F04u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0F04u) goto L_089B0F04;
    return;
L_089B0F04:
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(23384));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(76));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0F1Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0F1Cu) goto L_089B0F1C;
    return;
L_089B0F1C:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(23484));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32172));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(77));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B0F38u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0F38u) goto L_089B0F38;
    return;
L_089B0F38:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22484));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(78));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0F54u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0F54u) goto L_089B0F54;
    return;
L_089B0F54:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32316));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22400));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(79));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B0F74u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0F74u) goto L_089B0F74;
    return;
L_089B0F74:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22312));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0F90u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0F90u) goto L_089B0F90;
    return;
L_089B0F90:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32372));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22220));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(81));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B0FB0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0FB0u) goto L_089B0FB0;
    return;
L_089B0FB0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22144));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(82));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B0FCCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0FCCu) goto L_089B0FCC;
    return;
L_089B0FCC:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32428));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-22076));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(83));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B0FECu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B0FECu) goto L_089B0FEC;
    return;
L_089B0FEC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11588));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(27));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x089B1000u; return;
}

void recomp_unit_0428(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0428_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_428(Runtime &runtime) {
    runtime.register_generated_unit(428u, 0x089B0000u, 4096u, &recomp_unit_0428, &recomp_unit_0428_entry);
    runtime.register_function(0x089B0000u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0004u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B007Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B00ACu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B00B8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B00C0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B00DCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B00E4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0120u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B014Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0178u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01ACu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01B8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01C0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01D0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01D8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01E0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01F0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B01FCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0204u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B020Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0214u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B021Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0224u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B022Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0230u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0238u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0248u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0250u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0254u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B025Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0268u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0270u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0278u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B02B0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B02DCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0310u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0330u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0334u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B034Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0358u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0360u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0374u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B03C4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B03CCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B03E8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B03ECu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0400u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0408u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0410u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0418u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0420u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0428u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0430u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B043Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0444u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0450u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0458u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0460u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0468u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0474u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B047Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B048Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B049Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04A8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04B0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04BCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04C4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04D0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04D8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04E0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04E8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04F0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B04F8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B051Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0520u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B053Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0544u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0584u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B058Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0594u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B05CCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B05D4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B05DCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B05E4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0620u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0630u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0644u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B064Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B068Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0694u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B06C0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B06D0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B06DCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B06F4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0700u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0734u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B073Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B076Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0798u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B07A8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B07B4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B07CCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B07D8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0800u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0828u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0830u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0838u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0840u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B085Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0878u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B087Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0890u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0898u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B08A8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B08B4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B08D8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B08F4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B08F8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0910u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B091Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0924u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0938u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B097Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0984u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0998u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B09D0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B09D8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0A1Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0A28u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0A30u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0A34u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0A5Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0A7Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0AC8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0ACCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0AD8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0AFCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B08u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B10u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B24u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B2Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B3Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B44u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B58u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B70u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B78u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B84u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0B98u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0BA0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0BB4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0BC8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0C00u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0C1Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0C38u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0C54u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0C70u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0C90u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0CACu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0CCCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0CE4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0D04u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0D20u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0D40u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0D5Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0D7Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0D98u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0DB4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0DD0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0DECu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0E08u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0E24u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0E40u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0E5Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0E78u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0E98u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0EB4u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0ED0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0EE8u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0F04u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0F1Cu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0F38u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0F54u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0F74u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0F90u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0FB0u, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0FCCu, &recomp_unit_0428, "recomp_unit_0428");
    runtime.register_function(0x089B0FECu, &recomp_unit_0428, "recomp_unit_0428");
}
} // namespace psprecomp
