#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0399[1022] = {
    1, 0, 0, 0, 2, 3, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29,
    0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 37, 0, 0, 0, 38, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 45, 0, 0, 0, 46, 0, 47, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55,
    56, 0, 0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0, 71,
    0, 0, 72, 73, 74, 0, 0, 75, 0, 76, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 90, 0, 0, 0, 0, 0, 91, 0,
    0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 100, 0, 0,
    101, 0, 0, 0, 0, 102, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 119, 120, 0, 0, 0, 121, 0,
    122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 131, 0, 0, 0,
    132, 0, 0, 133, 0, 134, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0,
    144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 154, 155, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162,
    163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173, 174, 0, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185,
    0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 190, 0, 0, 191, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 201, 0,
    0, 202, 0, 0, 203, 0, 0, 0, 204, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0,
    216, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 238, 0, 0, 239, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 256, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271,
};
void recomp_unit_0399_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08993000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0399[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08993000;
    case 2u: goto L_08993010;
    case 3u: goto L_08993014;
    case 4u: goto L_08993018;
    case 5u: goto L_08993030;
    case 6u: goto L_08993038;
    case 7u: goto L_08993040;
    case 8u: goto L_0899304C;
    case 9u: goto L_08993054;
    case 10u: goto L_08993060;
    case 11u: goto L_08993094;
    case 12u: goto L_089930A4;
    case 13u: goto L_089930B0;
    case 14u: goto L_089930B8;
    case 15u: goto L_089930CC;
    case 16u: goto L_089930F4;
    case 17u: goto L_0899310C;
    case 18u: goto L_08993118;
    case 19u: goto L_0899312C;
    case 20u: goto L_08993154;
    case 21u: goto L_0899315C;
    case 22u: goto L_08993164;
    case 23u: goto L_0899317C;
    case 24u: goto L_0899319C;
    case 25u: goto L_089931A4;
    case 26u: goto L_089931AC;
    case 27u: goto L_089931C0;
    case 28u: goto L_089931E8;
    case 29u: goto L_089931FC;
    case 30u: goto L_08993208;
    case 31u: goto L_08993210;
    case 32u: goto L_0899321C;
    case 33u: goto L_0899322C;
    case 34u: goto L_08993248;
    case 35u: goto L_08993250;
    case 36u: goto L_08993258;
    case 37u: goto L_0899325C;
    case 38u: goto L_0899326C;
    case 39u: goto L_0899327C;
    case 40u: goto L_08993298;
    case 41u: goto L_089932A4;
    case 42u: goto L_089932B8;
    case 43u: goto L_089932D0;
    case 44u: goto L_089932DC;
    case 45u: goto L_089932E0;
    case 46u: goto L_089932F0;
    case 47u: goto L_089932F8;
    case 48u: goto L_0899330C;
    case 49u: goto L_08993324;
    case 50u: goto L_08993334;
    case 51u: goto L_08993348;
    case 52u: goto L_08993354;
    case 53u: goto L_08993364;
    case 54u: goto L_0899336C;
    case 55u: goto L_0899337C;
    case 56u: goto L_08993380;
    case 57u: goto L_08993398;
    case 58u: goto L_0899339C;
    case 59u: goto L_089933BC;
    case 60u: goto L_089933DC;
    case 61u: goto L_089933E4;
    case 62u: goto L_089933EC;
    case 63u: goto L_089933F4;
    case 64u: goto L_08993410;
    case 65u: goto L_08993434;
    case 66u: goto L_0899343C;
    case 67u: goto L_08993444;
    case 68u: goto L_08993460;
    case 69u: goto L_08993464;
    case 70u: goto L_0899346C;
    case 71u: goto L_0899347C;
    case 72u: goto L_08993488;
    case 73u: goto L_0899348C;
    case 74u: goto L_08993490;
    case 75u: goto L_0899349C;
    case 76u: goto L_089934A4;
    case 77u: goto L_089934A8;
    case 78u: goto L_089934B8;
    case 79u: goto L_089934D8;
    case 80u: goto L_089934E0;
    case 81u: goto L_089934E8;
    case 82u: goto L_089934F0;
    case 83u: goto L_08993518;
    case 84u: goto L_08993524;
    case 85u: goto L_0899352C;
    case 86u: goto L_08993540;
    case 87u: goto L_08993548;
    case 88u: goto L_08993554;
    case 89u: goto L_0899355C;
    case 90u: goto L_08993560;
    case 91u: goto L_08993578;
    case 92u: goto L_08993584;
    case 93u: goto L_0899358C;
    case 94u: goto L_089935A8;
    case 95u: goto L_089935C0;
    case 96u: goto L_089935C4;
    case 97u: goto L_089935D0;
    case 98u: goto L_089935D8;
    case 99u: goto L_089935F0;
    case 100u: goto L_089935F4;
    case 101u: goto L_08993600;
    case 102u: goto L_08993614;
    case 103u: goto L_0899361C;
    case 104u: goto L_08993624;
    case 105u: goto L_08993628;
    case 106u: goto L_08993640;
    case 107u: goto L_08993648;
    case 108u: goto L_08993650;
    case 109u: goto L_08993658;
    case 110u: goto L_08993660;
    case 111u: goto L_08993668;
    case 112u: goto L_08993670;
    case 113u: goto L_089936A0;
    case 114u: goto L_089936A4;
    case 115u: goto L_089936B0;
    case 116u: goto L_089936BC;
    case 117u: goto L_089936D4;
    case 118u: goto L_089936E0;
    case 119u: goto L_089936E4;
    case 120u: goto L_089936E8;
    case 121u: goto L_089936F8;
    case 122u: goto L_08993700;
    case 123u: goto L_08993708;
    case 124u: goto L_08993710;
    case 125u: goto L_0899371C;
    case 126u: goto L_08993728;
    case 127u: goto L_08993738;
    case 128u: goto L_08993740;
    case 129u: goto L_08993760;
    case 130u: goto L_08993764;
    case 131u: goto L_08993770;
    case 132u: goto L_08993780;
    case 133u: goto L_0899378C;
    case 134u: goto L_08993794;
    case 135u: goto L_08993798;
    case 136u: goto L_089937AC;
    case 137u: goto L_089937B4;
    case 138u: goto L_089937C0;
    case 139u: goto L_089937C8;
    case 140u: goto L_089937CC;
    case 141u: goto L_089937D8;
    case 142u: goto L_089937F0;
    case 143u: goto L_089937F8;
    case 144u: goto L_08993800;
    case 145u: goto L_08993814;
    case 146u: goto L_08993820;
    case 147u: goto L_08993828;
    case 148u: goto L_08993830;
    case 149u: goto L_08993854;
    case 150u: goto L_08993858;
    case 151u: goto L_08993860;
    case 152u: goto L_08993870;
    case 153u: goto L_08993880;
    case 154u: goto L_08993894;
    case 155u: goto L_08993898;
    case 156u: goto L_0899389C;
    case 157u: goto L_089938AC;
    case 158u: goto L_089938B4;
    case 159u: goto L_089938CC;
    case 160u: goto L_089938D4;
    case 161u: goto L_089938DC;
    case 162u: goto L_089938FC;
    case 163u: goto L_08993900;
    case 164u: goto L_0899390C;
    case 165u: goto L_08993918;
    case 166u: goto L_08993920;
    case 167u: goto L_08993928;
    case 168u: goto L_0899392C;
    case 169u: goto L_08993940;
    case 170u: goto L_08993948;
    case 171u: goto L_08993954;
    case 172u: goto L_0899395C;
    case 173u: goto L_08993964;
    case 174u: goto L_08993968;
    case 175u: goto L_08993974;
    case 176u: goto L_0899398C;
    case 177u: goto L_089939A4;
    case 178u: goto L_089939AC;
    case 179u: goto L_089939C8;
    case 180u: goto L_089939D0;
    case 181u: goto L_089939DC;
    case 182u: goto L_089939E4;
    case 183u: goto L_089939EC;
    case 184u: goto L_089939F4;
    case 185u: goto L_089939FC;
    case 186u: goto L_08993A04;
    case 187u: goto L_08993A0C;
    case 188u: goto L_08993A44;
    case 189u: goto L_08993A4C;
    case 190u: goto L_08993A50;
    case 191u: goto L_08993A5C;
    case 192u: goto L_08993A60;
    case 193u: goto L_08993A6C;
    case 194u: goto L_08993A8C;
    case 195u: goto L_08993A98;
    case 196u: goto L_08993AA0;
    case 197u: goto L_08993AAC;
    case 198u: goto L_08993AC4;
    case 199u: goto L_08993AD8;
    case 200u: goto L_08993AF4;
    case 201u: goto L_08993AF8;
    case 202u: goto L_08993B04;
    case 203u: goto L_08993B10;
    case 204u: goto L_08993B20;
    case 205u: goto L_08993B24;
    case 206u: goto L_08993B48;
    case 207u: goto L_08993B5C;
    case 208u: goto L_08993B64;
    case 209u: goto L_08993B6C;
    case 210u: goto L_08993BB0;
    case 211u: goto L_08993BB8;
    case 212u: goto L_08993BBC;
    case 213u: goto L_08993BDC;
    case 214u: goto L_08993BE8;
    case 215u: goto L_08993BF0;
    case 216u: goto L_08993C00;
    case 217u: goto L_08993C04;
    case 218u: goto L_08993C0C;
    case 219u: goto L_08993C40;
    case 220u: goto L_08993C54;
    case 221u: goto L_08993C5C;
    case 222u: goto L_08993C74;
    case 223u: goto L_08993C9C;
    case 224u: goto L_08993CA0;
    case 225u: goto L_08993CB0;
    case 226u: goto L_08993CC8;
    case 227u: goto L_08993CD4;
    case 228u: goto L_08993D04;
    case 229u: goto L_08993D0C;
    case 230u: goto L_08993D20;
    case 231u: goto L_08993D28;
    case 232u: goto L_08993D30;
    case 233u: goto L_08993D64;
    case 234u: goto L_08993D6C;
    case 235u: goto L_08993D74;
    case 236u: goto L_08993DB8;
    case 237u: goto L_08993DC0;
    case 238u: goto L_08993DC4;
    case 239u: goto L_08993DD0;
    case 240u: goto L_08993DE0;
    case 241u: goto L_08993DE8;
    case 242u: goto L_08993DEC;
    case 243u: goto L_08993E1C;
    case 244u: goto L_08993E24;
    case 245u: goto L_08993E38;
    case 246u: goto L_08993E50;
    case 247u: goto L_08993E58;
    case 248u: goto L_08993E64;
    case 249u: goto L_08993E7C;
    case 250u: goto L_08993E9C;
    case 251u: goto L_08993EB0;
    case 252u: goto L_08993EC4;
    case 253u: goto L_08993ECC;
    case 254u: goto L_08993ED4;
    case 255u: goto L_08993EDC;
    case 256u: goto L_08993EE0;
    case 257u: goto L_08993EE4;
    case 258u: goto L_08993F10;
    case 259u: goto L_08993F18;
    case 260u: goto L_08993F20;
    case 261u: goto L_08993F68;
    case 262u: goto L_08993F6C;
    case 263u: goto L_08993F90;
    case 264u: goto L_08993F9C;
    case 265u: goto L_08993FA4;
    case 266u: goto L_08993FB4;
    case 267u: goto L_08993FBC;
    case 268u: goto L_08993FC4;
    case 269u: goto L_08993FD0;
    case 270u: goto L_08993FDC;
    case 271u: goto L_08993FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08993000:
    aot_gpr[10] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_08993060;
      }
      goto L_08993010;
    }
L_08993010:
    aot_gpr[4] = (0u + 0u);
    goto L_08993014;
L_08993014:
    aot_gpr[3] = (aot_gpr[29] + 0u);
    goto L_08993018;
L_08993018:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08993038;
      }
      goto L_08993030;
    }
L_08993030:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08993038;
L_08993038:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[3] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_08993018;
      }
      goto L_08993040;
    }
L_08993040:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[10];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08993060;
      }
      goto L_0899304C;
    }
L_0899304C:
    if (aot_gpr[8] != 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_08993014;
    }
    goto L_08993054;
L_08993054:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[10];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0899304C;
      }
      goto L_08993060;
    }
L_08993060:
    aot_gpr[2] = (52428u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 52429u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[11]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[12] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089930B0;
      }
      goto L_08993094;
    }
L_08993094:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089930A4:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(400), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 211u, 0x08992FB0u>(ctx, &aot_mem); return;
L_089930B0:
    aot_gpr[31] = (0x089930B8u);
    aot_gpr[4] = (aot_gpr[12] + aot_gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 207u, 0x08992F38u>(ctx, &aot_mem) && ctx.pc == 0x089930B8u) goto L_089930B8;
    return;
L_089930B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089930CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089930F4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(15300));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 201u, 0x08992E94u>(ctx, &aot_mem) && ctx.pc == 0x089930F4u) goto L_089930F4;
    return;
L_089930F4:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-23656)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(15300));
      if (branch_taken) {
          goto L_08993118;
      }
      goto L_0899310C;
    }
L_0899310C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08993118u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x08993118u) goto L_08993118;
    return;
L_08993118:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899312C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15308));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(15288)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(408));
      if (branch_taken) {
          goto L_08993164;
      }
      goto L_08993154;
    }
L_08993154:
    aot_gpr[31] = (0x0899315Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0899315Cu) goto L_0899315C;
    return;
L_0899315C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(15288), aot_gpr[3]);
    goto L_08993164;
L_08993164:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15300));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem); return;
L_0899317C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 56003u);
      if (branch_taken) {
          goto L_089931AC;
      }
      goto L_0899319C;
    }
L_0899319C:
    aot_gpr[31] = (0x089931A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089931A4u) goto L_089931A4;
    return;
L_089931A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089931C0;
      }
      goto L_089931AC;
    }
L_089931AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089931C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089931E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_0899321C;
      }
      goto L_089931FC;
    }
L_089931FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08993210;
      }
      goto L_08993208;
    }
L_08993208:
    aot_gpr[31] = (0x08993210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08993210u) goto L_08993210;
    return;
L_08993210:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0899321C;
L_0899321C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899322C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0899325C;
      }
      goto L_08993248;
    }
L_08993248:
    aot_gpr[31] = (0x08993250u);
    // nop
    goto L_089931E8;
L_08993250:
    aot_gpr[31] = (0x08993258u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08993258u) goto L_08993258;
    return;
L_08993258:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0899325C;
L_0899325C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899326C:
    aot_gpr[3] = (0u | 65534u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899327C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089932F0;
      }
      goto L_08993298;
    }
L_08993298:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089932E0;
    }
    goto L_089932A4;
L_089932A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089932DC;
      }
      goto L_089932B8;
    }
L_089932B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u | 65535u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089932DC;
      }
      goto L_089932D0;
    }
L_089932D0:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089932DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089932E0;
L_089932E0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089932F0:
    aot_gpr[31] = (0x089932F8u);
    // nop
    goto L_0899317C;
L_089932F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899330C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089933EC;
      }
      goto L_08993324;
    }
L_08993324:
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08993380;
      }
      goto L_08993334;
    }
L_08993334:
    aot_gpr[4] = ((aot_gpr[4] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089933E4;
      }
      goto L_08993348;
    }
L_08993348:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08993354u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08993354u) goto L_08993354;
    return;
L_08993354:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08993364u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08993364u) goto L_08993364;
    return;
L_08993364:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08993380;
      }
      goto L_0899336C;
    }
L_0899336C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08993398;
      }
      goto L_0899337C;
    }
L_0899337C:
    aot_gpr[3] = (0u + 0u);
    goto L_08993380;
L_08993380:
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
L_08993398:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0899339C;
L_0899339C:
    aot_gpr[3] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_0899337C;
      }
      goto L_089933BC;
    }
L_089933BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0899339C;
    }
    goto L_089933DC;
L_089933DC:
    aot_gpr[3] = (0u + 0u);
    goto L_08993380;
L_089933E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08993348;
L_089933EC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_08993380;
L_089933F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08993434;
      }
      goto L_08993410;
    }
L_08993410:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_0899343C;
      }
      goto L_08993434;
    }
L_08993434:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899343C:
    // nop
    goto L_089931E8;
L_08993444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089934E0;
      }
      goto L_08993460;
    }
L_08993460:
    aot_gpr[2] = (0u | 65535u);
    goto L_08993464;
L_08993464:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0899348C;
      }
      goto L_0899346C;
    }
L_0899346C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08993490;
    }
    goto L_0899347C;
L_0899347C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089934B8;
      }
      goto L_08993488;
    }
L_08993488:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0899348C;
L_0899348C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08993490;
L_08993490:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899349C:
    aot_gpr[31] = (0x089934A4u);
    // nop
    goto L_089933F4;
L_089934A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089934A8;
L_089934A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0899348C;
      }
      goto L_089934B8;
    }
L_089934B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089934A8;
      }
      goto L_089934D8;
    }
L_089934D8:
    // nop
    goto L_0899349C;
L_089934E0:
    aot_gpr[31] = (0x089934E8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_089934E8:
    aot_gpr[2] = (0u | 65535u);
    goto L_08993464;
L_089934F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08993560;
      }
      goto L_08993518;
    }
L_08993518:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08993524u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08993524u) goto L_08993524;
    return;
L_08993524:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899355C;
      }
      goto L_0899352C;
    }
L_0899352C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[16] << 2u);
    aot_gpr[31] = (0x08993540u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08993540u) goto L_08993540;
    return;
L_08993540:
    aot_gpr[31] = (0x08993548u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08993548u) goto L_08993548;
    return;
L_08993548:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08993554u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_0899330C;
L_08993554:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08993578;
      }
      goto L_0899355C;
    }
L_0899355C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    goto L_08993560;
L_08993560:
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
L_08993578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08993584u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08993584u) goto L_08993584;
    return;
L_08993584:
    aot_gpr[31] = (0x0899358Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899358Cu) goto L_0899358C;
    return;
L_0899358C:
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
L_089935A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08993660;
      }
      goto L_089935C0;
    }
L_089935C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089935C4;
L_089935C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08993648;
      }
      goto L_089935D0;
    }
L_089935D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_08993614;
      }
      goto L_089935D8;
    }
L_089935D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993600;
      }
      goto L_089935F0;
    }
L_089935F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089935F4;
L_089935F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993600:
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993614:
    aot_gpr[31] = (0x0899361Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089934F0;
L_0899361C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089935F0;
      }
      goto L_08993624;
    }
L_08993624:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08993628;
L_08993628:
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089935F4;
      }
      goto L_08993640;
    }
L_08993640:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08993600;
L_08993648:
    aot_gpr[31] = (0x08993650u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899330C;
L_08993650:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089935F0;
      }
      goto L_08993658;
    }
L_08993658:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08993628;
L_08993660:
    aot_gpr[31] = (0x08993668u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_08993668:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089935C4;
L_08993670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_089936F8;
      }
      goto L_089936A0;
    }
L_089936A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089936A4;
L_089936A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089936E4;
      }
      goto L_089936B0;
    }
L_089936B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089936E8;
    }
    goto L_089936BC;
L_089936BC:
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089936E8;
    }
    goto L_089936D4;
L_089936D4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] != aot_gpr[18]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
        goto L_089936E0;
    }
    goto L_089936E0;
L_089936E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089936E4;
L_089936E4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089936E8;
L_089936E8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089936F8:
    aot_gpr[31] = (0x08993700u);
    // nop
    goto L_0899317C;
L_08993700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089936A4;
L_08993708:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993738;
      }
      goto L_08993710;
    }
L_08993710:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_08993738;
      }
      goto L_0899371C;
    }
L_0899371C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08993738;
      }
      goto L_08993728;
    }
L_08993728:
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08993738;
L_08993738:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993740:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089937F0;
      }
      goto L_08993760;
    }
L_08993760:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08993764;
L_08993764:
    aot_gpr[4] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08993798;
      }
      goto L_08993770;
    }
L_08993770:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089937AC;
      }
      goto L_08993780;
    }
L_08993780:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x0899378Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899330C;
L_0899378C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089937CC;
    }
    goto L_08993794;
L_08993794:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    goto L_08993798;
L_08993798:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089937AC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_08993800;
    }
    goto L_089937B4;
L_089937B4:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089937C0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089934F0;
L_089937C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08993798;
      }
      goto L_089937C8;
    }
L_089937C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089937CC;
L_089937CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089937D8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08993708;
L_089937D8:
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
L_089937F0:
    aot_gpr[31] = (0x089937F8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_089937F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08993764;
L_08993800:
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08993820;
      }
      goto L_08993814;
    }
L_08993814:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08993798;
L_08993820:
    aot_gpr[31] = (0x08993828u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08993708;
L_08993828:
    aot_gpr[2] = (0u + 0u);
    goto L_08993798;
L_08993830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089938CC;
      }
      goto L_08993854;
    }
L_08993854:
    aot_gpr[2] = (0u | 65535u);
    goto L_08993858;
L_08993858:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08993898;
      }
      goto L_08993860;
    }
L_08993860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_0899389C;
    }
    goto L_08993870;
L_08993870:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_08993898;
      }
      goto L_08993880;
    }
L_08993880:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089938AC;
      }
      goto L_08993894;
    }
L_08993894:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08993898;
L_08993898:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0899389C;
L_0899389C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089938AC:
    aot_gpr[31] = (0x089938B4u);
    // nop
    goto L_089933F4;
L_089938B4:
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
L_089938CC:
    aot_gpr[31] = (0x089938D4u);
    // nop
    goto L_0899317C;
L_089938D4:
    aot_gpr[2] = (0u | 65535u);
    goto L_08993858;
L_089938DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_089939EC;
      }
      goto L_089938FC;
    }
L_089938FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993900;
L_08993900:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08993940;
      }
      goto L_0899390C;
    }
L_0899390C:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089939E4;
      }
      goto L_08993918;
    }
L_08993918:
    aot_gpr[31] = (0x08993920u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899330C;
L_08993920:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08993968;
      }
      goto L_08993928;
    }
L_08993928:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    goto L_0899392C;
L_0899392C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993940:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_0899398C;
    }
    goto L_08993948;
L_08993948:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089939E4;
      }
      goto L_08993954;
    }
L_08993954:
    aot_gpr[31] = (0x0899395Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089934F0;
L_0899395C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0899392C;
      }
      goto L_08993964;
    }
L_08993964:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993968;
L_08993968:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08993974u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_08993708;
L_08993974:
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
L_0899398C:
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089939C8;
      }
      goto L_089939A4;
    }
L_089939A4:
    if (aot_gpr[17] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_089939FC;
    }
    goto L_089939AC;
L_089939AC:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089939C8:
    if (aot_gpr[17] == aot_gpr[5]) {
    aot_gpr[2] = (0u + 0u);
        goto L_0899392C;
    }
    goto L_089939D0;
L_089939D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089939DCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_08993708;
L_089939DC:
    aot_gpr[2] = (0u + 0u);
    goto L_0899392C;
L_089939E4:
    aot_gpr[2] = (0u + 0u);
    goto L_0899392C;
L_089939EC:
    aot_gpr[31] = (0x089939F4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_089939F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993900;
L_089939FC:
    aot_gpr[31] = (0x08993A04u);
    aot_gpr[5] = (aot_gpr[6] + 0u);
    goto L_089933F4;
L_08993A04:
    aot_gpr[2] = (0u + 0u);
    goto L_0899392C;
L_08993A0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
      if (branch_taken) {
          goto L_08993A6C;
      }
      goto L_08993A44;
    }
L_08993A44:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993B5C;
      }
      goto L_08993A4C;
    }
L_08993A4C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993A50;
L_08993A50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08993A8C;
    }
    goto L_08993A5C;
L_08993A5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08993A60;
L_08993A60:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08993A6C;
L_08993A6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08993A8C:
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08993A60;
      }
      goto L_08993A98;
    }
L_08993A98:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08993B24;
      }
      goto L_08993AA0;
    }
L_08993AA0:
    aot_gpr[6] = (aot_gpr[17] & 65535u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[12] = (0u + 0u);
    goto L_08993AAC;
L_08993AAC:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[18] + aot_gpr[12]);
    aot_gpr[14] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(8));
    goto L_08993AC4;
L_08993AC4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[14] << (aot_gpr[7] & 31u));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993B04;
      }
      goto L_08993AD8;
    }
L_08993AD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[8] << 1u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[5] << 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_08993B48;
      }
      goto L_08993AF4;
    }
L_08993AF4:
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[15]));
    goto L_08993AF8;
L_08993AF8:
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08993B04;
L_08993B04:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[13];
    aot_gpr[5] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993AC4;
      }
      goto L_08993B10;
    }
L_08993B10:
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[12];
    aot_gpr[6] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993AAC;
      }
      goto L_08993B20;
    }
L_08993B20:
    aot_gpr[2] = (aot_gpr[8] + 0u);
    goto L_08993B24;
L_08993B24:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08993B48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    goto L_08993AF8;
L_08993B5C:
    aot_gpr[31] = (0x08993B64u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_08993B64:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993A50;
L_08993B6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08993C0C;
      }
      goto L_08993BB0;
    }
L_08993BB0:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993D64;
      }
      goto L_08993BB8;
    }
L_08993BB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08993BBC;
L_08993BBC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[16] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[20] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993BF0;
      }
      goto L_08993BDC;
    }
L_08993BDC:
    aot_gpr[5] = (aot_gpr[8] + 0u);
    aot_gpr[31] = (0x08993BE8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899330C;
L_08993BE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08993D30;
      }
      goto L_08993BF0;
    }
L_08993BF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_08993D20;
    }
    goto L_08993C00;
L_08993C00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08993C04;
L_08993C04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08993C40;
      }
      goto L_08993C0C;
    }
L_08993C0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993C40:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (0u | 65535u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_08993C54;
L_08993C54:
    aot_gpr[16] = (aot_gpr[20] + 0u);
    aot_gpr[17] = (0u + 0u);
    goto L_08993C5C;
L_08993C5C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[21] << (aot_gpr[17] & 31u));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[2] & aot_gpr[8]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_08993CA0;
      }
      goto L_08993C74;
    }
L_08993C74:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (~(0u | aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[8] & aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[30];
    aot_gpr[5] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_08993D04;
      }
      goto L_08993C9C;
    }
L_08993C9C:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_08993CA0;
L_08993CA0:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[19];
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993C5C;
      }
      goto L_08993CB0;
    }
L_08993CB0:
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[20] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[22];
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993C54;
      }
      goto L_08993CC8;
    }
L_08993CC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08993C0C;
      }
      goto L_08993CD4;
    }
L_08993CD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
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
L_08993D04:
    aot_gpr[31] = (0x08993D0Cu);
    // nop
    goto L_08993708;
L_08993D0C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08993CA0;
L_08993D20:
    aot_gpr[31] = (0x08993D28u);
    aot_gpr[5] = (aot_gpr[8] + 0u);
    goto L_089934F0;
L_08993D28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08993C04;
      }
      goto L_08993D30;
    }
L_08993D30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993D64:
    aot_gpr[31] = (0x08993D6Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_08993D6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08993BBC;
L_08993D74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08993EDC;
      }
      goto L_08993DB8;
    }
L_08993DB8:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993F10;
      }
      goto L_08993DC0;
    }
L_08993DC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993DC4;
L_08993DC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08993EE0;
      }
      goto L_08993DD0;
    }
L_08993DD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08993EE4;
    }
    goto L_08993DE0;
L_08993DE0:
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[18] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08993E1C;
      }
      goto L_08993DE8;
    }
L_08993DE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08993DEC;
L_08993DEC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993E1C:
    aot_gpr[21] = (aot_gpr[16] & 65535u);
    aot_gpr[22] = (0u + 0u);
    goto L_08993E24;
L_08993E24:
    aot_gpr[16] = (aot_gpr[21] + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_08993E64;
L_08993E38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[23];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08993ECC;
      }
      goto L_08993E50;
    }
L_08993E50:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08993E58;
L_08993E58:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[19];
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993EB0;
      }
      goto L_08993E64;
    }
L_08993E64:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[20] << (aot_gpr[17] & 31u));
    aot_gpr[6] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[6] & aot_gpr[7]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993E58;
      }
      goto L_08993E7C;
    }
L_08993E7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (~(0u | aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[7] & aot_gpr[3]);
      if (branch_taken) {
          goto L_08993E38;
      }
      goto L_08993E9C;
    }
L_08993E9C:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[19];
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993E64;
      }
      goto L_08993EB0;
    }
L_08993EB0:
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[30] != aot_gpr[22];
    aot_gpr[21] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_08993E24;
      }
      goto L_08993EC4;
    }
L_08993EC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08993DEC;
L_08993ECC:
    aot_gpr[31] = (0x08993ED4u);
    // nop
    goto L_089933F4;
L_08993ED4:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08993E58;
L_08993EDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08993EE0;
L_08993EE0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08993EE4;
L_08993EE4:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08993F10:
    aot_gpr[31] = (0x08993F18u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_0899317C;
L_08993F18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08993DC4;
L_08993F20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 22u, 0x08994130u>(ctx, &aot_mem); return;
      }
      goto L_08993F68;
    }
L_08993F68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08993F6C;
L_08993F6C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u | 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    if (aot_gpr[2] != 0u) aot_gpr[16] = (aot_gpr[3]);
      if (branch_taken) {
          goto L_08993FA4;
      }
      goto L_08993F90;
    }
L_08993F90:
    aot_gpr[5] = (aot_gpr[9] + 0u);
    aot_gpr[31] = (0x08993F9Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0899330C;
L_08993F9C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 14u, 0x089940C4u>(ctx, &aot_mem); return;
      }
      goto L_08993FA4;
    }
L_08993FA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08993FC4;
      }
      goto L_08993FB4;
    }
L_08993FB4:
    aot_gpr[31] = (0x08993FBCu);
    aot_gpr[5] = (aot_gpr[9] + 0u);
    goto L_089934F0;
L_08993FBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 15u, 0x089940C8u>(ctx, &aot_mem); return;
      }
      goto L_08993FC4;
    }
L_08993FC4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 21u, 0x08994124u>(ctx, &aot_mem); return;
      }
      goto L_08993FD0;
    }
L_08993FD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 13u, 0x08994094u>(ctx, &aot_mem); return;
      }
      goto L_08993FDC;
    }
L_08993FDC:
    aot_gpr[21] = (aot_gpr[17] & 65535u);
    aot_gpr[30] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[19] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(8));
    goto L_08993FF4;
L_08993FF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[21] + 0u);
    ctx.pc = 0x08994000u; return;
}

void recomp_unit_0399(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0399_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_399(Runtime &runtime) {
    runtime.register_generated_unit(399u, 0x08993000u, 4096u, &recomp_unit_0399, &recomp_unit_0399_entry);
    runtime.register_function(0x08993000u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993010u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993014u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993018u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993030u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993038u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993040u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899304Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993054u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993060u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993094u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089930A4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089930B0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089930B8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089930CCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089930F4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899310Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993118u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899312Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993154u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899315Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993164u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899317Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899319Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089931A4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089931ACu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089931C0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089931E8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089931FCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993208u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993210u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899321Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899322Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993248u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993250u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993258u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899325Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899326Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899327Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993298u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932A4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932B8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932D0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932DCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932E0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932F0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089932F8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899330Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993324u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993334u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993348u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993354u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993364u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899336Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899337Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993380u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993398u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899339Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089933BCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089933DCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089933E4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089933ECu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089933F4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993410u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993434u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899343Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993444u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993460u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993464u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899346Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899347Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993488u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899348Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993490u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899349Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934A4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934A8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934B8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934D8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934E0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934E8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089934F0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993518u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993524u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899352Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993540u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993548u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993554u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899355Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993560u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993578u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993584u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899358Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935A8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935C0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935C4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935D0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935D8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935F0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089935F4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993600u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993614u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899361Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993624u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993628u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993640u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993648u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993650u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993658u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993660u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993668u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993670u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936A0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936A4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936B0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936BCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936D4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936E0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936E4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936E8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089936F8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993700u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993708u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993710u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899371Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993728u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993738u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993740u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993760u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993764u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993770u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993780u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899378Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993794u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993798u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937ACu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937B4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937C0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937C8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937CCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937D8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937F0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089937F8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993800u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993814u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993820u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993828u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993830u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993854u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993858u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993860u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993870u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993880u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993894u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993898u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899389Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089938ACu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089938B4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089938CCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089938D4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089938DCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089938FCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993900u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899390Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993918u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993920u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993928u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899392Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993940u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993948u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993954u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899395Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993964u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993968u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993974u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x0899398Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939A4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939ACu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939C8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939D0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939DCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939E4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939ECu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939F4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x089939FCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A04u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A0Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A44u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A4Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A50u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A5Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A60u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A6Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A8Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993A98u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993AA0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993AACu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993AC4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993AD8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993AF4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993AF8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B04u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B10u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B20u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B24u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B48u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B5Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B64u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993B6Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993BB0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993BB8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993BBCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993BDCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993BE8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993BF0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C00u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C04u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C0Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C40u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C54u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C5Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C74u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993C9Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993CA0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993CB0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993CC8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993CD4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D04u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D0Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D20u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D28u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D30u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D64u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D6Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993D74u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DB8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DC0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DC4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DD0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DE0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DE8u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993DECu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E1Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E24u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E38u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E50u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E58u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E64u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E7Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993E9Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993EB0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993EC4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993ECCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993ED4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993EDCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993EE0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993EE4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F10u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F18u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F20u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F68u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F6Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F90u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993F9Cu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FA4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FB4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FBCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FC4u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FD0u, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FDCu, &recomp_unit_0399, "recomp_unit_0399");
    runtime.register_function(0x08993FF4u, &recomp_unit_0399, "recomp_unit_0399");
}
} // namespace psprecomp
