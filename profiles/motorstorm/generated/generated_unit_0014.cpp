#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0014[1020] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 28, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 68, 0, 0, 69, 0, 0, 70, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0,
    87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100,
    0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0,
    0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0,
    0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0,
    133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 193, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199,
};
void recomp_unit_0014_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08812000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0014[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08812000;
    case 2u: goto L_0881200C;
    case 3u: goto L_08812020;
    case 4u: goto L_08812024;
    case 5u: goto L_08812054;
    case 6u: goto L_08812084;
    case 7u: goto L_088120B0;
    case 8u: goto L_088120C0;
    case 9u: goto L_088120D4;
    case 10u: goto L_088120EC;
    case 11u: goto L_0881211C;
    case 12u: goto L_0881212C;
    case 13u: goto L_08812140;
    case 14u: goto L_08812158;
    case 15u: goto L_0881218C;
    case 16u: goto L_08812190;
    case 17u: goto L_088121C4;
    case 18u: goto L_088121D8;
    case 19u: goto L_088121DC;
    case 20u: goto L_08812200;
    case 21u: goto L_08812214;
    case 22u: goto L_08812228;
    case 23u: goto L_08812230;
    case 24u: goto L_08812240;
    case 25u: goto L_08812250;
    case 26u: goto L_08812268;
    case 27u: goto L_08812288;
    case 28u: goto L_08812290;
    case 29u: goto L_08812294;
    case 30u: goto L_088122A8;
    case 31u: goto L_088122B8;
    case 32u: goto L_088122CC;
    case 33u: goto L_088122E4;
    case 34u: goto L_08812308;
    case 35u: goto L_08812318;
    case 36u: goto L_08812328;
    case 37u: goto L_08812338;
    case 38u: goto L_08812358;
    case 39u: goto L_08812368;
    case 40u: goto L_08812380;
    case 41u: goto L_088123BC;
    case 42u: goto L_088123D4;
    case 43u: goto L_088123E8;
    case 44u: goto L_08812408;
    case 45u: goto L_08812428;
    case 46u: goto L_08812468;
    case 47u: goto L_08812470;
    case 48u: goto L_0881247C;
    case 49u: goto L_08812488;
    case 50u: goto L_0881249C;
    case 51u: goto L_088124A4;
    case 52u: goto L_088124B0;
    case 53u: goto L_088124BC;
    case 54u: goto L_088124D0;
    case 55u: goto L_088124D8;
    case 56u: goto L_088124E4;
    case 57u: goto L_088124FC;
    case 58u: goto L_08812508;
    case 59u: goto L_08812514;
    case 60u: goto L_08812534;
    case 61u: goto L_08812554;
    case 62u: goto L_0881257C;
    case 63u: goto L_08812588;
    case 64u: goto L_088125A8;
    case 65u: goto L_088125C8;
    case 66u: goto L_088125D0;
    case 67u: goto L_088125D8;
    case 68u: goto L_088125DC;
    case 69u: goto L_088125E8;
    case 70u: goto L_088125F4;
    case 71u: goto L_088125F8;
    case 72u: goto L_08812608;
    case 73u: goto L_08812624;
    case 74u: goto L_08812634;
    case 75u: goto L_0881265C;
    case 76u: goto L_08812668;
    case 77u: goto L_08812674;
    case 78u: goto L_088126AC;
    case 79u: goto L_088126B8;
    case 80u: goto L_088126C4;
    case 81u: goto L_088126FC;
    case 82u: goto L_08812708;
    case 83u: goto L_08812720;
    case 84u: goto L_08812738;
    case 85u: goto L_08812768;
    case 86u: goto L_08812774;
    case 87u: goto L_08812780;
    case 88u: goto L_08812798;
    case 89u: goto L_088127B8;
    case 90u: goto L_088127C4;
    case 91u: goto L_088127F4;
    case 92u: goto L_08812800;
    case 93u: goto L_08812854;
    case 94u: goto L_088128A0;
    case 95u: goto L_088128B0;
    case 96u: goto L_088128BC;
    case 97u: goto L_088128D0;
    case 98u: goto L_088128DC;
    case 99u: goto L_088128F0;
    case 100u: goto L_088128FC;
    case 101u: goto L_0881290C;
    case 102u: goto L_08812918;
    case 103u: goto L_0881295C;
    case 104u: goto L_08812964;
    case 105u: goto L_08812974;
    case 106u: goto L_0881297C;
    case 107u: goto L_088129A0;
    case 108u: goto L_088129C0;
    case 109u: goto L_088129CC;
    case 110u: goto L_088129E0;
    case 111u: goto L_088129F0;
    case 112u: goto L_088129F8;
    case 113u: goto L_08812A08;
    case 114u: goto L_08812A10;
    case 115u: goto L_08812A18;
    case 116u: goto L_08812A20;
    case 117u: goto L_08812A2C;
    case 118u: goto L_08812A38;
    case 119u: goto L_08812A60;
    case 120u: goto L_08812A84;
    case 121u: goto L_08812AA8;
    case 122u: goto L_08812ACC;
    case 123u: goto L_08812AF0;
    case 124u: goto L_08812AF8;
    case 125u: goto L_08812B04;
    case 126u: goto L_08812B10;
    case 127u: goto L_08812B1C;
    case 128u: goto L_08812B24;
    case 129u: goto L_08812B38;
    case 130u: goto L_08812B58;
    case 131u: goto L_08812B70;
    case 132u: goto L_08812B78;
    case 133u: goto L_08812B80;
    case 134u: goto L_08812B88;
    case 135u: goto L_08812B94;
    case 136u: goto L_08812BB0;
    case 137u: goto L_08812BBC;
    case 138u: goto L_08812BDC;
    case 139u: goto L_08812BEC;
    case 140u: goto L_08812BFC;
    case 141u: goto L_08812C28;
    case 142u: goto L_08812C30;
    case 143u: goto L_08812C44;
    case 144u: goto L_08812C5C;
    case 145u: goto L_08812C64;
    case 146u: goto L_08812C84;
    case 147u: goto L_08812C8C;
    case 148u: goto L_08812C94;
    case 149u: goto L_08812C9C;
    case 150u: goto L_08812CA4;
    case 151u: goto L_08812CAC;
    case 152u: goto L_08812CC4;
    case 153u: goto L_08812CE8;
    case 154u: goto L_08812CF4;
    case 155u: goto L_08812D10;
    case 156u: goto L_08812D18;
    case 157u: goto L_08812D20;
    case 158u: goto L_08812D28;
    case 159u: goto L_08812D38;
    case 160u: goto L_08812D44;
    case 161u: goto L_08812D4C;
    case 162u: goto L_08812D54;
    case 163u: goto L_08812D6C;
    case 164u: goto L_08812D7C;
    case 165u: goto L_08812D84;
    case 166u: goto L_08812D9C;
    case 167u: goto L_08812DA8;
    case 168u: goto L_08812DB8;
    case 169u: goto L_08812DCC;
    case 170u: goto L_08812DE4;
    case 171u: goto L_08812DF0;
    case 172u: goto L_08812E10;
    case 173u: goto L_08812E2C;
    case 174u: goto L_08812E38;
    case 175u: goto L_08812E40;
    case 176u: goto L_08812E50;
    case 177u: goto L_08812E5C;
    case 178u: goto L_08812E7C;
    case 179u: goto L_08812E9C;
    case 180u: goto L_08812EA8;
    case 181u: goto L_08812EB0;
    case 182u: goto L_08812EF4;
    case 183u: goto L_08812F00;
    case 184u: goto L_08812F10;
    case 185u: goto L_08812F18;
    case 186u: goto L_08812F28;
    case 187u: goto L_08812F30;
    case 188u: goto L_08812F3C;
    case 189u: goto L_08812F58;
    case 190u: goto L_08812F60;
    case 191u: goto L_08812F68;
    case 192u: goto L_08812F70;
    case 193u: goto L_08812F74;
    case 194u: goto L_08812F94;
    case 195u: goto L_08812FAC;
    case 196u: goto L_08812FCC;
    case 197u: goto L_08812FD8;
    case 198u: goto L_08812FE4;
    case 199u: goto L_08812FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08812000:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08812024;
      }
      goto L_0881200C;
    }
L_0881200C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08812020u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 42u, 0x088112CCu>(ctx, &aot_mem) && ctx.pc == 0x08812020u) goto L_08812020;
    return;
L_08812020:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_08812024;
L_08812024:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 209u, 0x08811FC0u>(ctx, &aot_mem); return;
      }
      goto L_08812054;
    }
L_08812054:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812084:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088120D4;
      }
      goto L_088120B0;
    }
L_088120B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088120C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 185u, 0x08811D80u>(ctx, &aot_mem) && ctx.pc == 0x088120C0u) goto L_088120C0;
    return;
L_088120C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088120B0;
      }
      goto L_088120D4;
    }
L_088120D4:
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
L_088120EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08812140;
      }
      goto L_0881211C;
    }
L_0881211C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x0881212Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 78u, 0x08811564u>(ctx, &aot_mem) && ctx.pc == 0x0881212Cu) goto L_0881212C;
    return;
L_0881212C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881211C;
      }
      goto L_08812140;
    }
L_08812140:
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
L_08812158:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812250;
      }
      goto L_0881218C;
    }
L_0881218C:
    aot_gpr[4] = (2218u << 16u);
    goto L_08812190;
L_08812190:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 4096u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812240;
      }
      goto L_088121C4;
    }
L_088121C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(424)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812240;
      }
      goto L_088121D8;
    }
L_088121D8:
    aot_gpr[4] = (aot_gpr[5] << 7u);
    goto L_088121DC;
L_088121DC:
    aot_gpr[8] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(432));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(318)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812230;
      }
      goto L_08812200;
    }
L_08812200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08812230;
      }
      goto L_08812214;
    }
L_08812214:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08812228u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 145u, 0x08811AD4u>(ctx, &aot_mem) && ctx.pc == 0x08812228u) goto L_08812228;
    return;
L_08812228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812240;
      }
      goto L_08812230;
    }
L_08812230:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[5] << 7u);
      if (branch_taken) {
          goto L_088121DC;
      }
      goto L_08812240;
    }
L_08812240:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08812190;
      }
      goto L_08812250;
    }
L_08812250:
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
L_08812268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08812294;
      }
      goto L_08812288;
    }
L_08812288:
    aot_gpr[31] = (0x08812290u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08812158;
L_08812290:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_08812294;
L_08812294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088122CC;
      }
      goto L_088122A8;
    }
L_088122A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088122B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 149u, 0x08811B20u>(ctx, &aot_mem) && ctx.pc == 0x088122B8u) goto L_088122B8;
    return;
L_088122B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088122A8;
      }
      goto L_088122CC;
    }
L_088122CC:
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
L_088122E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812368;
      }
      goto L_08812308;
    }
L_08812308:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08812358;
      }
      goto L_08812318;
    }
L_08812318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08812328u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 190u, 0x08811DF8u>(ctx, &aot_mem) && ctx.pc == 0x08812328u) goto L_08812328;
    return;
L_08812328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08812338u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x08812338u) goto L_08812338;
    return;
L_08812338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08812318;
      }
      goto L_08812358;
    }
L_08812358:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08812368u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08812368u) goto L_08812368;
    return;
L_08812368:
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
L_08812380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088123E8;
      }
      goto L_088123BC;
    }
L_088123BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088123D4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 197u, 0x08811E80u>(ctx, &aot_mem) && ctx.pc == 0x088123D4u) goto L_088123D4;
    return;
L_088123D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088123BC;
      }
      goto L_088123E8;
    }
L_088123E8:
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
L_08812408:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812428:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-16080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08812468u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16060));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08812468u) goto L_08812468;
    return;
L_08812468:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08812488;
      }
      goto L_08812470;
    }
L_08812470:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881247Cu);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0881247Cu) goto L_0881247C;
    return;
L_0881247C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08812514;
      }
      goto L_08812488;
    }
L_08812488:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0881249Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16044));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0881249Cu) goto L_0881249C;
    return;
L_0881249C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088124BC;
      }
      goto L_088124A4;
    }
L_088124A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088124B0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088124B0u) goto L_088124B0;
    return;
L_088124B0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(50));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08812514;
      }
      goto L_088124BC;
    }
L_088124BC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088124D0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16028));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088124D0u) goto L_088124D0;
    return;
L_088124D0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08812514;
      }
      goto L_088124D8;
    }
L_088124D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088124E4u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088124E4u) goto L_088124E4;
    return;
L_088124E4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088124FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-16016));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088124FCu) goto L_088124FC;
    return;
L_088124FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08812508u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08812508u) goto L_08812508;
    return;
L_08812508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08812514;
L_08812514:
    aot_gpr[2] = (0u | 1u);
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
L_08812534:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812554:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0881257Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 6u, 0x08894044u>(ctx, &aot_mem) && ctx.pc == 0x0881257Cu) goto L_0881257C;
    return;
L_0881257C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08812588u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x08812588u) goto L_08812588;
    return;
L_08812588:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_088125D0;
      }
      goto L_088125A8;
    }
L_088125A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088125C8u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088125C8u) goto L_088125C8;
    return;
L_088125C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088125DC;
      }
      goto L_088125D0;
    }
L_088125D0:
    aot_gpr[31] = (0x088125D8u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088125D8u) goto L_088125D8;
    return;
L_088125D8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088125DC;
L_088125DC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_088125F8;
      }
      goto L_088125E8;
    }
L_088125E8:
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088125F4u);
    aot_gpr[6] = (72u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 124u, 0x088C586Cu>(ctx, &aot_mem) && ctx.pc == 0x088125F4u) goto L_088125F4;
    return;
L_088125F4:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_088125F8;
L_088125F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7004), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
    aot_gpr[31] = (0x08812608u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x08812608u) goto L_08812608;
    return;
L_08812608:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x08812624u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16000));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x08812624u) goto L_08812624;
    return;
L_08812624:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), aot_gpr[2]);
    aot_gpr[31] = (0x08812634u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 32u, 0x088621BCu>(ctx, &aot_mem) && ctx.pc == 0x08812634u) goto L_08812634;
    return;
L_08812634:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0881265Cu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881265Cu) goto L_0881265C;
    return;
L_0881265C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08812674;
      }
      goto L_08812668;
    }
L_08812668:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11936));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_08812674;
L_08812674:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7024), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7000), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088126ACu);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088126ACu) goto L_088126AC;
    return;
L_088126AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088126C4;
      }
      goto L_088126B8;
    }
L_088126B8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11920));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_088126C4;
L_088126C4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7020), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6996), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088126FCu);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088126FCu) goto L_088126FC;
    return;
L_088126FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812720;
      }
      goto L_08812708;
    }
L_08812708:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14112));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_08812720;
L_08812720:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-7016), aot_gpr[17]);
    aot_gpr[31] = (0x08812738u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08812738u) goto L_08812738;
    return;
L_08812738:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7016)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08812768u);
    aot_gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812768u) goto L_08812768;
    return;
L_08812768:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08812780;
      }
      goto L_08812774;
    }
L_08812774:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14048));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_08812780;
L_08812780:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-7008), aot_gpr[17]);
    aot_gpr[31] = (0x08812798u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08812798u) goto L_08812798;
    return;
L_08812798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7008)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15932));
    aot_gpr[31] = (0x088127B8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-15916));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088127B8u) goto L_088127B8;
    return;
L_088127B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088127C4u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088127C4u) goto L_088127C4;
    return;
L_088127C4:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088127F4u);
    aot_gpr[6] = (0u | 64u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088127F4u) goto L_088127F4;
    return;
L_088127F4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (2218u << 16u);
        goto L_08812854;
    }
    goto L_08812800;
L_08812800:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-14192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2218u << 16u);
    goto L_08812854;
L_08812854:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-7012), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-15908));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-15888));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-15872));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[9] = (0u | 1u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x088128A0u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088128A0u) goto L_088128A0;
    return;
L_088128A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088128B0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088128B0u) goto L_088128B0;
    return;
L_088128B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7012)));
    aot_gpr[31] = (0x088128BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x088128BCu) goto L_088128BC;
    return;
L_088128BC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088128D0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-15856));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088128D0u) goto L_088128D0;
    return;
L_088128D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7012)));
    aot_gpr[31] = (0x088128DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x088128DCu) goto L_088128DC;
    return;
L_088128DC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088128F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-15840));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088128F0u) goto L_088128F0;
    return;
L_088128F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7012)));
    aot_gpr[31] = (0x088128FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 9u, 0x08890158u>(ctx, &aot_mem) && ctx.pc == 0x088128FCu) goto L_088128FC;
    return;
L_088128FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881290Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0881290Cu) goto L_0881290C;
    return;
L_0881290C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08812918u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08812918u) goto L_08812918;
    return;
L_08812918:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6988), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-6984), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0881295Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26548), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x0881295Cu) goto L_0881295C;
    return;
L_0881295C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812974;
      }
      goto L_08812964;
    }
L_08812964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08812974u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 24u, 0x08894160u>(ctx, &aot_mem) && ctx.pc == 0x08812974u) goto L_08812974;
    return;
L_08812974:
    aot_gpr[31] = (0x0881297Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7004)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x0881297Cu) goto L_0881297C;
    return;
L_0881297C:
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
L_088129A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088129C0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088129C0u) goto L_088129C0;
    return;
L_088129C0:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[31] = (0x088129CCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088129CCu) goto L_088129CC;
    return;
L_088129CC:
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088129E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088129E0u) goto L_088129E0;
    return;
L_088129E0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088129F0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088129F0u) goto L_088129F0;
    return;
L_088129F0:
    aot_gpr[31] = (0x088129F8u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088129F8u) goto L_088129F8;
    return;
L_088129F8:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08812A08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x08812A08u) goto L_08812A08;
    return;
L_08812A08:
    aot_gpr[31] = (0x08812A10u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x08812A10u) goto L_08812A10;
    return;
L_08812A10:
    aot_gpr[31] = (0x08812A18u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x08812A18u) goto L_08812A18;
    return;
L_08812A18:
    aot_gpr[31] = (0x08812A20u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 167u, 0x0882FFE4u>(ctx, &aot_mem) && ctx.pc == 0x08812A20u) goto L_08812A20;
    return;
L_08812A20:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[31] = (0x08812A2Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 206u, 0x088C5E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08812A2Cu) goto L_08812A2C;
    return;
L_08812A2C:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[31] = (0x08812A38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7004)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x08812A38u) goto L_08812A38;
    return;
L_08812A38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7020)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08812A60u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812A60u) goto L_08812A60;
    return;
L_08812A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7024)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08812A84u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812A84u) goto L_08812A84;
    return;
L_08812A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7016)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08812AA8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812AA8u) goto L_08812AA8;
    return;
L_08812AA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7012)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08812ACCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812ACCu) goto L_08812ACC;
    return;
L_08812ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7008)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08812AF0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812AF0u) goto L_08812AF0;
    return;
L_08812AF0:
    aot_gpr[31] = (0x08812AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 48u, 0x088622BCu>(ctx, &aot_mem) && ctx.pc == 0x08812AF8u) goto L_08812AF8;
    return;
L_08812AF8:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[31] = (0x08812B04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7268)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08812B04u) goto L_08812B04;
    return;
L_08812B04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7004)));
    aot_gpr[31] = (0x08812B10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-7268), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x08812B10u) goto L_08812B10;
    return;
L_08812B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7004)));
    aot_gpr[31] = (0x08812B1Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 139u, 0x088C598Cu>(ctx, &aot_mem) && ctx.pc == 0x08812B1Cu) goto L_08812B1C;
    return;
L_08812B1C:
    aot_gpr[31] = (0x08812B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 21u, 0x08894124u>(ctx, &aot_mem) && ctx.pc == 0x08812B24u) goto L_08812B24;
    return;
L_08812B24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812B38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22256), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812B58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08812B70u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 186u, 0x088C5C84u>(ctx, &aot_mem) && ctx.pc == 0x08812B70u) goto L_08812B70;
    return;
L_08812B70:
    aot_gpr[31] = (0x08812B78u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x08812B78u) goto L_08812B78;
    return;
L_08812B78:
    aot_gpr[31] = (0x08812B80u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x08812B80u) goto L_08812B80;
    return;
L_08812B80:
    aot_gpr[31] = (0x08812B88u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x08812B88u) goto L_08812B88;
    return;
L_08812B88:
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[31] = (0x08812B94u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 186u, 0x088C5C84u>(ctx, &aot_mem) && ctx.pc == 0x08812B94u) goto L_08812B94;
    return;
L_08812B94:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15792));
    aot_gpr[31] = (0x08812BB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-15772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08812BB0u) goto L_08812BB0;
    return;
L_08812BB0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08812BBCu);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08812BBCu) goto L_08812BBC;
    return;
L_08812BBC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08812BDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15756));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08812BDCu) goto L_08812BDC;
    return;
L_08812BDC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08812BECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15736));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 36u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08812BECu) goto L_08812BEC;
    return;
L_08812BEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812BFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08812C28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15824));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08812C28u) goto L_08812C28;
    return;
L_08812C28:
    aot_gpr[31] = (0x08812C30u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08812B58;
L_08812C30:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08812C44u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15816));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08812C44u) goto L_08812C44;
    return;
L_08812C44:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812C5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08812C9C;
      }
      goto L_08812C84;
    }
L_08812C84:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08812DA8;
      }
      goto L_08812C8C;
    }
L_08812C8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08812CAC;
      }
      goto L_08812C94;
    }
L_08812C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812D20;
      }
      goto L_08812C9C;
    }
L_08812C9C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08812D84;
      }
      goto L_08812CA4;
    }
L_08812CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812DA8;
      }
      goto L_08812CAC;
    }
L_08812CAC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6976));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812D18;
      }
      goto L_08812CC4;
    }
L_08812CC4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15796));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x08812CE8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-15808));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x08812CE8u) goto L_08812CE8;
    return;
L_08812CE8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08812CF4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08812CF4u) goto L_08812CF4;
    return;
L_08812CF4:
    aot_gpr[8] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08812D10u);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08812D10u) goto L_08812D10;
    return;
L_08812D10:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08812D18;
L_08812D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812DA8;
      }
      goto L_08812D20;
    }
L_08812D20:
    aot_gpr[31] = (0x08812D28u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08812D28u) goto L_08812D28;
    return;
L_08812D28:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 9 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
        goto L_08812D4C;
    }
    goto L_08812D38;
L_08812D38:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812D6C;
      }
      goto L_08812D44;
    }
L_08812D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812D7C;
      }
      goto L_08812D4C;
    }
L_08812D4C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812D6C;
      }
      goto L_08812D54;
    }
L_08812D54:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25236), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08812D7C;
      }
      goto L_08812D6C;
    }
L_08812D6C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25236), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08812D7C;
L_08812D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812DA8;
      }
      goto L_08812D84;
    }
L_08812D84:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15792));
    aot_gpr[31] = (0x08812D9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08812D9Cu) goto L_08812D9C;
    return;
L_08812D9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08812DA8;
L_08812DA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812DB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812DE4;
      }
      goto L_08812DCC;
    }
L_08812DCC:
    aot_gpr[5] = (17372u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (16576u << 16u);
    aot_gpr[31] = (0x08812DE4u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 62u, 0x08888730u>(ctx, &aot_mem) && ctx.pc == 0x08812DE4u) goto L_08812DE4;
    return;
L_08812DE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812DF0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812E10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08812E2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15720));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08812E2Cu) goto L_08812E2C;
    return;
L_08812E2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08812E38u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 228u, 0x08889DD0u>(ctx, &aot_mem) && ctx.pc == 0x08812E38u) goto L_08812E38;
    return;
L_08812E38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812E50;
      }
      goto L_08812E40;
    }
L_08812E40:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x08812E50u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x08812E50u) goto L_08812E50;
    return;
L_08812E50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812E5C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22272), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812E7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08812E9Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08812E9Cu) goto L_08812E9C;
    return;
L_08812E9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812EA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08812EB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x08812EF4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 72u, 0x0881AB64u>(ctx, &aot_mem) && ctx.pc == 0x08812EF4u) goto L_08812EF4;
    return;
L_08812EF4:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[31] = (0x08812F00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 125u, 0x08826B10u>(ctx, &aot_mem) && ctx.pc == 0x08812F00u) goto L_08812F00;
    return;
L_08812F00:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[31] = (0x08812F10u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08812F10u) goto L_08812F10;
    return;
L_08812F10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (2216u << 16u);
      if (branch_taken) {
          goto L_08812F74;
      }
      goto L_08812F18;
    }
L_08812F18:
    aot_gpr[23] = (4096u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[22] = (61440u << 16u);
    goto L_08812F28;
L_08812F28:
    aot_gpr[31] = (0x08812F30u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08812F30u) goto L_08812F30;
    return;
L_08812F30:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812F68;
      }
      goto L_08812F3C;
    }
L_08812F3C:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[20] = (aot_gpr[20] << 4u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[22]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_08812F60;
      }
      goto L_08812F58;
    }
L_08812F58:
    aot_gpr[20] = (aot_gpr[20] ^ aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] & aot_gpr[23]);
    goto L_08812F60;
L_08812F60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812F28;
      }
      goto L_08812F68;
    }
L_08812F68:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812F74;
      }
      goto L_08812F70;
    }
L_08812F70:
    aot_gpr[20] = (0u | 1u);
    goto L_08812F74;
L_08812F74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(18)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08812FAC;
      }
      goto L_08812F94;
    }
L_08812F94:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    goto L_08812FAC;
L_08812FAC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[31] = (0x08812FCCu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 2u, 0x08919010u>(ctx, &aot_mem) && ctx.pc == 0x08812FCCu) goto L_08812FCC;
    return;
L_08812FCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x08812FD8u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 161u, 0x08918FF0u>(ctx, &aot_mem) && ctx.pc == 0x08812FD8u) goto L_08812FD8;
    return;
L_08812FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[31] = (0x08812FE4u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 1u, 0x08919000u>(ctx, &aot_mem) && ctx.pc == 0x08812FE4u) goto L_08812FE4;
    return;
L_08812FE4:
    aot_gpr[31] = (0x08812FECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 109u, 0x08816F84u>(ctx, &aot_mem) && ctx.pc == 0x08812FECu) goto L_08812FEC;
    return;
L_08812FEC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08813000u; return;
}

void recomp_unit_0014(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0014_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_14(Runtime &runtime) {
    runtime.register_generated_unit(14u, 0x08812000u, 4096u, &recomp_unit_0014, &recomp_unit_0014_entry);
    runtime.register_function(0x08812000u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881200Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812020u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812024u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812054u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812084u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088120B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088120C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088120D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088120ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881211Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881212Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812140u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812158u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881218Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812190u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088121C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088121D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088121DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812200u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812214u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812228u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812230u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812240u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812250u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812268u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812288u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812290u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812294u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088122A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088122B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088122CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088122E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812308u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812318u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812328u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812338u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812358u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812368u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812380u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088123BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088123D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088123E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812408u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812428u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812468u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812470u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881247Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812488u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881249Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088124FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812508u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812514u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812534u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812554u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881257Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812588u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088125F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812608u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812624u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812634u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881265Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812668u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812674u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088126ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088126B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088126C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088126FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812708u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812720u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812738u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812768u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812774u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812780u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812798u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088127B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088127C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088127F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812800u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812854u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088128FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881290Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812918u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881295Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812964u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812974u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0881297Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088129A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088129C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088129CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088129E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088129F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x088129F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812A84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812AA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812ACCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812AF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812AF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812B94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812BB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812BBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812BDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812BECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812BFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812C9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812CA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812CACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812CC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812CE8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812CF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812D9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812DA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812DB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812DCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812DE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812DF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812E9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812EA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812EB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812EF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812F94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812FACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812FCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812FD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812FE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x08812FECu, &recomp_unit_0014, "recomp_unit_0014");
}
} // namespace psprecomp
