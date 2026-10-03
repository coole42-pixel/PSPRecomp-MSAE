#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0137[1023] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0,
    0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 51, 52, 0, 0, 0, 53,
    54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 66, 67, 0, 0, 0, 68,
    69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 98, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0,
    0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0,
    185, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203,
};
void recomp_unit_0137_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0888D000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0137[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888D000;
    case 2u: goto L_0888D01C;
    case 3u: goto L_0888D024;
    case 4u: goto L_0888D02C;
    case 5u: goto L_0888D034;
    case 6u: goto L_0888D03C;
    case 7u: goto L_0888D07C;
    case 8u: goto L_0888D084;
    case 9u: goto L_0888D08C;
    case 10u: goto L_0888D0A8;
    case 11u: goto L_0888D0AC;
    case 12u: goto L_0888D0CC;
    case 13u: goto L_0888D0DC;
    case 14u: goto L_0888D0E8;
    case 15u: goto L_0888D104;
    case 16u: goto L_0888D110;
    case 17u: goto L_0888D120;
    case 18u: goto L_0888D128;
    case 19u: goto L_0888D12C;
    case 20u: goto L_0888D138;
    case 21u: goto L_0888D150;
    case 22u: goto L_0888D158;
    case 23u: goto L_0888D160;
    case 24u: goto L_0888D19C;
    case 25u: goto L_0888D1A4;
    case 26u: goto L_0888D1AC;
    case 27u: goto L_0888D1B4;
    case 28u: goto L_0888D1BC;
    case 29u: goto L_0888D1C4;
    case 30u: goto L_0888D1CC;
    case 31u: goto L_0888D1D4;
    case 32u: goto L_0888D1E0;
    case 33u: goto L_0888D1EC;
    case 34u: goto L_0888D204;
    case 35u: goto L_0888D20C;
    case 36u: goto L_0888D228;
    case 37u: goto L_0888D234;
    case 38u: goto L_0888D23C;
    case 39u: goto L_0888D26C;
    case 40u: goto L_0888D2A0;
    case 41u: goto L_0888D2B0;
    case 42u: goto L_0888D2C0;
    case 43u: goto L_0888D2CC;
    case 44u: goto L_0888D2D8;
    case 45u: goto L_0888D304;
    case 46u: goto L_0888D30C;
    case 47u: goto L_0888D318;
    case 48u: goto L_0888D324;
    case 49u: goto L_0888D350;
    case 50u: goto L_0888D354;
    case 51u: goto L_0888D368;
    case 52u: goto L_0888D36C;
    case 53u: goto L_0888D37C;
    case 54u: goto L_0888D380;
    case 55u: goto L_0888D390;
    case 56u: goto L_0888D398;
    case 57u: goto L_0888D3A4;
    case 58u: goto L_0888D3B0;
    case 59u: goto L_0888D3CC;
    case 60u: goto L_0888D3D0;
    case 61u: goto L_0888D3F8;
    case 62u: goto L_0888D418;
    case 63u: goto L_0888D424;
    case 64u: goto L_0888D450;
    case 65u: goto L_0888D454;
    case 66u: goto L_0888D468;
    case 67u: goto L_0888D46C;
    case 68u: goto L_0888D47C;
    case 69u: goto L_0888D480;
    case 70u: goto L_0888D490;
    case 71u: goto L_0888D498;
    case 72u: goto L_0888D4A4;
    case 73u: goto L_0888D4B0;
    case 74u: goto L_0888D4CC;
    case 75u: goto L_0888D4D0;
    case 76u: goto L_0888D4E8;
    case 77u: goto L_0888D4F8;
    case 78u: goto L_0888D508;
    case 79u: goto L_0888D530;
    case 80u: goto L_0888D54C;
    case 81u: goto L_0888D554;
    case 82u: goto L_0888D560;
    case 83u: goto L_0888D5F8;
    case 84u: goto L_0888D604;
    case 85u: goto L_0888D618;
    case 86u: goto L_0888D624;
    case 87u: goto L_0888D63C;
    case 88u: goto L_0888D648;
    case 89u: goto L_0888D650;
    case 90u: goto L_0888D658;
    case 91u: goto L_0888D660;
    case 92u: goto L_0888D684;
    case 93u: goto L_0888D694;
    case 94u: goto L_0888D6AC;
    case 95u: goto L_0888D6B8;
    case 96u: goto L_0888D6C8;
    case 97u: goto L_0888D6D8;
    case 98u: goto L_0888D6DC;
    case 99u: goto L_0888D6E8;
    case 100u: goto L_0888D704;
    case 101u: goto L_0888D710;
    case 102u: goto L_0888D738;
    case 103u: goto L_0888D744;
    case 104u: goto L_0888D750;
    case 105u: goto L_0888D764;
    case 106u: goto L_0888D774;
    case 107u: goto L_0888D77C;
    case 108u: goto L_0888D780;
    case 109u: goto L_0888D7A4;
    case 110u: goto L_0888D7B4;
    case 111u: goto L_0888D7C0;
    case 112u: goto L_0888D7D0;
    case 113u: goto L_0888D7DC;
    case 114u: goto L_0888D7F0;
    case 115u: goto L_0888D814;
    case 116u: goto L_0888D81C;
    case 117u: goto L_0888D830;
    case 118u: goto L_0888D844;
    case 119u: goto L_0888D85C;
    case 120u: goto L_0888D884;
    case 121u: goto L_0888D890;
    case 122u: goto L_0888D8A8;
    case 123u: goto L_0888D8B4;
    case 124u: goto L_0888D8B8;
    case 125u: goto L_0888D8DC;
    case 126u: goto L_0888D8E8;
    case 127u: goto L_0888D8FC;
    case 128u: goto L_0888D918;
    case 129u: goto L_0888D928;
    case 130u: goto L_0888D950;
    case 131u: goto L_0888D960;
    case 132u: goto L_0888D974;
    case 133u: goto L_0888D998;
    case 134u: goto L_0888D9A0;
    case 135u: goto L_0888D9A8;
    case 136u: goto L_0888D9CC;
    case 137u: goto L_0888D9EC;
    case 138u: goto L_0888DA00;
    case 139u: goto L_0888DA0C;
    case 140u: goto L_0888DA40;
    case 141u: goto L_0888DA48;
    case 142u: goto L_0888DA5C;
    case 143u: goto L_0888DA64;
    case 144u: goto L_0888DA70;
    case 145u: goto L_0888DA74;
    case 146u: goto L_0888DA98;
    case 147u: goto L_0888DAAC;
    case 148u: goto L_0888DAB8;
    case 149u: goto L_0888DAC4;
    case 150u: goto L_0888DAF0;
    case 151u: goto L_0888DAF8;
    case 152u: goto L_0888DB04;
    case 153u: goto L_0888DB10;
    case 154u: goto L_0888DB44;
    case 155u: goto L_0888DB4C;
    case 156u: goto L_0888DB58;
    case 157u: goto L_0888DB78;
    case 158u: goto L_0888DB84;
    case 159u: goto L_0888DBB0;
    case 160u: goto L_0888DBBC;
    case 161u: goto L_0888DBDC;
    case 162u: goto L_0888DBEC;
    case 163u: goto L_0888DC00;
    case 164u: goto L_0888DC34;
    case 165u: goto L_0888DC3C;
    case 166u: goto L_0888DC48;
    case 167u: goto L_0888DC64;
    case 168u: goto L_0888DC70;
    case 169u: goto L_0888DC80;
    case 170u: goto L_0888DC94;
    case 171u: goto L_0888DCC8;
    case 172u: goto L_0888DCD0;
    case 173u: goto L_0888DCDC;
    case 174u: goto L_0888DCF8;
    case 175u: goto L_0888DD04;
    case 176u: goto L_0888DD14;
    case 177u: goto L_0888DD28;
    case 178u: goto L_0888DD5C;
    case 179u: goto L_0888DD64;
    case 180u: goto L_0888DD88;
    case 181u: goto L_0888DD94;
    case 182u: goto L_0888DDA0;
    case 183u: goto L_0888DDDC;
    case 184u: goto L_0888DDF4;
    case 185u: goto L_0888DE00;
    case 186u: goto L_0888DE04;
    case 187u: goto L_0888DE14;
    case 188u: goto L_0888DE28;
    case 189u: goto L_0888DE34;
    case 190u: goto L_0888DE74;
    case 191u: goto L_0888DE7C;
    case 192u: goto L_0888DE98;
    case 193u: goto L_0888DEAC;
    case 194u: goto L_0888DEB8;
    case 195u: goto L_0888DEEC;
    case 196u: goto L_0888DEF4;
    case 197u: goto L_0888DF38;
    case 198u: goto L_0888DFC0;
    case 199u: goto L_0888DFD8;
    case 200u: goto L_0888DFE0;
    case 201u: goto L_0888DFE8;
    case 202u: goto L_0888DFF0;
    case 203u: goto L_0888DFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0888D000:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0888D01Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D01Cu) goto L_0888D01C;
    return;
L_0888D01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D0AC;
      }
      goto L_0888D024;
    }
L_0888D024:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D034;
      }
      goto L_0888D02C;
    }
L_0888D02C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888D0AC;
      }
      goto L_0888D034;
    }
L_0888D034:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D084;
      }
      goto L_0888D03C;
    }
L_0888D03C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7000)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0888D07Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D07Cu) goto L_0888D07C;
    return;
L_0888D07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D0AC;
      }
      goto L_0888D084;
    }
L_0888D084:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D0AC;
      }
      goto L_0888D08C;
    }
L_0888D08C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(27536));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888D0A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12696));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0888D0A8u) goto L_0888D0A8;
    return;
L_0888D0A8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_0888D0AC;
L_0888D0AC:
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
L_0888D0CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0888D0DCu);
    aot_gpr[5] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D0DCu) goto L_0888D0DC;
    return;
L_0888D0DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D128;
      }
      goto L_0888D0E8;
    }
L_0888D0E8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_0888D110;
    }
    goto L_0888D104;
L_0888D104:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888D120;
      }
      goto L_0888D110;
    }
L_0888D110:
    aot_gpr[2] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    goto L_0888D120;
L_0888D120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D12C;
      }
      goto L_0888D128;
    }
L_0888D128:
    aot_gpr[2] = (0u | 0u);
    goto L_0888D12C;
L_0888D12C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D138:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D158;
      }
      goto L_0888D150;
    }
L_0888D150:
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    goto L_0888D158;
L_0888D158:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D160:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[9] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0888D1B4;
      }
      goto L_0888D19C;
    }
L_0888D19C:
    if (aot_gpr[4] == 0u) {
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_0888D1AC;
    }
    goto L_0888D1A4;
L_0888D1A4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888D1AC;
      }
      goto L_0888D1AC;
    }
L_0888D1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D1C4;
      }
      goto L_0888D1B4;
    }
L_0888D1B4:
    if (aot_gpr[4] == 0u) {
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
        goto L_0888D1C4;
    }
    goto L_0888D1BC;
L_0888D1BC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888D1C4;
      }
      goto L_0888D1C4;
    }
L_0888D1C4:
    if (aot_gpr[6] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_0888D1D4;
    }
    goto L_0888D1CC;
L_0888D1CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888D1D4;
      }
      goto L_0888D1D4;
    }
L_0888D1D4:
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[31] = (0x0888D1E0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888D1E0u) goto L_0888D1E0;
    return;
L_0888D1E0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888D1ECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888D1ECu) goto L_0888D1EC;
    return;
L_0888D1EC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888D204u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0888D204u) goto L_0888D204;
    return;
L_0888D204:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0888D23C;
      }
      goto L_0888D20C;
    }
L_0888D20C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888D228u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0888D138;
L_0888D228:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0888D234u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888D234u) goto L_0888D234;
    return;
L_0888D234:
    aot_fpr[12] = aot_fpr[24] / aot_fpr[0];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0888D23C;
L_0888D23C:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D26C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0888D2A0u);
    aot_gpr[5] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D2A0u) goto L_0888D2A0;
    return;
L_0888D2A0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888D2B0u);
    aot_gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D2B0u) goto L_0888D2B0;
    return;
L_0888D2B0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888D2C0u);
    aot_gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D2C0u) goto L_0888D2C0;
    return;
L_0888D2C0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888D2CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 216u, 0x0888CF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D2CCu) goto L_0888D2CC;
    return;
L_0888D2CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D30C;
      }
      goto L_0888D2D8;
    }
L_0888D2D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 2048u);
    aot_gpr[9] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888D304u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    goto L_0888D160;
L_0888D304:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_0888D3D0;
      }
      goto L_0888D30C;
    }
L_0888D30C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888D318u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D318u) goto L_0888D318;
    return;
L_0888D318:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D398;
      }
      goto L_0888D324;
    }
L_0888D324:
    aot_gpr[7] = (32639u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (65407u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 65535u);
    aot_gpr[6] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D390;
      }
      goto L_0888D350;
    }
L_0888D350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0888D354;
L_0888D354:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D36C;
      }
      goto L_0888D368;
    }
L_0888D368:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888D36C;
L_0888D36C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D380;
      }
      goto L_0888D37C;
    }
L_0888D37C:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888D380;
L_0888D380:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888D354;
      }
      goto L_0888D390;
    }
L_0888D390:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[20] - aot_fpr[12];
      if (branch_taken) {
          goto L_0888D3D0;
      }
      goto L_0888D398;
    }
L_0888D398:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888D3A4u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D3A4u) goto L_0888D3A4;
    return;
L_0888D3A4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D3D0;
      }
      goto L_0888D3B0;
    }
L_0888D3B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0888D3CCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D3CCu) goto L_0888D3CC;
    return;
L_0888D3CC:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0888D3D0;
L_0888D3D0:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0888D418u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D418u) goto L_0888D418;
    return;
L_0888D418:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D498;
      }
      goto L_0888D424;
    }
L_0888D424:
    aot_gpr[7] = (32639u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (65407u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 65535u);
    aot_gpr[6] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D490;
      }
      goto L_0888D450;
    }
L_0888D450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0888D454;
L_0888D454:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D46C;
      }
      goto L_0888D468;
    }
L_0888D468:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888D46C;
L_0888D46C:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D480;
      }
      goto L_0888D47C;
    }
L_0888D47C:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888D480;
L_0888D480:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888D454;
      }
      goto L_0888D490;
    }
L_0888D490:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[20] - aot_fpr[12];
      if (branch_taken) {
          goto L_0888D4D0;
      }
      goto L_0888D498;
    }
L_0888D498:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888D4A4u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D4A4u) goto L_0888D4A4;
    return;
L_0888D4A4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D4D0;
      }
      goto L_0888D4B0;
    }
L_0888D4B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0888D4CCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D4CCu) goto L_0888D4CC;
    return;
L_0888D4CC:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0888D4D0;
L_0888D4D0:
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0888D4F8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D4F8u) goto L_0888D4F8;
    return;
L_0888D4F8:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(14))))));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D508:
    aot_gpr[4] = (16258u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 36700u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26060)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26064)));
      if (branch_taken) {
          goto L_0888D54C;
      }
      goto L_0888D530;
    }
L_0888D530:
    aot_gpr[6] = (16250u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 57672u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D554;
      }
      goto L_0888D54C;
    }
L_0888D54C:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0888D554;
L_0888D554:
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26060), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[23]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    aot_gpr[31] = (0x0888D5F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888D5F8u) goto L_0888D5F8;
    return;
L_0888D5F8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888D604u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888D604u) goto L_0888D604;
    return;
L_0888D604:
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0888D618u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0888D618u) goto L_0888D618;
    return;
L_0888D618:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0888D624u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 78u, 0x08A2F5B4u>(ctx, &aot_mem) && ctx.pc == 0x0888D624u) goto L_0888D624;
    return;
L_0888D624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0888DA40;
      }
      goto L_0888D63C;
    }
L_0888D63C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888DE7C;
      }
      goto L_0888D648;
    }
L_0888D648:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0888DD64;
      }
      goto L_0888D650;
    }
L_0888D650:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888DA48;
      }
      goto L_0888D658;
    }
L_0888D658:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0888DB4C;
      }
      goto L_0888D660;
    }
L_0888D660:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D684;
    }
L_0888D684:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_0888D6AC;
      }
      goto L_0888D694;
    }
L_0888D694:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = aot_fpr[24] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
      if (branch_taken) {
          goto L_0888D6DC;
      }
      goto L_0888D6AC;
    }
L_0888D6AC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888D6C8;
      }
      goto L_0888D6B8;
    }
L_0888D6B8:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = aot_fpr[24] + aot_fpr[13];
      if (branch_taken) {
          goto L_0888D6DC;
      }
      goto L_0888D6C8;
    }
L_0888D6C8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888D6DC;
      }
      goto L_0888D6D8;
    }
L_0888D6D8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0888D6DC;
L_0888D6DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D7C0;
      }
      goto L_0888D6E8;
    }
L_0888D6E8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(15))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888D738;
      }
      goto L_0888D704;
    }
L_0888D704:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] == 0u) {
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
        goto L_0888D710;
    }
    goto L_0888D710;
L_0888D710:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D738;
    }
L_0888D738:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888D7A4;
      }
      goto L_0888D744;
    }
L_0888D744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D774;
      }
      goto L_0888D750;
    }
L_0888D750:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(15))))));
    aot_gpr[6] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[6]) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_0888D780;
    }
    goto L_0888D764;
L_0888D764:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0888D77C;
      }
      goto L_0888D774;
    }
L_0888D774:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888D77C;
L_0888D77C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_0888D780;
L_0888D780:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D7A4;
    }
L_0888D7A4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D7B4;
    }
L_0888D7B4:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D7C0;
    }
L_0888D7C0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888D8DC;
      }
      goto L_0888D7D0;
    }
L_0888D7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888D844;
      }
      goto L_0888D7DC;
    }
L_0888D7DC:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D81C;
      }
      goto L_0888D7F0;
    }
L_0888D7F0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0888D8B4;
      }
      goto L_0888D814;
    }
L_0888D814:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888D8B4;
      }
      goto L_0888D81C;
    }
L_0888D81C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_0888D8B8;
    }
    goto L_0888D830;
L_0888D830:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_0888D8B4;
      }
      goto L_0888D844;
    }
L_0888D844:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D890;
      }
      goto L_0888D85C;
    }
L_0888D85C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888D8B4;
      }
      goto L_0888D884;
    }
L_0888D884:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888D8B4;
      }
      goto L_0888D890;
    }
L_0888D890:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[14])) && aot_fpr[13] == aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_0888D8B8;
    }
    goto L_0888D8A8;
L_0888D8A8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0888D8B4;
L_0888D8B4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_0888D8B8;
L_0888D8B8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D8DC;
    }
L_0888D8DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888D950;
      }
      goto L_0888D8E8;
    }
L_0888D8E8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D918;
      }
      goto L_0888D8FC;
    }
L_0888D8FC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888D928;
      }
      goto L_0888D918;
    }
L_0888D918:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0888D928;
L_0888D928:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D950;
    }
L_0888D950:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16))))));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888D9CC;
      }
      goto L_0888D960;
    }
L_0888D960:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888D9A0;
      }
      goto L_0888D974;
    }
L_0888D974:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0888D9A8;
      }
      goto L_0888D998;
    }
L_0888D998:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888D9A8;
      }
      goto L_0888D9A0;
    }
L_0888D9A0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]) ^ 0x80000000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888D9A8;
L_0888D9A8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0888D9CC;
L_0888D9CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0888D9ECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D9ECu) goto L_0888D9EC;
    return;
L_0888D9EC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_gpr[31] = (0x0888DA00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DA00u) goto L_0888DA00;
    return;
L_0888DA00:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888DA0Cu);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DA0Cu) goto L_0888DA0C;
    return;
L_0888DA0C:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[11] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888DA40u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888DA40u) goto L_0888DA40;
    return;
L_0888DA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DEF4;
      }
      goto L_0888DA48;
    }
L_0888DA48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0888DA64;
      }
      goto L_0888DA5C;
    }
L_0888DA5C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888DA74;
      }
      goto L_0888DA64;
    }
L_0888DA64:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0888DA70u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0888D26C;
L_0888DA70:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0888DA74;
L_0888DA74:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] & 255u);
    aot_gpr[31] = (0x0888DA98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DA98u) goto L_0888DA98;
    return;
L_0888DA98:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[26] <= aot_fpr[24]));
    aot_fpr[13] = aot_fpr[28] + aot_fpr[13];
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888DAF8;
      }
      goto L_0888DAAC;
    }
L_0888DAAC:
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[31] = (0x0888DAB8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DAB8u) goto L_0888DAB8;
    return;
L_0888DAB8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888DAC4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DAC4u) goto L_0888DAC4;
    return;
L_0888DAC4:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888DAF0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 168u, 0x0891BC78u>(ctx, &aot_mem) && ctx.pc == 0x0888DAF0u) goto L_0888DAF0;
    return;
L_0888DAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DB44;
      }
      goto L_0888DAF8;
    }
L_0888DAF8:
    aot_gpr[20] = (aot_gpr[20] & 255u);
    aot_gpr[31] = (0x0888DB04u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DB04u) goto L_0888DB04;
    return;
L_0888DB04:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888DB10u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DB10u) goto L_0888DB10;
    return;
L_0888DB10:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[11] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888DB44u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888DB44u) goto L_0888DB44;
    return;
L_0888DB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DA40;
      }
      goto L_0888DB4C;
    }
L_0888DB4C:
    aot_gpr[16] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x0888DB58u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DB58u) goto L_0888DB58;
    return;
L_0888DB58:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888DB78u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_0888D138;
L_0888DB78:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[31] = (0x0888DB84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DB84u) goto L_0888DB84;
    return;
L_0888DB84:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[24] = aot_fpr[24] / aot_fpr[0];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0888DC3C;
      }
      goto L_0888DBB0;
    }
L_0888DBB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DC3C;
      }
      goto L_0888DBBC;
    }
L_0888DBBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0888DBDCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DBDCu) goto L_0888DBDC;
    return;
L_0888DBDC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0888DBECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DBECu) goto L_0888DBEC;
    return;
L_0888DBEC:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = aot_fpr[26] + aot_fpr[12];
    aot_gpr[31] = (0x0888DC00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DC00u) goto L_0888DC00;
    return;
L_0888DC00:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888DC34u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888DC34u) goto L_0888DC34;
    return;
L_0888DC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DD5C;
      }
      goto L_0888DC3C;
    }
L_0888DC3C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0888DCD0;
      }
      goto L_0888DC48;
    }
L_0888DC48:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0888DC64u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DC64u) goto L_0888DC64;
    return;
L_0888DC64:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888DC70u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DC70u) goto L_0888DC70;
    return;
L_0888DC70:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0888DC80u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DC80u) goto L_0888DC80;
    return;
L_0888DC80:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = aot_fpr[26] + aot_fpr[12];
    aot_gpr[31] = (0x0888DC94u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DC94u) goto L_0888DC94;
    return;
L_0888DC94:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888DCC8u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888DCC8u) goto L_0888DCC8;
    return;
L_0888DCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DD5C;
      }
      goto L_0888DCD0;
    }
L_0888DCD0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DD5C;
      }
      goto L_0888DCDC;
    }
L_0888DCDC:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0888DCF8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DCF8u) goto L_0888DCF8;
    return;
L_0888DCF8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0888DD04u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD04u) goto L_0888DD04;
    return;
L_0888DD04:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0888DD14u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DD14u) goto L_0888DD14;
    return;
L_0888DD14:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = aot_fpr[26] + aot_fpr[12];
    aot_gpr[31] = (0x0888DD28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DD28u) goto L_0888DD28;
    return;
L_0888DD28:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888DD5Cu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888DD5Cu) goto L_0888DD5C;
    return;
L_0888DD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DA40;
      }
      goto L_0888DD64;
    }
L_0888DD64:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0888DE04;
      }
      goto L_0888DD88;
    }
L_0888DD88:
    aot_gpr[21] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x0888DD94u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DD94u) goto L_0888DD94;
    return;
L_0888DD94:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888DDA0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DDA0u) goto L_0888DDA0;
    return;
L_0888DDA0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[8] ^ 15u);
    aot_gpr[11] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888DDDCu);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 44u, 0x0891B48Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DDDCu) goto L_0888DDDC;
    return;
L_0888DDDC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888DE00;
      }
      goto L_0888DDF4;
    }
L_0888DDF4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
    goto L_0888DE00;
L_0888DE00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0888DE04;
L_0888DE04:
    aot_gpr[19] = (aot_gpr[5] & 255u);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0888DE14u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DE14u) goto L_0888DE14;
    return;
L_0888DE14:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_gpr[31] = (0x0888DE28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DE28u) goto L_0888DE28;
    return;
L_0888DE28:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888DE34u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DE34u) goto L_0888DE34;
    return;
L_0888DE34:
    aot_gpr[4] = (2218u << 16u);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] ^ 15u);
    aot_gpr[11] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888DE74u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 105u, 0x0891B844u>(ctx, &aot_mem) && ctx.pc == 0x0888DE74u) goto L_0888DE74;
    return;
L_0888DE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DA40;
      }
      goto L_0888DE7C;
    }
L_0888DE7C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888DE98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0888DE98u) goto L_0888DE98;
    return;
L_0888DE98:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_gpr[31] = (0x0888DEACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0888DEACu) goto L_0888DEAC;
    return;
L_0888DEAC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888DEB8u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0888DEB8u) goto L_0888DEB8;
    return;
L_0888DEB8:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0888DEECu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0888DEECu) goto L_0888DEEC;
    return;
L_0888DEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DA40;
      }
      goto L_0888DEF4;
    }
L_0888DEF4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DF38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[12] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[20]);
    aot_gpr[14] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[9] & 255u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (49792u << 16u);
    aot_gpr[13] = (aot_gpr[5] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[10] & 255u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[23] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0888DFE8;
      }
      goto L_0888DFC0;
    }
L_0888DFC0:
    aot_gpr[8] = (17320u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888DFE8;
      }
      goto L_0888DFD8;
    }
L_0888DFD8:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DFF0;
      }
      goto L_0888DFE0;
    }
L_0888DFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 8u, 0x0888E040u>(ctx, &aot_mem); return;
      }
      goto L_0888DFE8;
    }
L_0888DFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 33u, 0x0888E2ECu>(ctx, &aot_mem); return;
      }
      goto L_0888DFF0;
    }
L_0888DFF0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 6u, 0x0888E030u>(ctx, &aot_mem); return;
      }
      goto L_0888DFF8;
    }
L_0888DFF8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 3u, 0x0888E014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 1u, 0x0888E000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0137(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0137_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_137(Runtime &runtime) {
    runtime.register_generated_unit(137u, 0x0888D000u, 4096u, &recomp_unit_0137, &recomp_unit_0137_entry);
    runtime.register_function(0x0888D000u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D01Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D024u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D02Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D034u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D03Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D07Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D084u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D08Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D0A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D0ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D0CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D0DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D0E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D110u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D128u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D12Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D138u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D150u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D160u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D19Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D1ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D204u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D20Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D228u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D23Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D26Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D2A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D2B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D2C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D2CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D2D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D304u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D30Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D318u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D324u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D354u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D368u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D36Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D37Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D380u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D390u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D398u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D3A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D3B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D3CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D3D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D3F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D418u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D424u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D450u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D454u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D468u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D46Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D47Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D480u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D490u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D498u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D4A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D4B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D4CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D4D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D4E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D4F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D508u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D530u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D54Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D554u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D560u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D5F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D604u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D618u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D624u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D63Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D648u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D650u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D658u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D660u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D684u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D694u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D6ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D6B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D6C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D6D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D6DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D6E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D704u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D710u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D738u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D744u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D750u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D764u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D774u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D77Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D780u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D7A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D7B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D7C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D7D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D7DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D7F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D814u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D81Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D830u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D844u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D85Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D884u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D890u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D8A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D8B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D8B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D8DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D8E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D8FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D918u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D928u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D950u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D960u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D974u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D998u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D9A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D9A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D9CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888D9ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DA98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DAACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DAB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DAC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DAF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DAF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DB84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DBB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DBBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DBDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DBECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DC94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DCC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DCD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DCDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DCF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DD94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DDA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DDDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DDF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DE98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DEACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DEB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DEECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DEF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DF38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DFC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DFD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DFE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DFE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DFF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x0888DFF8u, &recomp_unit_0137, "recomp_unit_0137");
}
} // namespace psprecomp
