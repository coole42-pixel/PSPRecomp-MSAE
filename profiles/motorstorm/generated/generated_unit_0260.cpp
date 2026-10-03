#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0260[997] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22,
    0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 30, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 58, 0, 59, 0, 60, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 92, 0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0,
    0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129,
    0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0,
    0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 159, 0, 0, 0, 160, 0,
    0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 174, 0, 175, 0, 176, 0, 0, 177,
    178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186,
};
void recomp_unit_0260_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08908000u;
        entry_id = (entry_delta < 3988u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0260[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08908000;
    case 2u: goto L_08908038;
    case 3u: goto L_08908040;
    case 4u: goto L_08908054;
    case 5u: goto L_0890806C;
    case 6u: goto L_08908098;
    case 7u: goto L_089080B0;
    case 8u: goto L_089080D8;
    case 9u: goto L_089080E4;
    case 10u: goto L_089080FC;
    case 11u: goto L_08908110;
    case 12u: goto L_08908120;
    case 13u: goto L_0890812C;
    case 14u: goto L_08908150;
    case 15u: goto L_08908168;
    case 16u: goto L_0890817C;
    case 17u: goto L_0890819C;
    case 18u: goto L_089081BC;
    case 19u: goto L_089081C4;
    case 20u: goto L_089081D4;
    case 21u: goto L_089081E8;
    case 22u: goto L_089081FC;
    case 23u: goto L_08908204;
    case 24u: goto L_08908218;
    case 25u: goto L_08908220;
    case 26u: goto L_08908228;
    case 27u: goto L_08908230;
    case 28u: goto L_08908238;
    case 29u: goto L_08908240;
    case 30u: goto L_08908244;
    case 31u: goto L_0890824C;
    case 32u: goto L_08908254;
    case 33u: goto L_08908260;
    case 34u: goto L_08908268;
    case 35u: goto L_08908270;
    case 36u: goto L_08908280;
    case 37u: goto L_08908290;
    case 38u: goto L_08908298;
    case 39u: goto L_089082A0;
    case 40u: goto L_089082A8;
    case 41u: goto L_089082B4;
    case 42u: goto L_08908314;
    case 43u: goto L_0890831C;
    case 44u: goto L_08908320;
    case 45u: goto L_08908328;
    case 46u: goto L_08908348;
    case 47u: goto L_08908368;
    case 48u: goto L_08908388;
    case 49u: goto L_08908390;
    case 50u: goto L_089083A0;
    case 51u: goto L_089083A8;
    case 52u: goto L_089083BC;
    case 53u: goto L_089083D4;
    case 54u: goto L_089083DC;
    case 55u: goto L_089083E4;
    case 56u: goto L_089083F0;
    case 57u: goto L_08908404;
    case 58u: goto L_0890840C;
    case 59u: goto L_08908414;
    case 60u: goto L_0890841C;
    case 61u: goto L_08908420;
    case 62u: goto L_08908428;
    case 63u: goto L_08908430;
    case 64u: goto L_08908448;
    case 65u: goto L_08908450;
    case 66u: goto L_08908458;
    case 67u: goto L_08908494;
    case 68u: goto L_0890849C;
    case 69u: goto L_089084B8;
    case 70u: goto L_089084CC;
    case 71u: goto L_08908514;
    case 72u: goto L_0890851C;
    case 73u: goto L_08908524;
    case 74u: goto L_0890853C;
    case 75u: goto L_08908554;
    case 76u: goto L_0890856C;
    case 77u: goto L_08908584;
    case 78u: goto L_0890859C;
    case 79u: goto L_089085B4;
    case 80u: goto L_089085B8;
    case 81u: goto L_089085C0;
    case 82u: goto L_089085D8;
    case 83u: goto L_089085F0;
    case 84u: goto L_08908608;
    case 85u: goto L_08908620;
    case 86u: goto L_08908638;
    case 87u: goto L_08908640;
    case 88u: goto L_08908648;
    case 89u: goto L_0890868C;
    case 90u: goto L_089086A4;
    case 91u: goto L_089086BC;
    case 92u: goto L_089086C0;
    case 93u: goto L_089086C8;
    case 94u: goto L_089086CC;
    case 95u: goto L_089086D4;
    case 96u: goto L_089086F4;
    case 97u: goto L_08908720;
    case 98u: goto L_08908728;
    case 99u: goto L_08908730;
    case 100u: goto L_08908738;
    case 101u: goto L_08908740;
    case 102u: goto L_0890874C;
    case 103u: goto L_08908754;
    case 104u: goto L_08908780;
    case 105u: goto L_08908788;
    case 106u: goto L_08908790;
    case 107u: goto L_08908798;
    case 108u: goto L_089087A0;
    case 109u: goto L_089087AC;
    case 110u: goto L_089087B4;
    case 111u: goto L_089087BC;
    case 112u: goto L_089087D8;
    case 113u: goto L_089087E0;
    case 114u: goto L_089087F8;
    case 115u: goto L_089087FC;
    case 116u: goto L_08908824;
    case 117u: goto L_08908830;
    case 118u: goto L_08908844;
    case 119u: goto L_08908850;
    case 120u: goto L_08908868;
    case 121u: goto L_08908874;
    case 122u: goto L_08908884;
    case 123u: goto L_08908898;
    case 124u: goto L_089088A4;
    case 125u: goto L_089088BC;
    case 126u: goto L_089088C8;
    case 127u: goto L_089088E0;
    case 128u: goto L_089088EC;
    case 129u: goto L_089088FC;
    case 130u: goto L_08908910;
    case 131u: goto L_0890891C;
    case 132u: goto L_08908934;
    case 133u: goto L_08908940;
    case 134u: goto L_08908958;
    case 135u: goto L_08908964;
    case 136u: goto L_08908974;
    case 137u: goto L_08908988;
    case 138u: goto L_08908994;
    case 139u: goto L_089089AC;
    case 140u: goto L_089089B8;
    case 141u: goto L_089089D0;
    case 142u: goto L_089089DC;
    case 143u: goto L_089089EC;
    case 144u: goto L_08908A60;
    case 145u: goto L_08908A8C;
    case 146u: goto L_08908AC0;
    case 147u: goto L_08908AC8;
    case 148u: goto L_08908B3C;
    case 149u: goto L_08908B48;
    case 150u: goto L_08908BBC;
    case 151u: goto L_08908BC8;
    case 152u: goto L_08908BE8;
    case 153u: goto L_08908C20;
    case 154u: goto L_08908C30;
    case 155u: goto L_08908C44;
    case 156u: goto L_08908C50;
    case 157u: goto L_08908C58;
    case 158u: goto L_08908C64;
    case 159u: goto L_08908C68;
    case 160u: goto L_08908C78;
    case 161u: goto L_08908C88;
    case 162u: goto L_08908C90;
    case 163u: goto L_08908CA4;
    case 164u: goto L_08908CC4;
    case 165u: goto L_08908CCC;
    case 166u: goto L_08908CF4;
    case 167u: goto L_08908D48;
    case 168u: goto L_08908D70;
    case 169u: goto L_08908D80;
    case 170u: goto L_08908D8C;
    case 171u: goto L_08908DC8;
    case 172u: goto L_08908DD0;
    case 173u: goto L_08908DDC;
    case 174u: goto L_08908DE0;
    case 175u: goto L_08908DE8;
    case 176u: goto L_08908DF0;
    case 177u: goto L_08908DFC;
    case 178u: goto L_08908E00;
    case 179u: goto L_08908E04;
    case 180u: goto L_08908E80;
    case 181u: goto L_08908EB0;
    case 182u: goto L_08908EBC;
    case 183u: goto L_08908EE8;
    case 184u: goto L_08908EF4;
    case 185u: goto L_08908EFC;
    case 186u: goto L_08908F90;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08908000:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31908)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-21024));
    aot_gpr[17] = (aot_gpr[4] << 4u);
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-20816));
      if (branch_taken) {
          goto L_08908054;
      }
      goto L_08908038;
    }
L_08908038:
    aot_gpr[31] = (0x08908040u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 162u, 0x08907FB4u>(ctx, &aot_mem) && ctx.pc == 0x08908040u) goto L_08908040;
    return;
L_08908040:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08908038;
      }
      goto L_08908054;
    }
L_08908054:
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
L_0890806C:
    aot_gpr[6] = (aot_gpr[4] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21712));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-31920)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08908120;
      }
      goto L_089080B0;
    }
L_089080B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31908)));
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[10] = (0u | 0u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[4] << 4u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08908120;
      }
      goto L_089080D8;
    }
L_089080D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089080E4u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0890806C;
L_089080E4:
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    if (aot_gpr[9] == 0u) {
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089080FC;
    }
    goto L_089080FC;
L_089080FC:
    aot_gpr[6] = (aot_gpr[9] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[9] = (aot_gpr[5] | 0u);
        goto L_08908110;
    }
    goto L_08908110;
L_08908110:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089080D8;
      }
      goto L_08908120;
    }
L_08908120:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890812C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31908)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908168;
      }
      goto L_08908150;
    }
L_08908150:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (2192u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08908168u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(30908));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x08908168u) goto L_08908168;
    return;
L_08908168:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890817C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-31924)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089081D4;
      }
      goto L_0890819C;
    }
L_0890819C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-31908)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] << 2u);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089081D4;
      }
      goto L_089081BC;
    }
L_089081BC:
    aot_gpr[31] = (0x089081C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0890812C;
L_089081C4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089081BC;
      }
      goto L_089081D4;
    }
L_089081D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089081E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089081FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 149u, 0x08907E34u>(ctx, &aot_mem) && ctx.pc == 0x089081FCu) goto L_089081FC;
    return;
L_089081FC:
    aot_gpr[31] = (0x08908204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 153u, 0x08907EDCu>(ctx, &aot_mem) && ctx.pc == 0x08908204u) goto L_08908204;
    return;
L_08908204:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-31904)));
    aot_gpr[2] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(-31903)));
      if (branch_taken) {
          goto L_08908220;
      }
      goto L_08908218;
    }
L_08908218:
    aot_gpr[31] = (0x08908220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 101u, 0x08907A94u>(ctx, &aot_mem) && ctx.pc == 0x08908220u) goto L_08908220;
    return;
L_08908220:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908230;
      }
      goto L_08908228;
    }
L_08908228:
    aot_gpr[31] = (0x08908230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 107u, 0x08907B10u>(ctx, &aot_mem) && ctx.pc == 0x08908230u) goto L_08908230;
    return;
L_08908230:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908244;
      }
      goto L_08908238;
    }
L_08908238:
    aot_gpr[31] = (0x08908240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 157u, 0x08907F28u>(ctx, &aot_mem) && ctx.pc == 0x08908240u) goto L_08908240;
    return;
L_08908240:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(-31903)));
    goto L_08908244;
L_08908244:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908254;
      }
      goto L_0890824C;
    }
L_0890824C:
    aot_gpr[31] = (0x08908254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 167u, 0x08907FFCu>(ctx, &aot_mem) && ctx.pc == 0x08908254u) goto L_08908254;
    return;
L_08908254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-31904)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908270;
      }
      goto L_08908260;
    }
L_08908260:
    aot_gpr[31] = (0x08908268u);
    // nop
    goto L_08908098;
L_08908268:
    aot_gpr[31] = (0x08908270u);
    // nop
    goto L_0890817C;
L_08908270:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908280:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08908290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 149u, 0x08907E34u>(ctx, &aot_mem) && ctx.pc == 0x08908290u) goto L_08908290;
    return;
L_08908290:
    aot_gpr[31] = (0x08908298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 101u, 0x08907A94u>(ctx, &aot_mem) && ctx.pc == 0x08908298u) goto L_08908298;
    return;
L_08908298:
    aot_gpr[31] = (0x089082A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 107u, 0x08907B10u>(ctx, &aot_mem) && ctx.pc == 0x089082A0u) goto L_089082A0;
    return;
L_089082A0:
    aot_gpr[31] = (0x089082A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 131u, 0x08907CFCu>(ctx, &aot_mem) && ctx.pc == 0x089082A8u) goto L_089082A8;
    return;
L_089082A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089082B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-20816));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-31912)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890831C;
      }
      goto L_08908314;
    }
L_08908314:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08908320;
      }
      goto L_0890831C;
    }
L_0890831C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08908320;
L_08908320:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908328:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31928), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908348:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31896), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908368:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908388:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_089083E4;
      }
      goto L_089083A0;
    }
L_089083A0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089083E4;
      }
      goto L_089083A8;
    }
L_089083A8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089083DC;
      }
      goto L_089083BC;
    }
L_089083BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089083D4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089083D4u) goto L_089083D4;
    return;
L_089083D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089083E4;
      }
      goto L_089083DC;
    }
L_089083DC:
    aot_gpr[31] = (0x089083E4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089083E4u) goto L_089083E4;
    return;
L_089083E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089083F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908420;
      }
      goto L_08908404;
    }
L_08908404:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08908450;
      }
      goto L_0890840C;
    }
L_0890840C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08908458;
      }
      goto L_08908414;
    }
L_08908414:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0890849C;
      }
      goto L_0890841C;
    }
L_0890841C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    goto L_08908420;
L_08908420:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908524;
      }
      goto L_08908428;
    }
L_08908428:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908450;
      }
      goto L_08908430;
    }
L_08908430:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089085C0;
      }
      goto L_08908448;
    }
L_08908448:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_08908640;
      }
      goto L_08908450;
    }
L_08908450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089086CC;
      }
      goto L_08908458;
    }
L_08908458:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08908494;
    }
    goto L_08908494;
L_08908494:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_089086CC;
      }
      goto L_0890849C;
    }
L_0890849C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0890851C;
      }
      goto L_089084B8;
    }
L_089084B8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890851C;
      }
      goto L_089084CC;
    }
L_089084CC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[5] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_08908514;
    }
    goto L_08908514;
L_08908514:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_089086CC;
      }
      goto L_0890851C;
    }
L_0890851C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089086CC;
      }
      goto L_08908524;
    }
L_08908524:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089085B8;
      }
      goto L_0890853C;
    }
L_0890853C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089085B8;
      }
      goto L_08908554;
    }
L_08908554:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089085B8;
      }
      goto L_0890856C;
    }
L_0890856C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089085B8;
      }
      goto L_08908584;
    }
L_08908584:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089085B8;
      }
      goto L_0890859C;
    }
L_0890859C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089085B8;
      }
      goto L_089085B4;
    }
L_089085B4:
    aot_gpr[6] = (0u | 1u);
    goto L_089085B8;
L_089085B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_089086CC;
      }
      goto L_089085C0;
    }
L_089085C0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (aot_gpr[6] & 255u);
        goto L_08908640;
    }
    goto L_089085D8;
L_089085D8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[6] = (aot_gpr[6] & 255u);
        goto L_08908640;
    }
    goto L_089085F0;
L_089085F0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[6] = (aot_gpr[6] & 255u);
        goto L_08908640;
    }
    goto L_08908608;
L_08908608:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[6] = (aot_gpr[6] & 255u);
        goto L_08908640;
    }
    goto L_08908620;
L_08908620:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_08908640;
      }
      goto L_08908638;
    }
L_08908638:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    goto L_08908640;
L_08908640:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089086C8;
      }
      goto L_08908648;
    }
L_08908648:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = std::fabs(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089086C0;
      }
      goto L_0890868C;
    }
L_0890868C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089086C0;
      }
      goto L_089086A4;
    }
L_089086A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089086C0;
      }
      goto L_089086BC;
    }
L_089086BC:
    aot_gpr[5] = (0u | 1u);
    goto L_089086C0;
L_089086C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_089086CC;
      }
      goto L_089086C8;
    }
L_089086C8:
    aot_gpr[2] = (0u | 0u);
    goto L_089086CC;
L_089086CC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089086D4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31880), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089086F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[6] = (aot_gpr[6] & 64u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (17820u << 16u);
      if (branch_taken) {
          goto L_08908728;
      }
      goto L_08908720;
    }
L_08908720:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_08908730;
      }
      goto L_08908728;
    }
L_08908728:
    aot_gpr[7] = (aot_gpr[7] | 16384u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    goto L_08908730;
L_08908730:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08908740;
      }
      goto L_08908738;
    }
L_08908738:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_0890874C;
      }
      goto L_08908740;
    }
L_08908740:
    aot_gpr[5] = (17851u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_0890874C;
L_0890874C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908754:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[6] = (aot_gpr[6] & 64u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (17820u << 16u);
      if (branch_taken) {
          goto L_08908788;
      }
      goto L_08908780;
    }
L_08908780:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_08908790;
      }
      goto L_08908788;
    }
L_08908788:
    aot_gpr[7] = (aot_gpr[7] | 16384u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    goto L_08908790;
L_08908790:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089087A0;
      }
      goto L_08908798;
    }
L_08908798:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089087AC;
      }
      goto L_089087A0;
    }
L_089087A0:
    aot_gpr[5] = (17851u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_089087AC;
L_089087AC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089087B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089087BC:
    aot_gpr[7] = (20224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (255u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (65280u << 16u);
      if (branch_taken) {
          goto L_089087F8;
      }
      goto L_089087D8;
    }
L_089087D8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089087FC;
      }
      goto L_089087E0;
    }
L_089087E0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[9] = (aot_gpr[9] & 4u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089087FC;
      }
      goto L_089087F8;
    }
L_089087F8:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089087FC;
L_089087FC:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[17] = aot_fpr[16] - aot_fpr[12];
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(256)));
    aot_gpr[6] = (aot_gpr[11] & 255u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[16] = aot_fpr[16] - aot_fpr[17];
      if (branch_taken) {
          goto L_08908830;
      }
      goto L_08908824;
    }
L_08908824:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[19] = aot_fpr[19] + aot_fpr[18];
    goto L_08908830;
L_08908830:
    aot_gpr[6] = (aot_gpr[10] & 255u);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
      if (branch_taken) {
          goto L_08908850;
      }
      goto L_08908844;
    }
L_08908844:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[18] = aot_fpr[18] + aot_fpr[0];
    goto L_08908850;
L_08908850:
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[19] = aot_fpr[19] + aot_fpr[18];
    ctx.set_fpu_condition((aot_fpr[19] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[18] = aot_fpr[19] - aot_fpr[15];
        goto L_08908874;
    }
    goto L_08908868;
L_08908868:
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
      if (branch_taken) {
          goto L_08908884;
      }
      goto L_08908874;
    }
L_08908874:
    aot_gpr[9] = (32768u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[9]);
    goto L_08908884;
L_08908884:
    aot_gpr[6] = (aot_gpr[11] & 65280u);
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
      if (branch_taken) {
          goto L_089088A4;
      }
      goto L_08908898;
    }
L_08908898:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[19] = aot_fpr[19] + aot_fpr[18];
    goto L_089088A4;
L_089088A4:
    aot_gpr[6] = (aot_gpr[10] & 65280u);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_gpr[6] = (aot_gpr[6] >> 8u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
      if (branch_taken) {
          goto L_089088C8;
      }
      goto L_089088BC;
    }
L_089088BC:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[18] = aot_fpr[18] + aot_fpr[0];
    goto L_089088C8;
L_089088C8:
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[19] = aot_fpr[19] + aot_fpr[18];
    ctx.set_fpu_condition((aot_fpr[19] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[18] = aot_fpr[19] - aot_fpr[15];
        goto L_089088EC;
    }
    goto L_089088E0;
L_089088E0:
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
      if (branch_taken) {
          goto L_089088FC;
      }
      goto L_089088EC;
    }
L_089088EC:
    aot_gpr[6] = (32768u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[6]);
    goto L_089088FC;
L_089088FC:
    aot_gpr[2] = (aot_gpr[11] & aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] >> 16u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_fpr[19] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[19])));
      if (branch_taken) {
          goto L_0890891C;
      }
      goto L_08908910;
    }
L_08908910:
    aot_gpr[2] = (20352u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[19] = aot_fpr[19] + aot_fpr[18];
    goto L_0890891C;
L_0890891C:
    aot_gpr[8] = (aot_gpr[10] & aot_gpr[8]);
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[19] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[19] = fs * ft; }
    aot_gpr[8] = (aot_gpr[8] >> 16u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
      if (branch_taken) {
          goto L_08908940;
      }
      goto L_08908934;
    }
L_08908934:
    aot_gpr[8] = (20352u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[18] = aot_fpr[18] + aot_fpr[0];
    goto L_08908940;
L_08908940:
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[19] = aot_fpr[19] + aot_fpr[18];
    ctx.set_fpu_condition((aot_fpr[19] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[18] = aot_fpr[19] - aot_fpr[15];
        goto L_08908964;
    }
    goto L_08908958;
L_08908958:
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
      if (branch_taken) {
          goto L_08908974;
      }
      goto L_08908964;
    }
L_08908964:
    aot_gpr[8] = (32768u << 16u);
    aot_fpr[18] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[18]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[8] = (aot_gpr[2] + aot_gpr[8]);
    goto L_08908974;
L_08908974:
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[7]);
    aot_gpr[11] = (aot_gpr[11] >> 24u);
    aot_fpr[18] = __builtin_bit_cast(float, aot_gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[11]) >= 0;
    aot_fpr[18] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[18])));
      if (branch_taken) {
          goto L_08908994;
      }
      goto L_08908988;
    }
L_08908988:
    aot_gpr[11] = (20352u << 16u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_fpr[18] = aot_fpr[18] + aot_fpr[19];
    goto L_08908994;
L_08908994:
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_gpr[7] = (aot_gpr[10] & aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] >> 24u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
      if (branch_taken) {
          goto L_089089B8;
      }
      goto L_089089AC;
    }
L_089089AC:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[19] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[17] = aot_fpr[17] + aot_fpr[19];
    goto L_089089B8;
L_089089B8:
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[16] = aot_fpr[18] + aot_fpr[16];
    ctx.set_fpu_condition((aot_fpr[16] < aot_fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[15] = aot_fpr[16] - aot_fpr[15];
        goto L_089089DC;
    }
    goto L_089089D0;
L_089089D0:
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
      if (branch_taken) {
          goto L_089089EC;
      }
      goto L_089089DC;
    }
L_089089DC:
    aot_gpr[7] = (32768u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[7]);
    goto L_089089EC;
L_089089EC:
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[7] = (aot_gpr[7] << 24u);
    aot_gpr[8] = (aot_gpr[8] << 16u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[9] & 255u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
    aot_fpr[16] = aot_fpr[16] - aot_fpr[15];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[17];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[15] = aot_fpr[17] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[6] = (aot_gpr[6] & 64u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (17820u << 16u);
        goto L_08908A8C;
    }
    goto L_08908A60;
L_08908A60:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(260)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[14];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08908AC0;
      }
      goto L_08908A8C;
    }
L_08908A8C:
    aot_gpr[5] = (aot_gpr[5] | 16384u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = aot_fpr[15] - aot_fpr[14];
    aot_gpr[5] = (17851u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32768u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = aot_fpr[16] - aot_fpr[13];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08908AC0;
L_08908AC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908AC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[5] & 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[9] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20788), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20784), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[8] = (128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20780), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08908B3Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08908B3Cu) goto L_08908B3C;
    return;
L_08908B3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[5] & 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[9] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20788), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20784), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[8] = (128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-20780), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08908BBCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08908BBCu) goto L_08908BBC;
    return;
L_08908BBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908BC8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-31872), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908BE8:
    aot_gpr[4] = (16576u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (16672u << 16u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    jump_target = aot_gpr[31];
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908C20:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[13] + aot_fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908C30:
    aot_gpr[4] = (aot_gpr[4] & 15u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08908C44;
    }
    goto L_08908C44;
L_08908C44:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08908C68;
      }
      goto L_08908C50;
    }
L_08908C50:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08908C64;
      }
      goto L_08908C58;
    }
L_08908C58:
    aot_gpr[5] = (0u | 14u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908C68;
      }
      goto L_08908C64;
    }
L_08908C64:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08908C68;
L_08908C68:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[4] & 1u);
    if (aot_gpr[5] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]) ^ 0x80000000u);
        goto L_08908C78;
    }
    goto L_08908C78;
L_08908C78:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    if (aot_gpr[4] != 0u) {
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
        goto L_08908C88;
    }
    goto L_08908C88;
L_08908C88:
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[12] + aot_fpr[14];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908C90:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31740));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32076));
    aot_gpr[6] = (0u | 0u);
    goto L_08908CA4;
L_08908CA4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1024), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08908CA4;
      }
      goto L_08908CC4;
    }
L_08908CC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908CCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<3u>(aot_fpr[12]));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[17] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x08908CF4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_08908BE8;
L_08908CF4:
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-32076));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[18] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_gpr[31] = (0x08908D48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08908C30;
L_08908D48:
    aot_gpr[4] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[19] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    aot_fpr[12] = aot_fpr[17] - aot_fpr[12];
    aot_gpr[31] = (0x08908D70u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    goto L_08908C30;
L_08908D70:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    aot_gpr[31] = (0x08908D80u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08908C20;
L_08908D80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908D8C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16712u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[12];
    aot_fpr[14] = aot_fpr[15] + aot_fpr[14];
    aot_fpr[12] = aot_fpr[14] / aot_fpr[12];
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_08908DD0;
      }
      goto L_08908DC8;
    }
L_08908DC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08908DE0;
      }
      goto L_08908DD0;
    }
L_08908DD0:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908DE0;
      }
      goto L_08908DDC;
    }
L_08908DDC:
    aot_gpr[5] = (0u | 4u);
    goto L_08908DE0;
L_08908DE0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908DE8;
    }
L_08908DE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08908E00;
      }
      goto L_08908DF0;
    }
L_08908DF0:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
        goto L_08908E04;
    }
    goto L_08908DFC;
L_08908DFC:
    aot_gpr[4] = (0u | 4u);
    goto L_08908E00;
L_08908E00:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08908E04;
L_08908E04:
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[5]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-32220));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_fpr[14] = aot_fpr[16] - aot_fpr[13];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[16] = aot_fpr[16] - aot_fpr[12];
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[18];
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[0] + aot_fpr[13];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908E80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08908EB0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908EB0u) goto L_08908EB0;
    return;
L_08908EB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908EBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08908EE8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908EE8u) goto L_08908EE8;
    return;
L_08908EE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908EF4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908EFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    aot_gpr[5] = (16704u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[5]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908F90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    aot_gpr[5] = (16512u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.pc = 0x08909000u; return;
}

void recomp_unit_0260(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0260_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_260(Runtime &runtime) {
    runtime.register_generated_unit(260u, 0x08908000u, 4096u, &recomp_unit_0260, &recomp_unit_0260_entry);
    runtime.register_function(0x08908000u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908038u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908040u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908054u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890806Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908098u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089080B0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089080D8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089080E4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089080FCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908110u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908120u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890812Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908150u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908168u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890817Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890819Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089081BCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089081C4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089081D4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089081E8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089081FCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908204u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908218u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908220u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908228u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908230u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908238u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908240u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908244u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890824Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908254u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908260u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908268u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908270u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908280u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908290u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908298u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089082A0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089082A8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089082B4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908314u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890831Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908320u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908328u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908348u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908368u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908388u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908390u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083A0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083A8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083BCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083D4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083DCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083E4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089083F0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908404u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890840Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908414u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890841Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908420u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908428u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908430u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908448u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908450u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908458u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908494u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890849Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089084B8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089084CCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908514u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890851Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908524u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890853Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908554u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890856Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908584u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890859Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089085B4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089085B8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089085C0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089085D8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089085F0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908608u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908620u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908638u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908640u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908648u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890868Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086A4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086BCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086C0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086C8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086CCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086D4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089086F4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908720u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908728u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908730u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908738u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908740u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890874Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908754u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908780u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908788u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908790u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908798u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087A0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087ACu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087B4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087BCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087D8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087E0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087F8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089087FCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908824u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908830u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908844u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908850u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908868u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908874u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908884u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908898u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089088A4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089088BCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089088C8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089088E0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089088ECu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089088FCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908910u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x0890891Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908934u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908940u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908958u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908964u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908974u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908988u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908994u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089089ACu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089089B8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089089D0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089089DCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x089089ECu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908A60u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908A8Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908AC0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908AC8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908B3Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908B48u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908BBCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908BC8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908BE8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C20u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C30u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C44u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C50u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C58u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C64u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C68u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C78u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C88u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908C90u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908CA4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908CC4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908CCCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908CF4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908D48u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908D70u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908D80u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908D8Cu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DC8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DD0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DDCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DE0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DE8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DF0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908DFCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908E00u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908E04u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908E80u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908EB0u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908EBCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908EE8u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908EF4u, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908EFCu, &recomp_unit_0260, "recomp_unit_0260");
    runtime.register_function(0x08908F90u, &recomp_unit_0260, "recomp_unit_0260");
}
} // namespace psprecomp
