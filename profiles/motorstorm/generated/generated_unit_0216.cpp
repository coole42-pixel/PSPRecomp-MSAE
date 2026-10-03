#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0216[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 37, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0,
    0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0,
    68, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 78,
    0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 99, 0, 100, 0,
    0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 169, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0,
    178, 0, 0, 179, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0,
    186, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 198, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203,
};
void recomp_unit_0216_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088DC004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0216[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DC004;
    case 2u: goto L_088DC024;
    case 3u: goto L_088DC030;
    case 4u: goto L_088DC038;
    case 5u: goto L_088DC054;
    case 6u: goto L_088DC05C;
    case 7u: goto L_088DC070;
    case 8u: goto L_088DC07C;
    case 9u: goto L_088DC0B0;
    case 10u: goto L_088DC0B8;
    case 11u: goto L_088DC0E4;
    case 12u: goto L_088DC100;
    case 13u: goto L_088DC114;
    case 14u: goto L_088DC11C;
    case 15u: goto L_088DC13C;
    case 16u: goto L_088DC16C;
    case 17u: goto L_088DC18C;
    case 18u: goto L_088DC1A4;
    case 19u: goto L_088DC1AC;
    case 20u: goto L_088DC1C4;
    case 21u: goto L_088DC1F0;
    case 22u: goto L_088DC214;
    case 23u: goto L_088DC228;
    case 24u: goto L_088DC240;
    case 25u: goto L_088DC26C;
    case 26u: goto L_088DC284;
    case 27u: goto L_088DC298;
    case 28u: goto L_088DC2A8;
    case 29u: goto L_088DC2C0;
    case 30u: goto L_088DC2D4;
    case 31u: goto L_088DC2E4;
    case 32u: goto L_088DC2FC;
    case 33u: goto L_088DC310;
    case 34u: goto L_088DC328;
    case 35u: goto L_088DC340;
    case 36u: goto L_088DC34C;
    case 37u: goto L_088DC350;
    case 38u: goto L_088DC358;
    case 39u: goto L_088DC36C;
    case 40u: goto L_088DC374;
    case 41u: goto L_088DC37C;
    case 42u: goto L_088DC38C;
    case 43u: goto L_088DC39C;
    case 44u: goto L_088DC3A4;
    case 45u: goto L_088DC3B0;
    case 46u: goto L_088DC3DC;
    case 47u: goto L_088DC404;
    case 48u: goto L_088DC40C;
    case 49u: goto L_088DC414;
    case 50u: goto L_088DC428;
    case 51u: goto L_088DC430;
    case 52u: goto L_088DC438;
    case 53u: goto L_088DC44C;
    case 54u: goto L_088DC454;
    case 55u: goto L_088DC458;
    case 56u: goto L_088DC468;
    case 57u: goto L_088DC470;
    case 58u: goto L_088DC488;
    case 59u: goto L_088DC4B4;
    case 60u: goto L_088DC4CC;
    case 61u: goto L_088DC4E0;
    case 62u: goto L_088DC4F8;
    case 63u: goto L_088DC528;
    case 64u: goto L_088DC530;
    case 65u: goto L_088DC554;
    case 66u: goto L_088DC560;
    case 67u: goto L_088DC56C;
    case 68u: goto L_088DC584;
    case 69u: goto L_088DC588;
    case 70u: goto L_088DC598;
    case 71u: goto L_088DC59C;
    case 72u: goto L_088DC5B0;
    case 73u: goto L_088DC5BC;
    case 74u: goto L_088DC5C8;
    case 75u: goto L_088DC5E4;
    case 76u: goto L_088DC5EC;
    case 77u: goto L_088DC5F8;
    case 78u: goto L_088DC600;
    case 79u: goto L_088DC608;
    case 80u: goto L_088DC610;
    case 81u: goto L_088DC61C;
    case 82u: goto L_088DC630;
    case 83u: goto L_088DC64C;
    case 84u: goto L_088DC684;
    case 85u: goto L_088DC688;
    case 86u: goto L_088DC6A4;
    case 87u: goto L_088DC6B8;
    case 88u: goto L_088DC6C0;
    case 89u: goto L_088DC6DC;
    case 90u: goto L_088DC6F4;
    case 91u: goto L_088DC6FC;
    case 92u: goto L_088DC714;
    case 93u: goto L_088DC728;
    case 94u: goto L_088DC738;
    case 95u: goto L_088DC748;
    case 96u: goto L_088DC750;
    case 97u: goto L_088DC768;
    case 98u: goto L_088DC770;
    case 99u: goto L_088DC774;
    case 100u: goto L_088DC77C;
    case 101u: goto L_088DC78C;
    case 102u: goto L_088DC798;
    case 103u: goto L_088DC7B8;
    case 104u: goto L_088DC7C0;
    case 105u: goto L_088DC7C8;
    case 106u: goto L_088DC7D0;
    case 107u: goto L_088DC7D4;
    case 108u: goto L_088DC7E4;
    case 109u: goto L_088DC808;
    case 110u: goto L_088DC81C;
    case 111u: goto L_088DC834;
    case 112u: goto L_088DC860;
    case 113u: goto L_088DC874;
    case 114u: goto L_088DC888;
    case 115u: goto L_088DC8A0;
    case 116u: goto L_088DC8CC;
    case 117u: goto L_088DC8E0;
    case 118u: goto L_088DC8F4;
    case 119u: goto L_088DC90C;
    case 120u: goto L_088DC960;
    case 121u: goto L_088DC9B4;
    case 122u: goto L_088DC9C8;
    case 123u: goto L_088DC9D8;
    case 124u: goto L_088DCA04;
    case 125u: goto L_088DCA14;
    case 126u: goto L_088DCA84;
    case 127u: goto L_088DCA88;
    case 128u: goto L_088DCA98;
    case 129u: goto L_088DCAA4;
    case 130u: goto L_088DCAB4;
    case 131u: goto L_088DCACC;
    case 132u: goto L_088DCAE0;
    case 133u: goto L_088DCB10;
    case 134u: goto L_088DCB3C;
    case 135u: goto L_088DCB50;
    case 136u: goto L_088DCB54;
    case 137u: goto L_088DCB80;
    case 138u: goto L_088DCB88;
    case 139u: goto L_088DCBAC;
    case 140u: goto L_088DCBB8;
    case 141u: goto L_088DCBC0;
    case 142u: goto L_088DCBC8;
    case 143u: goto L_088DCBE0;
    case 144u: goto L_088DCBFC;
    case 145u: goto L_088DCC08;
    case 146u: goto L_088DCC20;
    case 147u: goto L_088DCC38;
    case 148u: goto L_088DCC40;
    case 149u: goto L_088DCC48;
    case 150u: goto L_088DCC50;
    case 151u: goto L_088DCC58;
    case 152u: goto L_088DCC64;
    case 153u: goto L_088DCC6C;
    case 154u: goto L_088DCC74;
    case 155u: goto L_088DCC88;
    case 156u: goto L_088DCCA0;
    case 157u: goto L_088DCCA8;
    case 158u: goto L_088DCCB8;
    case 159u: goto L_088DCCC0;
    case 160u: goto L_088DCCCC;
    case 161u: goto L_088DCCD8;
    case 162u: goto L_088DCCE0;
    case 163u: goto L_088DCD00;
    case 164u: goto L_088DCD18;
    case 165u: goto L_088DCD20;
    case 166u: goto L_088DCD30;
    case 167u: goto L_088DCD3C;
    case 168u: goto L_088DCD84;
    case 169u: goto L_088DCD8C;
    case 170u: goto L_088DCD98;
    case 171u: goto L_088DCD9C;
    case 172u: goto L_088DCDC4;
    case 173u: goto L_088DCDD0;
    case 174u: goto L_088DCDD8;
    case 175u: goto L_088DCDDC;
    case 176u: goto L_088DCDF0;
    case 177u: goto L_088DCDF8;
    case 178u: goto L_088DCE04;
    case 179u: goto L_088DCE10;
    case 180u: goto L_088DCE14;
    case 181u: goto L_088DCE1C;
    case 182u: goto L_088DCE4C;
    case 183u: goto L_088DCE6C;
    case 184u: goto L_088DCE74;
    case 185u: goto L_088DCE7C;
    case 186u: goto L_088DCE84;
    case 187u: goto L_088DCE88;
    case 188u: goto L_088DCE90;
    case 189u: goto L_088DCE9C;
    case 190u: goto L_088DCEBC;
    case 191u: goto L_088DCED0;
    case 192u: goto L_088DCEF0;
    case 193u: goto L_088DCF30;
    case 194u: goto L_088DCF3C;
    case 195u: goto L_088DCF54;
    case 196u: goto L_088DCF5C;
    case 197u: goto L_088DCF88;
    case 198u: goto L_088DCF94;
    case 199u: goto L_088DCF9C;
    case 200u: goto L_088DCFA0;
    case 201u: goto L_088DCFC0;
    case 202u: goto L_088DCFE8;
    case 203u: goto L_088DCFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DC004:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DC030;
      }
      goto L_088DC024;
    }
L_088DC024:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    goto L_088DC030;
L_088DC030:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088DC054;
      }
      goto L_088DC038;
    }
L_088DC038:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088DC054u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DC054u) goto L_088DC054;
    return;
L_088DC054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC070;
      }
      goto L_088DC05C;
    }
L_088DC05C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 180u, 0x088DBFE0u>(ctx, &aot_mem); return;
      }
      goto L_088DC070;
    }
L_088DC070:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC07C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC114;
      }
      goto L_088DC0B0;
    }
L_088DC0B0:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_088DC0B8;
L_088DC0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(204), aot_gpr[6]);
    aot_gpr[31] = (0x088DC0E4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 10u, 0x088BA0C4u>(ctx, &aot_mem) && ctx.pc == 0x088DC0E4u) goto L_088DC0E4;
    return;
L_088DC0E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(408), aot_gpr[18]);
    aot_gpr[31] = (0x088DC100u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 23u, 0x088CC204u>(ctx, &aot_mem) && ctx.pc == 0x088DC100u) goto L_088DC100;
    return;
L_088DC100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC0B8;
      }
      goto L_088DC114;
    }
L_088DC114:
    aot_gpr[31] = (0x088DC11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 115u, 0x0892C864u>(ctx, &aot_mem) && ctx.pc == 0x088DC11Cu) goto L_088DC11C;
    return;
L_088DC11C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC1A4;
      }
      goto L_088DC16C;
    }
L_088DC16C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088DC18Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DC18Cu) goto L_088DC18C;
    return;
L_088DC18C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088DC16C;
      }
      goto L_088DC1A4;
    }
L_088DC1A4:
    aot_gpr[31] = (0x088DC1ACu);
    aot_gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 136u, 0x08863A28u>(ctx, &aot_mem) && ctx.pc == 0x088DC1ACu) goto L_088DC1AC;
    return;
L_088DC1AC:
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
L_088DC1C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC228;
      }
      goto L_088DC1F0;
    }
L_088DC1F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088DC214u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DC214u) goto L_088DC214;
    return;
L_088DC214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC1F0;
      }
      goto L_088DC228;
    }
L_088DC228:
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
L_088DC240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC298;
      }
      goto L_088DC26C;
    }
L_088DC26C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DC284u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 3u, 0x088EA058u>(ctx, &aot_mem) && ctx.pc == 0x088DC284u) goto L_088DC284;
    return;
L_088DC284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC26C;
      }
      goto L_088DC298;
    }
L_088DC298:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC2D4;
      }
      goto L_088DC2A8;
    }
L_088DC2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DC2C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 7u, 0x088EA0BCu>(ctx, &aot_mem) && ctx.pc == 0x088DC2C0u) goto L_088DC2C0;
    return;
L_088DC2C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC2A8;
      }
      goto L_088DC2D4;
    }
L_088DC2D4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC310;
      }
      goto L_088DC2E4;
    }
L_088DC2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DC2FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 38u, 0x088EF44Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC2FCu) goto L_088DC2FC;
    return;
L_088DC2FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC2E4;
      }
      goto L_088DC310;
    }
L_088DC310:
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
L_088DC328:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC340;
    }
L_088DC340:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-32519), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC34C;
    }
L_088DC34C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-32519), static_cast<std::uint8_t>(0u));
    goto L_088DC350;
L_088DC350:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088DC36Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x088DC36Cu) goto L_088DC36C;
    return;
L_088DC36C:
    aot_gpr[31] = (0x088DC374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 167u, 0x088FEC64u>(ctx, &aot_mem) && ctx.pc == 0x088DC374u) goto L_088DC374;
    return;
L_088DC374:
    aot_gpr[31] = (0x088DC37Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088DC328;
L_088DC37C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC38C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088DC39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x088DC39Cu) goto L_088DC39C;
    return;
L_088DC39C:
    aot_gpr[31] = (0x088DC3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 173u, 0x088FED24u>(ctx, &aot_mem) && ctx.pc == 0x088DC3A4u) goto L_088DC3A4;
    return;
L_088DC3A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC3B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC468;
      }
      goto L_088DC3DC;
    }
L_088DC3DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[4] & 8u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC414;
      }
      goto L_088DC404;
    }
L_088DC404:
    aot_gpr[31] = (0x088DC40Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 100u, 0x088CC938u>(ctx, &aot_mem) && ctx.pc == 0x088DC40Cu) goto L_088DC40C;
    return;
L_088DC40C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088DC458;
      }
      goto L_088DC414;
    }
L_088DC414:
    aot_gpr[7] = (aot_gpr[4] & 4u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC438;
      }
      goto L_088DC428;
    }
L_088DC428:
    aot_gpr[31] = (0x088DC430u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 102u, 0x088CC96Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC430u) goto L_088DC430;
    return;
L_088DC430:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088DC458;
      }
      goto L_088DC438;
    }
L_088DC438:
    aot_gpr[4] = (aot_gpr[4] & 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC458;
      }
      goto L_088DC44C;
    }
L_088DC44C:
    aot_gpr[31] = (0x088DC454u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 102u, 0x088CC96Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC454u) goto L_088DC454;
    return;
L_088DC454:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088DC458;
L_088DC458:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC3DC;
      }
      goto L_088DC468;
    }
L_088DC468:
    aot_gpr[31] = (0x088DC470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 37u, 0x088E6308u>(ctx, &aot_mem) && ctx.pc == 0x088DC470u) goto L_088DC470;
    return;
L_088DC470:
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
L_088DC488:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC4E0;
      }
      goto L_088DC4B4;
    }
L_088DC4B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DC4CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 96u, 0x088FA754u>(ctx, &aot_mem) && ctx.pc == 0x088DC4CCu) goto L_088DC4CC;
    return;
L_088DC4CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC4B4;
      }
      goto L_088DC4E0;
    }
L_088DC4E0:
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
L_088DC4F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC554;
      }
      goto L_088DC528;
    }
L_088DC528:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_088DC530;
L_088DC530:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC530;
      }
      goto L_088DC554;
    }
L_088DC554:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC588;
      }
      goto L_088DC560;
    }
L_088DC560:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DC56Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_088DC750;
L_088DC56C:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (2190u << 16u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088DC584u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-14512));
    if (rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 108u, 0x08A528ECu>(ctx, &aot_mem) && ctx.pc == 0x088DC584u) goto L_088DC584;
    return;
L_088DC584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088DC588;
L_088DC588:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 999u);
      if (branch_taken) {
          goto L_088DC630;
      }
      goto L_088DC598;
    }
L_088DC598:
    aot_gpr[18] = (aot_gpr[29] | 0u);
    goto L_088DC59C;
L_088DC59C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    if (aot_gpr[6] != aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(496), aot_gpr[17]);
        goto L_088DC5B0;
    }
    goto L_088DC5B0;
L_088DC5B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(500)));
    if (aot_gpr[6] != aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[17]);
        goto L_088DC5BC;
    }
    goto L_088DC5BC;
L_088DC5BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    if (aot_gpr[6] != aot_gpr[19]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), aot_gpr[17]);
        goto L_088DC5C8;
    }
    goto L_088DC5C8;
L_088DC5C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 10 ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_088DC600;
      }
      goto L_088DC5E4;
    }
L_088DC5E4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC600;
      }
      goto L_088DC5EC;
    }
L_088DC5EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (0x088DC5F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 128u, 0x088E593Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC5F8u) goto L_088DC5F8;
    return;
L_088DC5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC61C;
      }
      goto L_088DC600;
    }
L_088DC600:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC61C;
      }
      goto L_088DC608;
    }
L_088DC608:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC61C;
      }
      goto L_088DC610;
    }
L_088DC610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (0x088DC61Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 125u, 0x088E5914u>(ctx, &aot_mem) && ctx.pc == 0x088DC61Cu) goto L_088DC61C;
    return;
L_088DC61C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC59C;
      }
      goto L_088DC630;
    }
L_088DC630:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC64C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC684;
    }
L_088DC684:
    aot_gpr[17] = (0u | 0u);
    goto L_088DC688;
L_088DC688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DC6A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 111u, 0x088FC8E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC6A4u) goto L_088DC6A4;
    return;
L_088DC6A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC688;
      }
      goto L_088DC6B8;
    }
L_088DC6B8:
    aot_gpr[31] = (0x088DC6C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088DC4F8;
L_088DC6C0:
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
L_088DC6DC:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (65535u << 16u);
      if (branch_taken) {
          goto L_088DC748;
      }
      goto L_088DC6F4;
    }
L_088DC6F4:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32767));
    goto L_088DC6FC;
L_088DC6FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088DC728;
      }
      goto L_088DC714;
    }
L_088DC714:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[10] = (aot_gpr[10] | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(376), aot_gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088DC738;
      }
      goto L_088DC728;
    }
L_088DC728:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(376), aot_gpr[10]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088DC738;
L_088DC738:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC6FC;
      }
      goto L_088DC748;
    }
L_088DC748:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC750:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(508)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(508)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC770;
      }
      goto L_088DC768;
    }
L_088DC768:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC774;
      }
      goto L_088DC770;
    }
L_088DC770:
    aot_gpr[2] = (0u | 0u);
    goto L_088DC774;
L_088DC774:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC77C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088DC78Cu);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088DC78Cu) goto L_088DC78C;
    return;
L_088DC78C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC798:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DC7C8;
      }
      goto L_088DC7B8;
    }
L_088DC7B8:
    aot_gpr[31] = (0x088DC7C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088DC488;
L_088DC7C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088DC7D4;
      }
      goto L_088DC7C8;
    }
L_088DC7C8:
    aot_gpr[31] = (0x088DC7D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088DC64C;
L_088DC7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088DC7D4;
L_088DC7D4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC81C;
      }
      goto L_088DC7E4;
    }
L_088DC7E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088DC808u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DC808u) goto L_088DC808;
    return;
L_088DC808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC7E4;
      }
      goto L_088DC81C;
    }
L_088DC81C:
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
L_088DC834:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC888;
      }
      goto L_088DC860;
    }
L_088DC860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DC874u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 181u, 0x088CBE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC874u) goto L_088DC874;
    return;
L_088DC874:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC860;
      }
      goto L_088DC888;
    }
L_088DC888:
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
L_088DC8A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC8F4;
      }
      goto L_088DC8CC;
    }
L_088DC8CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DC8E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 11u, 0x088CC0B0u>(ctx, &aot_mem) && ctx.pc == 0x088DC8E0u) goto L_088DC8E0;
    return;
L_088DC8E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC8CC;
      }
      goto L_088DC8F4;
    }
L_088DC8F4:
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
L_088DC90C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088DC960u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2352));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x088DC960u) goto L_088DC960;
    return;
L_088DC960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 6u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x088DC9B4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088DC9B4u) goto L_088DC9B4;
    return;
L_088DC9B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (18095u << 16u);
      if (branch_taken) {
          goto L_088DCAE0;
      }
      goto L_088DC9C8;
    }
L_088DC9C8:
    aot_gpr[4] = (aot_gpr[4] | 51200u);
    aot_gpr[21] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (2216u << 16u);
    goto L_088DC9D8;
L_088DC9D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 512u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCACC;
      }
      goto L_088DCA04;
    }
L_088DCA04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(194))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DCA88;
      }
      goto L_088DCA14;
    }
L_088DCA14:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28788)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088DCA88;
      }
      goto L_088DCA84;
    }
L_088DCA84:
    aot_gpr[6] = (0u | 100u);
    goto L_088DCA88;
L_088DCA88:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(192))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCACC;
      }
      goto L_088DCA98;
    }
L_088DCA98:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCACC;
      }
      goto L_088DCAA4;
    }
L_088DCAA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCACC;
      }
      goto L_088DCAB4;
    }
L_088DCAB4:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x088DCACCu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 164u, 0x088EEE1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCACCu) goto L_088DCACC;
    return;
L_088DCACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DC9D8;
      }
      goto L_088DCAE0;
    }
L_088DCAE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x088DCB10u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088DCB10u) goto L_088DCB10;
    return;
L_088DCB10:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCB3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088DCB80;
      }
      goto L_088DCB50;
    }
L_088DCB50:
    aot_gpr[6] = (0u | 0u);
    goto L_088DCB54;
L_088DCB54:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(2160), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088DCB54;
      }
      goto L_088DCB80;
    }
L_088DCB80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCB88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_088DCBC0;
      }
      goto L_088DCBAC;
    }
L_088DCBAC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088DCBC8;
      }
      goto L_088DCBB8;
    }
L_088DCBB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBE0;
      }
      goto L_088DCBC0;
    }
L_088DCBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBFC;
      }
      goto L_088DCBC8;
    }
L_088DCBC8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088DCBE0;
L_088DCBE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5812)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 20u);
    aot_gpr[31] = (0x088DCBFCu);
    aot_gpr[7] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 139u, 0x088A4920u>(ctx, &aot_mem) && ctx.pc == 0x088DCBFCu) goto L_088DCBFC;
    return;
L_088DCBFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCC08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC40;
      }
      goto L_088DCC20;
    }
L_088DCC20:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    aot_gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_088DCC48;
      }
      goto L_088DCC38;
    }
L_088DCC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC58;
      }
      goto L_088DCC40;
    }
L_088DCC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCC48;
    }
L_088DCC48:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[8] = (0u | 5u);
      if (branch_taken) {
          goto L_088DCC58;
      }
      goto L_088DCC50;
    }
L_088DCC50:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088DCC6C;
      }
      goto L_088DCC58;
    }
L_088DCC58:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DCC74;
      }
      goto L_088DCC64;
    }
L_088DCC64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCC6C;
    }
L_088DCC6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCC74;
    }
L_088DCC74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(17)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCC88;
    }
L_088DCC88:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) > 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DCCC0;
      }
      goto L_088DCCA0;
    }
L_088DCCA0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCCA8;
    }
L_088DCCA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[31] = (0x088DCCB8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(452), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 115u, 0x088CB7E8u>(ctx, &aot_mem) && ctx.pc == 0x088DCCB8u) goto L_088DCCB8;
    return;
L_088DCCB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCCC0;
    }
L_088DCCC0:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DCCE0;
      }
      goto L_088DCCCC;
    }
L_088DCCCC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD20;
      }
      goto L_088DCCD8;
    }
L_088DCCD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCCE0;
    }
L_088DCCE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(712), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(716), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD18;
      }
      goto L_088DCD00;
    }
L_088DCD00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), aot_gpr[6]);
    goto L_088DCD18;
L_088DCD18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD30;
      }
      goto L_088DCD20;
    }
L_088DCD20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_088DCD30;
L_088DCD30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCD3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DCD98;
      }
      goto L_088DCD84;
    }
L_088DCD84:
    aot_gpr[31] = (0x088DCD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCD8Cu) goto L_088DCD8C;
    return;
L_088DCD8C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_088DCD9C;
      }
      goto L_088DCD98;
    }
L_088DCD98:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-30480)));
    goto L_088DCD9C;
L_088DCD9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-30480), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088DCDC4u);
    aot_gpr[6] = (0u | 332u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCDC4u) goto L_088DCDC4;
    return;
L_088DCDC4:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCDDC;
      }
      goto L_088DCDD0;
    }
L_088DCDD0:
    aot_gpr[31] = (0x088DCDD8u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 149u, 0x088DEB70u>(ctx, &aot_mem) && ctx.pc == 0x088DCDD8u) goto L_088DCDD8;
    return;
L_088DCDD8:
    aot_gpr[22] = (aot_gpr[23] | 0u);
    goto L_088DCDDC;
L_088DCDDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DCDF0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0220_entry, 220u, 34u, 0x088E0284u>(ctx, &aot_mem) && ctx.pc == 0x088DCDF0u) goto L_088DCDF0;
    return;
L_088DCDF0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DCE14;
      }
      goto L_088DCDF8;
    }
L_088DCDF8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DCE04u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 83u, 0x088DF604u>(ctx, &aot_mem) && ctx.pc == 0x088DCE04u) goto L_088DCE04;
    return;
L_088DCE04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088DCE10u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 49u, 0x088DF388u>(ctx, &aot_mem) && ctx.pc == 0x088DCE10u) goto L_088DCE10;
    return;
L_088DCE10:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088DCE14;
L_088DCE14:
    aot_gpr[31] = (0x088DCE1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 40u, 0x088DF2A4u>(ctx, &aot_mem) && ctx.pc == 0x088DCE1Cu) goto L_088DCE1C;
    return;
L_088DCE1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-30480), aot_gpr[21]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCE4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088DCE6Cu);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 46u, 0x088DF33Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCE6Cu) goto L_088DCE6C;
    return;
L_088DCE6C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DCE88;
      }
      goto L_088DCE74;
    }
L_088DCE74:
    aot_gpr[31] = (0x088DCE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 107u, 0x088DF7B8u>(ctx, &aot_mem) && ctx.pc == 0x088DCE7Cu) goto L_088DCE7C;
    return;
L_088DCE7C:
    aot_gpr[31] = (0x088DCE84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 74u, 0x088DF564u>(ctx, &aot_mem) && ctx.pc == 0x088DCE84u) goto L_088DCE84;
    return;
L_088DCE84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088DCE88;
L_088DCE88:
    aot_gpr[31] = (0x088DCE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 152u, 0x088DEBCCu>(ctx, &aot_mem) && ctx.pc == 0x088DCE90u) goto L_088DCE90;
    return;
L_088DCE90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088DCEBC;
      }
      goto L_088DCE9C;
    }
L_088DCE9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DCEBCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCEBCu) goto L_088DCEBC;
    return;
L_088DCEBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCED0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32688), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DCEF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DCF30u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCF30u) goto L_088DCF30;
    return;
L_088DCF30:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088DCF5C;
      }
      goto L_088DCF3C;
    }
L_088DCF3C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 128u);
    aot_gpr[31] = (0x088DCF54u);
    aot_gpr[8] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 49u, 0x08945ABCu>(ctx, &aot_mem) && ctx.pc == 0x088DCF54u) goto L_088DCF54;
    return;
L_088DCF54:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_088DCF5C;
L_088DCF5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32708), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DCF88u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCF88u) goto L_088DCF88;
    return;
L_088DCF88:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCFA0;
      }
      goto L_088DCF94;
    }
L_088DCF94:
    aot_gpr[31] = (0x088DCF9Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x088DCF9Cu) goto L_088DCF9C;
    return;
L_088DCF9C:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_088DCFA0;
L_088DCFA0:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32712), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 128u);
    aot_gpr[6] = (0u | 64u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088DCFC0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 175u, 0x08943C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCFC0u) goto L_088DCFC0;
    return;
L_088DCFC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088DCFE8u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DCFE8u) goto L_088DCFE8;
    return;
L_088DCFE8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 3u, 0x088DD014u>(ctx, &aot_mem); return;
      }
      goto L_088DCFF4;
    }
L_088DCFF4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x088DD000u; return;
}

void recomp_unit_0216(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0216_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_216(Runtime &runtime) {
    runtime.register_generated_unit(216u, 0x088DC000u, 4096u, &recomp_unit_0216, &recomp_unit_0216_entry);
    runtime.register_function(0x088DC004u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC024u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC030u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC038u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC054u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC05Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC070u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC07Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC0B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC0B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC0E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC100u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC114u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC11Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC13Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC16Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC18Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC1A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC1ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC1C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC1F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC214u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC228u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC240u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC26Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC284u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC298u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC2A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC2C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC2D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC2E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC2FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC310u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC328u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC340u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC34Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC350u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC358u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC36Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC374u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC37Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC38Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC39Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC3A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC3B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC3DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC404u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC40Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC414u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC428u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC430u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC438u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC44Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC454u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC458u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC468u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC470u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC488u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC4B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC4CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC4E0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC4F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC528u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC530u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC554u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC560u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC56Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC584u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC588u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC598u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC59Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC5B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC5BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC5C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC5E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC5ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC5F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC600u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC608u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC610u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC61Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC630u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC64Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC684u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC688u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC6A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC6B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC6C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC6DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC6F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC6FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC714u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC728u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC738u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC748u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC750u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC768u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC770u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC774u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC77Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC78Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC798u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC7B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC7C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC7C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC7D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC7D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC7E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC808u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC81Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC834u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC860u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC874u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC888u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC8A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC8CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC8E0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC8F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC90Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC960u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC9B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC9C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DC9D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCA04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCA14u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCA84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCA88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCA98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCAA4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCAB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCACCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCAE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCB10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCB3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCB50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCB54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCB80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCB88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCBACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCBB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCBC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCBC8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCBE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCBFCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC08u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC40u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC64u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCC88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCA8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCCCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCCE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCD9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCDC4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCDD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCDD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCDDCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCDF0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCDF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE14u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE4Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE7Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE90u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCE9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCEBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCED0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCEF0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF5Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF94u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCF9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCFA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCFC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCFE8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x088DCFF4u, &recomp_unit_0216, "recomp_unit_0216");
}
} // namespace psprecomp
