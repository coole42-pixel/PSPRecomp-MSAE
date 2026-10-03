#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0412[1024] = {
    1, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 8, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0,
    37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 72, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 98, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103,
    0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0,
    137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154,
    0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0,
    173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183,
    0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0,
    213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225,
    0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0,
    235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 240, 0, 241, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 249, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 257,
};
void recomp_unit_0412_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A0000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0412[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A0000;
    case 2u: goto L_089A0004;
    case 3u: goto L_089A0014;
    case 4u: goto L_089A0020;
    case 5u: goto L_089A0028;
    case 6u: goto L_089A0030;
    case 7u: goto L_089A004C;
    case 8u: goto L_089A0050;
    case 9u: goto L_089A0054;
    case 10u: goto L_089A0068;
    case 11u: goto L_089A0078;
    case 12u: goto L_089A0084;
    case 13u: goto L_089A009C;
    case 14u: goto L_089A00E0;
    case 15u: goto L_089A0108;
    case 16u: goto L_089A0110;
    case 17u: goto L_089A011C;
    case 18u: goto L_089A0124;
    case 19u: goto L_089A012C;
    case 20u: goto L_089A0144;
    case 21u: goto L_089A014C;
    case 22u: goto L_089A0150;
    case 23u: goto L_089A0178;
    case 24u: goto L_089A0180;
    case 25u: goto L_089A0198;
    case 26u: goto L_089A01A8;
    case 27u: goto L_089A01E4;
    case 28u: goto L_089A01EC;
    case 29u: goto L_089A01F4;
    case 30u: goto L_089A01FC;
    case 31u: goto L_089A0204;
    case 32u: goto L_089A0234;
    case 33u: goto L_089A0250;
    case 34u: goto L_089A0258;
    case 35u: goto L_089A0264;
    case 36u: goto L_089A026C;
    case 37u: goto L_089A0280;
    case 38u: goto L_089A0288;
    case 39u: goto L_089A02A8;
    case 40u: goto L_089A02AC;
    case 41u: goto L_089A02B4;
    case 42u: goto L_089A02D4;
    case 43u: goto L_089A02E8;
    case 44u: goto L_089A02F0;
    case 45u: goto L_089A0300;
    case 46u: goto L_089A0308;
    case 47u: goto L_089A0318;
    case 48u: goto L_089A0328;
    case 49u: goto L_089A032C;
    case 50u: goto L_089A0334;
    case 51u: goto L_089A0348;
    case 52u: goto L_089A0380;
    case 53u: goto L_089A0388;
    case 54u: goto L_089A03AC;
    case 55u: goto L_089A03B4;
    case 56u: goto L_089A03C4;
    case 57u: goto L_089A03CC;
    case 58u: goto L_089A03F4;
    case 59u: goto L_089A0404;
    case 60u: goto L_089A0440;
    case 61u: goto L_089A0444;
    case 62u: goto L_089A044C;
    case 63u: goto L_089A0474;
    case 64u: goto L_089A047C;
    case 65u: goto L_089A0484;
    case 66u: goto L_089A04A8;
    case 67u: goto L_089A04B0;
    case 68u: goto L_089A04C8;
    case 69u: goto L_089A04D0;
    case 70u: goto L_089A04E4;
    case 71u: goto L_089A04EC;
    case 72u: goto L_089A050C;
    case 73u: goto L_089A0510;
    case 74u: goto L_089A0518;
    case 75u: goto L_089A0534;
    case 76u: goto L_089A0564;
    case 77u: goto L_089A057C;
    case 78u: goto L_089A059C;
    case 79u: goto L_089A05D8;
    case 80u: goto L_089A0608;
    case 81u: goto L_089A061C;
    case 82u: goto L_089A062C;
    case 83u: goto L_089A063C;
    case 84u: goto L_089A0648;
    case 85u: goto L_089A0658;
    case 86u: goto L_089A0668;
    case 87u: goto L_089A0678;
    case 88u: goto L_089A0684;
    case 89u: goto L_089A06A0;
    case 90u: goto L_089A06AC;
    case 91u: goto L_089A06B0;
    case 92u: goto L_089A06B8;
    case 93u: goto L_089A06D8;
    case 94u: goto L_089A0708;
    case 95u: goto L_089A0728;
    case 96u: goto L_089A0738;
    case 97u: goto L_089A0744;
    case 98u: goto L_089A074C;
    case 99u: goto L_089A0750;
    case 100u: goto L_089A0758;
    case 101u: goto L_089A0768;
    case 102u: goto L_089A0770;
    case 103u: goto L_089A077C;
    case 104u: goto L_089A0788;
    case 105u: goto L_089A0798;
    case 106u: goto L_089A07A8;
    case 107u: goto L_089A07B8;
    case 108u: goto L_089A07CC;
    case 109u: goto L_089A07E0;
    case 110u: goto L_089A07E8;
    case 111u: goto L_089A07F4;
    case 112u: goto L_089A0804;
    case 113u: goto L_089A0814;
    case 114u: goto L_089A0828;
    case 115u: goto L_089A083C;
    case 116u: goto L_089A0850;
    case 117u: goto L_089A0858;
    case 118u: goto L_089A0864;
    case 119u: goto L_089A0874;
    case 120u: goto L_089A0884;
    case 121u: goto L_089A0898;
    case 122u: goto L_089A08AC;
    case 123u: goto L_089A08C0;
    case 124u: goto L_089A08C4;
    case 125u: goto L_089A08D0;
    case 126u: goto L_089A08E4;
    case 127u: goto L_089A08F0;
    case 128u: goto L_089A08F8;
    case 129u: goto L_089A0918;
    case 130u: goto L_089A0920;
    case 131u: goto L_089A0928;
    case 132u: goto L_089A093C;
    case 133u: goto L_089A0950;
    case 134u: goto L_089A0954;
    case 135u: goto L_089A0960;
    case 136u: goto L_089A0974;
    case 137u: goto L_089A0980;
    case 138u: goto L_089A0988;
    case 139u: goto L_089A09A8;
    case 140u: goto L_089A09B0;
    case 141u: goto L_089A09B8;
    case 142u: goto L_089A09CC;
    case 143u: goto L_089A09E0;
    case 144u: goto L_089A09E4;
    case 145u: goto L_089A0A04;
    case 146u: goto L_089A0A18;
    case 147u: goto L_089A0A24;
    case 148u: goto L_089A0A2C;
    case 149u: goto L_089A0A3C;
    case 150u: goto L_089A0A44;
    case 151u: goto L_089A0A50;
    case 152u: goto L_089A0A5C;
    case 153u: goto L_089A0A68;
    case 154u: goto L_089A0A7C;
    case 155u: goto L_089A0A88;
    case 156u: goto L_089A0A90;
    case 157u: goto L_089A0AB4;
    case 158u: goto L_089A0ABC;
    case 159u: goto L_089A0AC4;
    case 160u: goto L_089A0AD0;
    case 161u: goto L_089A0ADC;
    case 162u: goto L_089A0AF0;
    case 163u: goto L_089A0AFC;
    case 164u: goto L_089A0B04;
    case 165u: goto L_089A0B2C;
    case 166u: goto L_089A0B34;
    case 167u: goto L_089A0B3C;
    case 168u: goto L_089A0B48;
    case 169u: goto L_089A0B58;
    case 170u: goto L_089A0B60;
    case 171u: goto L_089A0B68;
    case 172u: goto L_089A0B74;
    case 173u: goto L_089A0B80;
    case 174u: goto L_089A0B88;
    case 175u: goto L_089A0B98;
    case 176u: goto L_089A0BAC;
    case 177u: goto L_089A0BB4;
    case 178u: goto L_089A0BC4;
    case 179u: goto L_089A0BCC;
    case 180u: goto L_089A0BD4;
    case 181u: goto L_089A0BDC;
    case 182u: goto L_089A0BF0;
    case 183u: goto L_089A0BFC;
    case 184u: goto L_089A0C08;
    case 185u: goto L_089A0C10;
    case 186u: goto L_089A0C20;
    case 187u: goto L_089A0C28;
    case 188u: goto L_089A0C30;
    case 189u: goto L_089A0C38;
    case 190u: goto L_089A0C40;
    case 191u: goto L_089A0C50;
    case 192u: goto L_089A0C58;
    case 193u: goto L_089A0C60;
    case 194u: goto L_089A0C70;
    case 195u: goto L_089A0C78;
    case 196u: goto L_089A0C98;
    case 197u: goto L_089A0CA0;
    case 198u: goto L_089A0CC0;
    case 199u: goto L_089A0CC8;
    case 200u: goto L_089A0CEC;
    case 201u: goto L_089A0CF4;
    case 202u: goto L_089A0D1C;
    case 203u: goto L_089A0D24;
    case 204u: goto L_089A0D30;
    case 205u: goto L_089A0D40;
    case 206u: goto L_089A0D48;
    case 207u: goto L_089A0D50;
    case 208u: goto L_089A0D58;
    case 209u: goto L_089A0D60;
    case 210u: goto L_089A0D68;
    case 211u: goto L_089A0D70;
    case 212u: goto L_089A0D78;
    case 213u: goto L_089A0D80;
    case 214u: goto L_089A0D88;
    case 215u: goto L_089A0D90;
    case 216u: goto L_089A0D98;
    case 217u: goto L_089A0DA0;
    case 218u: goto L_089A0DA8;
    case 219u: goto L_089A0DB4;
    case 220u: goto L_089A0DBC;
    case 221u: goto L_089A0DC8;
    case 222u: goto L_089A0DD0;
    case 223u: goto L_089A0DE0;
    case 224u: goto L_089A0DF0;
    case 225u: goto L_089A0DFC;
    case 226u: goto L_089A0E08;
    case 227u: goto L_089A0E10;
    case 228u: goto L_089A0E18;
    case 229u: goto L_089A0E38;
    case 230u: goto L_089A0E40;
    case 231u: goto L_089A0E58;
    case 232u: goto L_089A0E60;
    case 233u: goto L_089A0E6C;
    case 234u: goto L_089A0E74;
    case 235u: goto L_089A0E80;
    case 236u: goto L_089A0E8C;
    case 237u: goto L_089A0E98;
    case 238u: goto L_089A0EA4;
    case 239u: goto L_089A0EEC;
    case 240u: goto L_089A0EF0;
    case 241u: goto L_089A0EF8;
    case 242u: goto L_089A0F14;
    case 243u: goto L_089A0F30;
    case 244u: goto L_089A0F38;
    case 245u: goto L_089A0F4C;
    case 246u: goto L_089A0F54;
    case 247u: goto L_089A0F68;
    case 248u: goto L_089A0F70;
    case 249u: goto L_089A0F90;
    case 250u: goto L_089A0F94;
    case 251u: goto L_089A0F9C;
    case 252u: goto L_089A0FB4;
    case 253u: goto L_089A0FD0;
    case 254u: goto L_089A0FD8;
    case 255u: goto L_089A0FEC;
    case 256u: goto L_089A0FF4;
    case 257u: goto L_089A0FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A0000:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_089A0004;
L_089A0004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089A0050;
      }
      goto L_089A0014;
    }
L_089A0014:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0020u) goto L_089A0020;
    return;
L_089A0020:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089A0050;
      }
      goto L_089A0028;
    }
L_089A0028:
    if (aot_gpr[17] != aot_gpr[18]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(124)));
        (void)rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 205u, 0x0899FFF8u>(ctx, &aot_mem); return;
    }
    goto L_089A0030;
L_089A0030:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A004C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_089A0050;
L_089A0050:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089A0054;
L_089A0054:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089A0078u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A0078u) goto L_089A0078;
    return;
L_089A0078:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089A0084u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 199u, 0x0899FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A0084u) goto L_089A0084;
    return;
L_089A0084:
    if (aot_gpr[2] == 0u) aot_gpr[16] = (0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A009C:
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(-4));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    aot_gpr[3] = (0u | 52000u);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
      if (branch_taken) {
          goto L_089A0108;
      }
      goto L_089A00E0;
    }
L_089A00E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0108:
    aot_gpr[31] = (0x089A0110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A0110u) goto L_089A0110;
    return;
L_089A0110:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A00E0;
      }
      goto L_089A011C;
    }
L_089A011C:
    aot_gpr[31] = (0x089A0124u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A0068;
L_089A0124:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A0144;
      }
      goto L_089A012C;
    }
L_089A012C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[17] & 255u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (0u | 52013u);
      if (branch_taken) {
          goto L_089A0178;
      }
      goto L_089A0144;
    }
L_089A0144:
    aot_gpr[31] = (0x089A014Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A014Cu) goto L_089A014C;
    return;
L_089A014C:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    goto L_089A0150;
L_089A0150:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0178:
    aot_gpr[31] = (0x089A0180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0180u) goto L_089A0180;
    return;
L_089A0180:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    if (aot_gpr[18] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x089A0198u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0198u) goto L_089A0198;
    return;
L_089A0198:
    aot_gpr[5] = (aot_gpr[18] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A01F4;
      }
      goto L_089A01A8;
    }
L_089A01A8:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(47));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A01E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A01E4u) goto L_089A01E4;
    return;
L_089A01E4:
    aot_gpr[31] = (0x089A01ECu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A01ECu) goto L_089A01EC;
    return;
L_089A01EC:
    aot_gpr[3] = (aot_gpr[16] + 0u);
    goto L_089A0150;
L_089A01F4:
    aot_gpr[31] = (0x089A01FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A01FCu) goto L_089A01FC;
    return;
L_089A01FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    goto L_089A01A8;
L_089A0204:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[3] = (0u | 52000u);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
      if (branch_taken) {
          goto L_089A0250;
      }
      goto L_089A0234;
    }
L_089A0234:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0250:
    aot_gpr[31] = (0x089A0258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A0258u) goto L_089A0258;
    return;
L_089A0258:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A0234;
      }
      goto L_089A0264;
    }
L_089A0264:
    aot_gpr[31] = (0x089A026Cu);
    // nop
    goto L_089A0068;
L_089A026C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[18] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A02AC;
      }
      goto L_089A0280;
    }
L_089A0280:
    aot_gpr[31] = (0x089A0288u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A0288u) goto L_089A0288;
    return;
L_089A0288:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(47));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A02A8u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A02A8u) goto L_089A02A8;
    return;
L_089A02A8:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089A02AC;
L_089A02AC:
    aot_gpr[31] = (0x089A02B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A02B4u) goto L_089A02B4;
    return;
L_089A02B4:
    aot_gpr[3] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A02D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089A02E8u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A02E8u) goto L_089A02E8;
    return;
L_089A02E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A0300;
      }
      goto L_089A02F0;
    }
L_089A02F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0300:
    aot_gpr[31] = (0x089A0308u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A0068;
L_089A0308:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(43));
      if (branch_taken) {
          goto L_089A032C;
      }
      goto L_089A0318;
    }
L_089A0318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0328u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0328u) goto L_089A0328;
    return;
L_089A0328:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A032C;
L_089A032C:
    aot_gpr[31] = (0x089A0334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A0334u) goto L_089A0334;
    return;
L_089A0334:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    aot_gpr[31] = (0x089A0380u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A0380u) goto L_089A0380;
    return;
L_089A0380:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A03AC;
      }
      goto L_089A0388;
    }
L_089A0388:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A03AC:
    aot_gpr[31] = (0x089A03B4u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A0068;
L_089A03B4:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089A0444;
      }
      goto L_089A03C4;
    }
L_089A03C4:
    aot_gpr[31] = (0x089A03CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A03CCu) goto L_089A03CC;
    return;
L_089A03CC:
    aot_gpr[3] = (aot_gpr[20] - aot_gpr[18]);
    aot_gpr[3] = (aot_gpr[3] >> 3u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[16] = (aot_gpr[3] & 255u);
    if (aot_gpr[18] == 0u) aot_gpr[5] = (0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x089A03F4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A03F4u) goto L_089A03F4;
    return;
L_089A03F4:
    aot_gpr[5] = (aot_gpr[18] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A0474;
      }
      goto L_089A0404;
    }
L_089A0404:
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(41));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0440u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0440u) goto L_089A0440;
    return;
L_089A0440:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A0444;
L_089A0444:
    aot_gpr[31] = (0x089A044Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A044Cu) goto L_089A044C;
    return;
L_089A044C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0474:
    aot_gpr[31] = (0x089A047Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A047Cu) goto L_089A047C;
    return;
L_089A047C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    goto L_089A0404;
L_089A0484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089A04A8u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A04A8u) goto L_089A04A8;
    return;
L_089A04A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A04C8;
      }
      goto L_089A04B0;
    }
L_089A04B0:
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
L_089A04C8:
    aot_gpr[31] = (0x089A04D0u);
    // nop
    goto L_089A0068;
L_089A04D0:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A0510;
      }
      goto L_089A04E4;
    }
L_089A04E4:
    aot_gpr[31] = (0x089A04ECu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A04ECu) goto L_089A04EC;
    return;
L_089A04EC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(39));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A050Cu);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A050Cu) goto L_089A050C;
    return;
L_089A050C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089A0510;
L_089A0510:
    aot_gpr[31] = (0x089A0518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A0518u) goto L_089A0518;
    return;
L_089A0518:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089A0534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (0x089A0564u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_089A0068;
L_089A0564:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A057Cu);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A057Cu) goto L_089A057C;
    return;
L_089A057C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A059C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1472));
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1448), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1432), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1424), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1456), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1452), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1444), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1440), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1436), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1428), aot_gpr[17]);
      if (branch_taken) {
          goto L_089A0608;
      }
      goto L_089A05D8;
    }
L_089A05D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1456)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1452)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1448)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1432)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1428)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1424)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1472));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0608:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A061Cu);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A061Cu) goto L_089A061C;
    return;
L_089A061C:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089A062Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A062Cu) goto L_089A062C;
    return;
L_089A062C:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(27));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(9));
    aot_gpr[31] = (0x089A063Cu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A063Cu) goto L_089A063C;
    return;
L_089A063C:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089A0648u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0648u) goto L_089A0648;
    return;
L_089A0648:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089A0658u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0658u) goto L_089A0658;
    return;
L_089A0658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089A0668u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0668u) goto L_089A0668;
    return;
L_089A0668:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A0678u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0678u) goto L_089A0678;
    return;
L_089A0678:
    aot_gpr[3] = (aot_gpr[17] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto L_089A06A0;
      }
      goto L_089A0684;
    }
L_089A0684:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[17] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16720));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A06A0:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A06ACu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A06ACu) goto L_089A06AC;
    return;
L_089A06AC:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(13));
    goto L_089A06B0;
L_089A06B0:
    aot_gpr[31] = (0x089A06B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    goto L_089A0068;
L_089A06B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(29));
    aot_gpr[6] = (0u | 65535u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A06D8u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A06D8u) goto L_089A06D8;
    return;
L_089A06D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1456)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1452)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1448)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1432)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1428)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1424)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1472));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0708:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1387));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[2] < static_cast<std::uint32_t>(1388) ? 1u : 0u);
    if (aot_gpr[5] == 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089A0728u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0728u) goto L_089A0728;
    return;
L_089A0728:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089A0738u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A0738u) goto L_089A0738;
    return;
L_089A0738:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(13));
    goto L_089A06B0;
L_089A0744:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12880));
    goto L_089A074C;
L_089A074C:
    aot_gpr[5] = (0u + 0u);
    goto L_089A0750;
L_089A0750:
    aot_gpr[31] = (0x089A0758u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0758u) goto L_089A0758;
    return;
L_089A0758:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0768u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0768u) goto L_089A0768;
    return;
L_089A0768:
    // nop
    goto L_089A06B0;
L_089A0770:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12876));
    goto L_089A074C;
L_089A077C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12872));
    goto L_089A074C;
L_089A0788:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12864));
    goto L_089A0750;
L_089A0798:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12860));
    goto L_089A0750;
L_089A07A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12868));
    aot_gpr[5] = (0u + 0u);
    goto L_089A0750;
L_089A07B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12860));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A07CCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A07CCu) goto L_089A07CC;
    return;
L_089A07CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12864));
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A07E0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A07E0u) goto L_089A07E0;
    return;
L_089A07E0:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[17]);
    goto L_089A07E8;
L_089A07E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089A0DE0;
      }
      goto L_089A07F4;
    }
L_089A07F4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089A07E8;
      }
      goto L_089A0804;
    }
L_089A0804:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A0814u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0814u) goto L_089A0814;
    return;
L_089A0814:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_089A0A5C;
L_089A0828:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12860));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A083Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A083Cu) goto L_089A083C;
    return;
L_089A083C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12864));
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089A0850u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0850u) goto L_089A0850;
    return;
L_089A0850:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[16]);
    goto L_089A0858;
L_089A0858:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089A0DD0;
      }
      goto L_089A0864;
    }
L_089A0864:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089A0858;
      }
      goto L_089A0874;
    }
L_089A0874:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A0884u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0884u) goto L_089A0884;
    return;
L_089A0884:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_089A0AD0;
L_089A0898:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12860));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A08ACu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A08ACu) goto L_089A08AC;
    return;
L_089A08AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12864));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A08C0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A08C0u) goto L_089A08C0;
    return;
L_089A08C0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A08C4;
L_089A08C4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A08D0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A08D0u) goto L_089A08D0;
    return;
L_089A08D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A08E4u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 233u, 0x089A8FFCu>(ctx, &aot_mem) && ctx.pc == 0x089A08E4u) goto L_089A08E4;
    return;
L_089A08E4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089A0DA8;
      }
      goto L_089A08F0;
    }
L_089A08F0:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A0D68;
      }
      goto L_089A08F8;
    }
L_089A08F8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[8] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0918u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0918u) goto L_089A0918;
    return;
L_089A0918:
    aot_gpr[31] = (0x089A0920u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 1u, 0x089A9004u>(ctx, &aot_mem) && ctx.pc == 0x089A0920u) goto L_089A0920;
    return;
L_089A0920:
    // nop
    goto L_089A06B0;
L_089A0928:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12860));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A093Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A093Cu) goto L_089A093C;
    return;
L_089A093C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12864));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A0950u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0950u) goto L_089A0950;
    return;
L_089A0950:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A0954;
L_089A0954:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0960u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0960u) goto L_089A0960;
    return;
L_089A0960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A0974u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 233u, 0x089A8FFCu>(ctx, &aot_mem) && ctx.pc == 0x089A0974u) goto L_089A0974;
    return;
L_089A0974:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089A0DA8;
      }
      goto L_089A0980;
    }
L_089A0980:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A0D98;
      }
      goto L_089A0988;
    }
L_089A0988:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[8] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(112)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A09A8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A09A8u) goto L_089A09A8;
    return;
L_089A09A8:
    aot_gpr[31] = (0x089A09B0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 1u, 0x089A9004u>(ctx, &aot_mem) && ctx.pc == 0x089A09B0u) goto L_089A09B0;
    return;
L_089A09B0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A06B0;
L_089A09B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12860));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089A09CCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A09CCu) goto L_089A09CC;
    return;
L_089A09CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12864));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A09E0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 2u, 0x089A900Cu>(ctx, &aot_mem) && ctx.pc == 0x089A09E0u) goto L_089A09E0;
    return;
L_089A09E0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A09E4;
L_089A09E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1387));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[2] < static_cast<std::uint32_t>(1388) ? 1u : 0u);
    if (aot_gpr[5] == 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089A0A04u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0A04u) goto L_089A0A04;
    return;
L_089A0A04:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089A0A18u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 233u, 0x089A8FFCu>(ctx, &aot_mem) && ctx.pc == 0x089A0A18u) goto L_089A0A18;
    return;
L_089A0A18:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A0DF0;
      }
      goto L_089A0A24;
    }
L_089A0A24:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A0D78;
      }
      goto L_089A0A2C;
    }
L_089A0A2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[8] + 0u);
    aot_gpr[31] = (0x089A0A3Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A0A3Cu) goto L_089A0A3C;
    return;
L_089A0A3C:
    aot_gpr[31] = (0x089A0A44u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 1u, 0x089A9004u>(ctx, &aot_mem) && ctx.pc == 0x089A0A44u) goto L_089A0A44;
    return;
L_089A0A44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(13));
    goto L_089A06B0;
L_089A0A50:
    aot_gpr[21] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A0A5C;
L_089A0A5C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0A68u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0A68u) goto L_089A0A68;
    return;
L_089A0A68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A0A7Cu);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 233u, 0x089A8FFCu>(ctx, &aot_mem) && ctx.pc == 0x089A0A7Cu) goto L_089A0A7C;
    return;
L_089A0A7C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089A0DBC;
      }
      goto L_089A0A88;
    }
L_089A0A88:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A0D58;
      }
      goto L_089A0A90;
    }
L_089A0A90:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(140)));
    aot_gpr[6] = (aot_gpr[8] + 0u);
    aot_gpr[5] = (aot_gpr[18] - aot_gpr[19]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0AB4u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0AB4u) goto L_089A0AB4;
    return;
L_089A0AB4:
    aot_gpr[31] = (0x089A0ABCu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 1u, 0x089A9004u>(ctx, &aot_mem) && ctx.pc == 0x089A0ABCu) goto L_089A0ABC;
    return;
L_089A0ABC:
    // nop
    goto L_089A06B0;
L_089A0AC4:
    aot_gpr[21] = (0u + 0u);
    aot_gpr[19] = (0u + 0u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A0AD0;
L_089A0AD0:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0ADCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0ADCu) goto L_089A0ADC;
    return;
L_089A0ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A0AF0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 233u, 0x089A8FFCu>(ctx, &aot_mem) && ctx.pc == 0x089A0AF0u) goto L_089A0AF0;
    return;
L_089A0AF0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089A0DBC;
      }
      goto L_089A0AFC;
    }
L_089A0AFC:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A0D88;
      }
      goto L_089A0B04;
    }
L_089A0B04:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(136)));
    aot_gpr[6] = (aot_gpr[8] + 0u);
    aot_gpr[5] = (aot_gpr[18] - aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0B2Cu);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0B2Cu) goto L_089A0B2C;
    return;
L_089A0B2C:
    aot_gpr[31] = (0x089A0B34u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 1u, 0x089A9004u>(ctx, &aot_mem) && ctx.pc == 0x089A0B34u) goto L_089A0B34;
    return;
L_089A0B34:
    // nop
    goto L_089A06B0;
L_089A0B3C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0B48u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0B48u) goto L_089A0B48;
    return;
L_089A0B48:
    aot_gpr[5] = (2202u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12352));
    aot_gpr[31] = (0x089A0B58u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0B58u) goto L_089A0B58;
    return;
L_089A0B58:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(17));
    goto L_089A06B0;
L_089A0B60:
    aot_gpr[17] = (0u + 0u);
    goto L_089A09E4;
L_089A0B68:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0B74u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0B74u) goto L_089A0B74;
    return;
L_089A0B74:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089A0D48;
      }
      goto L_089A0B80;
    }
L_089A0B80:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089A0D48;
      }
      goto L_089A0B88;
    }
L_089A0B88:
    aot_gpr[9] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[9]);
    goto L_089A0B98;
L_089A0B98:
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A0E08;
      }
      goto L_089A0BAC;
    }
L_089A0BAC:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A0BB4;
L_089A0BB4:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089A0BCC;
      }
      goto L_089A0BC4;
    }
L_089A0BC4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089A0B98;
      }
      goto L_089A0BCC;
    }
L_089A0BCC:
    aot_gpr[31] = (0x089A0BD4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0BD4u) goto L_089A0BD4;
    return;
L_089A0BD4:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(17));
    goto L_089A06B0;
L_089A0BDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1387));
    aot_gpr[31] = (0x089A0BF0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 219u, 0x089A8EB0u>(ctx, &aot_mem) && ctx.pc == 0x089A0BF0u) goto L_089A0BF0;
    return;
L_089A0BF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A0BFCu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0BFCu) goto L_089A0BFC;
    return;
L_089A0BFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(13));
    goto L_089A06B0;
L_089A0C08:
    aot_gpr[31] = (0x089A0C10u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 212u, 0x089A8E48u>(ctx, &aot_mem) && ctx.pc == 0x089A0C10u) goto L_089A0C10;
    return;
L_089A0C10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0C20u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0C20u) goto L_089A0C20;
    return;
L_089A0C20:
    // nop
    goto L_089A06B0;
L_089A0C28:
    aot_gpr[17] = (0u + 0u);
    goto L_089A08C4;
L_089A0C30:
    aot_gpr[17] = (0u + 0u);
    goto L_089A0954;
L_089A0C38:
    aot_gpr[31] = (0x089A0C40u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 218u, 0x089A8EA8u>(ctx, &aot_mem) && ctx.pc == 0x089A0C40u) goto L_089A0C40;
    return;
L_089A0C40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0C50u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0C50u) goto L_089A0C50;
    return;
L_089A0C50:
    // nop
    goto L_089A06B0;
L_089A0C58:
    aot_gpr[31] = (0x089A0C60u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0420_entry, 420u, 213u, 0x089A8E50u>(ctx, &aot_mem) && ctx.pc == 0x089A0C60u) goto L_089A0C60;
    return;
L_089A0C60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0C70u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0C70u) goto L_089A0C70;
    return;
L_089A0C70:
    // nop
    goto L_089A06B0;
L_089A0C78:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(124)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0C98u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0C98u) goto L_089A0C98;
    return;
L_089A0C98:
    // nop
    goto L_089A06B0;
L_089A0CA0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(112)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0CC0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0CC0u) goto L_089A0CC0;
    return;
L_089A0CC0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A06B0;
L_089A0CC8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(140)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0CECu);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0CECu) goto L_089A0CEC;
    return;
L_089A0CEC:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A06B0;
L_089A0CF4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0D1Cu);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0D1Cu) goto L_089A0D1C;
    return;
L_089A0D1C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A06B0;
L_089A0D24:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A0D30u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0D30u) goto L_089A0D30;
    return;
L_089A0D30:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20916));
    aot_gpr[31] = (0x089A0D40u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0D40u) goto L_089A0D40;
    return;
L_089A0D40:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(17));
    goto L_089A06B0;
L_089A0D48:
    aot_gpr[31] = (0x089A0D50u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089A0D50u) goto L_089A0D50;
    return;
L_089A0D50:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(17));
    goto L_089A06B0;
L_089A0D58:
    aot_gpr[31] = (0x089A0D60u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 3u, 0x089A9014u>(ctx, &aot_mem) && ctx.pc == 0x089A0D60u) goto L_089A0D60;
    return;
L_089A0D60:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089A0A90;
L_089A0D68:
    aot_gpr[31] = (0x089A0D70u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 3u, 0x089A9014u>(ctx, &aot_mem) && ctx.pc == 0x089A0D70u) goto L_089A0D70;
    return;
L_089A0D70:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089A08F8;
L_089A0D78:
    aot_gpr[31] = (0x089A0D80u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 3u, 0x089A9014u>(ctx, &aot_mem) && ctx.pc == 0x089A0D80u) goto L_089A0D80;
    return;
L_089A0D80:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089A0A2C;
L_089A0D88:
    aot_gpr[31] = (0x089A0D90u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 3u, 0x089A9014u>(ctx, &aot_mem) && ctx.pc == 0x089A0D90u) goto L_089A0D90;
    return;
L_089A0D90:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089A0B04;
L_089A0D98:
    aot_gpr[31] = (0x089A0DA0u);
    aot_gpr[4] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0421_entry, 421u, 3u, 0x089A9014u>(ctx, &aot_mem) && ctx.pc == 0x089A0DA0u) goto L_089A0DA0;
    return;
L_089A0DA0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089A0988;
L_089A0DA8:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A0DB4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0DB4u) goto L_089A0DB4;
    return;
L_089A0DB4:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(29));
    goto L_089A06B0;
L_089A0DBC:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A0DC8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0DC8u) goto L_089A0DC8;
    return;
L_089A0DC8:
    // nop
    goto L_089A06B0;
L_089A0DD0:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_089A0AD0;
L_089A0DE0:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    goto L_089A0A5C;
L_089A0DF0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089A0DFCu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0DFCu) goto L_089A0DFC;
    return;
L_089A0DFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(13));
    goto L_089A06B0;
L_089A0E08:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (aot_gpr[8] + 0u);
        goto L_089A0E10;
    }
    goto L_089A0E10;
L_089A0E10:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089A0BB4;
L_089A0E18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x089A0E38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A0E38u) goto L_089A0E38;
    return;
L_089A0E38:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A0E58;
      }
      goto L_089A0E40;
    }
L_089A0E40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0E58:
    aot_gpr[31] = (0x089A0E60u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A0068;
L_089A0E60:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089A0EF0;
      }
      goto L_089A0E6C;
    }
L_089A0E6C:
    aot_gpr[31] = (0x089A0E74u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0E74u) goto L_089A0E74;
    return;
L_089A0E74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089A0E80u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0E80u) goto L_089A0E80;
    return;
L_089A0E80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089A0E8Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0E8Cu) goto L_089A0E8C;
    return;
L_089A0E8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089A0E98u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 239u, 0x0898FF00u>(ctx, &aot_mem) && ctx.pc == 0x089A0E98u) goto L_089A0E98;
    return;
L_089A0E98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x089A0EA4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A0EA4u) goto L_089A0EA4;
    return;
L_089A0EA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[29]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(49));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[6] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0EECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0EECu) goto L_089A0EEC;
    return;
L_089A0EEC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A0EF0;
L_089A0EF0:
    aot_gpr[31] = (0x089A0EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A0EF8u) goto L_089A0EF8;
    return;
L_089A0EF8:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0F14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089A0F30u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A0F30u) goto L_089A0F30;
    return;
L_089A0F30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A0F4C;
      }
      goto L_089A0F38;
    }
L_089A0F38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0F4C:
    aot_gpr[31] = (0x089A0F54u);
    // nop
    goto L_089A0068;
L_089A0F54:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A0F94;
      }
      goto L_089A0F68;
    }
L_089A0F68:
    aot_gpr[31] = (0x089A0F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089A0F70u) goto L_089A0F70;
    return;
L_089A0F70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A0F90u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A0F90u) goto L_089A0F90;
    return;
L_089A0F90:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    goto L_089A0F94;
L_089A0F94:
    aot_gpr[31] = (0x089A0F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A0F9Cu) goto L_089A0F9C;
    return;
L_089A0F9C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0FB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089A0FD0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A0FD0u) goto L_089A0FD0;
    return;
L_089A0FD0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A0FEC;
      }
      goto L_089A0FD8;
    }
L_089A0FD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0FEC:
    aot_gpr[31] = (0x089A0FF4u);
    // nop
    goto L_089A0068;
L_089A0FF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0413_entry, 413u, 6u, 0x089A103Cu>(ctx, &aot_mem); return;
      }
      goto L_089A0FFC;
    }
L_089A0FFC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0413_entry, 413u, 6u, 0x089A103Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0413_entry, 413u, 1u, 0x089A1004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0412(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0412_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_412(Runtime &runtime) {
    runtime.register_generated_unit(412u, 0x089A0000u, 4096u, &recomp_unit_0412, &recomp_unit_0412_entry);
    runtime.register_function(0x089A0000u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0004u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0014u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0020u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0028u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0030u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A004Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0050u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0054u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0068u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0078u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0084u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A009Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A00E0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0108u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0110u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A011Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0124u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A012Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0144u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A014Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0150u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0178u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0180u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0198u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A01A8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A01E4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A01ECu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A01F4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A01FCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0204u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0234u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0250u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0258u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0264u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A026Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0280u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0288u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A02A8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A02ACu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A02B4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A02D4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A02E8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A02F0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0300u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0308u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0318u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0328u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A032Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0334u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0348u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0380u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0388u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A03ACu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A03B4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A03C4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A03CCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A03F4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0404u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0440u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0444u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A044Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0474u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A047Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0484u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A04A8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A04B0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A04C8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A04D0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A04E4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A04ECu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A050Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0510u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0518u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0534u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0564u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A057Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A059Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A05D8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0608u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A061Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A062Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A063Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0648u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0658u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0668u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0678u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0684u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A06A0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A06ACu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A06B0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A06B8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A06D8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0708u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0728u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0738u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0744u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A074Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0750u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0758u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0768u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0770u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A077Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0788u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0798u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A07A8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A07B8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A07CCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A07E0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A07E8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A07F4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0804u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0814u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0828u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A083Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0850u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0858u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0864u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0874u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0884u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0898u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08ACu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08C0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08C4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08D0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08E4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08F0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A08F8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0918u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0920u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0928u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A093Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0950u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0954u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0960u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0974u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0980u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0988u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A09A8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A09B0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A09B8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A09CCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A09E0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A09E4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A04u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A18u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A24u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A2Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A3Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A44u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A50u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A5Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A68u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A7Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A88u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0A90u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0AB4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0ABCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0AC4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0AD0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0ADCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0AF0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0AFCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B04u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B2Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B34u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B3Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B48u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B58u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B60u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B68u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B74u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B80u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B88u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0B98u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BACu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BB4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BC4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BCCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BD4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BDCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BF0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0BFCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C08u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C10u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C20u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C28u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C30u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C38u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C40u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C50u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C58u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C60u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C70u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C78u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0C98u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0CA0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0CC0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0CC8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0CECu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0CF4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D1Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D24u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D30u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D40u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D48u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D50u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D58u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D60u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D68u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D70u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D78u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D80u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D88u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D90u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0D98u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DA0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DA8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DB4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DBCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DC8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DD0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DE0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DF0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0DFCu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E08u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E10u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E18u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E38u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E40u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E58u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E60u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E6Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E74u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E80u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E8Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0E98u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0EA4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0EECu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0EF0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0EF8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F14u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F30u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F38u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F4Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F54u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F68u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F70u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F90u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F94u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0F9Cu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0FB4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0FD0u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0FD8u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0FECu, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0FF4u, &recomp_unit_0412, "recomp_unit_0412");
    runtime.register_function(0x089A0FFCu, &recomp_unit_0412, "recomp_unit_0412");
}
} // namespace psprecomp
