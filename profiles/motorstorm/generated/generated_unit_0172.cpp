#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0172[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 22, 0, 0, 0, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 42, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57,
    58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    86, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 121, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    126, 0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 161, 0, 0, 162, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    166, 0, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 173, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0,
    182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B0000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0172[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B0000;
    case 2u: goto L_088B0008;
    case 3u: goto L_088B0020;
    case 4u: goto L_088B0024;
    case 5u: goto L_088B0040;
    case 6u: goto L_088B0054;
    case 7u: goto L_088B006C;
    case 8u: goto L_088B0090;
    case 9u: goto L_088B00A8;
    case 10u: goto L_088B00AC;
    case 11u: goto L_088B00BC;
    case 12u: goto L_088B00D4;
    case 13u: goto L_088B00E8;
    case 14u: goto L_088B0100;
    case 15u: goto L_088B0118;
    case 16u: goto L_088B0120;
    case 17u: goto L_088B013C;
    case 18u: goto L_088B0144;
    case 19u: goto L_088B015C;
    case 20u: goto L_088B0160;
    case 21u: goto L_088B0180;
    case 22u: goto L_088B0188;
    case 23u: goto L_088B01A0;
    case 24u: goto L_088B01A4;
    case 25u: goto L_088B01C4;
    case 26u: goto L_088B01CC;
    case 27u: goto L_088B01F8;
    case 28u: goto L_088B01FC;
    case 29u: goto L_088B0208;
    case 30u: goto L_088B0224;
    case 31u: goto L_088B023C;
    case 32u: goto L_088B024C;
    case 33u: goto L_088B0258;
    case 34u: goto L_088B0270;
    case 35u: goto L_088B0288;
    case 36u: goto L_088B02A8;
    case 37u: goto L_088B02AC;
    case 38u: goto L_088B02BC;
    case 39u: goto L_088B02CC;
    case 40u: goto L_088B02D4;
    case 41u: goto L_088B02DC;
    case 42u: goto L_088B02E0;
    case 43u: goto L_088B02E8;
    case 44u: goto L_088B030C;
    case 45u: goto L_088B0318;
    case 46u: goto L_088B0324;
    case 47u: goto L_088B0328;
    case 48u: goto L_088B0338;
    case 49u: goto L_088B0344;
    case 50u: goto L_088B0370;
    case 51u: goto L_088B0374;
    case 52u: goto L_088B0390;
    case 53u: goto L_088B03A4;
    case 54u: goto L_088B03BC;
    case 55u: goto L_088B03D8;
    case 56u: goto L_088B03EC;
    case 57u: goto L_088B03FC;
    case 58u: goto L_088B0400;
    case 59u: goto L_088B0410;
    case 60u: goto L_088B0428;
    case 61u: goto L_088B0430;
    case 62u: goto L_088B043C;
    case 63u: goto L_088B0464;
    case 64u: goto L_088B0488;
    case 65u: goto L_088B04AC;
    case 66u: goto L_088B04B8;
    case 67u: goto L_088B04C4;
    case 68u: goto L_088B04C8;
    case 69u: goto L_088B04F8;
    case 70u: goto L_088B051C;
    case 71u: goto L_088B0528;
    case 72u: goto L_088B0538;
    case 73u: goto L_088B053C;
    case 74u: goto L_088B056C;
    case 75u: goto L_088B0590;
    case 76u: goto L_088B059C;
    case 77u: goto L_088B05AC;
    case 78u: goto L_088B05B0;
    case 79u: goto L_088B05E0;
    case 80u: goto L_088B0604;
    case 81u: goto L_088B0610;
    case 82u: goto L_088B061C;
    case 83u: goto L_088B0620;
    case 84u: goto L_088B0650;
    case 85u: goto L_088B0674;
    case 86u: goto L_088B0680;
    case 87u: goto L_088B068C;
    case 88u: goto L_088B0690;
    case 89u: goto L_088B06C0;
    case 90u: goto L_088B06E4;
    case 91u: goto L_088B06F0;
    case 92u: goto L_088B06FC;
    case 93u: goto L_088B0700;
    case 94u: goto L_088B0730;
    case 95u: goto L_088B0754;
    case 96u: goto L_088B0760;
    case 97u: goto L_088B076C;
    case 98u: goto L_088B0770;
    case 99u: goto L_088B07A0;
    case 100u: goto L_088B07C4;
    case 101u: goto L_088B07D0;
    case 102u: goto L_088B07DC;
    case 103u: goto L_088B07E0;
    case 104u: goto L_088B0810;
    case 105u: goto L_088B0834;
    case 106u: goto L_088B0840;
    case 107u: goto L_088B084C;
    case 108u: goto L_088B0850;
    case 109u: goto L_088B0880;
    case 110u: goto L_088B08A4;
    case 111u: goto L_088B08B0;
    case 112u: goto L_088B08BC;
    case 113u: goto L_088B08C0;
    case 114u: goto L_088B08F0;
    case 115u: goto L_088B0914;
    case 116u: goto L_088B0920;
    case 117u: goto L_088B092C;
    case 118u: goto L_088B0930;
    case 119u: goto L_088B0960;
    case 120u: goto L_088B0984;
    case 121u: goto L_088B0990;
    case 122u: goto L_088B099C;
    case 123u: goto L_088B09A0;
    case 124u: goto L_088B09D0;
    case 125u: goto L_088B09F4;
    case 126u: goto L_088B0A00;
    case 127u: goto L_088B0A0C;
    case 128u: goto L_088B0A10;
    case 129u: goto L_088B0A40;
    case 130u: goto L_088B0A64;
    case 131u: goto L_088B0A70;
    case 132u: goto L_088B0A7C;
    case 133u: goto L_088B0A80;
    case 134u: goto L_088B0AB0;
    case 135u: goto L_088B0AD4;
    case 136u: goto L_088B0AE0;
    case 137u: goto L_088B0AEC;
    case 138u: goto L_088B0AF0;
    case 139u: goto L_088B0B20;
    case 140u: goto L_088B0B44;
    case 141u: goto L_088B0B50;
    case 142u: goto L_088B0B5C;
    case 143u: goto L_088B0B60;
    case 144u: goto L_088B0B90;
    case 145u: goto L_088B0BB4;
    case 146u: goto L_088B0BC0;
    case 147u: goto L_088B0BCC;
    case 148u: goto L_088B0BD0;
    case 149u: goto L_088B0C00;
    case 150u: goto L_088B0C24;
    case 151u: goto L_088B0C30;
    case 152u: goto L_088B0C3C;
    case 153u: goto L_088B0C40;
    case 154u: goto L_088B0C70;
    case 155u: goto L_088B0C94;
    case 156u: goto L_088B0CA0;
    case 157u: goto L_088B0CAC;
    case 158u: goto L_088B0CB0;
    case 159u: goto L_088B0CE0;
    case 160u: goto L_088B0D04;
    case 161u: goto L_088B0D10;
    case 162u: goto L_088B0D1C;
    case 163u: goto L_088B0D20;
    case 164u: goto L_088B0D50;
    case 165u: goto L_088B0D74;
    case 166u: goto L_088B0D80;
    case 167u: goto L_088B0D8C;
    case 168u: goto L_088B0D90;
    case 169u: goto L_088B0DBC;
    case 170u: goto L_088B0DD8;
    case 171u: goto L_088B0ECC;
    case 172u: goto L_088B0EF0;
    case 173u: goto L_088B0F04;
    case 174u: goto L_088B0F08;
    case 175u: goto L_088B0F1C;
    case 176u: goto L_088B0F30;
    case 177u: goto L_088B0F48;
    case 178u: goto L_088B0F60;
    case 179u: goto L_088B0F68;
    case 180u: goto L_088B0F70;
    case 181u: goto L_088B0F78;
    case 182u: goto L_088B0F80;
    case 183u: goto L_088B0F88;
    case 184u: goto L_088B0F90;
    case 185u: goto L_088B0F98;
    case 186u: goto L_088B0FA0;
    case 187u: goto L_088B0FA8;
    case 188u: goto L_088B0FB0;
    case 189u: goto L_088B0FB8;
    case 190u: goto L_088B0FC0;
    case 191u: goto L_088B0FC8;
    case 192u: goto L_088B0FD0;
    case 193u: goto L_088B0FDC;
    case 194u: goto L_088B0FE4;
    case 195u: goto L_088B0FEC;
    case 196u: goto L_088B0FF4;
    case 197u: goto L_088B0FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B0000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0054;
      }
      goto L_088B0008;
    }
L_088B0008:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B0054;
      }
      goto L_088B0020;
    }
L_088B0020:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-24032));
    goto L_088B0024;
L_088B0024:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088B0040u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0040u) goto L_088B0040;
    return;
L_088B0040:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0024;
      }
      goto L_088B0054;
    }
L_088B0054:
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
L_088B006C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B00E8;
      }
      goto L_088B0090;
    }
L_088B0090:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B00E8;
      }
      goto L_088B00A8;
    }
L_088B00A8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-24032));
    goto L_088B00AC;
L_088B00AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B00D4;
      }
      goto L_088B00BC;
    }
L_088B00BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088B00D4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B00D4u) goto L_088B00D4;
    return;
L_088B00D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B00AC;
      }
      goto L_088B00E8;
    }
L_088B00E8:
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
L_088B0100:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(27408)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B013C;
      }
      goto L_088B0118;
    }
L_088B0118:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24032));
    goto L_088B0120;
L_088B0120:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(27408)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0120;
      }
      goto L_088B013C;
    }
L_088B013C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0144:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27408)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B0180;
      }
      goto L_088B015C;
    }
L_088B015C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24032));
    goto L_088B0160;
L_088B0160:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(31)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27408)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0160;
      }
      goto L_088B0180;
    }
L_088B0180:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0188:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27408)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B01C4;
      }
      goto L_088B01A0;
    }
L_088B01A0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24032));
    goto L_088B01A4;
L_088B01A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27408)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B01A4;
      }
      goto L_088B01C4;
    }
L_088B01C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B01CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B023C;
      }
      goto L_088B01F8;
    }
L_088B01F8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-24032));
    goto L_088B01FC;
L_088B01FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0224;
      }
      goto L_088B0208;
    }
L_088B0208:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B0224u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0224u) goto L_088B0224;
    return;
L_088B0224:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B01FC;
      }
      goto L_088B023C;
    }
L_088B023C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0258;
      }
      goto L_088B024C;
    }
L_088B024C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088B0258u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0258u) goto L_088B0258;
    return;
L_088B0258:
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
L_088B0270:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27404)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0288:
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27408)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B02DC;
      }
      goto L_088B02A8;
    }
L_088B02A8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24032));
    goto L_088B02AC;
L_088B02AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B02D4;
      }
      goto L_088B02BC;
    }
L_088B02BC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B02AC;
      }
      goto L_088B02CC;
    }
L_088B02CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B02DC;
      }
      goto L_088B02D4;
    }
L_088B02D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B02E0;
      }
      goto L_088B02DC;
    }
L_088B02DC:
    aot_gpr[2] = (0u | 0u);
    goto L_088B02E0;
L_088B02E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B02E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[5] << 24u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 24u));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_088B0338;
      }
      goto L_088B030C;
    }
L_088B030C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x088B0318u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_088B0288;
L_088B0318:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0328;
      }
      goto L_088B0324;
    }
L_088B0324:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[10]));
    goto L_088B0328;
L_088B0328:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B030C;
      }
      goto L_088B0338;
    }
L_088B0338:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0344:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_088B03A4;
      }
      goto L_088B0370;
    }
L_088B0370:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-24032));
    goto L_088B0374;
L_088B0374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088B0390u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0390u) goto L_088B0390;
    return;
L_088B0390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27408)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0374;
      }
      goto L_088B03A4;
    }
L_088B03A4:
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
L_088B03BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B03EC;
      }
      goto L_088B03D8;
    }
L_088B03D8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088B03ECu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 55u, 0x088B3500u>(ctx, &aot_mem) && ctx.pc == 0x088B03ECu) goto L_088B03EC;
    return;
L_088B03EC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27472)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0400;
      }
      goto L_088B03FC;
    }
L_088B03FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088B0400;
L_088B0400:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0410:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27472)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0430;
      }
      goto L_088B0428;
    }
L_088B0428:
    aot_gpr[31] = (0x088B0430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 76u, 0x088B269Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0430u) goto L_088B0430;
    return;
L_088B0430:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B043C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0464;
    }
L_088B0464:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[19] = (2219u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(29232)));
    jump_target = aot_gpr[1];
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-24032));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B04ACu);
    aot_gpr[6] = (0u | 224u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B04ACu) goto L_088B04AC;
    return;
L_088B04AC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B04C8;
      }
      goto L_088B04B8;
    }
L_088B04B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B04C4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 90u, 0x088AC90Cu>(ctx, &aot_mem) && ctx.pc == 0x088B04C4u) goto L_088B04C4;
    return;
L_088B04C4:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B04C8;
L_088B04C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27412), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B04F8;
    }
L_088B04F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B051Cu);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B051Cu) goto L_088B051C;
    return;
L_088B051C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B053C;
      }
      goto L_088B0528;
    }
L_088B0528:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B0538u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 101u, 0x088B1474u>(ctx, &aot_mem) && ctx.pc == 0x088B0538u) goto L_088B0538;
    return;
L_088B0538:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B053C;
L_088B053C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27416), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B056C;
    }
L_088B056C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0590u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0590u) goto L_088B0590;
    return;
L_088B0590:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B05B0;
      }
      goto L_088B059C;
    }
L_088B059C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B05ACu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 101u, 0x088B1474u>(ctx, &aot_mem) && ctx.pc == 0x088B05ACu) goto L_088B05AC;
    return;
L_088B05AC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B05B0;
L_088B05B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27420), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B05E0;
    }
L_088B05E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0604u);
    aot_gpr[6] = (0u | 168u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0604u) goto L_088B0604;
    return;
L_088B0604:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0620;
      }
      goto L_088B0610;
    }
L_088B0610:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B061Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 5u, 0x088B309Cu>(ctx, &aot_mem) && ctx.pc == 0x088B061Cu) goto L_088B061C;
    return;
L_088B061C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0620;
L_088B0620:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27424), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0650;
    }
L_088B0650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0674u);
    aot_gpr[6] = (0u | 164u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0674u) goto L_088B0674;
    return;
L_088B0674:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0690;
      }
      goto L_088B0680;
    }
L_088B0680:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B068Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 122u, 0x088AB920u>(ctx, &aot_mem) && ctx.pc == 0x088B068Cu) goto L_088B068C;
    return;
L_088B068C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0690;
L_088B0690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27428), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B06C0;
    }
L_088B06C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B06E4u);
    aot_gpr[6] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B06E4u) goto L_088B06E4;
    return;
L_088B06E4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0700;
      }
      goto L_088B06F0;
    }
L_088B06F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B06FCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 30u, 0x088B4300u>(ctx, &aot_mem) && ctx.pc == 0x088B06FCu) goto L_088B06FC;
    return;
L_088B06FC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0700;
L_088B0700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27432), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0730;
    }
L_088B0730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0754u);
    aot_gpr[6] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0754u) goto L_088B0754;
    return;
L_088B0754:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0770;
      }
      goto L_088B0760;
    }
L_088B0760:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B076Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 21u, 0x088AE2E0u>(ctx, &aot_mem) && ctx.pc == 0x088B076Cu) goto L_088B076C;
    return;
L_088B076C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0770;
L_088B0770:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27436), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B07A0;
    }
L_088B07A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B07C4u);
    aot_gpr[6] = (0u | 236u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B07C4u) goto L_088B07C4;
    return;
L_088B07C4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B07E0;
      }
      goto L_088B07D0;
    }
L_088B07D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B07DCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 204u, 0x088ABFD0u>(ctx, &aot_mem) && ctx.pc == 0x088B07DCu) goto L_088B07DC;
    return;
L_088B07DC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B07E0;
L_088B07E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27440), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0810;
    }
L_088B0810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0834u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0834u) goto L_088B0834;
    return;
L_088B0834:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0850;
      }
      goto L_088B0840;
    }
L_088B0840:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B084Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 22u, 0x088AF218u>(ctx, &aot_mem) && ctx.pc == 0x088B084Cu) goto L_088B084C;
    return;
L_088B084C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0850;
L_088B0850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27444), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0880;
    }
L_088B0880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B08A4u);
    aot_gpr[6] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B08A4u) goto L_088B08A4;
    return;
L_088B08A4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B08C0;
      }
      goto L_088B08B0;
    }
L_088B08B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B08BCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 152u, 0x088B3EA8u>(ctx, &aot_mem) && ctx.pc == 0x088B08BCu) goto L_088B08BC;
    return;
L_088B08BC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B08C0;
L_088B08C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27448), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B08F0;
    }
L_088B08F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0914u);
    aot_gpr[6] = (0u | 172u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0914u) goto L_088B0914;
    return;
L_088B0914:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0930;
      }
      goto L_088B0920;
    }
L_088B0920:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B092Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 89u, 0x088B388Cu>(ctx, &aot_mem) && ctx.pc == 0x088B092Cu) goto L_088B092C;
    return;
L_088B092C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0930;
L_088B0930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27452), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0960;
    }
L_088B0960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0984u);
    aot_gpr[6] = (0u | 172u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0984u) goto L_088B0984;
    return;
L_088B0984:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B09A0;
      }
      goto L_088B0990;
    }
L_088B0990:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B099Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 97u, 0x088B28DCu>(ctx, &aot_mem) && ctx.pc == 0x088B099Cu) goto L_088B099C;
    return;
L_088B099C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B09A0;
L_088B09A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27456), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B09D0;
    }
L_088B09D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B09F4u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B09F4u) goto L_088B09F4;
    return;
L_088B09F4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0A10;
      }
      goto L_088B0A00;
    }
L_088B0A00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0A0Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 80u, 0x088AE97Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0A0Cu) goto L_088B0A0C;
    return;
L_088B0A0C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0A10;
L_088B0A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27460), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0A40;
    }
L_088B0A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0A64u);
    aot_gpr[6] = (0u | 168u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0A64u) goto L_088B0A64;
    return;
L_088B0A64:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0A80;
      }
      goto L_088B0A70;
    }
L_088B0A70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0A7Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 98u, 0x088AEB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0A7Cu) goto L_088B0A7C;
    return;
L_088B0A7C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0A80;
L_088B0A80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27464), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0AB0;
    }
L_088B0AB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0AD4u);
    aot_gpr[6] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0AD4u) goto L_088B0AD4;
    return;
L_088B0AD4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0AF0;
      }
      goto L_088B0AE0;
    }
L_088B0AE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0AECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 130u, 0x088AFBC4u>(ctx, &aot_mem) && ctx.pc == 0x088B0AECu) goto L_088B0AEC;
    return;
L_088B0AEC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0AF0;
L_088B0AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27468), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0B20;
    }
L_088B0B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0B44u);
    aot_gpr[6] = (0u | 208u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0B44u) goto L_088B0B44;
    return;
L_088B0B44:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0B60;
      }
      goto L_088B0B50;
    }
L_088B0B50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0B5Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 19u, 0x088B2190u>(ctx, &aot_mem) && ctx.pc == 0x088B0B5Cu) goto L_088B0B5C;
    return;
L_088B0B5C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0B60;
L_088B0B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27472), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0B90;
    }
L_088B0B90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0BB4u);
    aot_gpr[6] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0BB4u) goto L_088B0BB4;
    return;
L_088B0BB4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0BD0;
      }
      goto L_088B0BC0;
    }
L_088B0BC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0BCCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 98u, 0x088AF808u>(ctx, &aot_mem) && ctx.pc == 0x088B0BCCu) goto L_088B0BCC;
    return;
L_088B0BCC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0BD0;
L_088B0BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27476), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0C00;
    }
L_088B0C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0C24u);
    aot_gpr[6] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0C24u) goto L_088B0C24;
    return;
L_088B0C24:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0C40;
      }
      goto L_088B0C30;
    }
L_088B0C30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0C3Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 186u, 0x088B1C8Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0C3Cu) goto L_088B0C3C;
    return;
L_088B0C3C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0C40;
L_088B0C40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27480), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0C70;
    }
L_088B0C70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0C94u);
    aot_gpr[6] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0C94u) goto L_088B0C94;
    return;
L_088B0C94:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0CB0;
      }
      goto L_088B0CA0;
    }
L_088B0CA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0CACu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 212u, 0x088B1EC0u>(ctx, &aot_mem) && ctx.pc == 0x088B0CACu) goto L_088B0CAC;
    return;
L_088B0CAC:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0CB0;
L_088B0CB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27484), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0CE0;
    }
L_088B0CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0D04u);
    aot_gpr[6] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0D04u) goto L_088B0D04;
    return;
L_088B0D04:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0D20;
      }
      goto L_088B0D10;
    }
L_088B0D10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0D1Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 65u, 0x088AC66Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0D1Cu) goto L_088B0D1C;
    return;
L_088B0D1C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0D20;
L_088B0D20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27488), aot_gpr[4]);
      if (branch_taken) {
          goto L_088B0DBC;
      }
      goto L_088B0D50;
    }
L_088B0D50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088B0D74u);
    aot_gpr[6] = (0u | 148u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B0D74u) goto L_088B0D74;
    return;
L_088B0D74:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088B0D90;
      }
      goto L_088B0D80;
    }
L_088B0D80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27404)));
    aot_gpr[31] = (0x088B0D8Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 8u, 0x088B4104u>(ctx, &aot_mem) && ctx.pc == 0x088B0D8Cu) goto L_088B0D8C;
    return;
L_088B0D8C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088B0D90;
L_088B0D90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(27408)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(27408), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27492), aot_gpr[4]);
    goto L_088B0DBC;
L_088B0DBC:
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
L_088B0DD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27412), 0u);
    aot_gpr[20] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(27416), 0u);
    aot_gpr[22] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(27420), 0u);
    aot_gpr[23] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(27424), 0u);
    aot_gpr[30] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(27428), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27432), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27436), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27440), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27444), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27448), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27452), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27456), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27460), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27464), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27468), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27472), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27476), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27480), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27484), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27488), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27492), 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x088B0ECCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29200));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088B0ECCu) goto L_088B0ECC;
    return;
L_088B0ECC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (2219u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-24032));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B0F08;
      }
      goto L_088B0EF0;
    }
L_088B0EF0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B0F04u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x088AF5F4u>(ctx, &aot_mem) && ctx.pc == 0x088B0F04u) goto L_088B0F04;
    return;
L_088B0F04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B0F08;
L_088B0F08:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(27404), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088B0F1C;
L_088B0F1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0F1C;
      }
      goto L_088B0F30;
    }
L_088B0F30:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(27408), 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 72u, 0x088B123Cu>(ctx, &aot_mem); return;
      }
      goto L_088B0F48;
    }
L_088B0F48:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[6]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(29320)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 72u, 0x088B123Cu>(ctx, &aot_mem); return;
      }
      goto L_088B0F68;
    }
L_088B0F68:
    aot_gpr[31] = (0x088B0F70u);
    aot_gpr[4] = (0u | 1u);
    goto L_088B043C;
L_088B0F70:
    aot_gpr[31] = (0x088B0F78u);
    aot_gpr[4] = (0u | 17u);
    goto L_088B043C;
L_088B0F78:
    aot_gpr[31] = (0x088B0F80u);
    aot_gpr[4] = (0u | 18u);
    goto L_088B043C;
L_088B0F80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 72u, 0x088B123Cu>(ctx, &aot_mem); return;
      }
      goto L_088B0F88;
    }
L_088B0F88:
    aot_gpr[31] = (0x088B0F90u);
    aot_gpr[4] = (0u | 1u);
    goto L_088B043C;
L_088B0F90:
    aot_gpr[31] = (0x088B0F98u);
    aot_gpr[4] = (0u | 4u);
    goto L_088B043C;
L_088B0F98:
    aot_gpr[31] = (0x088B0FA0u);
    aot_gpr[4] = (0u | 6u);
    goto L_088B043C;
L_088B0FA0:
    aot_gpr[31] = (0x088B0FA8u);
    aot_gpr[4] = (0u | 8u);
    goto L_088B043C;
L_088B0FA8:
    aot_gpr[31] = (0x088B0FB0u);
    aot_gpr[4] = (0u | 11u);
    goto L_088B043C;
L_088B0FB0:
    aot_gpr[31] = (0x088B0FB8u);
    aot_gpr[4] = (0u | 15u);
    goto L_088B043C;
L_088B0FB8:
    aot_gpr[31] = (0x088B0FC0u);
    aot_gpr[4] = (0u | 17u);
    goto L_088B043C;
L_088B0FC0:
    aot_gpr[31] = (0x088B0FC8u);
    aot_gpr[4] = (0u | 18u);
    goto L_088B043C;
L_088B0FC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7488)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 72u, 0x088B123Cu>(ctx, &aot_mem); return;
      }
      goto L_088B0FD0;
    }
L_088B0FD0:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 12u, 0x088B105Cu>(ctx, &aot_mem); return;
      }
      goto L_088B0FDC;
    }
L_088B0FDC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 34u, 0x088B110Cu>(ctx, &aot_mem); return;
      }
      goto L_088B0FE4;
    }
L_088B0FE4:
    aot_gpr[31] = (0x088B0FECu);
    aot_gpr[4] = (0u | 1u);
    goto L_088B043C;
L_088B0FEC:
    aot_gpr[31] = (0x088B0FF4u);
    aot_gpr[4] = (0u | 7u);
    goto L_088B043C;
L_088B0FF4:
    aot_gpr[31] = (0x088B0FFCu);
    aot_gpr[4] = (0u | 2u);
    goto L_088B043C;
L_088B0FFC:
    aot_gpr[31] = (0x088B1004u);
    aot_gpr[4] = (0u | 3u);
    goto L_088B043C;
}

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x088B0000u, 4096u, &recomp_unit_0172, &recomp_unit_0172_entry);
    runtime.register_function(0x088B0000u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0008u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0020u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0024u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0040u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B006Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0090u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B00A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B00ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B00BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B00D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B00E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0100u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0118u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0120u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B013Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0144u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B015Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0160u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0180u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0188u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B01A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B01A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B01C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B01CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B01F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B01FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0208u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B023Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B024Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0270u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0288u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B02E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B030Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0318u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0324u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0328u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0338u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0344u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0370u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0374u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0390u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B03A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B03BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B03D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B03ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B03FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0400u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0410u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0428u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0430u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B043Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0464u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0488u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B04ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B04B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B04C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B04C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B04F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B051Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0528u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0538u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B053Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B056Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0590u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B059Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B05ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B05B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B05E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0610u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B061Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0620u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0650u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0674u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0680u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B068Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B06C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B06E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B06F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B06FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0700u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0730u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0754u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0760u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B076Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0770u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B07A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B07C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B07D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B07DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B07E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0810u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0834u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0840u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B084Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0850u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0880u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B08A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B08B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B08BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B08C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B08F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0914u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0920u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B092Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0930u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0960u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0984u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0990u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B099Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B09A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B09D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B09F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0A80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0AB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0AD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0AE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0AECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0AF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0B20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0B44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0B50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0B5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0B60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0B90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0BB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0BC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0BCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0C94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0CA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0CACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0CB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0CE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0D90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0DBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0DD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0ECCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0EF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0F98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x088B0FFCu, &recomp_unit_0172, "recomp_unit_0172");
}
} // namespace psprecomp
