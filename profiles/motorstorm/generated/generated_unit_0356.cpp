#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0356[1019] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21,
    0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0,
    37, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72,
    0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0,
    0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112,
    0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0,
    120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136,
    0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144,
    0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0,
    153, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0,
    0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0,
    0, 0, 0, 228, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0,
    236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0,
    0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257,
};
void recomp_unit_0356_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08968004u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0356[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08968004;
    case 2u: goto L_0896800C;
    case 3u: goto L_08968020;
    case 4u: goto L_08968038;
    case 5u: goto L_08968054;
    case 6u: goto L_0896805C;
    case 7u: goto L_0896806C;
    case 8u: goto L_08968088;
    case 9u: goto L_08968098;
    case 10u: goto L_089680A8;
    case 11u: goto L_089680B0;
    case 12u: goto L_089680B8;
    case 13u: goto L_089680C0;
    case 14u: goto L_089680C8;
    case 15u: goto L_089680D4;
    case 16u: goto L_08968104;
    case 17u: goto L_08968134;
    case 18u: goto L_0896814C;
    case 19u: goto L_08968158;
    case 20u: goto L_08968168;
    case 21u: goto L_08968180;
    case 22u: goto L_0896818C;
    case 23u: goto L_0896819C;
    case 24u: goto L_089681A4;
    case 25u: goto L_089681AC;
    case 26u: goto L_089681B4;
    case 27u: goto L_089681BC;
    case 28u: goto L_089681C4;
    case 29u: goto L_089681E4;
    case 30u: goto L_08968210;
    case 31u: goto L_08968228;
    case 32u: goto L_08968234;
    case 33u: goto L_08968250;
    case 34u: goto L_08968264;
    case 35u: goto L_08968274;
    case 36u: goto L_0896827C;
    case 37u: goto L_08968284;
    case 38u: goto L_0896828C;
    case 39u: goto L_08968294;
    case 40u: goto L_0896829C;
    case 41u: goto L_089682A8;
    case 42u: goto L_089682B0;
    case 43u: goto L_089682B8;
    case 44u: goto L_089682C0;
    case 45u: goto L_089682CC;
    case 46u: goto L_089682D8;
    case 47u: goto L_089682E0;
    case 48u: goto L_089682E8;
    case 49u: goto L_08968304;
    case 50u: goto L_0896833C;
    case 51u: goto L_08968354;
    case 52u: goto L_0896836C;
    case 53u: goto L_08968384;
    case 54u: goto L_08968394;
    case 55u: goto L_0896839C;
    case 56u: goto L_089683A4;
    case 57u: goto L_089683AC;
    case 58u: goto L_089683B4;
    case 59u: goto L_089683BC;
    case 60u: goto L_089683C8;
    case 61u: goto L_089683D4;
    case 62u: goto L_089683DC;
    case 63u: goto L_089683E4;
    case 64u: goto L_08968404;
    case 65u: goto L_08968438;
    case 66u: goto L_08968444;
    case 67u: goto L_0896844C;
    case 68u: goto L_0896845C;
    case 69u: goto L_08968468;
    case 70u: goto L_08968470;
    case 71u: goto L_08968478;
    case 72u: goto L_08968480;
    case 73u: goto L_08968488;
    case 74u: goto L_08968490;
    case 75u: goto L_0896849C;
    case 76u: goto L_089684BC;
    case 77u: goto L_089684C8;
    case 78u: goto L_089684D0;
    case 79u: goto L_089684D8;
    case 80u: goto L_089684F4;
    case 81u: goto L_08968518;
    case 82u: goto L_08968530;
    case 83u: goto L_08968550;
    case 84u: goto L_08968560;
    case 85u: goto L_08968574;
    case 86u: goto L_0896857C;
    case 87u: goto L_08968590;
    case 88u: goto L_0896859C;
    case 89u: goto L_089685A4;
    case 90u: goto L_089685B0;
    case 91u: goto L_089685B8;
    case 92u: goto L_089685C0;
    case 93u: goto L_089685CC;
    case 94u: goto L_089685E0;
    case 95u: goto L_089685EC;
    case 96u: goto L_08968604;
    case 97u: goto L_08968614;
    case 98u: goto L_08968620;
    case 99u: goto L_0896862C;
    case 100u: goto L_08968634;
    case 101u: goto L_0896863C;
    case 102u: goto L_0896864C;
    case 103u: goto L_08968678;
    case 104u: goto L_08968690;
    case 105u: goto L_089686B0;
    case 106u: goto L_089686BC;
    case 107u: goto L_089686CC;
    case 108u: goto L_089686DC;
    case 109u: goto L_089686E4;
    case 110u: goto L_089686EC;
    case 111u: goto L_089686F8;
    case 112u: goto L_08968700;
    case 113u: goto L_08968708;
    case 114u: goto L_08968724;
    case 115u: goto L_0896874C;
    case 116u: goto L_08968758;
    case 117u: goto L_08968764;
    case 118u: goto L_08968770;
    case 119u: goto L_08968778;
    case 120u: goto L_08968784;
    case 121u: goto L_0896878C;
    case 122u: goto L_089687A4;
    case 123u: goto L_089687C0;
    case 124u: goto L_089687D4;
    case 125u: goto L_089687F4;
    case 126u: goto L_08968804;
    case 127u: goto L_08968814;
    case 128u: goto L_0896881C;
    case 129u: goto L_08968824;
    case 130u: goto L_0896882C;
    case 131u: goto L_08968834;
    case 132u: goto L_08968840;
    case 133u: goto L_08968864;
    case 134u: goto L_0896886C;
    case 135u: goto L_08968874;
    case 136u: goto L_08968880;
    case 137u: goto L_08968888;
    case 138u: goto L_08968890;
    case 139u: goto L_089688A4;
    case 140u: goto L_089688D0;
    case 141u: goto L_089688E8;
    case 142u: goto L_089688F0;
    case 143u: goto L_089688F8;
    case 144u: goto L_08968900;
    case 145u: goto L_08968914;
    case 146u: goto L_0896891C;
    case 147u: goto L_08968930;
    case 148u: goto L_08968938;
    case 149u: goto L_0896894C;
    case 150u: goto L_08968954;
    case 151u: goto L_08968968;
    case 152u: goto L_08968970;
    case 153u: goto L_08968984;
    case 154u: goto L_0896898C;
    case 155u: goto L_089689A0;
    case 156u: goto L_089689A8;
    case 157u: goto L_089689B0;
    case 158u: goto L_089689B8;
    case 159u: goto L_089689CC;
    case 160u: goto L_089689D4;
    case 161u: goto L_089689E8;
    case 162u: goto L_089689F0;
    case 163u: goto L_089689F8;
    case 164u: goto L_08968A08;
    case 165u: goto L_08968A1C;
    case 166u: goto L_08968A24;
    case 167u: goto L_08968A2C;
    case 168u: goto L_08968A30;
    case 169u: goto L_08968A38;
    case 170u: goto L_08968A48;
    case 171u: goto L_08968A70;
    case 172u: goto L_08968A78;
    case 173u: goto L_08968A80;
    case 174u: goto L_08968A98;
    case 175u: goto L_08968AA8;
    case 176u: goto L_08968AC0;
    case 177u: goto L_08968AC4;
    case 178u: goto L_08968ACC;
    case 179u: goto L_08968AD8;
    case 180u: goto L_08968AE0;
    case 181u: goto L_08968AF4;
    case 182u: goto L_08968B00;
    case 183u: goto L_08968B08;
    case 184u: goto L_08968B10;
    case 185u: goto L_08968B18;
    case 186u: goto L_08968B48;
    case 187u: goto L_08968B54;
    case 188u: goto L_08968B68;
    case 189u: goto L_08968B94;
    case 190u: goto L_08968BC8;
    case 191u: goto L_08968BD8;
    case 192u: goto L_08968BE4;
    case 193u: goto L_08968BF0;
    case 194u: goto L_08968C08;
    case 195u: goto L_08968C18;
    case 196u: goto L_08968C20;
    case 197u: goto L_08968C44;
    case 198u: goto L_08968C58;
    case 199u: goto L_08968C68;
    case 200u: goto L_08968C70;
    case 201u: goto L_08968C80;
    case 202u: goto L_08968CAC;
    case 203u: goto L_08968CB4;
    case 204u: goto L_08968CBC;
    case 205u: goto L_08968CC8;
    case 206u: goto L_08968CD0;
    case 207u: goto L_08968CD8;
    case 208u: goto L_08968CEC;
    case 209u: goto L_08968D04;
    case 210u: goto L_08968D10;
    case 211u: goto L_08968D20;
    case 212u: goto L_08968D30;
    case 213u: goto L_08968D34;
    case 214u: goto L_08968D40;
    case 215u: goto L_08968D4C;
    case 216u: goto L_08968D68;
    case 217u: goto L_08968D8C;
    case 218u: goto L_08968D98;
    case 219u: goto L_08968DA4;
    case 220u: goto L_08968DB0;
    case 221u: goto L_08968DBC;
    case 222u: goto L_08968DC4;
    case 223u: goto L_08968DD0;
    case 224u: goto L_08968DDC;
    case 225u: goto L_08968DE4;
    case 226u: goto L_08968DEC;
    case 227u: goto L_08968DF8;
    case 228u: goto L_08968E10;
    case 229u: goto L_08968E14;
    case 230u: goto L_08968E1C;
    case 231u: goto L_08968E38;
    case 232u: goto L_08968E50;
    case 233u: goto L_08968E58;
    case 234u: goto L_08968E70;
    case 235u: goto L_08968E7C;
    case 236u: goto L_08968E84;
    case 237u: goto L_08968E8C;
    case 238u: goto L_08968EA8;
    case 239u: goto L_08968EC0;
    case 240u: goto L_08968EC8;
    case 241u: goto L_08968ED0;
    case 242u: goto L_08968EDC;
    case 243u: goto L_08968EF0;
    case 244u: goto L_08968F0C;
    case 245u: goto L_08968F18;
    case 246u: goto L_08968F34;
    case 247u: goto L_08968F40;
    case 248u: goto L_08968F58;
    case 249u: goto L_08968F70;
    case 250u: goto L_08968F7C;
    case 251u: goto L_08968F88;
    case 252u: goto L_08968F94;
    case 253u: goto L_08968F9C;
    case 254u: goto L_08968FB8;
    case 255u: goto L_08968FC4;
    case 256u: goto L_08968FE0;
    case 257u: goto L_08968FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08968004:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_0896800C;
      }
      goto L_0896800C;
    }
L_0896800C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968020:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-5148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896805C;
      }
      goto L_08968038;
    }
L_08968038:
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[6]);
        goto L_0896806C;
    }
    goto L_08968054;
L_08968054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089680A8;
      }
      goto L_0896805C;
    }
L_0896805C:
    aot_gpr[5] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(-5148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089680C8;
      }
      goto L_0896806C;
    }
L_0896806C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08968088u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29156));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 92u, 0x089AAC34u>(ctx, &aot_mem) && ctx.pc == 0x08968088u) goto L_08968088;
    return;
L_08968088:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08968098u);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08968098u) goto L_08968098;
    return;
L_08968098:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089680A8;
L_089680A8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089680B8;
      }
      goto L_089680B0;
    }
L_089680B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089680B8;
L_089680B8:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089680C8;
      }
      goto L_089680C0;
    }
L_089680C0:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    goto L_089680C8;
L_089680C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089680D4:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10240));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[5] = (0u | 14000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x08968134u);
    aot_gpr[5] = (0u | 0u);
    goto L_089680D4;
L_08968134:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896814Cu);
    aot_gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896814Cu) goto L_0896814C;
    return;
L_0896814C:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08968158u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = 0x08A5ACA4u;
    return;
L_08968158:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(45));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08968168u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08968168u) goto L_08968168;
    return;
L_08968168:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089681A4;
      }
      goto L_08968180;
    }
L_08968180:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896818Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 100u, 0x089AADB4u>(ctx, &aot_mem) && ctx.pc == 0x0896818Cu) goto L_0896818C;
    return;
L_0896818C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896819Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x0896819Cu) goto L_0896819C;
    return;
L_0896819C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089681A4;
L_089681A4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089681B4;
      }
      goto L_089681AC;
    }
L_089681AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089681B4;
L_089681B4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089681C4;
      }
      goto L_089681BC;
    }
L_089681BC:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089681C4;
L_089681C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089681E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    aot_gpr[31] = (0x08968210u);
    aot_gpr[5] = (0u | 0u);
    goto L_089680D4;
L_08968210:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08968228u);
    aot_gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08968228u) goto L_08968228;
    return;
L_08968228:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x08968234u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 132u, 0x0896292Cu>(ctx, &aot_mem) && ctx.pc == 0x08968234u) goto L_08968234;
    return;
L_08968234:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896827C;
      }
      goto L_08968250;
    }
L_08968250:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08968264u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28944));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 87u, 0x089AB7E0u>(ctx, &aot_mem) && ctx.pc == 0x08968264u) goto L_08968264;
    return;
L_08968264:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x08968274u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08968274u) goto L_08968274;
    return;
L_08968274:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896827C;
L_0896827C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_0896829C;
      }
      goto L_08968284;
    }
L_08968284:
    aot_gpr[31] = (0x0896828Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x0896828Cu) goto L_0896828C;
    return;
L_0896828C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896829C;
      }
      goto L_08968294;
    }
L_08968294:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0896829C;
L_0896829C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089682C0;
      }
      goto L_089682A8;
    }
L_089682A8:
    aot_gpr[31] = (0x089682B0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x089682B0u) goto L_089682B0;
    return;
L_089682B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089682C0;
      }
      goto L_089682B8;
    }
L_089682B8:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089682C0;
L_089682C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089682D8;
      }
      goto L_089682CC;
    }
L_089682CC:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089682D8;
L_089682D8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089682E8;
      }
      goto L_089682E0;
    }
L_089682E0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089682E8;
L_089682E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x0896833Cu);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(10240));
    goto L_089680D4;
L_0896833C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08968354u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08968354u) goto L_08968354;
    return;
L_08968354:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896839C;
      }
      goto L_0896836C;
    }
L_0896836C:
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08968384u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28732));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 102u, 0x089AADF8u>(ctx, &aot_mem) && ctx.pc == 0x08968384u) goto L_08968384;
    return;
L_08968384:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x08968394u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08968394u) goto L_08968394;
    return;
L_08968394:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896839C;
L_0896839C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089683BC;
      }
      goto L_089683A4;
    }
L_089683A4:
    aot_gpr[31] = (0x089683ACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x089683ACu) goto L_089683AC;
    return;
L_089683AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089683BC;
      }
      goto L_089683B4;
    }
L_089683B4:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089683BC;
L_089683BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089683D4;
      }
      goto L_089683C8;
    }
L_089683C8:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089683D4;
L_089683D4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089683E4;
      }
      goto L_089683DC;
    }
L_089683DC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089683E4;
L_089683E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-24824));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08968438u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 26u, 0x08967154u>(ctx, &aot_mem) && ctx.pc == 0x08968438u) goto L_08968438;
    return;
L_08968438:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08968470;
      }
      goto L_08968444;
    }
L_08968444:
    aot_gpr[31] = (0x0896844Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 20u, 0x08967120u>(ctx, &aot_mem) && ctx.pc == 0x0896844Cu) goto L_0896844C;
    return;
L_0896844C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08968478;
      }
      goto L_0896845C;
    }
L_0896845C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089684D8;
      }
      goto L_08968468;
    }
L_08968468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968488;
      }
      goto L_08968470;
    }
L_08968470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089684D8;
      }
      goto L_08968478;
    }
L_08968478:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089684D8;
      }
      goto L_08968480;
    }
L_08968480:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_089684D8;
      }
      goto L_08968488;
    }
L_08968488:
    aot_gpr[31] = (0x08968490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x08968490u) goto L_08968490;
    return;
L_08968490:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089684C8;
      }
      goto L_0896849C;
    }
L_0896849C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089684BCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089684BCu) goto L_089684BC;
    return;
L_089684BC:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_089684D0;
      }
      goto L_089684C8;
    }
L_089684C8:
    aot_gpr[4] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089684D0;
L_089684D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089684D8;
      }
      goto L_089684D8;
    }
L_089684D8:
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
L_089684F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x08968518u);
    aot_gpr[11] = (aot_gpr[6] + static_cast<std::uint32_t>(10240));
    goto L_089680D4;
L_08968518:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[10]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[6]);
      if (branch_taken) {
          goto L_08968574;
      }
      goto L_08968530;
    }
L_08968530:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[9]);
    aot_gpr[5] = (2199u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08968550u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28904));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 20u, 0x089AB134u>(ctx, &aot_mem) && ctx.pc == 0x08968550u) goto L_08968550;
    return;
L_08968550:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08968560u);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08968560u) goto L_08968560;
    return;
L_08968560:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08968574;
L_08968574:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896859C;
      }
      goto L_0896857C;
    }
L_0896857C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08968590u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x08968590u) goto L_08968590;
    return;
L_08968590:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0896859C;
L_0896859C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089685B0;
      }
      goto L_089685A4;
    }
L_089685A4:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_089685B0;
L_089685B0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089685C0;
      }
      goto L_089685B8;
    }
L_089685B8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_089685C0;
L_089685C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089685CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089685E0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x089685E0u) goto L_089685E0;
    return;
L_089685E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896863C;
      }
      goto L_089685EC;
    }
L_089685EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08968604u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08968604u) goto L_08968604;
    return;
L_08968604:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0896862C;
      }
      goto L_08968614;
    }
L_08968614:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896863C;
      }
      goto L_08968620;
    }
L_08968620:
    aot_gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896863C;
      }
      goto L_0896862C;
    }
L_0896862C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896863C;
      }
      goto L_08968634;
    }
L_08968634:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_0896863C;
      }
      goto L_0896863C;
    }
L_0896863C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896864C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x08968678u);
    aot_gpr[5] = (0u | 0u);
    goto L_089680D4;
L_08968678:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08968690u);
    aot_gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08968690u) goto L_08968690;
    return;
L_08968690:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17796));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(38));
    aot_gpr[31] = (0x089686B0u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089686B0u) goto L_089686B0;
    return;
L_089686B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2199u << 16u);
      if (branch_taken) {
          goto L_089686E4;
      }
      goto L_089686BC;
    }
L_089686BC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089686CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28864));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 113u, 0x089ABA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089686CCu) goto L_089686CC;
    return;
L_089686CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x089686DCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x089686DCu) goto L_089686DC;
    return;
L_089686DC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089686E4;
L_089686E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089686F8;
      }
      goto L_089686EC;
    }
L_089686EC:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089686F8;
L_089686F8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968708;
      }
      goto L_08968700;
    }
L_08968700:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_08968708;
L_08968708:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896874Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 156u, 0x0896E954u>(ctx, &aot_mem) && ctx.pc == 0x0896874Cu) goto L_0896874C;
    return;
L_0896874C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968764;
      }
      goto L_08968758;
    }
L_08968758:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08968764u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 141u, 0x0896E85Cu>(ctx, &aot_mem) && ctx.pc == 0x08968764u) goto L_08968764;
    return;
L_08968764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968778;
      }
      goto L_08968770;
    }
L_08968770:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_08968778;
L_08968778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896878C;
      }
      goto L_08968784;
    }
L_08968784:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0896878C;
L_0896878C:
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
L_089687A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x089687C0u);
    aot_gpr[5] = (0u | 0u);
    goto L_089680D4;
L_089687C0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968814;
      }
      goto L_089687D4;
    }
L_089687D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[9]);
    aot_gpr[5] = (2199u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089687F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28772));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 96u, 0x089AAD58u>(ctx, &aot_mem) && ctx.pc == 0x089687F4u) goto L_089687F4;
    return;
L_089687F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08968804u);
    aot_gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08968804u) goto L_08968804;
    return;
L_08968804:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08968814;
L_08968814:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968824;
      }
      goto L_0896881C;
    }
L_0896881C:
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08968824;
L_08968824:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968834;
      }
      goto L_0896882C;
    }
L_0896882C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_08968834;
L_08968834:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-24824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08968864u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 26u, 0x08967154u>(ctx, &aot_mem) && ctx.pc == 0x08968864u) goto L_08968864;
    return;
L_08968864:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968888;
      }
      goto L_0896886C;
    }
L_0896886C:
    aot_gpr[31] = (0x08968874u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 20u, 0x08967120u>(ctx, &aot_mem) && ctx.pc == 0x08968874u) goto L_08968874;
    return;
L_08968874:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08968890;
      }
      goto L_08968880;
    }
L_08968880:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_08968890;
      }
      goto L_08968888;
    }
L_08968888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968890;
      }
      goto L_08968890;
    }
L_08968890:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089688A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_089688E8;
      }
      goto L_089688D0;
    }
L_089688D0:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[6]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-21720)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089688E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_089688F0;
    }
L_089688F0:
    aot_gpr[31] = (0x089688F8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 244u, 0x08967F94u>(ctx, &aot_mem) && ctx.pc == 0x089688F8u) goto L_089688F8;
    return;
L_089688F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_08968900;
    }
L_08968900:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968914u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08968020;
L_08968914:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_0896891C;
    }
L_0896891C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968930u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08968104;
L_08968930:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_08968938;
    }
L_08968938:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0896894Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089681E4;
L_0896894C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_08968954;
    }
L_08968954:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968968u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08968304;
L_08968968:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_08968970;
    }
L_08968970:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968984u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08968404;
L_08968984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_0896898C;
    }
L_0896898C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089689A0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089684F4;
L_089689A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_089689A8;
    }
L_089689A8:
    aot_gpr[31] = (0x089689B0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_089685CC;
L_089689B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_089689B8;
    }
L_089689B8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089689CCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0896864C;
L_089689CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_089689D4;
    }
L_089689D4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089689E8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08968724;
L_089689E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_089689F0;
    }
L_089689F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_089689F8;
    }
L_089689F8:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_08968A08;
    }
L_08968A08:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968A1Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089687A4;
L_08968A1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968A30;
      }
      goto L_08968A24;
    }
L_08968A24:
    aot_gpr[31] = (0x08968A2Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08968840;
L_08968A2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08968A30;
L_08968A30:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968A38;
      }
      goto L_08968A38;
    }
L_08968A38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968A48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-5148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08968A78;
      }
      goto L_08968A70;
    }
L_08968A70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968AA8;
      }
      goto L_08968A78;
    }
L_08968A78:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968A98;
      }
      goto L_08968A80;
    }
L_08968A80:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08968A98u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 7u, 0x0896705Cu>(ctx, &aot_mem) && ctx.pc == 0x08968A98u) goto L_08968A98;
    return;
L_08968A98:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968AC4;
      }
      goto L_08968AA8;
    }
L_08968AA8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x08968AC0u);
    aot_gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08968AC0u) goto L_08968AC0;
    return;
L_08968AC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08968AC4;
L_08968AC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968AD8;
      }
      goto L_08968ACC;
    }
L_08968ACC:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08968AD8;
L_08968AD8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968AE0;
      }
      goto L_08968AE0;
    }
L_08968AE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968AF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968B08;
      }
      goto L_08968B00;
    }
L_08968B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968B10;
      }
      goto L_08968B08;
    }
L_08968B08:
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    goto L_08968B10;
L_08968B10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08968B48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29156));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 92u, 0x089AAC34u>(ctx, &aot_mem) && ctx.pc == 0x08968B48u) goto L_08968B48;
    return;
L_08968B48:
    aot_gpr[4] = (0u | 2u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (0u | 0u);
        goto L_08968B54;
    }
    goto L_08968B54;
L_08968B54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968B68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10240));
      if (branch_taken) {
          goto L_08968BE4;
      }
      goto L_08968B94;
    }
L_08968B94:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(296), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(300), aot_gpr[5]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-24824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08968BC8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 31u, 0x0896719Cu>(ctx, &aot_mem) && ctx.pc == 0x08968BC8u) goto L_08968BC8;
    return;
L_08968BC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08968BD8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 7u, 0x0896705Cu>(ctx, &aot_mem) && ctx.pc == 0x08968BD8u) goto L_08968BD8;
    return;
L_08968BD8:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_08968BF0;
      }
      goto L_08968BE4;
    }
L_08968BE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_08968BF0;
L_08968BF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968C08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 16u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (0u | 13u);
        goto L_08968C18;
    }
    goto L_08968C18;
L_08968C18:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968C20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10240));
      if (branch_taken) {
          goto L_08968C68;
      }
      goto L_08968C44;
    }
L_08968C44:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968C58u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08968C58u) goto L_08968C58;
    return;
L_08968C58:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_08968C70;
      }
      goto L_08968C68;
    }
L_08968C68:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_08968C70;
L_08968C70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968C80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08968CBC;
      }
      goto L_08968CAC;
    }
L_08968CAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08968D4C;
      }
      goto L_08968CB4;
    }
L_08968CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968D4C;
      }
      goto L_08968CBC;
    }
L_08968CBC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08968CD8;
      }
      goto L_08968CC8;
    }
L_08968CC8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968D4C;
      }
      goto L_08968CD0;
    }
L_08968CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968D4C;
      }
      goto L_08968CD8;
    }
L_08968CD8:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08968CECu);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(10240));
    goto L_089680D4;
L_08968CEC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(38));
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x08968D04u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08968D04u) goto L_08968D04;
    return;
L_08968D04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2199u << 16u);
      if (branch_taken) {
          goto L_08968D34;
      }
      goto L_08968D10;
    }
L_08968D10:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08968D20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-28804));
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 110u, 0x089AAEC0u>(ctx, &aot_mem) && ctx.pc == 0x08968D20u) goto L_08968D20;
    return;
L_08968D20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x08968D30u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08968D30u) goto L_08968D30;
    return;
L_08968D30:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_08968D34;
L_08968D34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968D4C;
      }
      goto L_08968D40;
    }
L_08968D40:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08968D4C;
      }
      goto L_08968D4C;
    }
L_08968D4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968D68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08968D8Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 7u, 0x0896705Cu>(ctx, &aot_mem) && ctx.pc == 0x08968D8Cu) goto L_08968D8C;
    return;
L_08968D8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968D98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968DB0;
      }
      goto L_08968DA4;
    }
L_08968DA4:
    aot_gpr[5] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
      if (branch_taken) {
          goto L_08968DBC;
      }
      goto L_08968DB0;
    }
L_08968DB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[5] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    goto L_08968DBC;
L_08968DBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968DC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968DDC;
      }
      goto L_08968DD0;
    }
L_08968DD0:
    aot_gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
      if (branch_taken) {
          goto L_08968DE4;
      }
      goto L_08968DDC;
    }
L_08968DDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    goto L_08968DE4;
L_08968DE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968DEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968E10;
      }
      goto L_08968DF8;
    }
L_08968DF8:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2217u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-5148), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
      if (branch_taken) {
          goto L_08968E14;
      }
      goto L_08968E10;
    }
L_08968E10:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    goto L_08968E14;
L_08968E14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968E1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08968E58;
      }
      goto L_08968E38;
    }
L_08968E38:
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968E50u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    goto L_08968DEC;
L_08968E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968E70;
      }
      goto L_08968E58;
    }
L_08968E58:
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968E70u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    goto L_08968DC4;
L_08968E70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968E7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968E84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968E8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08968EA8u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08968EA8u) goto L_08968EA8;
    return;
L_08968EA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08968EC0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08968EC0u) goto L_08968EC0;
    return;
L_08968EC0:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08968EDC;
      }
      goto L_08968EC8;
    }
L_08968EC8:
    aot_gpr[31] = (0x08968ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 159u, 0x0896A970u>(ctx, &aot_mem) && ctx.pc == 0x08968ED0u) goto L_08968ED0;
    return;
L_08968ED0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08968EDCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0358_entry, 358u, 141u, 0x0896A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08968EDCu) goto L_08968EDC;
    return;
L_08968EDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968EF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08968F0Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08968D98;
L_08968F0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08968F34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08968C20;
L_08968F34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-24880));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F70;
      }
      goto L_08968F58;
    }
L_08968F58:
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08968F70u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    goto L_08968C08;
L_08968F70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F94;
      }
      goto L_08968F88;
    }
L_08968F88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08968F94;
L_08968F94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08968FB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08968D68;
L_08968FB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968FC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08968FE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08968B68;
L_08968FE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968FEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08969000u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    (void)rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 234u, 0x08967EC8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0356(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0356_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_356(Runtime &runtime) {
    runtime.register_generated_unit(356u, 0x08968000u, 4096u, &recomp_unit_0356, &recomp_unit_0356_entry);
    runtime.register_function(0x08968004u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896800Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968020u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968038u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968054u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896805Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896806Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968088u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968098u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089680A8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089680B0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089680B8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089680C0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089680C8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089680D4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968104u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968134u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896814Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968158u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968168u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968180u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896818Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896819Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089681A4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089681ACu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089681B4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089681BCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089681C4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089681E4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968210u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968228u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968234u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968250u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968264u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968274u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896827Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968284u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896828Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968294u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896829Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682A8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682B0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682B8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682C0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682CCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682D8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682E0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089682E8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968304u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896833Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968354u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896836Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968384u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968394u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896839Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683A4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683ACu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683B4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683BCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683C8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683D4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683DCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089683E4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968404u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968438u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968444u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896844Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896845Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968468u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968470u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968478u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968480u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968488u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968490u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896849Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089684BCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089684C8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089684D0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089684D8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089684F4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968518u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968530u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968550u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968560u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968574u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896857Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968590u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896859Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685A4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685B0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685B8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685C0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685CCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685E0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089685ECu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968604u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968614u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968620u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896862Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968634u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896863Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896864Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968678u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968690u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686B0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686BCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686CCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686DCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686E4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686ECu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089686F8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968700u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968708u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968724u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896874Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968758u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968764u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968770u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968778u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968784u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896878Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089687A4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089687C0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089687D4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089687F4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968804u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968814u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896881Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968824u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896882Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968834u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968840u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968864u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896886Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968874u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968880u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968888u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968890u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089688A4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089688D0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089688E8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089688F0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089688F8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968900u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968914u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896891Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968930u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968938u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896894Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968954u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968968u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968970u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968984u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x0896898Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689A0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689A8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689B0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689B8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689CCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689D4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689E8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689F0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x089689F8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A08u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A1Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A24u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A2Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A30u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A38u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A48u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A70u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A78u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A80u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968A98u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968AA8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968AC0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968AC4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968ACCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968AD8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968AE0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968AF4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B00u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B08u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B10u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B18u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B48u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B54u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B68u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968B94u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968BC8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968BD8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968BE4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968BF0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C08u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C18u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C20u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C44u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C58u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C68u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C70u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968C80u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CACu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CB4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CBCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CC8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CD0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CD8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968CECu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D04u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D10u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D20u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D30u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D34u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D40u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D4Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D68u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D8Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968D98u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DA4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DB0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DBCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DC4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DD0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DDCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DE4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DECu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968DF8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E10u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E14u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E1Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E38u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E50u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E58u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E70u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E7Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E84u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968E8Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968EA8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968EC0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968EC8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968ED0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968EDCu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968EF0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F0Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F18u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F34u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F40u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F58u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F70u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F7Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F88u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F94u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968F9Cu, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968FB8u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968FC4u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968FE0u, &recomp_unit_0356, "recomp_unit_0356");
    runtime.register_function(0x08968FECu, &recomp_unit_0356, "recomp_unit_0356");
}
} // namespace psprecomp
