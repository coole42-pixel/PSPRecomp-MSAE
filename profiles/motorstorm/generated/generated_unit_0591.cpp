#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0591[1024] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 87, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 96, 97, 0, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0,
    0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0,
    192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 201,
    0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209,
    210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218,
};
void recomp_unit_0591_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A53000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0591[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A53000;
    case 2u: goto L_08A53018;
    case 3u: goto L_08A5302C;
    case 4u: goto L_08A5303C;
    case 5u: goto L_08A5304C;
    case 6u: goto L_08A53060;
    case 7u: goto L_08A53078;
    case 8u: goto L_08A53080;
    case 9u: goto L_08A53088;
    case 10u: goto L_08A53094;
    case 11u: goto L_08A530B8;
    case 12u: goto L_08A530DC;
    case 13u: goto L_08A530EC;
    case 14u: goto L_08A530FC;
    case 15u: goto L_08A53108;
    case 16u: goto L_08A53114;
    case 17u: goto L_08A53124;
    case 18u: goto L_08A5313C;
    case 19u: goto L_08A53144;
    case 20u: goto L_08A5314C;
    case 21u: goto L_08A53158;
    case 22u: goto L_08A53168;
    case 23u: goto L_08A531C8;
    case 24u: goto L_08A531DC;
    case 25u: goto L_08A531E4;
    case 26u: goto L_08A531EC;
    case 27u: goto L_08A53200;
    case 28u: goto L_08A5320C;
    case 29u: goto L_08A53220;
    case 30u: goto L_08A5322C;
    case 31u: goto L_08A53234;
    case 32u: goto L_08A53244;
    case 33u: goto L_08A53270;
    case 34u: goto L_08A53284;
    case 35u: goto L_08A53294;
    case 36u: goto L_08A5329C;
    case 37u: goto L_08A532B0;
    case 38u: goto L_08A532C8;
    case 39u: goto L_08A532D0;
    case 40u: goto L_08A532D8;
    case 41u: goto L_08A532E4;
    case 42u: goto L_08A532F8;
    case 43u: goto L_08A53308;
    case 44u: goto L_08A53310;
    case 45u: goto L_08A53324;
    case 46u: goto L_08A53330;
    case 47u: goto L_08A5333C;
    case 48u: goto L_08A53344;
    case 49u: goto L_08A5334C;
    case 50u: goto L_08A53358;
    case 51u: goto L_08A53374;
    case 52u: goto L_08A5338C;
    case 53u: goto L_08A53398;
    case 54u: goto L_08A533A0;
    case 55u: goto L_08A533B0;
    case 56u: goto L_08A533B8;
    case 57u: goto L_08A533D8;
    case 58u: goto L_08A533EC;
    case 59u: goto L_08A53438;
    case 60u: goto L_08A5344C;
    case 61u: goto L_08A53454;
    case 62u: goto L_08A53458;
    case 63u: goto L_08A53488;
    case 64u: goto L_08A53490;
    case 65u: goto L_08A534AC;
    case 66u: goto L_08A534D4;
    case 67u: goto L_08A534DC;
    case 68u: goto L_08A534EC;
    case 69u: goto L_08A534F4;
    case 70u: goto L_08A53524;
    case 71u: goto L_08A53550;
    case 72u: goto L_08A53590;
    case 73u: goto L_08A535B4;
    case 74u: goto L_08A535CC;
    case 75u: goto L_08A535D4;
    case 76u: goto L_08A535E0;
    case 77u: goto L_08A53600;
    case 78u: goto L_08A5363C;
    case 79u: goto L_08A53648;
    case 80u: goto L_08A53688;
    case 81u: goto L_08A53698;
    case 82u: goto L_08A536A8;
    case 83u: goto L_08A536B4;
    case 84u: goto L_08A536BC;
    case 85u: goto L_08A536DC;
    case 86u: goto L_08A536EC;
    case 87u: goto L_08A5370C;
    case 88u: goto L_08A53710;
    case 89u: goto L_08A53720;
    case 90u: goto L_08A53740;
    case 91u: goto L_08A53764;
    case 92u: goto L_08A53778;
    case 93u: goto L_08A53784;
    case 94u: goto L_08A537B4;
    case 95u: goto L_08A537BC;
    case 96u: goto L_08A537C0;
    case 97u: goto L_08A537C4;
    case 98u: goto L_08A537D0;
    case 99u: goto L_08A537D8;
    case 100u: goto L_08A537E4;
    case 101u: goto L_08A537EC;
    case 102u: goto L_08A537FC;
    case 103u: goto L_08A53808;
    case 104u: goto L_08A53828;
    case 105u: goto L_08A5384C;
    case 106u: goto L_08A53898;
    case 107u: goto L_08A538A0;
    case 108u: goto L_08A538C8;
    case 109u: goto L_08A538D0;
    case 110u: goto L_08A538D8;
    case 111u: goto L_08A538EC;
    case 112u: goto L_08A538F4;
    case 113u: goto L_08A53900;
    case 114u: goto L_08A53908;
    case 115u: goto L_08A53910;
    case 116u: goto L_08A53918;
    case 117u: goto L_08A53920;
    case 118u: goto L_08A53928;
    case 119u: goto L_08A53930;
    case 120u: goto L_08A53938;
    case 121u: goto L_08A53940;
    case 122u: goto L_08A53948;
    case 123u: goto L_08A53950;
    case 124u: goto L_08A53958;
    case 125u: goto L_08A53960;
    case 126u: goto L_08A53974;
    case 127u: goto L_08A53990;
    case 128u: goto L_08A539B4;
    case 129u: goto L_08A539D8;
    case 130u: goto L_08A53A0C;
    case 131u: goto L_08A53A18;
    case 132u: goto L_08A53A20;
    case 133u: goto L_08A53A3C;
    case 134u: goto L_08A53A60;
    case 135u: goto L_08A53A9C;
    case 136u: goto L_08A53AA4;
    case 137u: goto L_08A53AB0;
    case 138u: goto L_08A53ABC;
    case 139u: goto L_08A53ACC;
    case 140u: goto L_08A53AD4;
    case 141u: goto L_08A53AE8;
    case 142u: goto L_08A53AF8;
    case 143u: goto L_08A53B08;
    case 144u: goto L_08A53B10;
    case 145u: goto L_08A53B20;
    case 146u: goto L_08A53B2C;
    case 147u: goto L_08A53B38;
    case 148u: goto L_08A53B68;
    case 149u: goto L_08A53B90;
    case 150u: goto L_08A53BA0;
    case 151u: goto L_08A53BAC;
    case 152u: goto L_08A53BC4;
    case 153u: goto L_08A53BFC;
    case 154u: goto L_08A53C0C;
    case 155u: goto L_08A53C20;
    case 156u: goto L_08A53C28;
    case 157u: goto L_08A53C34;
    case 158u: goto L_08A53C4C;
    case 159u: goto L_08A53C70;
    case 160u: goto L_08A53C90;
    case 161u: goto L_08A53C9C;
    case 162u: goto L_08A53CB4;
    case 163u: goto L_08A53CC4;
    case 164u: goto L_08A53CDC;
    case 165u: goto L_08A53CE4;
    case 166u: goto L_08A53CEC;
    case 167u: goto L_08A53D00;
    case 168u: goto L_08A53D0C;
    case 169u: goto L_08A53D1C;
    case 170u: goto L_08A53D3C;
    case 171u: goto L_08A53D4C;
    case 172u: goto L_08A53D58;
    case 173u: goto L_08A53D60;
    case 174u: goto L_08A53D70;
    case 175u: goto L_08A53D78;
    case 176u: goto L_08A53D8C;
    case 177u: goto L_08A53DA4;
    case 178u: goto L_08A53DAC;
    case 179u: goto L_08A53DB4;
    case 180u: goto L_08A53DC0;
    case 181u: goto L_08A53DCC;
    case 182u: goto L_08A53DEC;
    case 183u: goto L_08A53E04;
    case 184u: goto L_08A53E0C;
    case 185u: goto L_08A53E20;
    case 186u: goto L_08A53E30;
    case 187u: goto L_08A53E38;
    case 188u: goto L_08A53E4C;
    case 189u: goto L_08A53E64;
    case 190u: goto L_08A53E6C;
    case 191u: goto L_08A53E74;
    case 192u: goto L_08A53E80;
    case 193u: goto L_08A53E94;
    case 194u: goto L_08A53EA4;
    case 195u: goto L_08A53EAC;
    case 196u: goto L_08A53EC0;
    case 197u: goto L_08A53ED8;
    case 198u: goto L_08A53EE0;
    case 199u: goto L_08A53EE8;
    case 200u: goto L_08A53EF4;
    case 201u: goto L_08A53EFC;
    case 202u: goto L_08A53F04;
    case 203u: goto L_08A53F0C;
    case 204u: goto L_08A53F1C;
    case 205u: goto L_08A53F2C;
    case 206u: goto L_08A53F34;
    case 207u: goto L_08A53F5C;
    case 208u: goto L_08A53F68;
    case 209u: goto L_08A53F7C;
    case 210u: goto L_08A53F80;
    case 211u: goto L_08A53F94;
    case 212u: goto L_08A53F9C;
    case 213u: goto L_08A53FA4;
    case 214u: goto L_08A53FB8;
    case 215u: goto L_08A53FC8;
    case 216u: goto L_08A53FE4;
    case 217u: goto L_08A53FEC;
    case 218u: goto L_08A53FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A53000:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(720));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A53018u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0258_entry, 258u, 95u, 0x08906CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A53018u) goto L_08A53018;
    return;
L_08A53018:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5302C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A53088;
      }
      goto L_08A5303C;
    }
L_08A5303C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(720));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A53088;
      }
      goto L_08A5304C;
    }
L_08A5304C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53080;
      }
      goto L_08A53060;
    }
L_08A53060:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A53078u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53078u) goto L_08A53078;
    return;
L_08A53078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53088;
      }
      goto L_08A53080;
    }
L_08A53080:
    aot_gpr[31] = (0x08A53088u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A53088u) goto L_08A53088;
    return;
L_08A53088:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(720));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A530B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0258_entry, 258u, 95u, 0x08906CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A530B8u) goto L_08A530B8;
    return;
L_08A530B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(808));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A530DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5314C;
      }
      goto L_08A530EC;
    }
L_08A530EC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(808));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A53108;
      }
      goto L_08A530FC;
    }
L_08A530FC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    goto L_08A53108;
L_08A53108:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5314C;
      }
      goto L_08A53114;
    }
L_08A53114:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53144;
      }
      goto L_08A53124;
    }
L_08A53124:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A5313Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5313Cu) goto L_08A5313C;
    return;
L_08A5313C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5314C;
      }
      goto L_08A53144;
    }
L_08A53144:
    aot_gpr[31] = (0x08A5314Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A5314Cu) goto L_08A5314C;
    return;
L_08A5314C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53158:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53168:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A53244;
      }
      goto L_08A531C8;
    }
L_08A531C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A531DCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08A53158;
L_08A531DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53200;
      }
      goto L_08A531E4;
    }
L_08A531E4:
    aot_gpr[31] = (0x08A531ECu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A531ECu) goto L_08A531EC;
    return;
L_08A531EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A53234;
      }
      goto L_08A53200;
    }
L_08A53200:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5322C;
      }
      goto L_08A5320C;
    }
L_08A5320C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A53220u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x08A53220u) goto L_08A53220;
    return;
L_08A53220:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A5322C;
L_08A5322C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A53234;
L_08A53234:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A531C8;
      }
      goto L_08A53244;
    }
L_08A53244:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A53270:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53284:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A532D8;
      }
      goto L_08A53294;
    }
L_08A53294:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A532D8;
      }
      goto L_08A5329C;
    }
L_08A5329C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A532D0;
      }
      goto L_08A532B0;
    }
L_08A532B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A532C8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A532C8u) goto L_08A532C8;
    return;
L_08A532C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A532D8;
      }
      goto L_08A532D0;
    }
L_08A532D0:
    aot_gpr[31] = (0x08A532D8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A532D8u) goto L_08A532D8;
    return;
L_08A532D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A532E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A532F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A5334C;
      }
      goto L_08A53308;
    }
L_08A53308:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5334C;
      }
      goto L_08A53310;
    }
L_08A53310:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53344;
      }
      goto L_08A53324;
    }
L_08A53324:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08A53330;
L_08A53330:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A5333Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5333Cu) goto L_08A5333C;
    return;
L_08A5333C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5334C;
      }
      goto L_08A53344;
    }
L_08A53344:
    aot_gpr[31] = (0x08A5334Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A5334Cu) goto L_08A5334C;
    return;
L_08A5334C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A533D8;
      }
      goto L_08A53374;
    }
L_08A53374:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(904));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(11056));
    aot_gpr[31] = (0x08A5338Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 77u, 0x089109E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5338Cu) goto L_08A5338C;
    return;
L_08A5338C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A53398u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0267_entry, 267u, 48u, 0x0890F734u>(ctx, &aot_mem) && ctx.pc == 0x08A53398u) goto L_08A53398;
    return;
L_08A53398:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A533B0;
      }
      goto L_08A533A0;
    }
L_08A533A0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A533B0;
L_08A533B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A533D8;
      }
      goto L_08A533B8;
    }
L_08A533B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A533D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A533D8u) goto L_08A533D8;
    return;
L_08A533D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A533EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A53488;
      }
      goto L_08A53438;
    }
L_08A53438:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A5344Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5344Cu) goto L_08A5344C;
    return;
L_08A5344C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53458;
      }
      goto L_08A53454;
    }
L_08A53454:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A53458;
L_08A53458:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53438;
      }
      goto L_08A53488;
    }
L_08A53488:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A534AC;
      }
      goto L_08A53490;
    }
L_08A53490:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A534AC;
L_08A534AC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A534D4;
L_08A534D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A53524;
      }
      goto L_08A534DC;
    }
L_08A534DC:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A534ECu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A534ECu) goto L_08A534EC;
    return;
L_08A534EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A53524;
      }
      goto L_08A534F4;
    }
L_08A534F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A534D4;
      }
      goto L_08A53524;
    }
L_08A53524:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A53550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A535E0;
      }
      goto L_08A53590;
    }
L_08A53590:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A535B4;
L_08A535B4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A535CCu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A533EC;
L_08A535CC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A535E0;
      }
      goto L_08A535D4;
    }
L_08A535D4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A535B4;
      }
      goto L_08A535E0;
    }
L_08A535E0:
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
L_08A53600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A5363Cu);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A533EC;
L_08A5363C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53648:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A53688u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A53550;
L_08A53688:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A536EC;
      }
      goto L_08A53698;
    }
L_08A53698:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A536A8;
L_08A536A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A536B4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A536B4u) goto L_08A536B4;
    return;
L_08A536B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A536DC;
      }
      goto L_08A536BC;
    }
L_08A536BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A536DCu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A533EC;
L_08A536DC:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A536A8;
      }
      goto L_08A536EC;
    }
L_08A536EC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53740;
      }
      goto L_08A5370C;
    }
L_08A5370C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A53710;
L_08A53710:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A53720u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A53600;
L_08A53720:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A53710;
      }
      goto L_08A53740;
    }
L_08A53740:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A53778u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A53648;
L_08A53778:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53784:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A537B4;
L_08A537B4:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A537BCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A537BCu) goto L_08A537BC;
    return;
L_08A537BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A537D0;
      }
      goto L_08A537C4;
    }
L_08A537C0:
    // nop
    goto L_08A537C4;
L_08A537C4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A537B4;
      }
      goto L_08A537D0;
    }
L_08A537D0:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A537D8;
L_08A537D8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A537E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A537E4u) goto L_08A537E4;
    return;
L_08A537E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A537FC;
      }
      goto L_08A537EC;
    }
L_08A537EC:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A537D8;
      }
      goto L_08A537FC;
    }
L_08A537FC:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53828;
      }
      goto L_08A53808;
    }
L_08A53808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A537B4;
      }
      goto L_08A53828;
    }
L_08A53828:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A5384C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A539B4;
      }
      goto L_08A53898;
    }
L_08A53898:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A538D8;
      }
      goto L_08A538A0;
    }
L_08A538A0:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A538C8u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A538C8u) goto L_08A538C8;
    return;
L_08A538C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A538F4;
      }
      goto L_08A538D0;
    }
L_08A538D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A53930;
      }
      goto L_08A538D8;
    }
L_08A538D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A538ECu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A53764;
L_08A538EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A539B4;
      }
      goto L_08A538F4;
    }
L_08A538F4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A53900u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53900u) goto L_08A53900;
    return;
L_08A53900:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A53910;
    }
    goto L_08A53908;
L_08A53908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A53960;
      }
      goto L_08A53910;
    }
L_08A53910:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A53918u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53918u) goto L_08A53918;
    return;
L_08A53918:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53928;
      }
      goto L_08A53920;
    }
L_08A53920:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A53960;
      }
      goto L_08A53928;
    }
L_08A53928:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A53960;
      }
      goto L_08A53930;
    }
L_08A53930:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A53938u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53938u) goto L_08A53938;
    return;
L_08A53938:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A53948;
    }
    goto L_08A53940;
L_08A53940:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A53960;
      }
      goto L_08A53948;
    }
L_08A53948:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A53950u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53950u) goto L_08A53950;
    return;
L_08A53950:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A53960;
    }
    goto L_08A53958;
L_08A53958:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A53960;
      }
      goto L_08A53960;
    }
L_08A53960:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A53974u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A53784;
L_08A53974:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A53990u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A5384C;
L_08A53990:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53898;
      }
      goto L_08A539B4;
    }
L_08A539B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A539D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A53A0C;
L_08A53A0C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A53A18u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53A18u) goto L_08A53A18;
    return;
L_08A53A18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A3C;
      }
      goto L_08A53A20;
    }
L_08A53A20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A53A0C;
      }
      goto L_08A53A3C;
    }
L_08A53A3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A53A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A53AA4;
      }
      goto L_08A53A9C;
    }
L_08A53A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53B38;
      }
      goto L_08A53AA4;
    }
L_08A53AA4:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A53B38;
      }
      goto L_08A53AB0;
    }
L_08A53AB0:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A53ABC;
L_08A53ABC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A53ACCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53ACCu) goto L_08A53ACC;
    return;
L_08A53ACC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A53B10;
      }
      goto L_08A53AD4;
    }
L_08A53AD4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A53AE8u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 14u, 0x089102F8u>(ctx, &aot_mem) && ctx.pc == 0x08A53AE8u) goto L_08A53AE8;
    return;
L_08A53AE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A53B08;
      }
      goto L_08A53AF8;
    }
L_08A53AF8:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A53B08u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A53B08u) goto L_08A53B08;
    return;
L_08A53B08:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A53B20;
      }
      goto L_08A53B10;
    }
L_08A53B10:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A53B20u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A539D8;
L_08A53B20:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A53ABC;
      }
      goto L_08A53B2C;
    }
L_08A53B2C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A53B38;
L_08A53B38:
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
L_08A53B68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A53BAC;
      }
      goto L_08A53B90;
    }
L_08A53B90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A53BA0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A539D8;
L_08A53BA0:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A53B90;
      }
      goto L_08A53BAC;
    }
L_08A53BAC:
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
L_08A53BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A53C28;
      }
      goto L_08A53BFC;
    }
L_08A53BFC:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A53C0Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A53A60;
L_08A53C0C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A53C20u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A53B68;
L_08A53C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53C34;
      }
      goto L_08A53C28;
    }
L_08A53C28:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A53C34u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A53A60;
L_08A53C34:
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
L_08A53C4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A53CC4;
      }
      goto L_08A53C70;
    }
L_08A53C70:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A53C9C;
      }
      goto L_08A53C90;
    }
L_08A53C90:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A53C90;
      }
      goto L_08A53C9C;
    }
L_08A53C9C:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A53CB4u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A5384C;
L_08A53CB4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A53CC4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A53BC4;
L_08A53CC4:
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
L_08A53CDC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53CE4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53CEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53D00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D58;
      }
      goto L_08A53D0C;
    }
L_08A53D0C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53D3C;
      }
      goto L_08A53D1C;
    }
L_08A53D1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A53D4C;
      }
      goto L_08A53D3C;
    }
L_08A53D3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A53D4C;
L_08A53D4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A53D58;
L_08A53D58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53D60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A53DB4;
      }
      goto L_08A53D70;
    }
L_08A53D70:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DB4;
      }
      goto L_08A53D78;
    }
L_08A53D78:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DAC;
      }
      goto L_08A53D8C;
    }
L_08A53D8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A53DA4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53DA4u) goto L_08A53DA4;
    return;
L_08A53DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DB4;
      }
      goto L_08A53DAC;
    }
L_08A53DAC:
    aot_gpr[31] = (0x08A53DB4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A53DB4u) goto L_08A53DB4;
    return;
L_08A53DB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53DC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DEC;
      }
      goto L_08A53DCC;
    }
L_08A53DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A53E04;
      }
      goto L_08A53DEC;
    }
L_08A53DEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A53E04;
L_08A53E04:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53E0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53E20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A53E74;
      }
      goto L_08A53E30;
    }
L_08A53E30:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53E74;
      }
      goto L_08A53E38;
    }
L_08A53E38:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53E6C;
      }
      goto L_08A53E4C;
    }
L_08A53E4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A53E64u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53E64u) goto L_08A53E64;
    return;
L_08A53E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53E74;
      }
      goto L_08A53E6C;
    }
L_08A53E6C:
    aot_gpr[31] = (0x08A53E74u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A53E74u) goto L_08A53E74;
    return;
L_08A53E74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53E80:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53E94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A53EE8;
      }
      goto L_08A53EA4;
    }
L_08A53EA4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EE8;
      }
      goto L_08A53EAC;
    }
L_08A53EAC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EE0;
      }
      goto L_08A53EC0;
    }
L_08A53EC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A53ED8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53ED8u) goto L_08A53ED8;
    return;
L_08A53ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53EE8;
      }
      goto L_08A53EE0;
    }
L_08A53EE0:
    aot_gpr[31] = (0x08A53EE8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A53EE8u) goto L_08A53EE8;
    return;
L_08A53EE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53EF4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53EFC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53F04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53F0C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53F1C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53F2C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53F34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 10u, 0x08A54088u>(ctx, &aot_mem); return;
      }
      goto L_08A53F5C;
    }
L_08A53F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 7u, 0x08A54060u>(ctx, &aot_mem); return;
      }
      goto L_08A53F68;
    }
L_08A53F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 4u, 0x08A5403Cu>(ctx, &aot_mem); return;
      }
      goto L_08A53F7C;
    }
L_08A53F7C:
    aot_gpr[19] = (0u | 0u);
    goto L_08A53F80;
L_08A53F80:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 3u, 0x08A54028u>(ctx, &aot_mem); return;
      }
      goto L_08A53F94;
    }
L_08A53F94:
    aot_gpr[31] = (0x08A53F9Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A53F0C;
L_08A53F9C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 3u, 0x08A54028u>(ctx, &aot_mem); return;
      }
      goto L_08A53FA4;
    }
L_08A53FA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A53FEC;
      }
      goto L_08A53FB8;
    }
L_08A53FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 3u, 0x08A54028u>(ctx, &aot_mem); return;
      }
      goto L_08A53FC8;
    }
L_08A53FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A53FE4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53FE4u) goto L_08A53FE4;
    return;
L_08A53FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 3u, 0x08A54028u>(ctx, &aot_mem); return;
      }
      goto L_08A53FEC;
    }
L_08A53FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 1u, 0x08A54004u>(ctx, &aot_mem); return;
      }
      goto L_08A53FFC;
    }
L_08A53FFC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 3u, 0x08A54028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 1u, 0x08A54004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0591(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0591_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_591(Runtime &runtime) {
    runtime.register_generated_unit(591u, 0x08A53000u, 4096u, &recomp_unit_0591, &recomp_unit_0591_entry);
    runtime.register_function(0x08A53000u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53018u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5302Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5303Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5304Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53060u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53078u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53080u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53088u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53094u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A530B8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A530DCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A530ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A530FCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53108u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53114u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53124u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5313Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53144u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5314Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53158u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53168u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A531C8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A531DCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A531E4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A531ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53200u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5320Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53220u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5322Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53234u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53244u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53270u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53284u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53294u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5329Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A532B0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A532C8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A532D0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A532D8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A532E4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A532F8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53308u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53310u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53324u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53330u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5333Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53344u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5334Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53358u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53374u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5338Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53398u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A533A0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A533B0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A533B8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A533D8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A533ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53438u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5344Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53454u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53458u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53488u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53490u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A534ACu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A534D4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A534DCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A534ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A534F4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53524u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53550u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53590u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A535B4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A535CCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A535D4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A535E0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53600u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5363Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53648u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53688u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53698u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A536A8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A536B4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A536BCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A536DCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A536ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5370Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53710u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53720u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53740u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53764u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53778u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53784u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537B4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537BCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537C0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537C4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537D0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537D8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537E4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A537FCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53808u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53828u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A5384Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53898u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A538A0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A538C8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A538D0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A538D8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A538ECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A538F4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53900u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53908u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53910u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53918u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53920u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53928u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53930u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53938u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53940u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53948u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53950u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53958u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53960u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53974u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53990u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A539B4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A539D8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53A0Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53A18u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53A20u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53A3Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53A60u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53A9Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53AA4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53AB0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53ABCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53ACCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53AD4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53AE8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53AF8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B08u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B10u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B20u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B2Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B38u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B68u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53B90u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53BA0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53BACu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53BC4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53BFCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C0Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C20u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C28u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C34u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C4Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C70u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C90u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53C9Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53CB4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53CC4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53CDCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53CE4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53CECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D00u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D0Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D1Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D3Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D4Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D58u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D60u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D70u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D78u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53D8Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53DA4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53DACu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53DB4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53DC0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53DCCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53DECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E04u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E0Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E20u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E30u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E38u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E4Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E64u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E6Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E74u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E80u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53E94u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EA4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EACu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EC0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53ED8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EE0u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EE8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EF4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53EFCu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F04u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F0Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F1Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F2Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F34u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F5Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F68u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F7Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F80u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F94u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53F9Cu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53FA4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53FB8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53FC8u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53FE4u, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53FECu, &recomp_unit_0591, "recomp_unit_0591");
    runtime.register_function(0x08A53FFCu, &recomp_unit_0591, "recomp_unit_0591");
}
} // namespace psprecomp
