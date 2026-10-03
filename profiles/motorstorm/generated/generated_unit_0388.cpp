#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0388[1020] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    12, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0,
    0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 45, 46, 0,
    47, 0, 0, 0, 48, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0,
    72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105,
    0, 106, 107, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0,
    0, 115, 0, 0, 0, 116, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 123, 0, 0, 124, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0,
    129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0,
    139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 147, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155,
    0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0,
    191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216,
};
void recomp_unit_0388_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08988000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0388[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08988000;
    case 2u: goto L_08988018;
    case 3u: goto L_0898803C;
    case 4u: goto L_08988050;
    case 5u: goto L_08988110;
    case 6u: goto L_08988118;
    case 7u: goto L_08988124;
    case 8u: goto L_08988134;
    case 9u: goto L_0898813C;
    case 10u: goto L_08988140;
    case 11u: goto L_08988170;
    case 12u: goto L_08988180;
    case 13u: goto L_0898818C;
    case 14u: goto L_08988194;
    case 15u: goto L_089881A4;
    case 16u: goto L_089881B4;
    case 17u: goto L_089881BC;
    case 18u: goto L_089881C8;
    case 19u: goto L_089881D0;
    case 20u: goto L_08988204;
    case 21u: goto L_08988224;
    case 22u: goto L_08988230;
    case 23u: goto L_0898823C;
    case 24u: goto L_08988270;
    case 25u: goto L_08988278;
    case 26u: goto L_08988284;
    case 27u: goto L_08988290;
    case 28u: goto L_089882A8;
    case 29u: goto L_089882B8;
    case 30u: goto L_089882CC;
    case 31u: goto L_089882E0;
    case 32u: goto L_089882F4;
    case 33u: goto L_08988308;
    case 34u: goto L_0898831C;
    case 35u: goto L_08988330;
    case 36u: goto L_08988344;
    case 37u: goto L_08988358;
    case 38u: goto L_0898836C;
    case 39u: goto L_089883A0;
    case 40u: goto L_089883B0;
    case 41u: goto L_089883B8;
    case 42u: goto L_089883DC;
    case 43u: goto L_089883E8;
    case 44u: goto L_089883F0;
    case 45u: goto L_089883F4;
    case 46u: goto L_089883F8;
    case 47u: goto L_08988400;
    case 48u: goto L_08988410;
    case 49u: goto L_08988414;
    case 50u: goto L_0898841C;
    case 51u: goto L_0898843C;
    case 52u: goto L_08988444;
    case 53u: goto L_08988448;
    case 54u: goto L_08988464;
    case 55u: goto L_0898846C;
    case 56u: goto L_08988474;
    case 57u: goto L_0898847C;
    case 58u: goto L_08988484;
    case 59u: goto L_089884D4;
    case 60u: goto L_089884DC;
    case 61u: goto L_089884E4;
    case 62u: goto L_089884EC;
    case 63u: goto L_08988504;
    case 64u: goto L_08988520;
    case 65u: goto L_08988528;
    case 66u: goto L_08988538;
    case 67u: goto L_08988540;
    case 68u: goto L_08988550;
    case 69u: goto L_08988560;
    case 70u: goto L_08988570;
    case 71u: goto L_08988578;
    case 72u: goto L_08988580;
    case 73u: goto L_08988590;
    case 74u: goto L_089885A4;
    case 75u: goto L_089885AC;
    case 76u: goto L_089885B4;
    case 77u: goto L_089885C8;
    case 78u: goto L_08988604;
    case 79u: goto L_08988610;
    case 80u: goto L_08988618;
    case 81u: goto L_08988620;
    case 82u: goto L_08988630;
    case 83u: goto L_0898863C;
    case 84u: goto L_08988648;
    case 85u: goto L_08988650;
    case 86u: goto L_08988654;
    case 87u: goto L_08988658;
    case 88u: goto L_0898867C;
    case 89u: goto L_08988688;
    case 90u: goto L_08988698;
    case 91u: goto L_089886A4;
    case 92u: goto L_089886A8;
    case 93u: goto L_089886B0;
    case 94u: goto L_089886D4;
    case 95u: goto L_089886DC;
    case 96u: goto L_089886FC;
    case 97u: goto L_08988704;
    case 98u: goto L_08988714;
    case 99u: goto L_08988738;
    case 100u: goto L_08988740;
    case 101u: goto L_08988750;
    case 102u: goto L_08988758;
    case 103u: goto L_08988764;
    case 104u: goto L_08988770;
    case 105u: goto L_0898877C;
    case 106u: goto L_08988784;
    case 107u: goto L_08988788;
    case 108u: goto L_08988798;
    case 109u: goto L_089887A0;
    case 110u: goto L_089887AC;
    case 111u: goto L_089887B4;
    case 112u: goto L_089887E0;
    case 113u: goto L_089887E8;
    case 114u: goto L_089887F8;
    case 115u: goto L_08988804;
    case 116u: goto L_08988814;
    case 117u: goto L_08988818;
    case 118u: goto L_08988824;
    case 119u: goto L_0898883C;
    case 120u: goto L_08988848;
    case 121u: goto L_08988854;
    case 122u: goto L_08988868;
    case 123u: goto L_0898886C;
    case 124u: goto L_08988878;
    case 125u: goto L_08988888;
    case 126u: goto L_089888D0;
    case 127u: goto L_089888F0;
    case 128u: goto L_089888F8;
    case 129u: goto L_08988900;
    case 130u: goto L_0898890C;
    case 131u: goto L_08988914;
    case 132u: goto L_08988928;
    case 133u: goto L_08988944;
    case 134u: goto L_0898894C;
    case 135u: goto L_08988958;
    case 136u: goto L_08988960;
    case 137u: goto L_0898896C;
    case 138u: goto L_08988974;
    case 139u: goto L_08988980;
    case 140u: goto L_0898898C;
    case 141u: goto L_08988998;
    case 142u: goto L_089889A0;
    case 143u: goto L_089889CC;
    case 144u: goto L_089889D0;
    case 145u: goto L_089889D8;
    case 146u: goto L_089889F4;
    case 147u: goto L_089889F8;
    case 148u: goto L_08988A04;
    case 149u: goto L_08988A28;
    case 150u: goto L_08988A2C;
    case 151u: goto L_08988A44;
    case 152u: goto L_08988A4C;
    case 153u: goto L_08988A60;
    case 154u: goto L_08988A74;
    case 155u: goto L_08988A7C;
    case 156u: goto L_08988A84;
    case 157u: goto L_08988A8C;
    case 158u: goto L_08988A94;
    case 159u: goto L_08988A9C;
    case 160u: goto L_08988AA4;
    case 161u: goto L_08988AAC;
    case 162u: goto L_08988AB4;
    case 163u: goto L_08988AD8;
    case 164u: goto L_08988AE0;
    case 165u: goto L_08988AFC;
    case 166u: goto L_08988B08;
    case 167u: goto L_08988B48;
    case 168u: goto L_08988B50;
    case 169u: goto L_08988B64;
    case 170u: goto L_08988B6C;
    case 171u: goto L_08988BA4;
    case 172u: goto L_08988BC0;
    case 173u: goto L_08988BC8;
    case 174u: goto L_08988BDC;
    case 175u: goto L_08988C08;
    case 176u: goto L_08988C1C;
    case 177u: goto L_08988C44;
    case 178u: goto L_08988C4C;
    case 179u: goto L_08988C78;
    case 180u: goto L_08988C80;
    case 181u: goto L_08988C94;
    case 182u: goto L_08988CDC;
    case 183u: goto L_08988CF0;
    case 184u: goto L_08988CF8;
    case 185u: goto L_08988CFC;
    case 186u: goto L_08988D24;
    case 187u: goto L_08988D30;
    case 188u: goto L_08988D64;
    case 189u: goto L_08988D70;
    case 190u: goto L_08988D78;
    case 191u: goto L_08988D80;
    case 192u: goto L_08988D88;
    case 193u: goto L_08988D94;
    case 194u: goto L_08988DA0;
    case 195u: goto L_08988DB0;
    case 196u: goto L_08988DC4;
    case 197u: goto L_08988DD0;
    case 198u: goto L_08988DD8;
    case 199u: goto L_08988DEC;
    case 200u: goto L_08988DFC;
    case 201u: goto L_08988E28;
    case 202u: goto L_08988E2C;
    case 203u: goto L_08988E38;
    case 204u: goto L_08988E48;
    case 205u: goto L_08988E54;
    case 206u: goto L_08988E60;
    case 207u: goto L_08988E6C;
    case 208u: goto L_08988E78;
    case 209u: goto L_08988E84;
    case 210u: goto L_08988F50;
    case 211u: goto L_08988F70;
    case 212u: goto L_08988F74;
    case 213u: goto L_08988F98;
    case 214u: goto L_08988FB8;
    case 215u: goto L_08988FC8;
    case 216u: goto L_08988FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08988000:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988018:
    aot_gpr[2] = (aot_gpr[11] ^ 1u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[23] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[3] = (aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    aot_gpr[31] = (0x0898803Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898803Cu) goto L_0898803C;
    return;
L_0898803C:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
      if (branch_taken) {
          goto L_08988194;
      }
      goto L_08988050;
    }
L_08988050:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2796)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-20340));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-19800));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-20016));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-19416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18652));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-20084));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11692));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-9772));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-19192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988110u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1100));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988110u) goto L_08988110;
    return;
L_08988110:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08988170;
      }
      goto L_08988118;
    }
L_08988118:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1032)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 222u, 0x08987FE8u>(ctx, &aot_mem); return;
    }
    goto L_08988124;
L_08988124:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988134u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988134u) goto L_08988134;
    return;
L_08988134:
    aot_gpr[2] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 222u, 0x08987FE8u>(ctx, &aot_mem); return;
L_0898813C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_08988140;
L_08988140:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988170:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988180u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988180u) goto L_08988180;
    return;
L_08988180:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1100), 0u);
    aot_gpr[31] = (0x0898818Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898818Cu) goto L_0898818C;
    return;
L_0898818C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 223u, 0x08987FECu>(ctx, &aot_mem); return;
L_08988194:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_08988050;
L_089881A4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089881BC;
      }
      goto L_089881B4;
    }
L_089881B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089881BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089881B4;
      }
      goto L_089881C8;
    }
L_089881C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1076)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089881D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
      if (branch_taken) {
          goto L_08988224;
      }
      goto L_08988204;
    }
L_08988204:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (0x08988230u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x08988230u) goto L_08988230;
    return;
L_08988230:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (0x0898823Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    goto L_089881A4;
L_0898823C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 70u, 0x08987560u>(ctx, &aot_mem); return;
L_08988270:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_08988278;
    }
L_08988278:
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_08988290;
      }
      goto L_08988284;
    }
L_08988284:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988290:
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18744));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089882A8:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089882B8:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089882CC:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089882E0:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089882F4:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988308:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898831C:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988330:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988344:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988358:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898836C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08988444;
      }
      goto L_089883A0;
    }
L_089883A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1072)));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[2] == aot_gpr[18]) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08988448;
    }
    goto L_089883B0;
L_089883B0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_08988464;
      }
      goto L_089883B8;
    }
L_089883B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1028), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[17] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(8));
        goto L_089883F4;
    }
    goto L_089883DC;
L_089883DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089883E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089883E8u) goto L_089883E8;
    return;
L_089883E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_08988528;
      }
      goto L_089883F0;
    }
L_089883F0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(8));
    goto L_089883F4;
L_089883F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1080)));
    goto L_089883F8;
L_089883F8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
        goto L_08988414;
    }
    goto L_08988400;
L_08988400:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[3] & 1u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1176)));
        goto L_089884E4;
    }
    goto L_08988410;
L_08988410:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
    goto L_08988414;
L_08988414:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08988444;
      }
      goto L_0898841C;
    }
L_0898841C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1072)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0898843Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898843Cu) goto L_0898843C;
    return;
L_0898843C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1188), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1184), 0u);
    goto L_08988444;
L_08988444:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08988448;
L_08988448:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988464:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08988448;
      }
      goto L_0898846C;
    }
L_0898846C:
    aot_gpr[31] = (0x08988474u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 69u, 0x08986470u>(ctx, &aot_mem) && ctx.pc == 0x08988474u) goto L_08988474;
    return;
L_08988474:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08988444;
      }
      goto L_0898847C;
    }
L_0898847C:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08988444;
      }
      goto L_08988484;
    }
L_08988484:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1080), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1028), aot_gpr[17]);
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1072), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1024), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089884D4u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089884D4u) goto L_089884D4;
    return;
L_089884D4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1080)));
        goto L_089883F8;
    }
    goto L_089884DC;
L_089884DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08988448;
L_089884E4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
        goto L_08988414;
    }
    goto L_089884EC;
L_089884EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1216)));
    aot_gpr[3] = (aot_gpr[3] | 1u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1176), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1068), aot_gpr[3]);
      if (branch_taken) {
          goto L_08988410;
      }
      goto L_08988504;
    }
L_08988504:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1220)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08988520u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988520u) goto L_08988520;
    return;
L_08988520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1184)));
    goto L_08988414;
L_08988528:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988538u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988538u) goto L_08988538;
    return;
L_08988538:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1080)));
    goto L_089883F8;
L_08988540:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08988580;
      }
      goto L_08988550;
    }
L_08988550:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08988590;
      }
      goto L_08988560;
    }
L_08988560:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988570u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988570u) goto L_08988570;
    return;
L_08988570:
    aot_gpr[31] = (0x08988578u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08988578u) goto L_08988578;
    return;
L_08988578:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089885B4;
      }
      goto L_08988580;
    }
L_08988580:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988590:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089885A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089885A4u) goto L_089885A4;
    return;
L_089885A4:
    aot_gpr[31] = (0x089885ACu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089885ACu) goto L_089885AC;
    return;
L_089885AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08988580;
      }
      goto L_089885B4;
    }
L_089885B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089885C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089886FC;
      }
      goto L_08988604;
    }
L_08988604:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089886FC;
      }
      goto L_08988610;
    }
L_08988610:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089886FC;
      }
      goto L_08988618;
    }
L_08988618:
    if (aot_gpr[5] == 0u) {
    aot_gpr[16] = (2217u << 16u);
        goto L_08988764;
    }
    goto L_08988620;
L_08988620:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (2217u << 16u);
      if (branch_taken) {
          goto L_089887E8;
      }
      goto L_08988630;
    }
L_08988630:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
        goto L_08988658;
    }
    goto L_0898863C;
L_0898863C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988648u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988648u) goto L_08988648;
    return;
L_08988648:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_08988960;
      }
      goto L_08988650;
    }
L_08988650:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    goto L_08988654;
L_08988654:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08988658;
L_08988658:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1028), aot_gpr[2]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(23));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1024), 0u);
      if (branch_taken) {
          goto L_089887AC;
      }
      goto L_0898867C;
    }
L_0898867C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1080)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1184)));
        goto L_089886A8;
    }
    goto L_08988688;
L_08988688:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[3] & 1u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1184)));
        goto L_089886A8;
    }
    goto L_08988698;
L_08988698:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1176)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1216)));
        goto L_08988914;
    }
    goto L_089886A4;
L_089886A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1184)));
    goto L_089886A8;
L_089886A8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089886DC;
      }
      goto L_089886B0;
    }
L_089886B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1072)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089886D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089886D4u) goto L_089886D4;
    return;
L_089886D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1188), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1184), 0u);
    goto L_089886DC;
L_089886DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089886FC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08988740;
      }
      goto L_08988704;
    }
L_08988704:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089887B4;
      }
      goto L_08988714;
    }
L_08988714:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1028), aot_gpr[2]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(23));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1024), 0u);
      if (branch_taken) {
          goto L_089886A4;
      }
      goto L_08988738;
    }
L_08988738:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(8));
    goto L_089886A4;
L_08988740:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08988750u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08988270;
L_08988750:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089886A4;
      }
      goto L_08988758;
    }
L_08988758:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089886A4;
L_08988764:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
        goto L_08988788;
    }
    goto L_08988770;
L_08988770:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898877Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898877Cu) goto L_0898877C;
    return;
L_0898877C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_0898894C;
      }
      goto L_08988784;
    }
L_08988784:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08988788;
L_08988788:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08988798u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08988270;
L_08988798:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0898867C;
      }
      goto L_089887A0;
    }
L_089887A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0898867C;
L_089887AC:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(8));
    goto L_0898867C;
L_089887B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32767));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1028), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1080), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[31] = (0x089887E0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08988540;
L_089887E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1184)));
    goto L_089886A8;
L_089887E8:
    aot_gpr[5] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089887F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 69u, 0x08986470u>(ctx, &aot_mem) && ctx.pc == 0x089887F8u) goto L_089887F8;
    return;
L_089887F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089886A4;
      }
      goto L_08988804;
    }
L_08988804:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_08988818;
      }
      goto L_08988814;
    }
L_08988814:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(252)));
    goto L_08988818;
L_08988818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1028), aot_gpr[16]);
      if (branch_taken) {
          goto L_08988974;
      }
      goto L_08988824;
    }
L_08988824:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2796)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898883Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898883Cu) goto L_0898883C;
    return;
L_0898883C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898886C;
      }
      goto L_08988848;
    }
L_08988848:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_0898898C;
      }
      goto L_08988854;
    }
L_08988854:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988868u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988868u) goto L_08988868;
    return;
L_08988868:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898886C;
L_0898886C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08988888;
      }
      goto L_08988878;
    }
L_08988878:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988888u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988888u) goto L_08988888;
    return;
L_08988888:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1080), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1024), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2812)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089888D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089888D0u) goto L_089888D0;
    return;
L_089888D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08988900;
      }
      goto L_089888F0;
    }
L_089888F0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08988900;
      }
      goto L_089888F8;
    }
L_089888F8:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_0898867C;
      }
      goto L_08988900;
    }
L_08988900:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898890Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_08988540;
L_0898890C:
    aot_gpr[18] = (0u + 0u);
    goto L_0898867C;
L_08988914:
    aot_gpr[3] = (aot_gpr[3] | 1u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1176), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1068), aot_gpr[3]);
      if (branch_taken) {
          goto L_089886A4;
      }
      goto L_08988928;
    }
L_08988928:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1220)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08988944u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988944u) goto L_08988944;
    return;
L_08988944:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1184)));
    goto L_089886A8;
L_0898894C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988958u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988958u) goto L_08988958;
    return;
L_08988958:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08988788;
L_08988960:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898896Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898896Cu) goto L_0898896C;
    return;
L_0898896C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    goto L_08988654;
L_08988974:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898886C;
      }
      goto L_08988980;
    }
L_08988980:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1032), aot_gpr[2]);
    goto L_08988868;
L_0898898C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988998u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988998u) goto L_08988998;
    return;
L_08988998:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898886C;
L_089889A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08988A44;
      }
      goto L_089889CC;
    }
L_089889CC:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    goto L_089889D0;
L_089889D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08988A2C;
      }
      goto L_089889D8;
    }
L_089889D8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[19] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18704));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089889F4:
    aot_gpr[6] = (0u + 0u);
    goto L_089889F8;
L_089889F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1192)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08988A28;
      }
      goto L_08988A04;
    }
L_08988A04:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08988A28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988A28u) goto L_08988A28;
    return;
L_08988A28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08988A2C;
L_08988A2C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988A44:
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[17] = (0u + 0u);
    goto L_08988A4C;
L_08988A4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1280)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08988A60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988A60u) goto L_08988A60;
    return;
L_08988A60:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1312)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08988A4C;
      }
      goto L_08988A74;
    }
L_08988A74:
    aot_gpr[2] = (aot_gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    goto L_089889D0;
L_08988A7C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(15));
    goto L_089889F8;
L_08988A84:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(14));
    goto L_089889F8;
L_08988A8C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(13));
    goto L_089889F8;
L_08988A94:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(12));
    goto L_089889F8;
L_08988A9C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(11));
    goto L_089889F8;
L_08988AA4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
    goto L_089889F8;
L_08988AAC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    goto L_089889F8;
L_08988AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(376));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08988B50;
      }
      goto L_08988AD8;
    }
L_08988AD8:
    aot_gpr[31] = (0x08988AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08988AE0u) goto L_08988AE0;
    return;
L_08988AE0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988B64;
      }
      goto L_08988AFC;
    }
L_08988AFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(252)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(348), aot_gpr[2]);
    goto L_08988B08;
L_08988B08:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(372), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(228));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(164), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(172), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(180), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(188), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(196), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(200), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(364), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), 0u);
    aot_gpr[31] = (0x08988B48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(368), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 97u, 0x089834D4u>(ctx, &aot_mem) && ctx.pc == 0x08988B48u) goto L_08988B48;
    return;
L_08988B48:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08988B50;
L_08988B50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988B64:
    aot_gpr[31] = (0x08988B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x08988B6Cu) goto L_08988B6C;
    return;
L_08988B6C:
    aot_gpr[4] = (4194u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 19923u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[4]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] >> 6u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[4] << 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6000));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(348), aot_gpr[2]);
    goto L_08988B08;
L_08988BA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1320));
      if (branch_taken) {
          goto L_08988C08;
      }
      goto L_08988BC0;
    }
L_08988BC0:
    aot_gpr[31] = (0x08988BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x08988BC8u) goto L_08988BC8;
    return;
L_08988BC8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08988C08;
      }
      goto L_08988BDC;
    }
L_08988BDC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1316), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4232), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1032), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1040), 0u);
    goto L_08988C08;
L_08988C08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988C1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(204));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08988C80;
      }
      goto L_08988C44;
    }
L_08988C44:
    aot_gpr[31] = (0x08988C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08988C4Cu) goto L_08988C4C;
    return;
L_08988C4C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(188), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), 0u);
    aot_gpr[31] = (0x08988C78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 97u, 0x089834D4u>(ctx, &aot_mem) && ctx.pc == 0x08988C78u) goto L_08988C78;
    return;
L_08988C78:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08988C80;
L_08988C80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988C94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08988CF8;
      }
      goto L_08988CDC;
    }
L_08988CDC:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_08988D24;
      }
      goto L_08988CF0;
    }
L_08988CF0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08988CF8;
L_08988CF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08988CFC;
L_08988CFC:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988D24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_08988D64;
      }
      goto L_08988D30;
    }
L_08988D30:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(29));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988D64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08988D78;
    }
    goto L_08988D70;
L_08988D70:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    goto L_08988CF0;
L_08988D78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08988CF0;
      }
      goto L_08988D80;
    }
L_08988D80:
    aot_gpr[31] = (0x08988D88u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08988BA4;
L_08988D88:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08988CF8;
      }
      goto L_08988D94;
    }
L_08988D94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08988CF8;
    }
    goto L_08988DA0;
L_08988DA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1172), aot_gpr[2]);
        goto L_08988DEC;
    }
    goto L_08988DB0;
L_08988DB0:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4228)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_08988DD0;
      }
      goto L_08988DC4;
    }
L_08988DC4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(31));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08988CF8;
L_08988DD0:
    aot_gpr[31] = (0x08988DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 205u, 0x08992EECu>(ctx, &aot_mem) && ctx.pc == 0x08988DD8u) goto L_08988DD8;
    return;
L_08988DD8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4228), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1172), aot_gpr[2]);
    goto L_08988DEC;
L_08988DEC:
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 24u, 0x0898915Cu>(ctx, &aot_mem); return;
      }
      goto L_08988DFC;
    }
L_08988DFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1172)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(196)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x08988E28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 218u, 0x08987F74u>(ctx, &aot_mem) && ctx.pc == 0x08988E28u) goto L_08988E28;
    return;
L_08988E28:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08988E2C;
L_08988E2C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08988CFC;
      }
      goto L_08988E38;
    }
L_08988E38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08988CFC;
      }
      goto L_08988E48;
    }
L_08988E48:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08988E54u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 69u, 0x08986470u>(ctx, &aot_mem) && ctx.pc == 0x08988E54u) goto L_08988E54;
    return;
L_08988E54:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08988CF8;
      }
      goto L_08988E60;
    }
L_08988E60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 6u, 0x08989028u>(ctx, &aot_mem); return;
      }
      goto L_08988E6C;
    }
L_08988E6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08988E84;
      }
      goto L_08988E78;
    }
L_08988E78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988E84u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988E84u) goto L_08988E84;
    return;
L_08988E84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1076), aot_gpr[21]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1084), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1088), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1092), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1184), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1188), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1192), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1196), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1200), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1204), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1208), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1212), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1216), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1220), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1232), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1236), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08988F74;
      }
      goto L_08988F50;
    }
L_08988F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(180)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1128), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1120), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1124), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08988F70u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1040));
    if (rt.invoke_chained_direct<&recomp_unit_0399_entry, 399u, 23u, 0x0899317Cu>(ctx, &aot_mem) && ctx.pc == 0x08988F70u) goto L_08988F70;
    return;
L_08988F70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08988F74;
L_08988F74:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1072), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[21];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 15u, 0x089890D8u>(ctx, &aot_mem); return;
      }
      goto L_08988F98;
    }
L_08988F98:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1100)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08988FB8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08988FB8u) goto L_08988FB8;
    return;
L_08988FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 7u, 0x08989030u>(ctx, &aot_mem); return;
      }
      goto L_08988FC8;
    }
L_08988FC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1024), aot_gpr[2]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08988FECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1028)));
    goto L_0898836C;
L_08988FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1216)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 4u, 0x0898901Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 1u, 0x08989000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0388(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0388_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_388(Runtime &runtime) {
    runtime.register_generated_unit(388u, 0x08988000u, 4096u, &recomp_unit_0388, &recomp_unit_0388_entry);
    runtime.register_function(0x08988000u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988018u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898803Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988050u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988110u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988118u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988124u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988134u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898813Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988140u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988170u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988180u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898818Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988194u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089881A4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089881B4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089881BCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089881C8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089881D0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988204u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988224u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988230u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898823Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988270u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988278u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988284u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988290u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089882A8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089882B8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089882CCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089882E0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089882F4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988308u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898831Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988330u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988344u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988358u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898836Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883A0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883B0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883B8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883DCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883E8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883F0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883F4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089883F8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988400u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988410u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988414u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898841Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898843Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988444u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988448u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988464u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898846Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988474u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898847Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988484u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089884D4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089884DCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089884E4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089884ECu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988504u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988520u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988528u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988538u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988540u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988550u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988560u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988570u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988578u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988580u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988590u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089885A4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089885ACu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089885B4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089885C8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988604u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988610u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988618u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988620u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988630u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898863Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988648u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988650u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988654u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988658u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898867Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988688u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988698u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089886A4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089886A8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089886B0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089886D4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089886DCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089886FCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988704u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988714u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988738u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988740u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988750u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988758u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988764u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988770u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898877Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988784u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988788u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988798u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089887A0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089887ACu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089887B4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089887E0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089887E8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089887F8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988804u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988814u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988818u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988824u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898883Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988848u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988854u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988868u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898886Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988878u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988888u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089888D0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089888F0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089888F8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988900u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898890Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988914u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988928u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988944u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898894Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988958u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988960u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898896Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988974u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988980u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x0898898Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988998u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089889A0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089889CCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089889D0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089889D8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089889F4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x089889F8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A04u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A28u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A2Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A44u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A4Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A60u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A74u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A7Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A84u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A8Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A94u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988A9Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988AA4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988AACu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988AB4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988AD8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988AE0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988AFCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988B08u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988B48u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988B50u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988B64u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988B6Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988BA4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988BC0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988BC8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988BDCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C08u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C1Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C44u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C4Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C78u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C80u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988C94u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988CDCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988CF0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988CF8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988CFCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D24u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D30u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D64u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D70u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D78u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D80u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D88u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988D94u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DA0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DB0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DC4u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DD0u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DD8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DECu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988DFCu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E28u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E2Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E38u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E48u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E54u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E60u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E6Cu, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E78u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988E84u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988F50u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988F70u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988F74u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988F98u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988FB8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988FC8u, &recomp_unit_0388, "recomp_unit_0388");
    runtime.register_function(0x08988FECu, &recomp_unit_0388, "recomp_unit_0388");
}
} // namespace psprecomp
