#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0204[1020] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 11,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0,
    33, 0, 34, 0, 35, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 63, 0, 0,
    0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 71, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79,
    0, 80, 0, 0, 81, 0, 82, 0, 83, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0,
    0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0,
    109, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140,
    141, 0, 0, 0, 0, 142, 0, 143, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 171, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0,
    0, 179, 0, 180, 0, 181, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185,
    186, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0,
    0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210,
};
void recomp_unit_0204_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088D0000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0204[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D0000;
    case 2u: goto L_088D000C;
    case 3u: goto L_088D0028;
    case 4u: goto L_088D0040;
    case 5u: goto L_088D004C;
    case 6u: goto L_088D0058;
    case 7u: goto L_088D00C8;
    case 8u: goto L_088D00D8;
    case 9u: goto L_088D00F0;
    case 10u: goto L_088D00F8;
    case 11u: goto L_088D00FC;
    case 12u: goto L_088D0118;
    case 13u: goto L_088D0144;
    case 14u: goto L_088D014C;
    case 15u: goto L_088D016C;
    case 16u: goto L_088D0170;
    case 17u: goto L_088D0190;
    case 18u: goto L_088D0198;
    case 19u: goto L_088D01B8;
    case 20u: goto L_088D01BC;
    case 21u: goto L_088D01D4;
    case 22u: goto L_088D01F8;
    case 23u: goto L_088D0204;
    case 24u: goto L_088D0214;
    case 25u: goto L_088D021C;
    case 26u: goto L_088D0228;
    case 27u: goto L_088D0244;
    case 28u: goto L_088D024C;
    case 29u: goto L_088D0258;
    case 30u: goto L_088D0264;
    case 31u: goto L_088D026C;
    case 32u: goto L_088D0274;
    case 33u: goto L_088D0280;
    case 34u: goto L_088D0288;
    case 35u: goto L_088D0290;
    case 36u: goto L_088D0294;
    case 37u: goto L_088D02A0;
    case 38u: goto L_088D02A8;
    case 39u: goto L_088D02BC;
    case 40u: goto L_088D02C4;
    case 41u: goto L_088D02CC;
    case 42u: goto L_088D02D8;
    case 43u: goto L_088D02E0;
    case 44u: goto L_088D02EC;
    case 45u: goto L_088D02FC;
    case 46u: goto L_088D0310;
    case 47u: goto L_088D032C;
    case 48u: goto L_088D0330;
    case 49u: goto L_088D033C;
    case 50u: goto L_088D034C;
    case 51u: goto L_088D0360;
    case 52u: goto L_088D0370;
    case 53u: goto L_088D0378;
    case 54u: goto L_088D037C;
    case 55u: goto L_088D0390;
    case 56u: goto L_088D03A4;
    case 57u: goto L_088D03B0;
    case 58u: goto L_088D03C0;
    case 59u: goto L_088D03D4;
    case 60u: goto L_088D03DC;
    case 61u: goto L_088D03E8;
    case 62u: goto L_088D03F0;
    case 63u: goto L_088D03F4;
    case 64u: goto L_088D0408;
    case 65u: goto L_088D0410;
    case 66u: goto L_088D0428;
    case 67u: goto L_088D0454;
    case 68u: goto L_088D0460;
    case 69u: goto L_088D0480;
    case 70u: goto L_088D048C;
    case 71u: goto L_088D0494;
    case 72u: goto L_088D0498;
    case 73u: goto L_088D04B0;
    case 74u: goto L_088D04B8;
    case 75u: goto L_088D04CC;
    case 76u: goto L_088D04D0;
    case 77u: goto L_088D04DC;
    case 78u: goto L_088D04EC;
    case 79u: goto L_088D04FC;
    case 80u: goto L_088D0504;
    case 81u: goto L_088D0510;
    case 82u: goto L_088D0518;
    case 83u: goto L_088D0520;
    case 84u: goto L_088D0524;
    case 85u: goto L_088D0534;
    case 86u: goto L_088D0578;
    case 87u: goto L_088D0584;
    case 88u: goto L_088D0590;
    case 89u: goto L_088D059C;
    case 90u: goto L_088D05A4;
    case 91u: goto L_088D05C4;
    case 92u: goto L_088D05EC;
    case 93u: goto L_088D05F0;
    case 94u: goto L_088D0608;
    case 95u: goto L_088D0610;
    case 96u: goto L_088D0620;
    case 97u: goto L_088D062C;
    case 98u: goto L_088D063C;
    case 99u: goto L_088D064C;
    case 100u: goto L_088D0664;
    case 101u: goto L_088D0668;
    case 102u: goto L_088D0670;
    case 103u: goto L_088D069C;
    case 104u: goto L_088D06C4;
    case 105u: goto L_088D06D0;
    case 106u: goto L_088D06E8;
    case 107u: goto L_088D06F0;
    case 108u: goto L_088D06F8;
    case 109u: goto L_088D0700;
    case 110u: goto L_088D0704;
    case 111u: goto L_088D070C;
    case 112u: goto L_088D0714;
    case 113u: goto L_088D0728;
    case 114u: goto L_088D072C;
    case 115u: goto L_088D073C;
    case 116u: goto L_088D0750;
    case 117u: goto L_088D0760;
    case 118u: goto L_088D0768;
    case 119u: goto L_088D0778;
    case 120u: goto L_088D0784;
    case 121u: goto L_088D07A0;
    case 122u: goto L_088D07A4;
    case 123u: goto L_088D07B4;
    case 124u: goto L_088D07CC;
    case 125u: goto L_088D07DC;
    case 126u: goto L_088D07F4;
    case 127u: goto L_088D080C;
    case 128u: goto L_088D0818;
    case 129u: goto L_088D0828;
    case 130u: goto L_088D0838;
    case 131u: goto L_088D0840;
    case 132u: goto L_088D0860;
    case 133u: goto L_088D0898;
    case 134u: goto L_088D089C;
    case 135u: goto L_088D08B4;
    case 136u: goto L_088D08BC;
    case 137u: goto L_088D08DC;
    case 138u: goto L_088D08E4;
    case 139u: goto L_088D08F0;
    case 140u: goto L_088D08FC;
    case 141u: goto L_088D0900;
    case 142u: goto L_088D0914;
    case 143u: goto L_088D091C;
    case 144u: goto L_088D0920;
    case 145u: goto L_088D0938;
    case 146u: goto L_088D0940;
    case 147u: goto L_088D0954;
    case 148u: goto L_088D0974;
    case 149u: goto L_088D0A10;
    case 150u: goto L_088D0A1C;
    case 151u: goto L_088D0A24;
    case 152u: goto L_088D0A34;
    case 153u: goto L_088D0A44;
    case 154u: goto L_088D0A50;
    case 155u: goto L_088D0A6C;
    case 156u: goto L_088D0A78;
    case 157u: goto L_088D0A90;
    case 158u: goto L_088D0A9C;
    case 159u: goto L_088D0AA4;
    case 160u: goto L_088D0AB4;
    case 161u: goto L_088D0AE8;
    case 162u: goto L_088D0B0C;
    case 163u: goto L_088D0B9C;
    case 164u: goto L_088D0BAC;
    case 165u: goto L_088D0BF0;
    case 166u: goto L_088D0C34;
    case 167u: goto L_088D0C44;
    case 168u: goto L_088D0C50;
    case 169u: goto L_088D0C5C;
    case 170u: goto L_088D0C6C;
    case 171u: goto L_088D0C70;
    case 172u: goto L_088D0C80;
    case 173u: goto L_088D0CB8;
    case 174u: goto L_088D0D1C;
    case 175u: goto L_088D0D24;
    case 176u: goto L_088D0D60;
    case 177u: goto L_088D0D6C;
    case 178u: goto L_088D0D78;
    case 179u: goto L_088D0D84;
    case 180u: goto L_088D0D8C;
    case 181u: goto L_088D0D94;
    case 182u: goto L_088D0D98;
    case 183u: goto L_088D0DC4;
    case 184u: goto L_088D0DEC;
    case 185u: goto L_088D0DFC;
    case 186u: goto L_088D0E00;
    case 187u: goto L_088D0E08;
    case 188u: goto L_088D0E10;
    case 189u: goto L_088D0E1C;
    case 190u: goto L_088D0E24;
    case 191u: goto L_088D0E30;
    case 192u: goto L_088D0E5C;
    case 193u: goto L_088D0E6C;
    case 194u: goto L_088D0E8C;
    case 195u: goto L_088D0EA4;
    case 196u: goto L_088D0EBC;
    case 197u: goto L_088D0ECC;
    case 198u: goto L_088D0EFC;
    case 199u: goto L_088D0F5C;
    case 200u: goto L_088D0F68;
    case 201u: goto L_088D0F70;
    case 202u: goto L_088D0F78;
    case 203u: goto L_088D0F84;
    case 204u: goto L_088D0F9C;
    case 205u: goto L_088D0FA8;
    case 206u: goto L_088D0FB0;
    case 207u: goto L_088D0FBC;
    case 208u: goto L_088D0FD4;
    case 209u: goto L_088D0FE0;
    case 210u: goto L_088D0FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D0000:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 188u, 0x088CFFE4u>(ctx, &aot_mem); return;
      }
      goto L_088D000C;
    }
L_088D000C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0028:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D004C;
      }
      goto L_088D0040;
    }
L_088D0040:
    aot_gpr[5] = (aot_gpr[5] | 1u);
    aot_gpr[31] = (0x088D004Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 166u, 0x088CFDF4u>(ctx, &aot_mem) && ctx.pc == 0x088D004Cu) goto L_088D004C;
    return;
L_088D004C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (16000u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[21]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[19] = (aot_gpr[6] & 255u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (0u | 0u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D00FC;
      }
      goto L_088D00C8;
    }
L_088D00C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[31] = (0x088D00D8u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D00D8u) goto L_088D00D8;
    return;
L_088D00D8:
    aot_gpr[4] = (17658u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[12])) && aot_fpr[20] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088D00F8;
      }
      goto L_088D00F0;
    }
L_088D00F0:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]) ^ 0x80000000u);
    aot_gpr[19] = (0u | 0u);
    goto L_088D00F8;
L_088D00F8:
    aot_gpr[21] = (0u | 1u);
    goto L_088D00FC;
L_088D00FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088D0118u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 68u, 0x0894B4D0u>(ctx, &aot_mem) && ctx.pc == 0x088D0118u) goto L_088D0118;
    return;
L_088D0118:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<84u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D014C;
      }
      goto L_088D0144;
    }
L_088D0144:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088D0170;
      }
      goto L_088D014C;
    }
L_088D014C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D0170;
      }
      goto L_088D016C;
    }
L_088D016C:
    aot_gpr[22] = (0u | 2u);
    goto L_088D0170;
L_088D0170:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D0198;
      }
      goto L_088D0190;
    }
L_088D0190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D01BC;
      }
      goto L_088D0198;
    }
L_088D0198:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D01BC;
      }
      goto L_088D01B8;
    }
L_088D01B8:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    goto L_088D01BC;
L_088D01BC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] & 2u);
      if (branch_taken) {
          goto L_088D0310;
      }
      goto L_088D01D4;
    }
L_088D01D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[22] & 1u);
    aot_gpr[4] = (17096u << 16u);
    aot_gpr[21] = (0u | 1u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (0u | 2u);
    aot_gpr[30] = (0u | 3u);
    aot_gpr[23] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_088D01F8;
L_088D01F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D0204u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 119u, 0x088CF92Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0204u) goto L_088D0204;
    return;
L_088D0204:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D021C;
      }
      goto L_088D0214;
    }
L_088D0214:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D02FC;
      }
      goto L_088D021C;
    }
L_088D021C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D024C;
      }
      goto L_088D0228;
    }
L_088D0228:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(452)));
    aot_gpr[31] = (0x088D0244u);
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 117u, 0x088D1A40u>(ctx, &aot_mem) && ctx.pc == 0x088D0244u) goto L_088D0244;
    return;
L_088D0244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D02FC;
      }
      goto L_088D024C;
    }
L_088D024C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[20];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D026C;
      }
      goto L_088D0258;
    }
L_088D0258:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D026C;
      }
      goto L_088D0264;
    }
L_088D0264:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088D0294;
      }
      goto L_088D026C;
    }
L_088D026C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D0288;
      }
      goto L_088D0274;
    }
L_088D0274:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0288;
      }
      goto L_088D0280;
    }
L_088D0280:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_088D0294;
      }
      goto L_088D0288;
    }
L_088D0288:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D0294;
      }
      goto L_088D0290;
    }
L_088D0290:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088D0294;
L_088D0294:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D02A8;
      }
      goto L_088D02A0;
    }
L_088D02A0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D02CC;
      }
      goto L_088D02A8;
    }
L_088D02A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D02BCu);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 115u, 0x088D1A24u>(ctx, &aot_mem) && ctx.pc == 0x088D02BCu) goto L_088D02BC;
    return;
L_088D02BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D02CC;
      }
      goto L_088D02C4;
    }
L_088D02C4:
    aot_gpr[31] = (0x088D02CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088D0028;
L_088D02CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D02E0;
      }
      goto L_088D02D8;
    }
L_088D02D8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088D02FC;
      }
      goto L_088D02E0;
    }
L_088D02E0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D02ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 119u, 0x088CF92Cu>(ctx, &aot_mem) && ctx.pc == 0x088D02ECu) goto L_088D02EC;
    return;
L_088D02EC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D02FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 29u, 0x088D13D8u>(ctx, &aot_mem) && ctx.pc == 0x088D02FCu) goto L_088D02FC;
    return;
L_088D02FC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D01F8;
      }
      goto L_088D0310;
    }
L_088D0310:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088D0390;
      }
      goto L_088D032C;
    }
L_088D032C:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088D0330;
L_088D0330:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D033Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 147u, 0x088CFC30u>(ctx, &aot_mem) && ctx.pc == 0x088D033Cu) goto L_088D033C;
    return;
L_088D033C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D037C;
      }
      goto L_088D034C;
    }
L_088D034C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D037C;
      }
      goto L_088D0360;
    }
L_088D0360:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D0370u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    goto L_088D05C4;
L_088D0370:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D037C;
      }
      goto L_088D0378;
    }
L_088D0378:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088D037C;
L_088D037C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D0330;
      }
      goto L_088D0390;
    }
L_088D0390:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0408;
      }
      goto L_088D03A4;
    }
L_088D03A4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D03B0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 153u, 0x088CFCC4u>(ctx, &aot_mem) && ctx.pc == 0x088D03B0u) goto L_088D03B0;
    return;
L_088D03B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D03F4;
      }
      goto L_088D03C0;
    }
L_088D03C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(13)));
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[22]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D03DC;
      }
      goto L_088D03D4;
    }
L_088D03D4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D03F4;
      }
      goto L_088D03DC;
    }
L_088D03DC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088D03E8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_088D0860;
L_088D03E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D03F4;
      }
      goto L_088D03F0;
    }
L_088D03F0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088D03F4;
L_088D03F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D03A4;
      }
      goto L_088D0408;
    }
L_088D0408:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D04B0;
      }
      goto L_088D0410;
    }
L_088D0410:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x088D0428u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0428u) goto L_088D0428;
    return;
L_088D0428:
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u | 9u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D0454u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 81u, 0x08867634u>(ctx, &aot_mem) && ctx.pc == 0x088D0454u) goto L_088D0454;
    return;
L_088D0454:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088D0498;
      }
      goto L_088D0460;
    }
L_088D0460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088D0480u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D0480u) goto L_088D0480;
    return;
L_088D0480:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0494;
      }
      goto L_088D048C;
    }
L_088D048C:
    aot_gpr[31] = (0x088D0494u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088D0494u) goto L_088D0494;
    return;
L_088D0494:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_088D0498;
L_088D0498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088D04B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088D04B0u) goto L_088D04B0;
    return;
L_088D04B0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0534;
      }
      goto L_088D04B8;
    }
L_088D04B8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088D0534;
      }
      goto L_088D04CC;
    }
L_088D04CC:
    aot_gpr[8] = (0u | 2u);
    goto L_088D04D0;
L_088D04D0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D04DCu);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 119u, 0x088CF92Cu>(ctx, &aot_mem) && ctx.pc == 0x088D04DCu) goto L_088D04DC;
    return;
L_088D04DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D04FC;
      }
      goto L_088D04EC;
    }
L_088D04EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(150)));
    aot_gpr[6] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0504;
      }
      goto L_088D04FC;
    }
L_088D04FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_088D0524;
      }
      goto L_088D0504;
    }
L_088D0504:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D0518;
      }
      goto L_088D0510;
    }
L_088D0510:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088D0520;
      }
      goto L_088D0518;
    }
L_088D0518:
    aot_gpr[5] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088D0520;
L_088D0520:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14))))));
    goto L_088D0524;
L_088D0524:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D04D0;
      }
      goto L_088D0534;
    }
L_088D0534:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0578:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_088D0590;
      }
      goto L_088D0584;
    }
L_088D0584:
    aot_gpr[5] = (aot_gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_088D059C;
      }
      goto L_088D0590;
    }
L_088D0590:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    goto L_088D059C;
L_088D059C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D05A4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D05C4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088D05F0;
      }
      goto L_088D05EC;
    }
L_088D05EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088D05F0;
L_088D05F0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D0610;
      }
      goto L_088D0608;
    }
L_088D0608:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0664;
      }
      goto L_088D0610;
    }
L_088D0610:
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[8] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_088D0620;
L_088D0620:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D063C;
      }
      goto L_088D062C;
    }
L_088D062C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[9] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[9]);
    goto L_088D063C;
L_088D063C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[8] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D0620;
      }
      goto L_088D064C;
    }
L_088D064C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(31)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_088D0668;
      }
      goto L_088D0664;
    }
L_088D0664:
    aot_gpr[2] = (0u | 0u);
    goto L_088D0668;
L_088D0668:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D07DC;
      }
      goto L_088D069C;
    }
L_088D069C:
    aot_gpr[6] = (aot_gpr[17] << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 16u));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 16u));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(176)));
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088D0704;
      }
      goto L_088D06C4;
    }
L_088D06C4:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D0704;
      }
      goto L_088D06D0;
    }
L_088D06D0:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(32520)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D06E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 40u);
      if (branch_taken) {
          goto L_088D0704;
      }
      goto L_088D06F0;
    }
L_088D06F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 41u);
      if (branch_taken) {
          goto L_088D0704;
      }
      goto L_088D06F8;
    }
L_088D06F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 42u);
      if (branch_taken) {
          goto L_088D0704;
      }
      goto L_088D0700;
    }
L_088D0700:
    aot_gpr[18] = (0u | 43u);
    goto L_088D0704;
L_088D0704:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D0760;
      }
      goto L_088D070C;
    }
L_088D070C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0760;
      }
      goto L_088D0714;
    }
L_088D0714:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0760;
      }
      goto L_088D0728;
    }
L_088D0728:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088D072C;
L_088D072C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D0750;
      }
      goto L_088D073C;
    }
L_088D073C:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088D0760;
      }
      goto L_088D0750;
    }
L_088D0750:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D072C;
      }
      goto L_088D0760;
    }
L_088D0760:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D07DC;
      }
      goto L_088D0768;
    }
L_088D0768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088D0778u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088D0778u) goto L_088D0778;
    return;
L_088D0778:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D07DC;
      }
      goto L_088D0784;
    }
L_088D0784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D07DC;
      }
      goto L_088D07A0;
    }
L_088D07A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088D07A4;
L_088D07A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D07CC;
      }
      goto L_088D07B4;
    }
L_088D07B4:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088D07DC;
      }
      goto L_088D07CC;
    }
L_088D07CC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D07A4;
      }
      goto L_088D07DC;
    }
L_088D07DC:
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
L_088D07F4:
    aot_gpr[5] = (17096u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_088D080C;
L_088D080C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0828;
      }
      goto L_088D0818;
    }
L_088D0818:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(88), aot_gpr[7]);
    goto L_088D0828;
L_088D0828:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D080C;
      }
      goto L_088D0838;
    }
L_088D0838:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0840:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0860:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088D089C;
      }
      goto L_088D0898;
    }
L_088D0898:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088D089C;
L_088D089C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D08BC;
      }
      goto L_088D08B4;
    }
L_088D08B4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D091C;
      }
      goto L_088D08BC;
    }
L_088D08BC:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0914;
      }
      goto L_088D08DC;
    }
L_088D08DC:
    aot_gpr[31] = (0x088D08E4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 206u, 0x088DDFE0u>(ctx, &aot_mem) && ctx.pc == 0x088D08E4u) goto L_088D08E4;
    return;
L_088D08E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D0900;
      }
      goto L_088D08F0;
    }
L_088D08F0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D08FCu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 207u, 0x088DDFF4u>(ctx, &aot_mem) && ctx.pc == 0x088D08FCu) goto L_088D08FC;
    return;
L_088D08FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088D0900;
L_088D0900:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D08DC;
      }
      goto L_088D0914;
    }
L_088D0914:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088D0920;
      }
      goto L_088D091C;
    }
L_088D091C:
    aot_gpr[2] = (0u | 0u);
    goto L_088D0920;
L_088D0920:
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
L_088D0938:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0940:
    aot_gpr[5] = (17096u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0954:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3136));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    aot_gpr[4] = (15820u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (16672u << 16u);
    aot_gpr[23] = (aot_gpr[20] + static_cast<std::uint32_t>(48));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[18] = (2216u << 16u);
    goto L_088D0A10;
L_088D0A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0B9C;
      }
      goto L_088D0A1C;
    }
L_088D0A1C:
    aot_gpr[31] = (0x088D0A24u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x088D0A24u) goto L_088D0A24;
    return;
L_088D0A24:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D0A50;
      }
      goto L_088D0A34;
    }
L_088D0A34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D0A44u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 52u, 0x0894E78Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0A44u) goto L_088D0A44;
    return;
L_088D0A44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    goto L_088D0A50;
L_088D0A50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088D0A6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D0A6Cu) goto L_088D0A6C;
    return;
L_088D0A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088D0A78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 95u, 0x0894B67Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0A78u) goto L_088D0A78;
    return;
L_088D0A78:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088D0A9C;
      }
      goto L_088D0A90;
    }
L_088D0A90:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D0AA4;
      }
      goto L_088D0A9C;
    }
L_088D0A9C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088D0AA4;
L_088D0AA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x088D0AB4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 68u, 0x0894B4D0u>(ctx, &aot_mem) && ctx.pc == 0x088D0AB4u) goto L_088D0AB4;
    return;
L_088D0AB4:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(20u, 20u, 21u, 3u, true);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(27952)));
    if (aot_gpr[4] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_088D0B0C;
    }
    goto L_088D0AE8;
L_088D0AE8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (2215u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32540)));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(27952), aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(27956), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_088D0B0C;
L_088D0B0C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27956)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[20] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27956)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27956)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[30] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[23] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088D0B9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 96u, 0x0894B684u>(ctx, &aot_mem) && ctx.pc == 0x088D0B9Cu) goto L_088D0B9C;
    return;
L_088D0B9C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D0A10;
      }
      goto L_088D0BAC;
    }
L_088D0BAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0BF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088D0C34u);
    aot_gpr[6] = (0u | 416u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088D0C34u) goto L_088D0C34;
    return;
L_088D0C34:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[18] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(3136));
    goto L_088D0C44;
L_088D0C44:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0C70;
      }
      goto L_088D0C50;
    }
L_088D0C50:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(32), aot_gpr[22]);
      if (branch_taken) {
          goto L_088D0C70;
      }
      goto L_088D0C5C;
    }
L_088D0C5C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D0C6Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 52u, 0x0894E78Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0C6Cu) goto L_088D0C6C;
    return;
L_088D0C6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    goto L_088D0C70;
L_088D0C70:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D0C44;
      }
      goto L_088D0C80;
    }
L_088D0C80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(416));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0CB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(159)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D0D24;
      }
      goto L_088D0D1C;
    }
L_088D0D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 28u, 0x088D1390u>(ctx, &aot_mem); return;
      }
      goto L_088D0D24;
    }
L_088D0D24:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[23] = (0u | 6u);
    aot_gpr[4] = (49152u << 16u);
    aot_gpr[30] = (0u | 8u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[21] | 0u);
    goto L_088D0D60;
L_088D0D60:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0E5C;
      }
      goto L_088D0D6C;
    }
L_088D0D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_088D0D94;
      }
      goto L_088D0D78;
    }
L_088D0D78:
    aot_gpr[5] = (0u | 7u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-6));
        goto L_088D0D98;
    }
    goto L_088D0D84;
L_088D0D84:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[30];
    aot_gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_088D0D94;
      }
      goto L_088D0D8C;
    }
L_088D0D8C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D0DEC;
      }
      goto L_088D0D94;
    }
L_088D0D94:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-6));
    goto L_088D0D98;
L_088D0D98:
    aot_gpr[4] = (aot_gpr[20] << 7u);
    aot_gpr[5] = (aot_gpr[20] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(652), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088D0DC4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 13u, 0x088E60D8u>(ctx, &aot_mem) && ctx.pc == 0x088D0DC4u) goto L_088D0DC4;
    return;
L_088D0DC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[18]));
    { const std::uint32_t vfpu_address = aot_gpr[21] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[21] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[21] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[21] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088D0DEC;
L_088D0DEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(168)));
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088D0E1C;
      }
      goto L_088D0DFC;
    }
L_088D0DFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_088D0E00;
L_088D0E00:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D0E10;
      }
      goto L_088D0E08;
    }
L_088D0E08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088D0E1C;
      }
      goto L_088D0E10;
    }
L_088D0E10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D0E00;
      }
      goto L_088D0E1C;
    }
L_088D0E1C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D0E5C;
      }
      goto L_088D0E24;
    }
L_088D0E24:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D0E30u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 209u, 0x08921F30u>(ctx, &aot_mem) && ctx.pc == 0x088D0E30u) goto L_088D0E30;
    return;
L_088D0E30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(112)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[18]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088D0E5C;
L_088D0E5C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D0D60;
      }
      goto L_088D0E6C;
    }
L_088D0E6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[30] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[30] = fs * ft; }
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x088D0E8Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0E8Cu) goto L_088D0E8C;
    return;
L_088D0E8C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_fpr[26] = aot_fpr[30] + aot_fpr[26];
    aot_gpr[31] = (0x088D0EA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0EA4u) goto L_088D0EA4;
    return;
L_088D0EA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[5] = (16544u << 16u);
    aot_fpr[30] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088D0EBCu);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0EBCu) goto L_088D0EBC;
    return;
L_088D0EBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[31] = (0x088D0ECCu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0ECCu) goto L_088D0ECC;
    return;
L_088D0ECC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr[30] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[7];
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_088D0F5C;
      }
      goto L_088D0EFC;
    }
L_088D0EFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[8] = (aot_gpr[20] << 7u);
    aot_gpr[9] = (aot_gpr[20] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(432));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(112)));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088D0F68;
      }
      goto L_088D0F5C;
    }
L_088D0F5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088D0F68;
L_088D0F68:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088D0F78;
      }
      goto L_088D0F70;
    }
L_088D0F70:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D0F9C;
      }
      goto L_088D0F78;
    }
L_088D0F78:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D0F84u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0F84u) goto L_088D0F84;
    return;
L_088D0F84:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[30] - aot_fpr[20];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 14u, 0x088D1158u>(ctx, &aot_mem); return;
      }
      goto L_088D0F9C;
    }
L_088D0F9C:
    aot_gpr[7] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    aot_gpr[7] = (0u | 9u);
      if (branch_taken) {
          goto L_088D0FB0;
      }
      goto L_088D0FA8;
    }
L_088D0FA8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D0FD4;
      }
      goto L_088D0FB0;
    }
L_088D0FB0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D0FBCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0FBCu) goto L_088D0FBC;
    return;
L_088D0FBC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[20] + aot_fpr[28];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 14u, 0x088D1158u>(ctx, &aot_mem); return;
      }
      goto L_088D0FD4;
    }
L_088D0FD4:
    aot_gpr[7] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 2u, 0x088D101Cu>(ctx, &aot_mem); return;
      }
      goto L_088D0FE0;
    }
L_088D0FE0:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x088D0FECu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0FECu) goto L_088D0FEC;
    return;
L_088D0FEC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (15897u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7324)));
    ctx.pc = 0x088D1000u; return;
}

void recomp_unit_0204(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0204_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_204(Runtime &runtime) {
    runtime.register_generated_unit(204u, 0x088D0000u, 4096u, &recomp_unit_0204, &recomp_unit_0204_entry);
    runtime.register_function(0x088D0000u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D000Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0028u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0040u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D004Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0058u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D00C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D00D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D00F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D00F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D00FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0118u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0144u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D014Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D016Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0170u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0190u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0198u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D01B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D01BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D01D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D01F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0204u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0214u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D021Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0228u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0244u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D024Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0258u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0264u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D026Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0274u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0280u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0288u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0290u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0294u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D02FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0310u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D032Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0330u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D033Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D034Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0360u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0370u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0378u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D037Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0390u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D03F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0408u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0410u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0428u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0454u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0460u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0480u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D048Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0494u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0498u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D04FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0504u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0510u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0518u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0520u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0524u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0534u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0578u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0584u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0590u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D059Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D05A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D05C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D05ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D05F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0608u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0610u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0620u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D062Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D063Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D064Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0664u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0668u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0670u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D069Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D06C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D06D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D06E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D06F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D06F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0700u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0704u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D070Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0714u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0728u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D072Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D073Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0750u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0760u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0768u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0778u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0784u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D07A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D07A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D07B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D07CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D07DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D07F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D080Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0818u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0828u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0838u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0840u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0860u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0898u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D089Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D08B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D08BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D08DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D08E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D08F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D08FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0900u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0914u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D091Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0920u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0938u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0940u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0954u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0974u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0A9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0AA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0AB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0AE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0B9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0BACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0BF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0C80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0CB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0D98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0DC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0DECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0DFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0E8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0EA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0EBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0ECCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0EFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0F5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0F68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0F70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0F78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0F84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0F9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0FA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0FB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0FBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0FD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0FE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x088D0FECu, &recomp_unit_0204, "recomp_unit_0204");
}
} // namespace psprecomp
