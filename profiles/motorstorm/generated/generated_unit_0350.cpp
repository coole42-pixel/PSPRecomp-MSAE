#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0350[1020] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 22, 0, 23, 0, 0, 0,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 30,
    0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42,
    0, 43, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 87, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0,
    117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0,
    128, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 165, 0, 0, 166,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 170, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 175, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 178, 0, 179, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0,
    187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196,
    0, 0, 0, 0, 0, 0, 197, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0,
    210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 217, 0, 0, 218,
    0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236,
};
void recomp_unit_0350_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08962000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0350[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08962000;
    case 2u: goto L_08962004;
    case 3u: goto L_0896201C;
    case 4u: goto L_08962024;
    case 5u: goto L_0896204C;
    case 6u: goto L_08962054;
    case 7u: goto L_08962058;
    case 8u: goto L_08962078;
    case 9u: goto L_08962088;
    case 10u: goto L_089620B0;
    case 11u: goto L_089620BC;
    case 12u: goto L_089620C4;
    case 13u: goto L_089620EC;
    case 14u: goto L_089620F8;
    case 15u: goto L_0896210C;
    case 16u: goto L_08962118;
    case 17u: goto L_08962124;
    case 18u: goto L_08962130;
    case 19u: goto L_0896213C;
    case 20u: goto L_0896215C;
    case 21u: goto L_08962164;
    case 22u: goto L_08962168;
    case 23u: goto L_08962170;
    case 24u: goto L_08962184;
    case 25u: goto L_08962190;
    case 26u: goto L_089621C0;
    case 27u: goto L_089621D8;
    case 28u: goto L_089621E4;
    case 29u: goto L_089621F8;
    case 30u: goto L_089621FC;
    case 31u: goto L_08962208;
    case 32u: goto L_08962210;
    case 33u: goto L_08962220;
    case 34u: goto L_08962230;
    case 35u: goto L_08962234;
    case 36u: goto L_08962240;
    case 37u: goto L_0896224C;
    case 38u: goto L_08962254;
    case 39u: goto L_0896225C;
    case 40u: goto L_08962264;
    case 41u: goto L_0896226C;
    case 42u: goto L_0896227C;
    case 43u: goto L_08962284;
    case 44u: goto L_08962288;
    case 45u: goto L_08962290;
    case 46u: goto L_08962298;
    case 47u: goto L_089622AC;
    case 48u: goto L_089622D4;
    case 49u: goto L_089622FC;
    case 50u: goto L_08962310;
    case 51u: goto L_08962340;
    case 52u: goto L_08962354;
    case 53u: goto L_08962378;
    case 54u: goto L_08962384;
    case 55u: goto L_089623AC;
    case 56u: goto L_089623B8;
    case 57u: goto L_089623C4;
    case 58u: goto L_089623D0;
    case 59u: goto L_089623DC;
    case 60u: goto L_089623E8;
    case 61u: goto L_08962400;
    case 62u: goto L_08962410;
    case 63u: goto L_0896241C;
    case 64u: goto L_08962434;
    case 65u: goto L_08962444;
    case 66u: goto L_08962450;
    case 67u: goto L_08962470;
    case 68u: goto L_08962478;
    case 69u: goto L_08962498;
    case 70u: goto L_089624A4;
    case 71u: goto L_089624C4;
    case 72u: goto L_089624CC;
    case 73u: goto L_089624E0;
    case 74u: goto L_089625B4;
    case 75u: goto L_089625D4;
    case 76u: goto L_089625EC;
    case 77u: goto L_08962600;
    case 78u: goto L_08962638;
    case 79u: goto L_08962640;
    case 80u: goto L_08962648;
    case 81u: goto L_08962654;
    case 82u: goto L_0896265C;
    case 83u: goto L_08962670;
    case 84u: goto L_08962684;
    case 85u: goto L_089626A8;
    case 86u: goto L_089626C0;
    case 87u: goto L_089626C4;
    case 88u: goto L_089626D0;
    case 89u: goto L_089626D8;
    case 90u: goto L_089626E8;
    case 91u: goto L_089626F0;
    case 92u: goto L_08962704;
    case 93u: goto L_08962714;
    case 94u: goto L_0896271C;
    case 95u: goto L_08962724;
    case 96u: goto L_0896272C;
    case 97u: goto L_08962738;
    case 98u: goto L_08962740;
    case 99u: goto L_0896274C;
    case 100u: goto L_08962760;
    case 101u: goto L_0896276C;
    case 102u: goto L_08962774;
    case 103u: goto L_0896278C;
    case 104u: goto L_089627AC;
    case 105u: goto L_089627CC;
    case 106u: goto L_089627D4;
    case 107u: goto L_089627E0;
    case 108u: goto L_08962808;
    case 109u: goto L_08962824;
    case 110u: goto L_0896282C;
    case 111u: goto L_08962838;
    case 112u: goto L_08962844;
    case 113u: goto L_08962850;
    case 114u: goto L_0896285C;
    case 115u: goto L_08962868;
    case 116u: goto L_08962874;
    case 117u: goto L_08962880;
    case 118u: goto L_0896288C;
    case 119u: goto L_08962898;
    case 120u: goto L_089628A4;
    case 121u: goto L_089628B0;
    case 122u: goto L_089628BC;
    case 123u: goto L_089628C8;
    case 124u: goto L_089628D4;
    case 125u: goto L_089628E0;
    case 126u: goto L_089628EC;
    case 127u: goto L_089628F8;
    case 128u: goto L_08962900;
    case 129u: goto L_08962908;
    case 130u: goto L_08962910;
    case 131u: goto L_0896291C;
    case 132u: goto L_0896292C;
    case 133u: goto L_08962938;
    case 134u: goto L_08962958;
    case 135u: goto L_08962970;
    case 136u: goto L_08962984;
    case 137u: goto L_08962990;
    case 138u: goto L_0896299C;
    case 139u: goto L_089629BC;
    case 140u: goto L_089629C8;
    case 141u: goto L_089629DC;
    case 142u: goto L_089629F0;
    case 143u: goto L_08962A20;
    case 144u: goto L_08962A2C;
    case 145u: goto L_08962A5C;
    case 146u: goto L_08962A68;
    case 147u: goto L_08962A98;
    case 148u: goto L_08962AA4;
    case 149u: goto L_08962AD4;
    case 150u: goto L_08962AE0;
    case 151u: goto L_08962B10;
    case 152u: goto L_08962B1C;
    case 153u: goto L_08962B4C;
    case 154u: goto L_08962B58;
    case 155u: goto L_08962B88;
    case 156u: goto L_08962B94;
    case 157u: goto L_08962BA4;
    case 158u: goto L_08962BB0;
    case 159u: goto L_08962BB4;
    case 160u: goto L_08962BBC;
    case 161u: goto L_08962BC4;
    case 162u: goto L_08962BD4;
    case 163u: goto L_08962BE4;
    case 164u: goto L_08962BEC;
    case 165u: goto L_08962BF0;
    case 166u: goto L_08962BFC;
    case 167u: goto L_08962C0C;
    case 168u: goto L_08962C1C;
    case 169u: goto L_08962C24;
    case 170u: goto L_08962C28;
    case 171u: goto L_08962C34;
    case 172u: goto L_08962C4C;
    case 173u: goto L_08962C54;
    case 174u: goto L_08962C5C;
    case 175u: goto L_08962C60;
    case 176u: goto L_08962C6C;
    case 177u: goto L_08962C84;
    case 178u: goto L_08962C8C;
    case 179u: goto L_08962C94;
    case 180u: goto L_08962C98;
    case 181u: goto L_08962CA4;
    case 182u: goto L_08962CB4;
    case 183u: goto L_08962CC4;
    case 184u: goto L_08962CD8;
    case 185u: goto L_08962CF0;
    case 186u: goto L_08962CF8;
    case 187u: goto L_08962D00;
    case 188u: goto L_08962D0C;
    case 189u: goto L_08962D20;
    case 190u: goto L_08962D30;
    case 191u: goto L_08962D3C;
    case 192u: goto L_08962D4C;
    case 193u: goto L_08962D50;
    case 194u: goto L_08962D58;
    case 195u: goto L_08962D74;
    case 196u: goto L_08962D7C;
    case 197u: goto L_08962D98;
    case 198u: goto L_08962D9C;
    case 199u: goto L_08962DAC;
    case 200u: goto L_08962DD0;
    case 201u: goto L_08962DDC;
    case 202u: goto L_08962DE4;
    case 203u: goto L_08962DFC;
    case 204u: goto L_08962E24;
    case 205u: goto L_08962E34;
    case 206u: goto L_08962E44;
    case 207u: goto L_08962E58;
    case 208u: goto L_08962E70;
    case 209u: goto L_08962E78;
    case 210u: goto L_08962E80;
    case 211u: goto L_08962E8C;
    case 212u: goto L_08962EAC;
    case 213u: goto L_08962EB4;
    case 214u: goto L_08962EC4;
    case 215u: goto L_08962ED4;
    case 216u: goto L_08962EEC;
    case 217u: goto L_08962EF0;
    case 218u: goto L_08962EFC;
    case 219u: goto L_08962F04;
    case 220u: goto L_08962F0C;
    case 221u: goto L_08962F14;
    case 222u: goto L_08962F1C;
    case 223u: goto L_08962F24;
    case 224u: goto L_08962F34;
    case 225u: goto L_08962F40;
    case 226u: goto L_08962F48;
    case 227u: goto L_08962F4C;
    case 228u: goto L_08962F54;
    case 229u: goto L_08962F68;
    case 230u: goto L_08962F7C;
    case 231u: goto L_08962F8C;
    case 232u: goto L_08962F94;
    case 233u: goto L_08962FB4;
    case 234u: goto L_08962FC0;
    case 235u: goto L_08962FE0;
    case 236u: goto L_08962FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08962000:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08962004;
L_08962004:
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
L_0896201C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962024:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-22288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896204Cu);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x0896204Cu) goto L_0896204C;
    return;
L_0896204C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08962058;
      }
      goto L_08962054;
    }
L_08962054:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(9));
    goto L_08962058;
L_08962058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27144)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962078u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962078u) goto L_08962078;
    return;
L_08962078:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27144)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089620B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089620B0u) goto L_089620B0;
    return;
L_089620B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089620BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089620C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27144)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(32));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x089620ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089620ECu) goto L_089620EC;
    return;
L_089620EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089620F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896210Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31048));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 198u, 0x08961F50u>(ctx, &aot_mem) && ctx.pc == 0x0896210Cu) goto L_0896210C;
    return;
L_0896210C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08962118u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27140));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08962118u) goto L_08962118;
    return;
L_08962118:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962124:
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27108), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962130:
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26968), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896213C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27128)));
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29220)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962164;
      }
      goto L_0896215C;
    }
L_0896215C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08962168;
      }
      goto L_08962164;
    }
L_08962164:
    aot_gpr[2] = (0u | 3u);
    goto L_08962168;
L_08962168:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962170:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08962184u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29220));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x08962184u) goto L_08962184;
    return;
L_08962184:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962190:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-27116)));
      if (branch_taken) {
          goto L_089621FC;
      }
      goto L_089621C0;
    }
L_089621C0:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27124)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089621FC;
      }
      goto L_089621D8;
    }
L_089621D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27120)));
    aot_gpr[31] = (0x089621E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08962E8C;
L_089621E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27124)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089621D8;
      }
      goto L_089621F8;
    }
L_089621F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-27116)));
    goto L_089621FC;
L_089621FC:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08962210;
      }
      goto L_08962208;
    }
L_08962208:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962234;
      }
      goto L_08962210;
    }
L_08962210:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27108)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962234;
      }
      goto L_08962220;
    }
L_08962220:
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08962230u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962230u) goto L_08962230;
    return;
L_08962230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-27116)));
    goto L_08962234;
L_08962234:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962240;
    }
L_08962240:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896226C;
      }
      goto L_0896224C;
    }
L_0896224C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08962290;
      }
      goto L_08962254;
    }
L_08962254:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08962298;
      }
      goto L_0896225C;
    }
L_0896225C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08962298;
      }
      goto L_08962264;
    }
L_08962264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_0896226C;
    }
L_0896226C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27104)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962288;
      }
      goto L_0896227C;
    }
L_0896227C:
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08962284u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962284u) goto L_08962284;
    return;
L_08962284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-27116)));
    goto L_08962288;
L_08962288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962290;
    }
L_08962290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_08962298;
    }
L_08962298:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27104), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-27116), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089622AC;
      }
      goto L_089622AC;
    }
L_089622AC:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27112), aot_gpr[4]);
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
L_089622D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-27124), aot_gpr[5]);
    aot_gpr[7] = (2198u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (0u | 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089622FCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(11772));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x089622FCu) goto L_089622FC;
    return;
L_089622FC:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27120), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[7] = (2198u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-27120)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 24u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962340u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(11812));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08962340u) goto L_08962340;
    return;
L_08962340:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-27120), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962354:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08962378u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    goto L_08962F7C;
L_08962378:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27120)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089623ACu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    goto L_08962F68;
L_089623AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089623B8:
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27104), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089623C4:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089623DC;
      }
      goto L_089623D0;
    }
L_089623D0:
    aot_gpr[6] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-27112), aot_gpr[5]);
      if (branch_taken) {
          goto L_089623DC;
      }
      goto L_089623DC;
    }
L_089623DC:
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27116), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089623E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27068)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962410;
      }
      goto L_08962400;
    }
L_08962400:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962410u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27036)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962410u) goto L_08962410;
    return;
L_08962410:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896241C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27064)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962444;
      }
      goto L_08962434;
    }
L_08962434:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962444u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27028)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962444u) goto L_08962444;
    return;
L_08962444:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962450:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27056)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08962478;
      }
      goto L_08962470;
    }
L_08962470:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962498;
      }
      goto L_08962478;
    }
L_08962478:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27024)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08962498u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962498u) goto L_08962498;
    return;
L_08962498:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089624A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    aot_gpr[31] = (0x089624C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 173u, 0x08982B54u>(ctx, &aot_mem) && ctx.pc == 0x089624C4u) goto L_089624C4;
    return;
L_089624C4:
    aot_gpr[31] = (0x089624CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 177u, 0x08982B90u>(ctx, &aot_mem) && ctx.pc == 0x089624CCu) goto L_089624CC;
    return;
L_089624CC:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 20u);
    aot_gpr[31] = (0x089624E0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29216));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089624E0u) goto L_089624E0;
    return;
L_089624E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27068), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27064), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27060), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27056), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27052), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27048), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27044), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27024), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27020), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27036), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27032), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27028), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27016), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27012), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27008), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[31] = (0x089625B4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 2u, 0x08983010u>(ctx, &aot_mem) && ctx.pc == 0x089625B4u) goto L_089625B4;
    return;
L_089625B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27040), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (0u | 72u);
    aot_gpr[31] = (0x089625D4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24952));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089625D4u) goto L_089625D4;
    return;
L_089625D4:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[31] = (0x089625ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29192));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089625ECu) goto L_089625EC;
    return;
L_089625EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[31] = (0x08962600u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08962600u) goto L_08962600;
    return;
L_08962600:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[10] = (0u | 1u);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-27092));
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 4096u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08962638u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-22132));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 193u, 0x089EFC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08962638u) goto L_08962638;
    return;
L_08962638:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08962648;
      }
      goto L_08962640;
    }
L_08962640:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_08962670;
      }
      goto L_08962648;
    }
L_08962648:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08962654u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 136u, 0x089EEB80u>(ctx, &aot_mem) && ctx.pc == 0x08962654u) goto L_08962654;
    return;
L_08962654:
    aot_gpr[31] = (0x0896265Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0896265Cu) goto L_0896265C;
    return;
L_0896265C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27072), aot_gpr[4]);
    aot_gpr[2] = (0u | 0u);
    goto L_08962670;
L_08962670:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962684:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-29216));
      if (branch_taken) {
          goto L_089626C0;
      }
      goto L_089626A8;
    }
L_089626A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089626C0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089626C0u) goto L_089626C0;
    return;
L_089626C0:
    aot_gpr[17] = (0u | 0u);
    goto L_089626C4;
L_089626C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089626D8;
      }
      goto L_089626D0;
    }
L_089626D0:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x089626D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089626D8u) goto L_089626D8;
    return;
L_089626D8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089626C4;
      }
      goto L_089626E8;
    }
L_089626E8:
    aot_gpr[31] = (0x089626F0u);
    // nop
    goto L_08962190;
L_089626F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08962714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08962714u) goto L_08962714;
    return;
L_08962714:
    aot_gpr[31] = (0x0896271Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 221u, 0x089EFE10u>(ctx, &aot_mem) && ctx.pc == 0x0896271Cu) goto L_0896271C;
    return;
L_0896271C:
    aot_gpr[31] = (0x08962724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08962724u) goto L_08962724;
    return;
L_08962724:
    aot_gpr[31] = (0x0896272Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896272Cu) goto L_0896272C;
    return;
L_0896272C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962740;
      }
      goto L_08962738;
    }
L_08962738:
    aot_gpr[31] = (0x08962740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 135u, 0x089EEB78u>(ctx, &aot_mem) && ctx.pc == 0x08962740u) goto L_08962740;
    return;
L_08962740:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896274C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08962760u);
    aot_gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08962760u) goto L_08962760;
    return;
L_08962760:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896276C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962774:
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29216));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896278C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-27040)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_089627AC;
    }
L_089627AC:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27008)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089627CCu);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089627CCu) goto L_089627CC;
    return;
L_089627CC:
    aot_gpr[31] = (0x089627D4u);
    aot_gpr[4] = (0u | 0u);
    goto L_089623C4;
L_089627D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089627E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27072), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08962824;
      }
      goto L_08962808;
    }
L_08962808:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-22008)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_0896282C;
    }
L_0896282C:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22092));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962838;
    }
L_08962838:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22084));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962844;
    }
L_08962844:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22076));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962850;
    }
L_08962850:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22072));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_0896285C;
    }
L_0896285C:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22068));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962868;
    }
L_08962868:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22064));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962874;
    }
L_08962874:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22060));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962880;
    }
L_08962880:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22056));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_0896288C;
    }
L_0896288C:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22052));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_08962898;
    }
L_08962898:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22048));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628A4;
    }
L_089628A4:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22044));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628B0;
    }
L_089628B0:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22040));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628BC;
    }
L_089628BC:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22036));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628C8;
    }
L_089628C8:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22032));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628D4;
    }
L_089628D4:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22028));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628E0;
    }
L_089628E0:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22024));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628EC;
    }
L_089628EC:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22020));
      if (branch_taken) {
          goto L_08962900;
      }
      goto L_089628F8;
    }
L_089628F8:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-22016));
    goto L_08962900;
L_08962900:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896291C;
      }
      goto L_08962908;
    }
L_08962908:
    aot_gpr[31] = (0x08962910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08962910u) goto L_08962910;
    return;
L_08962910:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896291Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 242u, 0x089EFEFCu>(ctx, &aot_mem) && ctx.pc == 0x0896291Cu) goto L_0896291C;
    return;
L_0896291C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896292C:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27072)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962938:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28660)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962958u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x08962958u) goto L_08962958;
    return;
L_08962958:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08962984u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27092));
    goto L_08962FEC;
L_08962984:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08962990u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27004));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08962990u) goto L_08962990;
    return;
L_08962990:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896299C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089629BCu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089629BCu) goto L_089629BC;
    return;
L_089629BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089629C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089629DCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0896299C;
L_089629DC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089629F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962A20u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962A20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962A5Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962A5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962A68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962A98u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962A98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962AA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962AD4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962AD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962AE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962B10u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962B10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962B1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962B4Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962B4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962B58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[5] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (0u | 9u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08962B88u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896278C;
L_08962B88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962B94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962BB4;
      }
      goto L_08962BA4;
    }
L_08962BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962BB4;
      }
      goto L_08962BB0;
    }
L_08962BB0:
    aot_gpr[2] = (0u | 1u);
    goto L_08962BB4;
L_08962BB4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962BBC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962BEC;
      }
      goto L_08962BD4;
    }
L_08962BD4:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08962BE4u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08962A68;
L_08962BE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08962BF0;
      }
      goto L_08962BEC;
    }
L_08962BEC:
    aot_gpr[2] = (0u | 0u);
    goto L_08962BF0;
L_08962BF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962BFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08962C24;
      }
      goto L_08962C0C;
    }
L_08962C0C:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08962C1Cu);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    goto L_08962A2C;
L_08962C1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08962C28;
      }
      goto L_08962C24;
    }
L_08962C24:
    aot_gpr[2] = (0u | 0u);
    goto L_08962C28;
L_08962C28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962C34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08962C5C;
      }
      goto L_08962C4C;
    }
L_08962C4C:
    aot_gpr[31] = (0x08962C54u);
    // nop
    goto L_08962AA4;
L_08962C54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08962C60;
      }
      goto L_08962C5C;
    }
L_08962C5C:
    aot_gpr[2] = (0u | 0u);
    goto L_08962C60;
L_08962C60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08962C94;
      }
      goto L_08962C84;
    }
L_08962C84:
    aot_gpr[31] = (0x08962C8Cu);
    // nop
    goto L_08962B58;
L_08962C8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08962C98;
      }
      goto L_08962C94;
    }
L_08962C94:
    aot_gpr[2] = (0u | 0u);
    goto L_08962C98;
L_08962C98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962CA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08962D00;
      }
      goto L_08962CB4;
    }
L_08962CB4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4848));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08962D00;
      }
      goto L_08962CC4;
    }
L_08962CC4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962CF8;
      }
      goto L_08962CD8;
    }
L_08962CD8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962CF0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962CF0u) goto L_08962CF0;
    return;
L_08962CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D00;
      }
      goto L_08962CF8;
    }
L_08962CF8:
    aot_gpr[31] = (0x08962D00u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08962D00u) goto L_08962D00;
    return;
L_08962D00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962D0C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4848));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962D20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08962D30u);
    // nop
    goto L_0896241C;
L_08962D30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962D3C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962D50;
      }
      goto L_08962D4C;
    }
L_08962D4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26976), aot_gpr[4]);
    goto L_08962D50;
L_08962D50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962D58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26976)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D9C;
      }
      goto L_08962D74;
    }
L_08962D74:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962D98;
      }
      goto L_08962D7C;
    }
L_08962D7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962D98u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962D98u) goto L_08962D98;
    return;
L_08962D98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26976), 0u);
    goto L_08962D9C;
L_08962D9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(-26972)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-9076));
      if (branch_taken) {
          goto L_08962DE4;
      }
      goto L_08962DD0;
    }
L_08962DD0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08962DDCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 138u, 0x08996794u>(ctx, &aot_mem) && ctx.pc == 0x08962DDCu) goto L_08962DDC;
    return;
L_08962DDC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-26972), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08962DE4;
L_08962DE4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962DFC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4976));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08962E80;
      }
      goto L_08962E34;
    }
L_08962E34:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4976));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08962E80;
      }
      goto L_08962E44;
    }
L_08962E44:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962E78;
      }
      goto L_08962E58;
    }
L_08962E58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962E70u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962E70u) goto L_08962E70;
    return;
L_08962E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962E80;
      }
      goto L_08962E78;
    }
L_08962E78:
    aot_gpr[31] = (0x08962E80u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08962E80u) goto L_08962E80;
    return;
L_08962E80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08962EB4;
      }
      goto L_08962EAC;
    }
L_08962EAC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08962EF0;
      }
      goto L_08962EB4;
    }
L_08962EB4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26968)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962EF0;
      }
      goto L_08962EC4;
    }
L_08962EC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08962EF0;
      }
      goto L_08962ED4;
    }
L_08962ED4:
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962EECu);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962EECu) goto L_08962EEC;
    return;
L_08962EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08962EF0;
L_08962EF0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08962F14;
      }
      goto L_08962EFC;
    }
L_08962EFC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962F04;
    }
L_08962F04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08962F34;
      }
      goto L_08962F0C;
    }
L_08962F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962F14;
    }
L_08962F14:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962F1C;
    }
L_08962F1C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962F24;
    }
L_08962F24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962F34;
    }
L_08962F34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F4C;
      }
      goto L_08962F40;
    }
L_08962F40:
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08962F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962F48u) goto L_08962F48;
    return;
L_08962F48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08962F4C;
L_08962F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962F54;
    }
L_08962F54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962F68:
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962F7C:
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962F8C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962F94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08962FB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962FB4u) goto L_08962FB4;
    return;
L_08962FB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962FC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08962FE0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08962FE0u) goto L_08962FE0;
    return;
L_08962FE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962FEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08963000u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 119u, 0x089EEA28u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0350(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0350_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_350(Runtime &runtime) {
    runtime.register_generated_unit(350u, 0x08962000u, 4096u, &recomp_unit_0350, &recomp_unit_0350_entry);
    runtime.register_function(0x08962000u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962004u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896201Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962024u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896204Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962054u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962058u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962078u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962088u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089620B0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089620BCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089620C4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089620ECu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089620F8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896210Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962118u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962124u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962130u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896213Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896215Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962164u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962168u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962170u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962184u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962190u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089621C0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089621D8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089621E4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089621F8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089621FCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962208u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962210u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962220u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962230u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962234u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962240u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896224Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962254u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896225Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962264u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896226Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896227Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962284u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962288u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962290u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962298u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089622ACu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089622D4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089622FCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962310u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962340u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962354u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962378u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962384u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089623ACu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089623B8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089623C4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089623D0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089623DCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089623E8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962400u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962410u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896241Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962434u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962444u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962450u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962470u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962478u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962498u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089624A4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089624C4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089624CCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089624E0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089625B4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089625D4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089625ECu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962600u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962638u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962640u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962648u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962654u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896265Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962670u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962684u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626A8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626C0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626C4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626D0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626D8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626E8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089626F0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962704u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962714u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896271Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962724u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896272Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962738u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962740u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896274Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962760u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896276Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962774u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896278Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089627ACu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089627CCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089627D4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089627E0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962808u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962824u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896282Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962838u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962844u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962850u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896285Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962868u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962874u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962880u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896288Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962898u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628A4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628B0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628BCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628C8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628D4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628E0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628ECu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089628F8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962900u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962908u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962910u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896291Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896292Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962938u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962958u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962970u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962984u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962990u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x0896299Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089629BCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089629C8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089629DCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x089629F0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962A20u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962A2Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962A5Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962A68u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962A98u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962AA4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962AD4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962AE0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962B10u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962B1Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962B4Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962B58u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962B88u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962B94u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BA4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BB0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BB4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BBCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BC4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BD4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BE4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BECu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BF0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962BFCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C0Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C1Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C24u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C28u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C34u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C4Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C54u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C5Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C60u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C6Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C84u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C8Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C94u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962C98u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962CA4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962CB4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962CC4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962CD8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962CF0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962CF8u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D00u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D0Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D20u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D30u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D3Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D4Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D50u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D58u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D74u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D7Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D98u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962D9Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962DACu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962DD0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962DDCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962DE4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962DFCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E24u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E34u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E44u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E58u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E70u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E78u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E80u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962E8Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962EACu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962EB4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962EC4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962ED4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962EECu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962EF0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962EFCu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F04u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F0Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F14u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F1Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F24u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F34u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F40u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F48u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F4Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F54u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F68u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F7Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F8Cu, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962F94u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962FB4u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962FC0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962FE0u, &recomp_unit_0350, "recomp_unit_0350");
    runtime.register_function(0x08962FECu, &recomp_unit_0350, "recomp_unit_0350");
}
} // namespace psprecomp
