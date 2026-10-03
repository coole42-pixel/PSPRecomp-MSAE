#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0377[1015] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 8, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 18, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0,
    27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 49,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78,
    0, 0, 79, 0, 0, 0, 80, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 144,
    0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192,
};
void recomp_unit_0377_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0897D000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0377[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897D000;
    case 2u: goto L_0897D020;
    case 3u: goto L_0897D038;
    case 4u: goto L_0897D044;
    case 5u: goto L_0897D054;
    case 6u: goto L_0897D060;
    case 7u: goto L_0897D068;
    case 8u: goto L_0897D06C;
    case 9u: goto L_0897D070;
    case 10u: goto L_0897D0A0;
    case 11u: goto L_0897D0DC;
    case 12u: goto L_0897D0E4;
    case 13u: goto L_0897D0F0;
    case 14u: goto L_0897D0F8;
    case 15u: goto L_0897D118;
    case 16u: goto L_0897D13C;
    case 17u: goto L_0897D16C;
    case 18u: goto L_0897D184;
    case 19u: goto L_0897D188;
    case 20u: goto L_0897D198;
    case 21u: goto L_0897D1A4;
    case 22u: goto L_0897D1B0;
    case 23u: goto L_0897D1CC;
    case 24u: goto L_0897D1E4;
    case 25u: goto L_0897D1EC;
    case 26u: goto L_0897D1F8;
    case 27u: goto L_0897D200;
    case 28u: goto L_0897D208;
    case 29u: goto L_0897D220;
    case 30u: goto L_0897D228;
    case 31u: goto L_0897D26C;
    case 32u: goto L_0897D2D0;
    case 33u: goto L_0897D2E4;
    case 34u: goto L_0897D304;
    case 35u: goto L_0897D30C;
    case 36u: goto L_0897D31C;
    case 37u: goto L_0897D334;
    case 38u: goto L_0897D33C;
    case 39u: goto L_0897D348;
    case 40u: goto L_0897D368;
    case 41u: goto L_0897D378;
    case 42u: goto L_0897D380;
    case 43u: goto L_0897D388;
    case 44u: goto L_0897D390;
    case 45u: goto L_0897D398;
    case 46u: goto L_0897D3CC;
    case 47u: goto L_0897D3EC;
    case 48u: goto L_0897D3F8;
    case 49u: goto L_0897D3FC;
    case 50u: goto L_0897D41C;
    case 51u: goto L_0897D424;
    case 52u: goto L_0897D448;
    case 53u: goto L_0897D454;
    case 54u: goto L_0897D478;
    case 55u: goto L_0897D484;
    case 56u: goto L_0897D48C;
    case 57u: goto L_0897D494;
    case 58u: goto L_0897D4DC;
    case 59u: goto L_0897D510;
    case 60u: goto L_0897D520;
    case 61u: goto L_0897D52C;
    case 62u: goto L_0897D534;
    case 63u: goto L_0897D538;
    case 64u: goto L_0897D544;
    case 65u: goto L_0897D560;
    case 66u: goto L_0897D574;
    case 67u: goto L_0897D580;
    case 68u: goto L_0897D588;
    case 69u: goto L_0897D59C;
    case 70u: goto L_0897D5A4;
    case 71u: goto L_0897D5AC;
    case 72u: goto L_0897D5EC;
    case 73u: goto L_0897D5F4;
    case 74u: goto L_0897D62C;
    case 75u: goto L_0897D634;
    case 76u: goto L_0897D65C;
    case 77u: goto L_0897D674;
    case 78u: goto L_0897D67C;
    case 79u: goto L_0897D688;
    case 80u: goto L_0897D698;
    case 81u: goto L_0897D69C;
    case 82u: goto L_0897D6A4;
    case 83u: goto L_0897D6AC;
    case 84u: goto L_0897D6CC;
    case 85u: goto L_0897D704;
    case 86u: goto L_0897D720;
    case 87u: goto L_0897D734;
    case 88u: goto L_0897D74C;
    case 89u: goto L_0897D778;
    case 90u: goto L_0897D784;
    case 91u: goto L_0897D794;
    case 92u: goto L_0897D7BC;
    case 93u: goto L_0897D7C4;
    case 94u: goto L_0897D7CC;
    case 95u: goto L_0897D7D4;
    case 96u: goto L_0897D7D8;
    case 97u: goto L_0897D7E4;
    case 98u: goto L_0897D7EC;
    case 99u: goto L_0897D7F4;
    case 100u: goto L_0897D7FC;
    case 101u: goto L_0897D814;
    case 102u: goto L_0897D864;
    case 103u: goto L_0897D870;
    case 104u: goto L_0897D884;
    case 105u: goto L_0897D89C;
    case 106u: goto L_0897D8A4;
    case 107u: goto L_0897D8C4;
    case 108u: goto L_0897D8D0;
    case 109u: goto L_0897D8EC;
    case 110u: goto L_0897D8F4;
    case 111u: goto L_0897D93C;
    case 112u: goto L_0897D950;
    case 113u: goto L_0897D96C;
    case 114u: goto L_0897D980;
    case 115u: goto L_0897D988;
    case 116u: goto L_0897D994;
    case 117u: goto L_0897D9A0;
    case 118u: goto L_0897D9AC;
    case 119u: goto L_0897D9B4;
    case 120u: goto L_0897D9C8;
    case 121u: goto L_0897D9E0;
    case 122u: goto L_0897D9E8;
    case 123u: goto L_0897DA08;
    case 124u: goto L_0897DA14;
    case 125u: goto L_0897DA24;
    case 126u: goto L_0897DA48;
    case 127u: goto L_0897DA54;
    case 128u: goto L_0897DA5C;
    case 129u: goto L_0897DA90;
    case 130u: goto L_0897DA98;
    case 131u: goto L_0897DAA0;
    case 132u: goto L_0897DAA8;
    case 133u: goto L_0897DAB0;
    case 134u: goto L_0897DAB4;
    case 135u: goto L_0897DAE8;
    case 136u: goto L_0897DB08;
    case 137u: goto L_0897DB14;
    case 138u: goto L_0897DB18;
    case 139u: goto L_0897DB20;
    case 140u: goto L_0897DB34;
    case 141u: goto L_0897DB3C;
    case 142u: goto L_0897DB6C;
    case 143u: goto L_0897DB78;
    case 144u: goto L_0897DB7C;
    case 145u: goto L_0897DB84;
    case 146u: goto L_0897DB90;
    case 147u: goto L_0897DB98;
    case 148u: goto L_0897DBB4;
    case 149u: goto L_0897DC08;
    case 150u: goto L_0897DC18;
    case 151u: goto L_0897DC44;
    case 152u: goto L_0897DC58;
    case 153u: goto L_0897DC60;
    case 154u: goto L_0897DC7C;
    case 155u: goto L_0897DCB0;
    case 156u: goto L_0897DCBC;
    case 157u: goto L_0897DCCC;
    case 158u: goto L_0897DCF8;
    case 159u: goto L_0897DD04;
    case 160u: goto L_0897DD0C;
    case 161u: goto L_0897DD34;
    case 162u: goto L_0897DD4C;
    case 163u: goto L_0897DD6C;
    case 164u: goto L_0897DD94;
    case 165u: goto L_0897DDA4;
    case 166u: goto L_0897DDB0;
    case 167u: goto L_0897DDC0;
    case 168u: goto L_0897DDCC;
    case 169u: goto L_0897DDD0;
    case 170u: goto L_0897DDD8;
    case 171u: goto L_0897DE08;
    case 172u: goto L_0897DE38;
    case 173u: goto L_0897DE54;
    case 174u: goto L_0897DE74;
    case 175u: goto L_0897DEC0;
    case 176u: goto L_0897DEC8;
    case 177u: goto L_0897DED4;
    case 178u: goto L_0897DEDC;
    case 179u: goto L_0897DEEC;
    case 180u: goto L_0897DEF8;
    case 181u: goto L_0897DF00;
    case 182u: goto L_0897DF20;
    case 183u: goto L_0897DF2C;
    case 184u: goto L_0897DF30;
    case 185u: goto L_0897DF38;
    case 186u: goto L_0897DF58;
    case 187u: goto L_0897DF74;
    case 188u: goto L_0897DF94;
    case 189u: goto L_0897DFBC;
    case 190u: goto L_0897DFC8;
    case 191u: goto L_0897DFD0;
    case 192u: goto L_0897DFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897D000:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 231u, 0x0897CFB8u>(ctx, &aot_mem); return;
      }
      goto L_0897D020;
    }
L_0897D020:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(844), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(848), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(843), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x0897D038u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 34u, 0x0897C15Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D038u) goto L_0897D038;
    return;
L_0897D038:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x0897D044u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 180u, 0x0897FC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D044u) goto L_0897D044;
    return;
L_0897D044:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
      if (branch_taken) {
          goto L_0897D068;
      }
      goto L_0897D054;
    }
L_0897D054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
        goto L_0897D06C;
    }
    goto L_0897D060;
L_0897D060:
    aot_gpr[31] = (0x0897D068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D068u) goto L_0897D068;
    return;
L_0897D068:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    goto L_0897D06C;
L_0897D06C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_0897D070;
L_0897D070:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D0A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1624)));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1412)));
      if (branch_taken) {
          goto L_0897D0E4;
      }
      goto L_0897D0DC;
    }
L_0897D0DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897D0E4;
      }
      goto L_0897D0E4;
    }
L_0897D0E4:
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D0F8;
      }
      goto L_0897D0F0;
    }
L_0897D0F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897D0F8;
      }
      goto L_0897D0F8;
    }
L_0897D0F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0897D13C;
      }
      goto L_0897D118;
    }
L_0897D118:
    aot_gpr[7] = (0u | 272u);
    aot_gpr[6] = (0u | 480u);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    aot_gpr[4] = (aot_gpr[4] >> 1u);
    aot_gpr[5] = (aot_gpr[5] << 9u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] << 2u);
    goto L_0897D13C;
L_0897D13C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(844)));
    aot_gpr[5] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(724)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(672));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897D16Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D16Cu) goto L_0897D16C;
    return;
L_0897D16C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(844)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(844), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897D188;
      }
      goto L_0897D184;
    }
L_0897D184:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(844), 0u);
    goto L_0897D188;
L_0897D188:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1408)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897D208;
      }
      goto L_0897D198;
    }
L_0897D198:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897D1A4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897D1A4u) goto L_0897D1A4;
    return;
L_0897D1A4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897D1B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D1B0u) goto L_0897D1B0;
    return;
L_0897D1B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D1CCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D1CCu) goto L_0897D1CC;
    return;
L_0897D1CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1424)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897D1E4u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    ctx.pc = 0x08A5AE04u;
    return;
L_0897D1E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D200;
      }
      goto L_0897D1EC;
    }
L_0897D1EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1464), aot_gpr[19]);
        goto L_0897D228;
    }
    goto L_0897D1F8;
L_0897D1F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1432)));
      if (branch_taken) {
          goto L_0897D398;
      }
      goto L_0897D200;
    }
L_0897D200:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 155u);
      if (branch_taken) {
          goto L_0897D3FC;
      }
      goto L_0897D208;
    }
L_0897D208:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D220u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D220u) goto L_0897D220;
    return;
L_0897D220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897D1EC;
      }
      goto L_0897D228;
    }
L_0897D228:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20388)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[17] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x0897D26Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 122u, 0x0897F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D26Cu) goto L_0897D26C;
    return;
L_0897D26C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1412)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1656)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1408)));
    aot_gpr[7] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0897D2D0u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D2D0u) goto L_0897D2D0;
    return;
L_0897D2D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1436)));
    aot_gpr[5] = (0u | 1026u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1436), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897D390;
      }
      goto L_0897D2E4;
    }
L_0897D2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
    aot_gpr[5] = (0u | 64u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D304u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D304u) goto L_0897D304;
    return;
L_0897D304:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D390;
      }
      goto L_0897D30C;
    }
L_0897D30C:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(1220));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
    aot_gpr[18] = (256u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    goto L_0897D31C;
L_0897D31C:
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D334u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D334u) goto L_0897D334;
    return;
L_0897D334:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D390;
      }
      goto L_0897D33C;
    }
L_0897D33C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(843)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D390;
      }
      goto L_0897D348;
    }
L_0897D348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(844)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(840)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897D380;
      }
      goto L_0897D368;
    }
L_0897D368:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897D378u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x0897D378u) goto L_0897D378;
    return;
L_0897D378:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_0897D388;
      }
      goto L_0897D380;
    }
L_0897D380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D390;
      }
      goto L_0897D388;
    }
L_0897D388:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
      if (branch_taken) {
          goto L_0897D31C;
      }
      goto L_0897D390;
    }
L_0897D390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D3F8;
      }
      goto L_0897D398;
    }
L_0897D398:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(672));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1648)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1432)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1656)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1648)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0897D3CCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    ctx.pc = 0x08A5B2B4u;
    return;
L_0897D3CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1432)));
    aot_gpr[5] = (0u | 512u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1648)));
    aot_gpr[6] = (0u | 3u);
    aot_gpr[31] = (0x0897D3ECu);
    aot_gpr[7] = (0u | 1u);
    ctx.pc = 0x08A5AF2Cu;
    return;
L_0897D3EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1432)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1432), aot_gpr[4]);
    goto L_0897D3F8;
L_0897D3F8:
    aot_gpr[2] = (0u | 0u);
    goto L_0897D3FC;
L_0897D3FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D41C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D424:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D448u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D448u) goto L_0897D448;
    return;
L_0897D448:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D478u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D478u) goto L_0897D478;
    return;
L_0897D478:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D484:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D48C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D494:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8312));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D4DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_0897D534;
      }
      goto L_0897D510;
    }
L_0897D510:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897D520u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897D520u) goto L_0897D520;
    return;
L_0897D520:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897D52Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D52Cu) goto L_0897D52C;
    return;
L_0897D52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D538;
      }
      goto L_0897D534;
    }
L_0897D534:
    aot_gpr[2] = (0u | 0u);
    goto L_0897D538;
L_0897D538:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897D588;
      }
      goto L_0897D560;
    }
L_0897D560:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[31] = (0x0897D574u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897D4DC;
L_0897D574:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D588;
      }
      goto L_0897D580;
    }
L_0897D580:
    aot_gpr[31] = (0x0897D588u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897D588u) goto L_0897D588;
    return;
L_0897D588:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D59C:
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_0897D5AC;
    }
    goto L_0897D5A4;
L_0897D5A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_0897D5EC;
      }
      goto L_0897D5AC;
    }
L_0897D5AC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897D5EC;
L_0897D5EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D5F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897D634;
      }
      goto L_0897D62C;
    }
L_0897D62C:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897D6AC;
      }
      goto L_0897D634;
    }
L_0897D634:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[5] ^ aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D6A4;
      }
      goto L_0897D65C;
    }
L_0897D65C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897D674u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D674u) goto L_0897D674;
    return;
L_0897D674:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D69C;
      }
      goto L_0897D67C;
    }
L_0897D67C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897D688u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897D688u) goto L_0897D688;
    return;
L_0897D688:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897D698u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897D698u) goto L_0897D698;
    return;
L_0897D698:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0897D69C;
L_0897D69C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    goto L_0897D6A4;
L_0897D6A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    goto L_0897D6AC;
L_0897D6AC:
    aot_gpr[2] = (0u | 0u);
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
L_0897D6CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (aot_gpr[9] ^ aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[10] & aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7CC;
      }
      goto L_0897D704;
    }
L_0897D704:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897D720u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897D720u) goto L_0897D720;
    return;
L_0897D720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0897D734u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897D734u) goto L_0897D734;
    return;
L_0897D734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0897D7BC;
      }
      goto L_0897D74C;
    }
L_0897D74C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0897D778u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0897D778u) goto L_0897D778;
    return;
L_0897D778:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897D784u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897D784u) goto L_0897D784;
    return;
L_0897D784:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897D794u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D794u) goto L_0897D794;
    return;
L_0897D794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_0897D7C4;
      }
      goto L_0897D7BC;
    }
L_0897D7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7D8;
      }
      goto L_0897D7C4;
    }
L_0897D7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7D4;
      }
      goto L_0897D7CC;
    }
L_0897D7CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_0897D7D4;
L_0897D7D4:
    aot_gpr[2] = (0u | 0u);
    goto L_0897D7D8;
L_0897D7D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D7E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D7EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D7F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D7FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897D814u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    goto L_0897D494;
L_0897D814:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8376));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897D864u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 115u, 0x08979768u>(ctx, &aot_mem) && ctx.pc == 0x0897D864u) goto L_0897D864;
    return;
L_0897D864:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x0897D870u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 173u, 0x08A41BA0u>(ctx, &aot_mem) && ctx.pc == 0x0897D870u) goto L_0897D870;
    return;
L_0897D870:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897D8A4;
      }
      goto L_0897D89C;
    }
L_0897D89C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897D8C4;
      }
      goto L_0897D8A4;
    }
L_0897D8A4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897D8C4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_0897D5F4;
L_0897D8C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D8D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0897D8ECu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897D8ECu) goto L_0897D8EC;
    return;
L_0897D8EC:
    aot_gpr[31] = (0x0897D8F4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897D8F4u) goto L_0897D8F4;
    return;
L_0897D8F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897D93Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897D93Cu) goto L_0897D93C;
    return;
L_0897D93C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897D9B4;
      }
      goto L_0897D96C;
    }
L_0897D96C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8376));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[31] = (0x0897D980u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897D8D0;
L_0897D980:
    aot_gpr[31] = (0x0897D988u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 194u, 0x08A41CD0u>(ctx, &aot_mem) && ctx.pc == 0x0897D988u) goto L_0897D988;
    return;
L_0897D988:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897D994u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 117u, 0x089797B0u>(ctx, &aot_mem) && ctx.pc == 0x0897D994u) goto L_0897D994;
    return;
L_0897D994:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897D9A0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0897D544;
L_0897D9A0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D9B4;
      }
      goto L_0897D9AC;
    }
L_0897D9AC:
    aot_gpr[31] = (0x0897D9B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897D9B4u) goto L_0897D9B4;
    return;
L_0897D9B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D9C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897D9E8;
      }
      goto L_0897D9E0;
    }
L_0897D9E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897DA08;
      }
      goto L_0897D9E8;
    }
L_0897D9E8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897DA08u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_0897D6CC;
L_0897DA08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897DA14:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897DA24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897DA48u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DA48u) goto L_0897DA48;
    return;
L_0897DA48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897DA54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897DA5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897DAA0;
      }
      goto L_0897DA90;
    }
L_0897DA90:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DAA8;
      }
      goto L_0897DA98;
    }
L_0897DA98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0897DAB4;
      }
      goto L_0897DAA0;
    }
L_0897DAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB98;
      }
      goto L_0897DAA8;
    }
L_0897DAA8:
    aot_gpr[31] = (0x0897DAB0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897DAB0u) goto L_0897DAB0;
    return;
L_0897DAB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_0897DAB4;
L_0897DAB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[10] = (aot_gpr[7] ^ aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB20;
      }
      goto L_0897DAE8;
    }
L_0897DAE8:
    aot_gpr[10] = (aot_gpr[5] ^ aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[11] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0897DB14;
      }
      goto L_0897DB08;
    }
L_0897DB08:
    aot_gpr[11] = (aot_gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897DB18;
      }
      goto L_0897DB14;
    }
L_0897DB14:
    aot_gpr[10] = (aot_gpr[8] | 0u);
    goto L_0897DB18;
L_0897DB18:
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0897DB20;
L_0897DB20:
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[18] = (aot_gpr[4] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    aot_gpr[19] = (aot_gpr[11] - aot_gpr[10]);
      if (branch_taken) {
          goto L_0897DB7C;
      }
      goto L_0897DB34;
    }
L_0897DB34:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0897DB7C;
      }
      goto L_0897DB3C;
    }
L_0897DB3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[7] ^ aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[19] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897DB78;
      }
      goto L_0897DB6C;
    }
L_0897DB6C:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    goto L_0897DB78;
L_0897DB78:
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_0897DB7C;
L_0897DB7C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB90;
      }
      goto L_0897DB84;
    }
L_0897DB84:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897DB90u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897DB90u) goto L_0897DB90;
    return;
L_0897DB90:
    aot_gpr[3] = (aot_gpr[19] | 0u);
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_0897DB98;
L_0897DB98:
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
L_0897DBB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_0897DC44;
      }
      goto L_0897DC08;
    }
L_0897DC08:
    aot_gpr[30] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[31] = (0x0897DC18u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897DC18u) goto L_0897DC18;
    return;
L_0897DC18:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-20284));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-20268));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-20244));
      if (branch_taken) {
          goto L_0897DC58;
      }
      goto L_0897DC44;
    }
L_0897DC44:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897DDD8;
      }
      goto L_0897DC58;
    }
L_0897DC58:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCCC;
      }
      goto L_0897DC60;
    }
L_0897DC60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897DC7Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DC7Cu) goto L_0897DC7C;
    return;
L_0897DC7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[8] = (aot_gpr[3] ^ aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[3] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[8] & aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0897DD0C;
      }
      goto L_0897DCB0;
    }
L_0897DCB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_0897DCBC;
L_0897DCBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_0897DDD8;
      }
      goto L_0897DCCC;
    }
L_0897DCCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897DCF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20312));
    goto L_0897DA54;
L_0897DCF8:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x0897DD04u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897DD04u) goto L_0897DD04;
    return;
L_0897DD04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897DDD8;
      }
      goto L_0897DD0C;
    }
L_0897DD0C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[8] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[8] & aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DD6C;
      }
      goto L_0897DD34;
    }
L_0897DD34:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0897DD4Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20320)));
    goto L_0897DA54;
L_0897DD4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0897DDD0;
      }
      goto L_0897DD6C;
    }
L_0897DD6C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[8] = (aot_gpr[7] ^ aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[8] & aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DDA4;
      }
      goto L_0897DD94;
    }
L_0897DD94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0897DCBC;
      }
      goto L_0897DDA4;
    }
L_0897DDA4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897DDB0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0897DA54;
L_0897DDB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0897DDC0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 23u, 0x08A42140u>(ctx, &aot_mem) && ctx.pc == 0x0897DDC0u) goto L_0897DDC0;
    return;
L_0897DDC0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897DDCCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0897DA54;
L_0897DDCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_0897DDD0;
L_0897DDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DC58;
      }
      goto L_0897DDD8;
    }
L_0897DDD8:
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
L_0897DE08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(100));
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897DEDC;
      }
      goto L_0897DE38;
    }
L_0897DE38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897DE54u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DE54u) goto L_0897DE54;
    return;
L_0897DE54:
    aot_gpr[4] = (aot_gpr[3] ^ aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DEC8;
      }
      goto L_0897DE74;
    }
L_0897DE74:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[12] = (aot_gpr[10] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[12] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[9] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (aot_gpr[11] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[14]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897DF00;
      }
      goto L_0897DEC0;
    }
L_0897DEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF38;
      }
      goto L_0897DEC8;
    }
L_0897DEC8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897DED4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897DED4u) goto L_0897DED4;
    return;
L_0897DED4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 157u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 5u, 0x0897E034u>(ctx, &aot_mem); return;
      }
      goto L_0897DEDC;
    }
L_0897DEDC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897DEECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20224));
    goto L_0897DA54;
L_0897DEEC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897DEF8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897DEF8u) goto L_0897DEF8;
    return;
L_0897DEF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 5u, 0x0897E034u>(ctx, &aot_mem); return;
      }
      goto L_0897DF00;
    }
L_0897DF00:
    aot_gpr[6] = (aot_gpr[3] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897DF2C;
      }
      goto L_0897DF20;
    }
L_0897DF20:
    aot_gpr[7] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897DF30;
      }
      goto L_0897DF2C;
    }
L_0897DF2C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0897DF30;
L_0897DF30:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_0897DF38;
L_0897DF38:
    aot_gpr[4] = (aot_gpr[9] ^ aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[9] ^ aot_gpr[13]);
      if (branch_taken) {
          goto L_0897DF74;
      }
      goto L_0897DF58;
    }
L_0897DF58:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[12] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[13] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DFBC;
      }
      goto L_0897DF74;
    }
L_0897DF74:
    aot_gpr[4] = (aot_gpr[13] ^ aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[13] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DFD0;
      }
      goto L_0897DF94;
    }
L_0897DF94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897DFD8;
      }
      goto L_0897DFBC;
    }
L_0897DFBC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897DFC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897DFC8u) goto L_0897DFC8;
    return;
L_0897DFC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 157u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 5u, 0x0897E034u>(ctx, &aot_mem); return;
      }
      goto L_0897DFD0;
    }
L_0897DFD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[12]);
    goto L_0897DFD8;
L_0897DFD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 3u, 0x0897E020u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 1u, 0x0897E004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0377(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0377_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_377(Runtime &runtime) {
    runtime.register_generated_unit(377u, 0x0897D000u, 4096u, &recomp_unit_0377, &recomp_unit_0377_entry);
    runtime.register_function(0x0897D000u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D020u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D038u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D044u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D054u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D060u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D068u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D06Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D070u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D0A0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D0DCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D0E4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D0F0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D0F8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D118u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D13Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D16Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D184u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D188u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D198u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D1A4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D1B0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D1CCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D1E4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D1ECu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D1F8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D200u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D208u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D220u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D228u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D26Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D2D0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D2E4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D304u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D30Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D31Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D334u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D33Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D348u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D368u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D378u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D380u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D388u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D390u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D398u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D3CCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D3ECu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D3F8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D3FCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D41Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D424u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D448u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D454u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D478u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D484u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D48Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D494u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D4DCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D510u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D520u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D52Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D534u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D538u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D544u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D560u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D574u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D580u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D588u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D59Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D5A4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D5ACu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D5ECu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D5F4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D62Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D634u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D65Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D674u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D67Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D688u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D698u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D69Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D6A4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D6ACu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D6CCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D704u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D720u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D734u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D74Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D778u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D784u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D794u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7BCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7C4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7CCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7D4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7D8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7E4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7ECu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7F4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D7FCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D814u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D864u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D870u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D884u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D89Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D8A4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D8C4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D8D0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D8ECu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D8F4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D93Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D950u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D96Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D980u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D988u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D994u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D9A0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D9ACu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D9B4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D9C8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D9E0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897D9E8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA08u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA14u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA24u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA48u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA54u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA5Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA90u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DA98u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DAA0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DAA8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DAB0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DAB4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DAE8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB08u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB14u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB18u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB20u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB34u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB3Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB6Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB78u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB7Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB84u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB90u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DB98u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DBB4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DC08u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DC18u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DC44u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DC58u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DC60u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DC7Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DCB0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DCBCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DCCCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DCF8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DD04u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DD0Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DD34u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DD4Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DD6Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DD94u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DDA4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DDB0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DDC0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DDCCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DDD0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DDD8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DE08u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DE38u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DE54u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DE74u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DEC0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DEC8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DED4u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DEDCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DEECu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DEF8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF00u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF20u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF2Cu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF30u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF38u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF58u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF74u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DF94u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DFBCu, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DFC8u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DFD0u, &recomp_unit_0377, "recomp_unit_0377");
    runtime.register_function(0x0897DFD8u, &recomp_unit_0377, "recomp_unit_0377");
}
} // namespace psprecomp
