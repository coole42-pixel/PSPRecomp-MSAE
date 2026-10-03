#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0449[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 0, 57, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0,
    100, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    116, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128,
    0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 145, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 160, 0, 161, 0, 0, 0, 0, 162, 163,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168,
    0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0,
    177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0,
    183, 0, 0, 184, 0, 185, 0, 186, 187, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 199,
};
void recomp_unit_0449_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C5000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0449[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C5000;
    case 2u: goto L_089C5028;
    case 3u: goto L_089C5060;
    case 4u: goto L_089C5088;
    case 5u: goto L_089C5090;
    case 6u: goto L_089C5098;
    case 7u: goto L_089C50A8;
    case 8u: goto L_089C50D4;
    case 9u: goto L_089C50D8;
    case 10u: goto L_089C50F0;
    case 11u: goto L_089C50F8;
    case 12u: goto L_089C5100;
    case 13u: goto L_089C5140;
    case 14u: goto L_089C5148;
    case 15u: goto L_089C5160;
    case 16u: goto L_089C5168;
    case 17u: goto L_089C5170;
    case 18u: goto L_089C5178;
    case 19u: goto L_089C5190;
    case 20u: goto L_089C5198;
    case 21u: goto L_089C51B0;
    case 22u: goto L_089C51B8;
    case 23u: goto L_089C51C0;
    case 24u: goto L_089C51D8;
    case 25u: goto L_089C51E0;
    case 26u: goto L_089C522C;
    case 27u: goto L_089C5240;
    case 28u: goto L_089C5260;
    case 29u: goto L_089C5268;
    case 30u: goto L_089C528C;
    case 31u: goto L_089C5294;
    case 32u: goto L_089C52A8;
    case 33u: goto L_089C52B0;
    case 34u: goto L_089C52CC;
    case 35u: goto L_089C52DC;
    case 36u: goto L_089C52EC;
    case 37u: goto L_089C5324;
    case 38u: goto L_089C5334;
    case 39u: goto L_089C5354;
    case 40u: goto L_089C5370;
    case 41u: goto L_089C5378;
    case 42u: goto L_089C5380;
    case 43u: goto L_089C5390;
    case 44u: goto L_089C53B0;
    case 45u: goto L_089C53F4;
    case 46u: goto L_089C5420;
    case 47u: goto L_089C5434;
    case 48u: goto L_089C5438;
    case 49u: goto L_089C546C;
    case 50u: goto L_089C5478;
    case 51u: goto L_089C5484;
    case 52u: goto L_089C5494;
    case 53u: goto L_089C54A4;
    case 54u: goto L_089C54B0;
    case 55u: goto L_089C54E4;
    case 56u: goto L_089C54F0;
    case 57u: goto L_089C5508;
    case 58u: goto L_089C550C;
    case 59u: goto L_089C5518;
    case 60u: goto L_089C5530;
    case 61u: goto L_089C5540;
    case 62u: goto L_089C5570;
    case 63u: goto L_089C5574;
    case 64u: goto L_089C5584;
    case 65u: goto L_089C55A0;
    case 66u: goto L_089C55A8;
    case 67u: goto L_089C55CC;
    case 68u: goto L_089C55E8;
    case 69u: goto L_089C55F4;
    case 70u: goto L_089C561C;
    case 71u: goto L_089C5620;
    case 72u: goto L_089C5654;
    case 73u: goto L_089C5678;
    case 74u: goto L_089C568C;
    case 75u: goto L_089C569C;
    case 76u: goto L_089C56BC;
    case 77u: goto L_089C56C4;
    case 78u: goto L_089C56EC;
    case 79u: goto L_089C56F4;
    case 80u: goto L_089C5734;
    case 81u: goto L_089C573C;
    case 82u: goto L_089C5764;
    case 83u: goto L_089C576C;
    case 84u: goto L_089C57AC;
    case 85u: goto L_089C57B4;
    case 86u: goto L_089C57C8;
    case 87u: goto L_089C57D0;
    case 88u: goto L_089C57EC;
    case 89u: goto L_089C57F4;
    case 90u: goto L_089C581C;
    case 91u: goto L_089C5828;
    case 92u: goto L_089C5830;
    case 93u: goto L_089C5838;
    case 94u: goto L_089C5844;
    case 95u: goto L_089C5854;
    case 96u: goto L_089C5858;
    case 97u: goto L_089C5864;
    case 98u: goto L_089C5870;
    case 99u: goto L_089C5878;
    case 100u: goto L_089C5880;
    case 101u: goto L_089C5888;
    case 102u: goto L_089C5890;
    case 103u: goto L_089C58A0;
    case 104u: goto L_089C58AC;
    case 105u: goto L_089C58B4;
    case 106u: goto L_089C58C0;
    case 107u: goto L_089C58D4;
    case 108u: goto L_089C58E0;
    case 109u: goto L_089C58E8;
    case 110u: goto L_089C5910;
    case 111u: goto L_089C591C;
    case 112u: goto L_089C592C;
    case 113u: goto L_089C5948;
    case 114u: goto L_089C5950;
    case 115u: goto L_089C597C;
    case 116u: goto L_089C5980;
    case 117u: goto L_089C5988;
    case 118u: goto L_089C5990;
    case 119u: goto L_089C5994;
    case 120u: goto L_089C59B8;
    case 121u: goto L_089C59DC;
    case 122u: goto L_089C59E8;
    case 123u: goto L_089C59F8;
    case 124u: goto L_089C5A04;
    case 125u: goto L_089C5A48;
    case 126u: goto L_089C5A5C;
    case 127u: goto L_089C5A64;
    case 128u: goto L_089C5A7C;
    case 129u: goto L_089C5A84;
    case 130u: goto L_089C5A90;
    case 131u: goto L_089C5A9C;
    case 132u: goto L_089C5AB0;
    case 133u: goto L_089C5AC4;
    case 134u: goto L_089C5AD4;
    case 135u: goto L_089C5ADC;
    case 136u: goto L_089C5AE4;
    case 137u: goto L_089C5AEC;
    case 138u: goto L_089C5B08;
    case 139u: goto L_089C5B28;
    case 140u: goto L_089C5B38;
    case 141u: goto L_089C5B98;
    case 142u: goto L_089C5BB0;
    case 143u: goto L_089C5BBC;
    case 144u: goto L_089C5BEC;
    case 145u: goto L_089C5C08;
    case 146u: goto L_089C5C0C;
    case 147u: goto L_089C5C1C;
    case 148u: goto L_089C5C44;
    case 149u: goto L_089C5C50;
    case 150u: goto L_089C5C94;
    case 151u: goto L_089C5CA0;
    case 152u: goto L_089C5CCC;
    case 153u: goto L_089C5CE0;
    case 154u: goto L_089C5CEC;
    case 155u: goto L_089C5D18;
    case 156u: goto L_089C5D30;
    case 157u: goto L_089C5D3C;
    case 158u: goto L_089C5D48;
    case 159u: goto L_089C5D58;
    case 160u: goto L_089C5D5C;
    case 161u: goto L_089C5D64;
    case 162u: goto L_089C5D78;
    case 163u: goto L_089C5D7C;
    case 164u: goto L_089C5D90;
    case 165u: goto L_089C5DA4;
    case 166u: goto L_089C5DD0;
    case 167u: goto L_089C5DE4;
    case 168u: goto L_089C5DFC;
    case 169u: goto L_089C5E08;
    case 170u: goto L_089C5E10;
    case 171u: goto L_089C5E2C;
    case 172u: goto L_089C5E38;
    case 173u: goto L_089C5E3C;
    case 174u: goto L_089C5E4C;
    case 175u: goto L_089C5E64;
    case 176u: goto L_089C5E68;
    case 177u: goto L_089C5E80;
    case 178u: goto L_089C5E88;
    case 179u: goto L_089C5E94;
    case 180u: goto L_089C5E9C;
    case 181u: goto L_089C5EE4;
    case 182u: goto L_089C5EF0;
    case 183u: goto L_089C5F00;
    case 184u: goto L_089C5F0C;
    case 185u: goto L_089C5F14;
    case 186u: goto L_089C5F1C;
    case 187u: goto L_089C5F20;
    case 188u: goto L_089C5F24;
    case 189u: goto L_089C5F4C;
    case 190u: goto L_089C5F60;
    case 191u: goto L_089C5F68;
    case 192u: goto L_089C5F78;
    case 193u: goto L_089C5F80;
    case 194u: goto L_089C5F98;
    case 195u: goto L_089C5FD0;
    case 196u: goto L_089C5FD8;
    case 197u: goto L_089C5FE0;
    case 198u: goto L_089C5FF0;
    case 199u: goto L_089C5FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C5000:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5028:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C5090;
      }
      goto L_089C5060;
    }
L_089C5060:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(508)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16000)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089C5098;
      }
      goto L_089C5088;
    }
L_089C5088:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089C5090;
L_089C5090:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5098:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C50A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089C50F0;
      }
      goto L_089C50D4;
    }
L_089C50D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089C50D8;
L_089C50D8:
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
L_089C50F0:
    aot_gpr[31] = (0x089C50F8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x089C50F8u) goto L_089C50F8;
    return;
L_089C50F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C50D4;
      }
      goto L_089C5100;
    }
L_089C5100:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(512)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(512), aot_gpr[8]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[2]);
    aot_gpr[31] = (0x089C5140u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0448_entry, 448u, 188u, 0x089C4D58u>(ctx, &aot_mem) && ctx.pc == 0x089C5140u) goto L_089C5140;
    return;
L_089C5140:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C50D4;
      }
      goto L_089C5148;
    }
L_089C5148:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089C5160u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    goto L_089C5028;
L_089C5160:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C51C0;
      }
      goto L_089C5168;
    }
L_089C5168:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089C50D8;
L_089C5170:
    aot_gpr[31] = (0x089C5178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0448_entry, 448u, 196u, 0x089C4E30u>(ctx, &aot_mem) && ctx.pc == 0x089C5178u) goto L_089C5178;
    return;
L_089C5178:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_089C50D4;
      }
      goto L_089C5190;
    }
L_089C5190:
    aot_gpr[31] = (0x089C5198u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0448_entry, 448u, 188u, 0x089C4D58u>(ctx, &aot_mem) && ctx.pc == 0x089C5198u) goto L_089C5198;
    return;
L_089C5198:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C50D4;
      }
      goto L_089C51B0;
    }
L_089C51B0:
    aot_gpr[31] = (0x089C51B8u);
    // nop
    goto L_089C5028;
L_089C51B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C50D4;
      }
      goto L_089C51C0;
    }
L_089C51C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C5170;
      }
      goto L_089C51D8;
    }
L_089C51D8:
    aot_gpr[3] = (0u + 0u);
    goto L_089C50D4;
L_089C51E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[11] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[6] = (aot_gpr[2] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089C5240;
      }
      goto L_089C522C;
    }
L_089C522C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5240:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[7] >> 1u);
    aot_gpr[7] = (aot_gpr[7] & 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(492));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[6]);
      if (branch_taken) {
          goto L_089C52CC;
      }
      goto L_089C5260;
    }
L_089C5260:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    goto L_089C5268;
L_089C5268:
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16004)));
    aot_gpr[2] = (aot_gpr[9] >> 1u);
    aot_gpr[8] = (aot_gpr[9] & 1u);
    aot_fpr[0] = aot_fpr[1] / aot_fpr[0];
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
      if (branch_taken) {
          goto L_089C52DC;
      }
      goto L_089C528C;
    }
L_089C528C:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    goto L_089C5294;
L_089C5294:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16004)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_fpr[0] = aot_fpr[1] / aot_fpr[0];
    aot_gpr[31] = (0x089C52A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x089C52A8u) goto L_089C52A8;
    return;
L_089C52A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C522C;
      }
      goto L_089C52B0;
    }
L_089C52B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C52CC:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[1];
    goto L_089C5268;
L_089C52DC:
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[1] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[1] = aot_fpr[1] + aot_fpr[1];
    goto L_089C5294;
L_089C52EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089C5354;
      }
      goto L_089C5324;
    }
L_089C5324:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C5334u);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    goto L_089C51E0;
L_089C5334:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_089C5370;
      }
      goto L_089C5354;
    }
L_089C5354:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5370:
    aot_gpr[31] = (0x089C5378u);
    // nop
    goto L_089C51E0;
L_089C5378:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5354;
      }
      goto L_089C5380;
    }
L_089C5380:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5390u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5390u) goto L_089C5390;
    return;
L_089C5390:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C53B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[6]);
      if (branch_taken) {
          goto L_089C5434;
      }
      goto L_089C53F4;
    }
L_089C53F4:
    aot_gpr[3] = (aot_gpr[21] << 6u);
    aot_gpr[2] = (aot_gpr[21] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(576)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[21] & 65535u);
      if (branch_taken) {
          goto L_089C561C;
      }
      goto L_089C5420;
    }
L_089C5420:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089C546C;
      }
      goto L_089C5434;
    }
L_089C5434:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C5438;
L_089C5438:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C546C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089C5478u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C5478u) goto L_089C5478;
    return;
L_089C5478:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] << 3u);
      if (branch_taken) {
          goto L_089C5654;
      }
      goto L_089C5484;
    }
L_089C5484:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[2] << 3u);
    goto L_089C5494;
L_089C5494:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089C54A4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089C54A4u) goto L_089C54A4;
    return;
L_089C54A4:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[31] = (0x089C54B0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C54B0u) goto L_089C54B0;
    return;
L_089C54B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(468)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089C57D0;
      }
      goto L_089C54E4;
    }
L_089C54E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C5508;
      }
      goto L_089C54F0;
    }
L_089C54F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5508u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5508u) goto L_089C5508;
    return;
L_089C5508:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    goto L_089C550C;
L_089C550C:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_089C5620;
      }
      goto L_089C5518;
    }
L_089C5518:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), 0u);
    goto L_089C5530;
L_089C5530:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (aot_gpr[23] << 2u);
    goto L_089C5584;
L_089C5540:
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(168));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(252));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C5678;
      }
      goto L_089C5570;
    }
L_089C5570:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C5574;
L_089C5574:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089C55CC;
      }
      goto L_089C5584;
    }
L_089C5584:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(576)));
    aot_gpr[18] = (aot_gpr[30] << (aot_gpr[17] & 31u));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C5574;
      }
      goto L_089C55A0;
    }
L_089C55A0:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[16];
    aot_gpr[3] = (aot_gpr[16] << 6u);
      if (branch_taken) {
          goto L_089C5540;
      }
      goto L_089C55A8;
    }
L_089C55A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[17]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[23]);
    aot_gpr[16] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[7]);
      if (branch_taken) {
          goto L_089C5584;
      }
      goto L_089C55CC;
    }
L_089C55CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[23];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[2]);
      if (branch_taken) {
          goto L_089C5530;
      }
      goto L_089C55E8;
    }
L_089C55E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_089C561C;
      }
      goto L_089C55F4;
    }
L_089C55F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-32));
    aot_gpr[16] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[20] = (aot_gpr[17] << (aot_gpr[7] & 31u));
      if (branch_taken) {
          goto L_089C56F4;
      }
      goto L_089C561C;
    }
L_089C561C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    goto L_089C5620;
L_089C5620:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5654:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089C5494;
L_089C5678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr[31] = (0x089C568Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 123u, 0x089CCA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C568Cu) goto L_089C568C;
    return;
L_089C568C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089C56EC;
      }
      goto L_089C569C;
    }
L_089C569C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(168));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C56BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C56BCu) goto L_089C56BC;
    return;
L_089C56BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (~(0u | aot_gpr[18]));
      if (branch_taken) {
          goto L_089C56EC;
      }
      goto L_089C56C4;
    }
L_089C56C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(576)));
    aot_gpr[3] = (aot_gpr[20] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(576)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089C5570;
L_089C56EC:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089C5438;
L_089C56F4:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(168));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(252));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C5734u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 123u, 0x089CCA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5734u) goto L_089C5734;
    return;
L_089C5734:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5438;
      }
      goto L_089C573C;
    }
L_089C573C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5764u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5764u) goto L_089C5764;
    return;
L_089C5764:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5438;
      }
      goto L_089C576C;
    }
L_089C576C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(576)));
    aot_gpr[5] = (~(0u | aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(576)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C57B4;
      }
      goto L_089C57AC;
    }
L_089C57AC:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_089C5620;
      }
      goto L_089C57B4;
    }
L_089C57B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C57C8u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C57C8u) goto L_089C57C8;
    return;
L_089C57C8:
    aot_gpr[3] = (0u + 0u);
    goto L_089C5438;
L_089C57D0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C57ECu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C57ECu) goto L_089C57EC;
    return;
L_089C57EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    goto L_089C550C;
L_089C57F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
      if (branch_taken) {
          goto L_089C5994;
      }
      goto L_089C581C;
    }
L_089C581C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_089C59B8;
      }
      goto L_089C5828;
    }
L_089C5828:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5830u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5830u) goto L_089C5830;
    return;
L_089C5830:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5994;
      }
      goto L_089C5838;
    }
L_089C5838:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089C5858;
    }
    goto L_089C5844;
L_089C5844:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
        goto L_089C59DC;
    }
    goto L_089C5854;
L_089C5854:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089C5858;
L_089C5858:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C5870;
      }
      goto L_089C5864;
    }
L_089C5864:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    if (aot_gpr[5] == aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089C5A64;
    }
    goto L_089C5870;
L_089C5870:
    aot_gpr[31] = (0x089C5878u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0455_entry, 455u, 99u, 0x089CB8F4u>(ctx, &aot_mem) && ctx.pc == 0x089C5878u) goto L_089C5878;
    return;
L_089C5878:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5994;
      }
      goto L_089C5880;
    }
L_089C5880:
    aot_gpr[31] = (0x089C5888u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 157u, 0x089CAA88u>(ctx, &aot_mem) && ctx.pc == 0x089C5888u) goto L_089C5888;
    return;
L_089C5888:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5994;
      }
      goto L_089C5890;
    }
L_089C5890:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    aot_gpr[17] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[17]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_089C5980;
    }
    goto L_089C58A0;
L_089C58A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089C597C;
      }
      goto L_089C58AC;
    }
L_089C58AC:
    aot_gpr[31] = (0x089C58B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 15u, 0x089930CCu>(ctx, &aot_mem) && ctx.pc == 0x089C58B4u) goto L_089C58B4;
    return;
L_089C58B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_089C5980;
    }
    goto L_089C58C0;
L_089C58C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_089C5980;
    }
    goto L_089C58D4;
L_089C58D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_089C5980;
    }
    goto L_089C58E0;
L_089C58E0:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    aot_gpr[3] = (aot_gpr[4] << 6u);
      if (branch_taken) {
          goto L_089C597C;
      }
      goto L_089C58E8;
    }
L_089C58E8:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    if (aot_gpr[4] != aot_gpr[3]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_089C5980;
    }
    goto L_089C5910;
L_089C5910:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089C591Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C591Cu) goto L_089C591C;
    return;
L_089C591C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089C592Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 204u, 0x08992EE4u>(ctx, &aot_mem) && ctx.pc == 0x089C592Cu) goto L_089C592C;
    return;
L_089C592C:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C5948u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0456_entry, 456u, 147u, 0x089CCC34u>(ctx, &aot_mem) && ctx.pc == 0x089C5948u) goto L_089C5948;
    return;
L_089C5948:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
        goto L_089C5980;
    }
    goto L_089C5950;
L_089C5950:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[7]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C597Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C597Cu) goto L_089C597C;
    return;
L_089C597C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(244)));
    goto L_089C5980;
L_089C5980:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_089C59B8;
      }
      goto L_089C5988;
    }
L_089C5988:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5990u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5990u) goto L_089C5990;
    return;
L_089C5990:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089C5994;
L_089C5994:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C59B8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[3] = (0u | 54509u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C59DC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C59E8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C59E8u) goto L_089C59E8;
    return;
L_089C59E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089C5858;
    }
    goto L_089C59F8;
L_089C59F8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C5A04u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089C5A04u) goto L_089C5A04;
    return;
L_089C5A04:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5A48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5A48u) goto L_089C5A48;
    return;
L_089C5A48:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C5A5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089C5A5Cu) goto L_089C5A5C;
    return;
L_089C5A5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089C5858;
L_089C5A64:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(31));
    aot_gpr[2] = (aot_gpr[2] >> 5u);
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089C5A7Cu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    goto L_089C53B0;
L_089C5A7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5994;
      }
      goto L_089C5A84;
    }
L_089C5A84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089C5870;
      }
      goto L_089C5A90;
    }
L_089C5A90:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(9));
    goto L_089C5AB0;
L_089C5A9C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5870;
      }
      goto L_089C5AB0;
    }
L_089C5AB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C5A9C;
      }
      goto L_089C5AC4;
    }
L_089C5AC4:
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[6] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089C5A9C;
      }
      goto L_089C5AD4;
    }
L_089C5AD4:
    aot_gpr[31] = (0x089C5ADCu);
    // nop
    goto L_089C53B0;
L_089C5ADC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089C5A9C;
    }
    goto L_089C5AE4;
L_089C5AE4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089C5994;
L_089C5AEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089C5C08;
      }
      goto L_089C5B08;
    }
L_089C5B08:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5B28u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5B28u) goto L_089C5B28;
    return;
L_089C5B28:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089C5B38u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5B38u) goto L_089C5B38;
    return;
L_089C5B38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(576)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(470));
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(478));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(478), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), 0u);
      if (branch_taken) {
          goto L_089C5BB0;
      }
      goto L_089C5B98;
    }
L_089C5B98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(31));
    aot_gpr[6] = (aot_gpr[6] >> 5u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x089C5BB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5BB0u) goto L_089C5BB0;
    return;
L_089C5BB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C5C0C;
      }
      goto L_089C5BBC;
    }
L_089C5BBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(540), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(544), 0u);
    aot_gpr[2] = (0u | 65534u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(548), aot_gpr[2]);
    aot_gpr[2] = (7u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 41248u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(552), aot_gpr[2]);
    aot_gpr[31] = (0x089C5BECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 136u, 0x08A43700u>(ctx, &aot_mem) && ctx.pc == 0x089C5BECu) goto L_089C5BEC;
    return;
L_089C5BEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089C5C08;
L_089C5C08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089C5C0C;
L_089C5C0C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5C1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-608));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(596), aot_gpr[17]);
    aot_gpr[11] = (aot_gpr[5] & 65535u);
    aot_gpr[12] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(600), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(592), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[11] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_089C5DE4;
      }
      goto L_089C5C44;
    }
L_089C5C44:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] << 6u);
      if (branch_taken) {
          goto L_089C5DE4;
      }
      goto L_089C5C50;
    }
L_089C5C50:
    aot_gpr[3] = (aot_gpr[17] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[11] << 6u);
    aot_gpr[2] = (aot_gpr[11] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(576)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    aot_gpr[24] = (0u + 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[15] = (0u + 0u);
      if (branch_taken) {
          goto L_089C5D90;
      }
      goto L_089C5C94;
    }
L_089C5C94:
    aot_gpr[6] = (aot_gpr[10] + 0u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(576));
    goto L_089C5CA0;
L_089C5CA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089C5CA0;
      }
      goto L_089C5CCC;
    }
L_089C5CCC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_089C5D30;
      }
      goto L_089C5CE0;
    }
L_089C5CE0:
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[10] + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    goto L_089C5CEC;
L_089C5CEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089C5CEC;
      }
      goto L_089C5D18;
    }
L_089C5D18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(576), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(580), aot_gpr[15]);
    goto L_089C5D30;
L_089C5D30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(576), aot_gpr[14]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(580), aot_gpr[13]);
      if (branch_taken) {
          goto L_089C5DFC;
      }
      goto L_089C5D3C;
    }
L_089C5D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089C5D58;
      }
      goto L_089C5D48;
    }
L_089C5D48:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5D58u);
    aot_gpr[5] = (aot_gpr[11] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5D58u) goto L_089C5D58;
    return;
L_089C5D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    goto L_089C5D5C;
L_089C5D5C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089C5D7C;
      }
      goto L_089C5D64;
    }
L_089C5D64:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089C5D78u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5D78u) goto L_089C5D78;
    return;
L_089C5D78:
    aot_gpr[2] = (0u + 0u);
    goto L_089C5D7C;
L_089C5D7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5D90:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(576)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(580)));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(576));
    goto L_089C5DA4;
L_089C5DA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089C5DA4;
      }
      goto L_089C5DD0;
    }
L_089C5DD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089C5C94;
L_089C5DE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(600)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(596)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(592)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5DFC:
    aot_gpr[4] = (aot_gpr[12] + 0u);
    aot_gpr[31] = (0x089C5E08u);
    aot_gpr[5] = (aot_gpr[10] + 0u);
    goto L_089C5AEC;
L_089C5E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    goto L_089C5D5C;
L_089C5E10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089C5E64;
      }
      goto L_089C5E2C;
    }
L_089C5E2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C5E64;
      }
      goto L_089C5E38;
    }
L_089C5E38:
    aot_gpr[17] = (0u + 0u);
    goto L_089C5E3C;
L_089C5E3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089C5E80;
      }
      goto L_089C5E4C;
    }
L_089C5E4C:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089C5E3C;
      }
      goto L_089C5E64;
    }
L_089C5E64:
    aot_gpr[2] = (0u | 65535u);
    goto L_089C5E68;
L_089C5E68:
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
L_089C5E80:
    aot_gpr[31] = (0x089C5E88u);
    // nop
    goto L_089C5AEC;
L_089C5E88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089C5E68;
      }
      goto L_089C5E94;
    }
L_089C5E94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089C5E4C;
L_089C5E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_089C5F1C;
      }
      goto L_089C5EE4;
    }
L_089C5EE4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C5EF0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089C5EF0u) goto L_089C5EF0;
    return;
L_089C5EF0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089C5F20;
      }
      goto L_089C5F00;
    }
L_089C5F00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089C5F20;
      }
      goto L_089C5F0C;
    }
L_089C5F0C:
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 6u, 0x089C602Cu>(ctx, &aot_mem); return;
      }
      goto L_089C5F14;
    }
L_089C5F14:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[5] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089C5F4C;
      }
      goto L_089C5F1C;
    }
L_089C5F1C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    goto L_089C5F20;
L_089C5F20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_089C5F24;
L_089C5F24:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5F4C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089C5F60u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 42u, 0x089C32C4u>(ctx, &aot_mem) && ctx.pc == 0x089C5F60u) goto L_089C5F60;
    return;
L_089C5F60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089C5F20;
      }
      goto L_089C5F68;
    }
L_089C5F68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (0u | 54503u);
      if (branch_taken) {
          goto L_089C5F20;
      }
      goto L_089C5F78;
    }
L_089C5F78:
    aot_gpr[31] = (0x089C5F80u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089C5E10;
L_089C5F80:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 54504u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_089C5F20;
      }
      goto L_089C5F98;
    }
L_089C5F98:
    aot_gpr[2] = (aot_gpr[6] << 3u);
    aot_gpr[3] = (aot_gpr[6] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(376), 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(424), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 9u, 0x089C604Cu>(ctx, &aot_mem); return;
      }
      goto L_089C5FD0;
    }
L_089C5FD0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[16] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089C5F1C;
      }
      goto L_089C5FD8;
    }
L_089C5FD8:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089C5FE0;
L_089C5FE0:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C5FF0u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0454_entry, 454u, 139u, 0x089CA8C4u>(ctx, &aot_mem) && ctx.pc == 0x089C5FF0u) goto L_089C5FF0;
    return;
L_089C5FF0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 5u, 0x089C6024u>(ctx, &aot_mem); return;
      }
      goto L_089C5FFC;
    }
L_089C5FFC:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[18];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C5FE0;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 1u, 0x089C6004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0449(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0449_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_449(Runtime &runtime) {
    runtime.register_generated_unit(449u, 0x089C5000u, 4096u, &recomp_unit_0449, &recomp_unit_0449_entry);
    runtime.register_function(0x089C5000u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5028u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5060u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5088u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5090u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5098u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C50A8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C50D4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C50D8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C50F0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C50F8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5100u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5140u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5148u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5160u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5168u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5170u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5178u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5190u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5198u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C51B0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C51B8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C51C0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C51D8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C51E0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C522Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5240u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5260u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5268u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C528Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5294u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C52A8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C52B0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C52CCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C52DCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C52ECu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5324u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5334u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5354u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5370u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5378u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5380u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5390u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C53B0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C53F4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5420u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5434u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5438u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C546Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5478u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5484u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5494u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C54A4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C54B0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C54E4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C54F0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5508u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C550Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5518u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5530u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5540u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5570u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5574u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5584u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C55A0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C55A8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C55CCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C55E8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C55F4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C561Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5620u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5654u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5678u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C568Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C569Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C56BCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C56C4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C56ECu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C56F4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5734u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C573Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5764u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C576Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C57ACu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C57B4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C57C8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C57D0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C57ECu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C57F4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C581Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5828u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5830u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5838u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5844u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5854u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5858u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5864u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5870u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5878u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5880u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5888u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5890u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58A0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58ACu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58B4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58C0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58D4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58E0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C58E8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5910u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C591Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C592Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5948u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5950u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C597Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5980u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5988u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5990u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5994u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C59B8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C59DCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C59E8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C59F8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A04u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A48u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A5Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A64u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A7Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A84u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A90u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5A9Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5AB0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5AC4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5AD4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5ADCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5AE4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5AECu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5B08u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5B28u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5B38u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5B98u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5BB0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5BBCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5BECu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5C08u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5C0Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5C1Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5C44u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5C50u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5C94u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5CA0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5CCCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5CE0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5CECu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D18u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D30u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D3Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D48u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D58u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D5Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D64u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D78u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D7Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5D90u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5DA4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5DD0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5DE4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5DFCu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E08u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E10u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E2Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E38u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E3Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E4Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E64u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E68u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E80u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E88u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E94u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5E9Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5EE4u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5EF0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F00u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F0Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F14u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F1Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F20u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F24u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F4Cu, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F60u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F68u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F78u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F80u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5F98u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5FD0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5FD8u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5FE0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5FF0u, &recomp_unit_0449, "recomp_unit_0449");
    runtime.register_function(0x089C5FFCu, &recomp_unit_0449, "recomp_unit_0449");
}
} // namespace psprecomp
