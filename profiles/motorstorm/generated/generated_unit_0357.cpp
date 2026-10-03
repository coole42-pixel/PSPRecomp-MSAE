#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0357[1020] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 22, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0,
    0, 0, 67, 68, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 0,
    0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0,
    0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143,
    0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162,
    0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0,
    194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204,
    0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 223, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 234,
};
void recomp_unit_0357_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08969000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0357[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08969000;
    case 2u: goto L_0896900C;
    case 3u: goto L_08969018;
    case 4u: goto L_0896902C;
    case 5u: goto L_0896904C;
    case 6u: goto L_08969068;
    case 7u: goto L_08969080;
    case 8u: goto L_0896908C;
    case 9u: goto L_08969094;
    case 10u: goto L_089690A8;
    case 11u: goto L_089690E8;
    case 12u: goto L_089690FC;
    case 13u: goto L_08969114;
    case 14u: goto L_08969144;
    case 15u: goto L_08969158;
    case 16u: goto L_0896916C;
    case 17u: goto L_08969180;
    case 18u: goto L_08969190;
    case 19u: goto L_089691A0;
    case 20u: goto L_089691A8;
    case 21u: goto L_089691B0;
    case 22u: goto L_089691BC;
    case 23u: goto L_089691C0;
    case 24u: goto L_089691C8;
    case 25u: goto L_089691D4;
    case 26u: goto L_089691DC;
    case 27u: goto L_089691EC;
    case 28u: goto L_08969204;
    case 29u: goto L_08969228;
    case 30u: goto L_08969230;
    case 31u: goto L_08969238;
    case 32u: goto L_08969240;
    case 33u: goto L_08969248;
    case 34u: goto L_08969254;
    case 35u: goto L_0896925C;
    case 36u: goto L_08969278;
    case 37u: goto L_08969284;
    case 38u: goto L_08969294;
    case 39u: goto L_089692A0;
    case 40u: goto L_089692A8;
    case 41u: goto L_089692B4;
    case 42u: goto L_089692BC;
    case 43u: goto L_089692C4;
    case 44u: goto L_089692D4;
    case 45u: goto L_089692FC;
    case 46u: goto L_0896930C;
    case 47u: goto L_08969318;
    case 48u: goto L_08969324;
    case 49u: goto L_08969330;
    case 50u: goto L_08969338;
    case 51u: goto L_08969340;
    case 52u: goto L_08969350;
    case 53u: goto L_0896936C;
    case 54u: goto L_08969378;
    case 55u: goto L_08969384;
    case 56u: goto L_089693B8;
    case 57u: goto L_089693D0;
    case 58u: goto L_089693E4;
    case 59u: goto L_089693FC;
    case 60u: goto L_08969410;
    case 61u: goto L_08969428;
    case 62u: goto L_0896943C;
    case 63u: goto L_08969458;
    case 64u: goto L_08969460;
    case 65u: goto L_08969468;
    case 66u: goto L_08969470;
    case 67u: goto L_08969488;
    case 68u: goto L_0896948C;
    case 69u: goto L_089694A0;
    case 70u: goto L_089694A8;
    case 71u: goto L_089694B0;
    case 72u: goto L_089694B8;
    case 73u: goto L_089694E0;
    case 74u: goto L_089694FC;
    case 75u: goto L_0896950C;
    case 76u: goto L_08969514;
    case 77u: goto L_0896951C;
    case 78u: goto L_08969524;
    case 79u: goto L_0896952C;
    case 80u: goto L_08969538;
    case 81u: goto L_08969544;
    case 82u: goto L_08969554;
    case 83u: goto L_08969590;
    case 84u: goto L_0896959C;
    case 85u: goto L_089695A4;
    case 86u: goto L_089695A8;
    case 87u: goto L_089695B4;
    case 88u: goto L_089695BC;
    case 89u: goto L_089695D4;
    case 90u: goto L_08969608;
    case 91u: goto L_08969610;
    case 92u: goto L_08969620;
    case 93u: goto L_08969640;
    case 94u: goto L_08969658;
    case 95u: goto L_08969664;
    case 96u: goto L_0896966C;
    case 97u: goto L_08969674;
    case 98u: goto L_08969684;
    case 99u: goto L_08969690;
    case 100u: goto L_089696A8;
    case 101u: goto L_089696B0;
    case 102u: goto L_089696C0;
    case 103u: goto L_089696C8;
    case 104u: goto L_089696E0;
    case 105u: goto L_089696E8;
    case 106u: goto L_089696F8;
    case 107u: goto L_08969704;
    case 108u: goto L_0896970C;
    case 109u: goto L_08969718;
    case 110u: goto L_0896972C;
    case 111u: goto L_0896973C;
    case 112u: goto L_08969748;
    case 113u: goto L_08969754;
    case 114u: goto L_08969798;
    case 115u: goto L_089697A4;
    case 116u: goto L_089697C8;
    case 117u: goto L_089697D0;
    case 118u: goto L_089697E8;
    case 119u: goto L_08969808;
    case 120u: goto L_08969818;
    case 121u: goto L_08969838;
    case 122u: goto L_08969850;
    case 123u: goto L_08969864;
    case 124u: goto L_08969898;
    case 125u: goto L_089698B0;
    case 126u: goto L_089698C8;
    case 127u: goto L_089698E0;
    case 128u: goto L_089698F4;
    case 129u: goto L_08969924;
    case 130u: goto L_08969930;
    case 131u: goto L_08969938;
    case 132u: goto L_08969940;
    case 133u: goto L_08969948;
    case 134u: goto L_08969958;
    case 135u: goto L_08969960;
    case 136u: goto L_0896996C;
    case 137u: goto L_08969974;
    case 138u: goto L_08969980;
    case 139u: goto L_089699A0;
    case 140u: goto L_089699AC;
    case 141u: goto L_089699D4;
    case 142u: goto L_089699EC;
    case 143u: goto L_089699FC;
    case 144u: goto L_08969A04;
    case 145u: goto L_08969A0C;
    case 146u: goto L_08969A14;
    case 147u: goto L_08969A20;
    case 148u: goto L_08969A30;
    case 149u: goto L_08969A38;
    case 150u: goto L_08969A48;
    case 151u: goto L_08969A58;
    case 152u: goto L_08969A68;
    case 153u: goto L_08969A78;
    case 154u: goto L_08969A88;
    case 155u: goto L_08969B24;
    case 156u: goto L_08969B40;
    case 157u: goto L_08969B4C;
    case 158u: goto L_08969B54;
    case 159u: goto L_08969B5C;
    case 160u: goto L_08969B68;
    case 161u: goto L_08969B70;
    case 162u: goto L_08969B7C;
    case 163u: goto L_08969B84;
    case 164u: goto L_08969B90;
    case 165u: goto L_08969BA8;
    case 166u: goto L_08969BB4;
    case 167u: goto L_08969BBC;
    case 168u: goto L_08969BC4;
    case 169u: goto L_08969BCC;
    case 170u: goto L_08969BDC;
    case 171u: goto L_08969BE4;
    case 172u: goto L_08969BEC;
    case 173u: goto L_08969BF8;
    case 174u: goto L_08969C10;
    case 175u: goto L_08969C74;
    case 176u: goto L_08969C84;
    case 177u: goto L_08969C94;
    case 178u: goto L_08969CA4;
    case 179u: goto L_08969CA8;
    case 180u: goto L_08969CE0;
    case 181u: goto L_08969D10;
    case 182u: goto L_08969D24;
    case 183u: goto L_08969D2C;
    case 184u: goto L_08969D34;
    case 185u: goto L_08969D3C;
    case 186u: goto L_08969D48;
    case 187u: goto L_08969D94;
    case 188u: goto L_08969DAC;
    case 189u: goto L_08969DC0;
    case 190u: goto L_08969DC8;
    case 191u: goto L_08969DD4;
    case 192u: goto L_08969DEC;
    case 193u: goto L_08969DF8;
    case 194u: goto L_08969E00;
    case 195u: goto L_08969E08;
    case 196u: goto L_08969E10;
    case 197u: goto L_08969E20;
    case 198u: goto L_08969E28;
    case 199u: goto L_08969E30;
    case 200u: goto L_08969E3C;
    case 201u: goto L_08969E54;
    case 202u: goto L_08969E68;
    case 203u: goto L_08969E74;
    case 204u: goto L_08969E7C;
    case 205u: goto L_08969E84;
    case 206u: goto L_08969E98;
    case 207u: goto L_08969EA0;
    case 208u: goto L_08969EA8;
    case 209u: goto L_08969EB0;
    case 210u: goto L_08969EB8;
    case 211u: goto L_08969EC4;
    case 212u: goto L_08969ECC;
    case 213u: goto L_08969ED4;
    case 214u: goto L_08969EDC;
    case 215u: goto L_08969EE4;
    case 216u: goto L_08969EF4;
    case 217u: goto L_08969F0C;
    case 218u: goto L_08969F14;
    case 219u: goto L_08969F30;
    case 220u: goto L_08969F38;
    case 221u: goto L_08969F50;
    case 222u: goto L_08969F64;
    case 223u: goto L_08969F68;
    case 224u: goto L_08969F7C;
    case 225u: goto L_08969F90;
    case 226u: goto L_08969F98;
    case 227u: goto L_08969FA0;
    case 228u: goto L_08969FA8;
    case 229u: goto L_08969FB4;
    case 230u: goto L_08969FC8;
    case 231u: goto L_08969FD0;
    case 232u: goto L_08969FD8;
    case 233u: goto L_08969FE0;
    case 234u: goto L_08969FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08969000:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896900Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26816));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896900Cu) goto L_0896900C;
    return;
L_0896900C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969018:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896902Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 137u, 0x08967904u>(ctx, &aot_mem) && ctx.pc == 0x0896902Cu) goto L_0896902C;
    return;
L_0896902C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5488));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896904C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08969094;
      }
      goto L_08969068;
    }
L_08969068:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5488));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08969080u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 139u, 0x08967938u>(ctx, &aot_mem) && ctx.pc == 0x08969080u) goto L_08969080;
    return;
L_08969080:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969094;
      }
      goto L_0896908C;
    }
L_0896908C:
    aot_gpr[31] = (0x08969094u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 224u, 0x08971D78u>(ctx, &aot_mem) && ctx.pc == 0x08969094u) goto L_08969094;
    return;
L_08969094:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089690A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (0x089690E8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 72u, 0x089AB63Cu>(ctx, &aot_mem) && ctx.pc == 0x089690E8u) goto L_089690E8;
    return;
L_089690E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089690FCu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 200u, 0x08967CB4u>(ctx, &aot_mem) && ctx.pc == 0x089690FCu) goto L_089690FC;
    return;
L_089690FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08969144u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08969144u) goto L_08969144;
    return;
L_08969144:
    aot_gpr[4] = (0u | 636u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08969158u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 132u, 0x0896292Cu>(ctx, &aot_mem) && ctx.pc == 0x08969158u) goto L_08969158;
    return;
L_08969158:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896916Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0896916Cu) goto L_0896916C;
    return;
L_0896916C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089691A8;
      }
      goto L_08969180;
    }
L_08969180:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08969190u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-27824));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 90u, 0x089AB840u>(ctx, &aot_mem) && ctx.pc == 0x08969190u) goto L_08969190;
    return;
L_08969190:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[31] = (0x089691A0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x089691A0u) goto L_089691A0;
    return;
L_089691A0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089691A8;
L_089691A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089691C0;
      }
      goto L_089691B0;
    }
L_089691B0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089691BCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x089691BCu) goto L_089691BC;
    return;
L_089691BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089691C0;
L_089691C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089691D4;
      }
      goto L_089691C8;
    }
L_089691C8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089691D4;
L_089691D4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089691EC;
      }
      goto L_089691DC;
    }
L_089691DC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(172), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    goto L_089691EC;
L_089691EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08969248;
      }
      goto L_08969228;
    }
L_08969228:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089692BC;
      }
      goto L_08969230;
    }
L_08969230:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969284;
      }
      goto L_08969238;
    }
L_08969238:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    goto L_08969240;
L_08969240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089692C4;
      }
      goto L_08969248;
    }
L_08969248:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089692A8;
      }
      goto L_08969254;
    }
L_08969254:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089692BC;
      }
      goto L_0896925C;
    }
L_0896925C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08969278u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969278u) goto L_08969278;
    return;
L_08969278:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[4]);
      if (branch_taken) {
          goto L_08969240;
      }
      goto L_08969284;
    }
L_08969284:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089692A0;
      }
      goto L_08969294;
    }
L_08969294:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089692A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08969114;
L_089692A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969240;
      }
      goto L_089692A8;
    }
L_089692A8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089692B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 144u, 0x08967994u>(ctx, &aot_mem) && ctx.pc == 0x089692B4u) goto L_089692B4;
    return;
L_089692B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969240;
      }
      goto L_089692BC;
    }
L_089692BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969240;
      }
      goto L_089692C4;
    }
L_089692C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089692D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089692FCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 14u, 0x0896E114u>(ctx, &aot_mem) && ctx.pc == 0x089692FCu) goto L_089692FC;
    return;
L_089692FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08969318;
      }
      goto L_0896930C;
    }
L_0896930C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08969330;
      }
      goto L_08969318;
    }
L_08969318:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1084))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08969330;
      }
      goto L_08969324;
    }
L_08969324:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), aot_gpr[4]);
    goto L_08969330;
L_08969330:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969340;
      }
      goto L_08969338;
    }
L_08969338:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    goto L_08969340;
L_08969340:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896936Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_089692D4;
L_0896936C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969378:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26792)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] & 255u);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26784)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089694B8;
      }
      goto L_089693B8;
    }
L_089693B8:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26780)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089694A0;
      }
      goto L_089693D0;
    }
L_089693D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26784)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969468;
      }
      goto L_089693E4;
    }
L_089693E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089693FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089693FCu) goto L_089693FC;
    return;
L_089693FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26784)));
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08969468;
      }
      goto L_08969410;
    }
L_08969410:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08969428u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969428u) goto L_08969428;
    return;
L_08969428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26784)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969460;
      }
      goto L_0896943C;
    }
L_0896943C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08969458u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969458u) goto L_08969458;
    return;
L_08969458:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26784)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    goto L_08969460;
L_08969460:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0896948C;
      }
      goto L_08969468;
    }
L_08969468:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896948C;
      }
      goto L_08969470;
    }
L_08969470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08969488u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969488u) goto L_08969488;
    return;
L_08969488:
    aot_gpr[20] = (0u | 0u);
    goto L_0896948C;
L_0896948C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26780)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089693D0;
      }
      goto L_089694A0;
    }
L_089694A0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089694B8;
      }
      goto L_089694A8;
    }
L_089694A8:
    aot_gpr[31] = (0x089694B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26784)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x089694B0u) goto L_089694B0;
    return;
L_089694B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-26784), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-26780), 0u);
    goto L_089694B8;
L_089694B8:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_089694E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-26796)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896951C;
      }
      goto L_089694FC;
    }
L_089694FC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26788)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969544;
      }
      goto L_0896950C;
    }
L_0896950C:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08969514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969514u) goto L_08969514;
    return;
L_08969514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969544;
      }
      goto L_0896951C;
    }
L_0896951C:
    aot_gpr[31] = (0x08969524u);
    aot_gpr[4] = (0u | 0u);
    goto L_08969384;
L_08969524:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969544;
      }
      goto L_0896952C;
    }
L_0896952C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08969538u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x08969538u) goto L_08969538;
    return;
L_08969538:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26788), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(-26796), static_cast<std::uint8_t>(0u));
    goto L_08969544;
L_08969544:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969554:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26796), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26788), 0u);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08969590u);
    aot_gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 71u, 0x0896B304u>(ctx, &aot_mem) && ctx.pc == 0x08969590u) goto L_08969590;
    return;
L_08969590:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089695A8;
      }
      goto L_0896959C;
    }
L_0896959C:
    aot_gpr[31] = (0x089695A4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 75u, 0x0896B33Cu>(ctx, &aot_mem) && ctx.pc == 0x089695A4u) goto L_089695A4;
    return;
L_089695A4:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    goto L_089695A8;
L_089695A8:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969608;
      }
      goto L_089695B4;
    }
L_089695B4:
    aot_gpr[31] = (0x089695BCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 191u, 0x08962D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089695BCu) goto L_089695BC;
    return;
L_089695BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089695D4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089695D4u) goto L_089695D4;
    return;
L_089695D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26776), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26772), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26768), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26764), aot_gpr[4]);
    goto L_08969608;
L_08969608:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969620;
      }
      goto L_08969610;
    }
L_08969610:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08969620u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-27424));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x08969620u) goto L_08969620;
    return;
L_08969620:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08969640:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08969658u);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08969658u) goto L_08969658;
    return;
L_08969658:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969674;
      }
      goto L_08969664;
    }
L_08969664:
    aot_gpr[31] = (0x0896966Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 255u, 0x089FEFF4u>(ctx, &aot_mem) && ctx.pc == 0x0896966Cu) goto L_0896966C;
    return;
L_0896966C:
    aot_gpr[31] = (0x08969674u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 4u, 0x089FF01Cu>(ctx, &aot_mem) && ctx.pc == 0x08969674u) goto L_08969674;
    return;
L_08969674:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089696A8;
      }
      goto L_08969684;
    }
L_08969684:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089696A8;
      }
      goto L_08969690;
    }
L_08969690:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089696A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089696A8u) goto L_089696A8;
    return;
L_089696A8:
    aot_gpr[31] = (0x089696B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 194u, 0x08962D58u>(ctx, &aot_mem) && ctx.pc == 0x089696B0u) goto L_089696B0;
    return;
L_089696B0:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28640));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089696C8;
      }
      goto L_089696C0;
    }
L_089696C0:
    aot_gpr[31] = (0x089696C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 76u, 0x089674C8u>(ctx, &aot_mem) && ctx.pc == 0x089696C8u) goto L_089696C8;
    return;
L_089696C8:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26776), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26772), 0u);
    aot_gpr[31] = (0x089696E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08969384;
L_089696E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089696F8;
      }
      goto L_089696E8;
    }
L_089696E8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-26796), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0896970C;
      }
      goto L_089696F8;
    }
L_089696F8:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08969704u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x08969704u) goto L_08969704;
    return;
L_08969704:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26788), 0u);
    goto L_0896970C;
L_0896970C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08969718u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 256u, 0x0895EFFCu>(ctx, &aot_mem) && ctx.pc == 0x08969718u) goto L_08969718;
    return;
L_08969718:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896972C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969748;
      }
      goto L_0896973C;
    }
L_0896973C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08969748u);
    aot_gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08969748u) goto L_08969748;
    return;
L_08969748:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969754:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-26751), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08969798u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08969798u) goto L_08969798;
    return;
L_08969798:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089697D0;
      }
      goto L_089697A4;
    }
L_089697A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089697C8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089697C8u) goto L_089697C8;
    return;
L_089697C8:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26756), aot_gpr[2]);
    goto L_089697D0;
L_089697D0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26760), aot_gpr[16]);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089697E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24844));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 52u, 0x08962354u>(ctx, &aot_mem) && ctx.pc == 0x089697E8u) goto L_089697E8;
    return;
L_089697E8:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26752), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08969818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08969818u) goto L_08969818;
    return;
L_08969818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08969838u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969838u) goto L_08969838;
    return;
L_08969838:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26760), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26751)));
    aot_gpr[31] = (0x08969850u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 54u, 0x08962384u>(ctx, &aot_mem) && ctx.pc == 0x08969850u) goto L_08969850;
    return;
L_08969850:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26752), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-512));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(508), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08969898u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x08969898u) goto L_08969898;
    return;
L_08969898:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089698B0u);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089698B0u) goto L_089698B0;
    return;
L_089698B0:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24708));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
    aot_gpr[31] = (0x089698C8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x089698C8u) goto L_089698C8;
    return;
L_089698C8:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(292));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089698E0u);
    aot_gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089698E0u) goto L_089698E0;
    return;
L_089698E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089698F4u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089698F4u) goto L_089698F4;
    return;
L_089698F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(371), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), 0u);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    aot_gpr[5] = (0u | 30u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08969924u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28624));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x08969924u) goto L_08969924;
    return;
L_08969924:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969948;
      }
      goto L_08969930;
    }
L_08969930:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08969960;
      }
      goto L_08969938;
    }
L_08969938:
    aot_gpr[31] = (0x08969940u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969940u) goto L_08969940;
    return;
L_08969940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969980;
      }
      goto L_08969948;
    }
L_08969948:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08969958u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969958u) goto L_08969958;
    return;
L_08969958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969980;
      }
      goto L_08969960;
    }
L_08969960:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896996Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26751), static_cast<std::uint8_t>(0u));
    goto L_08969808;
L_0896996C:
    aot_gpr[31] = (0x08969974u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969974u) goto L_08969974;
    return;
L_08969974:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08969980u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969980u) goto L_08969980;
    return;
L_08969980:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089699A0:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26752)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089699AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-768));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(740), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(744), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(748), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[31]);
    aot_gpr[31] = (0x089699D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x089699D4u) goto L_089699D4;
    return;
L_089699D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089699ECu);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089699ECu) goto L_089699EC;
    return;
L_089699EC:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24652));
    aot_gpr[31] = (0x089699FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x089699FCu) goto L_089699FC;
    return;
L_089699FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969B54;
      }
      goto L_08969A04;
    }
L_08969A04:
    aot_gpr[31] = (0x08969A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08969A0Cu) goto L_08969A0C;
    return;
L_08969A0C:
    aot_gpr[31] = (0x08969A14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x08969A14u) goto L_08969A14;
    return;
L_08969A14:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
      if (branch_taken) {
          goto L_08969A38;
      }
      goto L_08969A20;
    }
L_08969A20:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08969A30u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08969A30u) goto L_08969A30;
    return;
L_08969A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A48;
      }
      goto L_08969A38;
    }
L_08969A38:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08969A48u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08969A48u) goto L_08969A48;
    return;
L_08969A48:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(328));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    aot_gpr[31] = (0x08969A58u);
    aot_gpr[6] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08969A58u) goto L_08969A58;
    return;
L_08969A58:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(576));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x08969A68u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08969A68u) goto L_08969A68;
    return;
L_08969A68:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(640));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x08969A78u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08969A78u) goto L_08969A78;
    return;
L_08969A78:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08969A88u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08969A88u) goto L_08969A88;
    return;
L_08969A88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(720), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(704), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(716), aot_gpr[4]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08969B24u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969B24u) goto L_08969B24;
    return;
L_08969B24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08969B40u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969B40u) goto L_08969B40;
    return;
L_08969B40:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08969B70;
      }
      goto L_08969B4C;
    }
L_08969B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BE4;
      }
      goto L_08969B54;
    }
L_08969B54:
    aot_gpr[31] = (0x08969B5Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969B5Cu) goto L_08969B5C;
    return;
L_08969B5C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08969B68u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969B68u) goto L_08969B68;
    return;
L_08969B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BF8;
      }
      goto L_08969B70;
    }
L_08969B70:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(724));
    aot_gpr[31] = (0x08969B7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08969B7Cu) goto L_08969B7C;
    return;
L_08969B7C:
    aot_gpr[31] = (0x08969B84u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(736), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08969B84u) goto L_08969B84;
    return;
L_08969B84:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BA8;
      }
      goto L_08969B90;
    }
L_08969B90:
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(736));
    aot_gpr[5] = (0u | 29u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08969BA8u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x08969BA8u) goto L_08969BA8;
    return;
L_08969BA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(736)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969BCC;
      }
      goto L_08969BB4;
    }
L_08969BB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08969BE4;
      }
      goto L_08969BBC;
    }
L_08969BBC:
    aot_gpr[31] = (0x08969BC4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969BC4u) goto L_08969BC4;
    return;
L_08969BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BF8;
      }
      goto L_08969BCC;
    }
L_08969BCC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(736), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08969BDCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969BDCu) goto L_08969BDC;
    return;
L_08969BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BF8;
      }
      goto L_08969BE4;
    }
L_08969BE4:
    aot_gpr[31] = (0x08969BECu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969BECu) goto L_08969BEC;
    return;
L_08969BEC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08969BF8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969BF8u) goto L_08969BF8;
    return;
L_08969BF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(744)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(748)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969C10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[11] | 0u);
    aot_gpr[17] = (aot_gpr[10] | 0u);
    aot_gpr[18] = (aot_gpr[9] | 0u);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[31]);
    aot_gpr[31] = (0x08969C74u);
    aot_gpr[6] = (0u | 392u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08969C74u) goto L_08969C74;
    return;
L_08969C74:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08969C84u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08969C84u) goto L_08969C84;
    return;
L_08969C84:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08969C94u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08969C94u) goto L_08969C94;
    return;
L_08969C94:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
      if (branch_taken) {
          goto L_08969CA8;
      }
      goto L_08969CA4;
    }
L_08969CA4:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    goto L_08969CA8;
L_08969CA8:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[31] = (0x08969CE0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_089699AC;
L_08969CE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D34;
      }
      goto L_08969D24;
    }
L_08969D24:
    aot_gpr[31] = (0x08969D2Cu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969D2Cu) goto L_08969D2C;
    return;
L_08969D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D3C;
      }
      goto L_08969D34;
    }
L_08969D34:
    aot_gpr[31] = (0x08969D3Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969D3Cu) goto L_08969D3C;
    return;
L_08969D3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[31] = (0x08969D94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 91u, 0x0895F55Cu>(ctx, &aot_mem) && ctx.pc == 0x08969D94u) goto L_08969D94;
    return;
L_08969D94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08969DACu);
    aot_gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08969DACu) goto L_08969DAC;
    return;
L_08969DAC:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25328));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[4]);
    aot_gpr[31] = (0x08969DC0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08969DC0u) goto L_08969DC0;
    return;
L_08969DC0:
    aot_gpr[31] = (0x08969DC8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08969DC8u) goto L_08969DC8;
    return;
L_08969DC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969DEC;
      }
      goto L_08969DD4;
    }
L_08969DD4:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (0u | 34u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08969DECu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 236u, 0x0895FDCCu>(ctx, &aot_mem) && ctx.pc == 0x08969DECu) goto L_08969DEC;
    return;
L_08969DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969E10;
      }
      goto L_08969DF8;
    }
L_08969DF8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08969E28;
      }
      goto L_08969E00;
    }
L_08969E00:
    aot_gpr[31] = (0x08969E08u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969E08u) goto L_08969E08;
    return;
L_08969E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969E3C;
      }
      goto L_08969E10;
    }
L_08969E10:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08969E20u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969E20u) goto L_08969E20;
    return;
L_08969E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969E3C;
      }
      goto L_08969E28;
    }
L_08969E28:
    aot_gpr[31] = (0x08969E30u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969E30u) goto L_08969E30;
    return;
L_08969E30:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08969E3Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 94u, 0x0895F598u>(ctx, &aot_mem) && ctx.pc == 0x08969E3Cu) goto L_08969E3C;
    return;
L_08969E3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969E54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08969E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08969E68u) goto L_08969E68;
    return;
L_08969E68:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EDC;
      }
      goto L_08969E74;
    }
L_08969E74:
    aot_gpr[31] = (0x08969E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08969E7Cu) goto L_08969E7C;
    return;
L_08969E7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EA8;
      }
      goto L_08969E84;
    }
L_08969E84:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08969E98u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 157u, 0x0896A958u>(ctx, &aot_mem) && ctx.pc == 0x08969E98u) goto L_08969E98;
    return;
L_08969E98:
    aot_gpr[31] = (0x08969EA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 122u, 0x0896A758u>(ctx, &aot_mem) && ctx.pc == 0x08969EA0u) goto L_08969EA0;
    return;
L_08969EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EB8;
      }
      goto L_08969EA8;
    }
L_08969EA8:
    aot_gpr[31] = (0x08969EB0u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969EB0u) goto L_08969EB0;
    return;
L_08969EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EE4;
      }
      goto L_08969EB8;
    }
L_08969EB8:
    aot_gpr[4] = (2199u << 16u);
    aot_gpr[31] = (0x08969EC4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24596));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 56u, 0x089623B8u>(ctx, &aot_mem) && ctx.pc == 0x08969EC4u) goto L_08969EC4;
    return;
L_08969EC4:
    aot_gpr[31] = (0x08969ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 23u, 0x08962170u>(ctx, &aot_mem) && ctx.pc == 0x08969ECCu) goto L_08969ECC;
    return;
L_08969ECC:
    aot_gpr[31] = (0x08969ED4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969ED4u) goto L_08969ED4;
    return;
L_08969ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EE4;
      }
      goto L_08969EDC;
    }
L_08969EDC:
    aot_gpr[31] = (0x08969EE4u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969EE4u) goto L_08969EE4;
    return;
L_08969EE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08969F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08969F0Cu) goto L_08969F0C;
    return;
L_08969F0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969F68;
      }
      goto L_08969F14;
    }
L_08969F14:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26756)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08969F68;
      }
      goto L_08969F30;
    }
L_08969F30:
    aot_gpr[31] = (0x08969F38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x08969F38u) goto L_08969F38;
    return;
L_08969F38:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08969F50u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x08969F50u) goto L_08969F50;
    return;
L_08969F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26760)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08969F64u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969F64u) goto L_08969F64;
    return;
L_08969F64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26756), aot_gpr[17]);
    goto L_08969F68;
L_08969F68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969F7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FA0;
      }
      goto L_08969F90;
    }
L_08969F90:
    aot_gpr[31] = (0x08969F98u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969F98u) goto L_08969F98;
    return;
L_08969F98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FA8;
      }
      goto L_08969FA0;
    }
L_08969FA0:
    aot_gpr[31] = (0x08969FA8u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969FA8u) goto L_08969FA8;
    return;
L_08969FA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969FB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FD8;
      }
      goto L_08969FC8;
    }
L_08969FC8:
    aot_gpr[31] = (0x08969FD0u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969FD0u) goto L_08969FD0;
    return;
L_08969FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FE0;
      }
      goto L_08969FD8;
    }
L_08969FD8:
    aot_gpr[31] = (0x08969FE0u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x08969FE0u) goto L_08969FE0;
    return;
L_08969FE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969FEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    ctx.pc = 0x0896A000u; return;
}

void recomp_unit_0357(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0357_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_357(Runtime &runtime) {
    runtime.register_generated_unit(357u, 0x08969000u, 4096u, &recomp_unit_0357, &recomp_unit_0357_entry);
    runtime.register_function(0x08969000u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896900Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969018u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896902Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896904Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969068u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969080u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896908Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969094u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089690A8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089690E8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089690FCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969114u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969144u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969158u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896916Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969180u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969190u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691A0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691A8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691B0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691BCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691C0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691C8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691D4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691DCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089691ECu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969204u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969228u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969230u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969238u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969240u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969248u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969254u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896925Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969278u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969284u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969294u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692A0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692A8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692B4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692BCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692C4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692D4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089692FCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896930Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969318u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969324u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969330u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969338u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969340u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969350u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896936Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969378u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969384u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089693B8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089693D0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089693E4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089693FCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969410u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969428u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896943Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969458u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969460u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969468u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969470u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969488u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896948Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089694A0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089694A8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089694B0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089694B8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089694E0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089694FCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896950Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969514u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896951Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969524u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896952Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969538u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969544u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969554u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969590u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896959Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089695A4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089695A8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089695B4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089695BCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089695D4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969608u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969610u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969620u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969640u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969658u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969664u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896966Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969674u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969684u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969690u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696A8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696B0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696C0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696C8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696E0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696E8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089696F8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969704u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896970Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969718u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896972Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896973Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969748u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969754u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969798u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089697A4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089697C8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089697D0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089697E8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969808u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969818u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969838u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969850u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969864u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969898u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089698B0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089698C8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089698E0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089698F4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969924u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969930u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969938u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969940u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969948u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969958u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969960u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x0896996Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969974u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969980u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089699A0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089699ACu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089699D4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089699ECu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x089699FCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A04u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A0Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A14u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A20u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A30u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A38u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A48u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A58u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A68u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A78u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969A88u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B24u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B40u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B4Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B54u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B5Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B68u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B70u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B7Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B84u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969B90u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BA8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BB4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BBCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BC4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BCCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BDCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BE4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BECu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969BF8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969C10u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969C74u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969C84u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969C94u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969CA4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969CA8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969CE0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D10u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D24u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D2Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D34u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D3Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D48u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969D94u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969DACu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969DC0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969DC8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969DD4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969DECu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969DF8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E00u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E08u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E10u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E20u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E28u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E30u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E3Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E54u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E68u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E74u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E7Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E84u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969E98u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EA0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EA8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EB0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EB8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EC4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969ECCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969ED4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EDCu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EE4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969EF4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F0Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F14u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F30u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F38u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F50u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F64u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F68u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F7Cu, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F90u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969F98u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FA0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FA8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FB4u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FC8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FD0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FD8u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FE0u, &recomp_unit_0357, "recomp_unit_0357");
    runtime.register_function(0x08969FECu, &recomp_unit_0357, "recomp_unit_0357");
}
} // namespace psprecomp
