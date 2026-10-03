#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0386[1020] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 42, 0, 0, 0,
    0, 43, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51,
    0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 56, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62,
    0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 68, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 87, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0,
    0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0,
    0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0,
    111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128,
    0, 129, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0,
    160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0,
    0, 193, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 203, 0, 204, 205, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216,
    0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
};
void recomp_unit_0386_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08986000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0386[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08986000;
    case 2u: goto L_0898600C;
    case 3u: goto L_0898601C;
    case 4u: goto L_0898602C;
    case 5u: goto L_08986040;
    case 6u: goto L_08986048;
    case 7u: goto L_08986090;
    case 8u: goto L_089860AC;
    case 9u: goto L_089860B4;
    case 10u: goto L_089860BC;
    case 11u: goto L_0898610C;
    case 12u: goto L_08986120;
    case 13u: goto L_08986128;
    case 14u: goto L_08986130;
    case 15u: goto L_08986150;
    case 16u: goto L_08986158;
    case 17u: goto L_08986160;
    case 18u: goto L_0898618C;
    case 19u: goto L_0898619C;
    case 20u: goto L_089861A4;
    case 21u: goto L_089861B0;
    case 22u: goto L_089861CC;
    case 23u: goto L_089861DC;
    case 24u: goto L_089861E4;
    case 25u: goto L_089861EC;
    case 26u: goto L_0898620C;
    case 27u: goto L_08986220;
    case 28u: goto L_08986228;
    case 29u: goto L_08986230;
    case 30u: goto L_0898624C;
    case 31u: goto L_08986254;
    case 32u: goto L_08986260;
    case 33u: goto L_08986270;
    case 34u: goto L_0898627C;
    case 35u: goto L_08986298;
    case 36u: goto L_089862A8;
    case 37u: goto L_089862B0;
    case 38u: goto L_089862CC;
    case 39u: goto L_089862D4;
    case 40u: goto L_089862DC;
    case 41u: goto L_089862EC;
    case 42u: goto L_089862F0;
    case 43u: goto L_08986304;
    case 44u: goto L_08986308;
    case 45u: goto L_0898631C;
    case 46u: goto L_08986330;
    case 47u: goto L_08986340;
    case 48u: goto L_08986358;
    case 49u: goto L_08986368;
    case 50u: goto L_08986374;
    case 51u: goto L_0898637C;
    case 52u: goto L_08986384;
    case 53u: goto L_0898639C;
    case 54u: goto L_089863A8;
    case 55u: goto L_089863B0;
    case 56u: goto L_089863B4;
    case 57u: goto L_089863B8;
    case 58u: goto L_089863C8;
    case 59u: goto L_089863D0;
    case 60u: goto L_089863D8;
    case 61u: goto L_089863E0;
    case 62u: goto L_089863FC;
    case 63u: goto L_08986404;
    case 64u: goto L_08986438;
    case 65u: goto L_0898644C;
    case 66u: goto L_08986458;
    case 67u: goto L_08986464;
    case 68u: goto L_08986468;
    case 69u: goto L_08986470;
    case 70u: goto L_08986498;
    case 71u: goto L_089864A0;
    case 72u: goto L_089864B0;
    case 73u: goto L_089864BC;
    case 74u: goto L_089864C4;
    case 75u: goto L_089864D0;
    case 76u: goto L_089864E0;
    case 77u: goto L_08986500;
    case 78u: goto L_08986524;
    case 79u: goto L_08986534;
    case 80u: goto L_0898653C;
    case 81u: goto L_0898656C;
    case 82u: goto L_08986574;
    case 83u: goto L_08986584;
    case 84u: goto L_08986594;
    case 85u: goto L_089865B0;
    case 86u: goto L_089865C0;
    case 87u: goto L_089865C4;
    case 88u: goto L_089865D8;
    case 89u: goto L_089865E0;
    case 90u: goto L_089865E8;
    case 91u: goto L_089865F0;
    case 92u: goto L_089865F8;
    case 93u: goto L_0898660C;
    case 94u: goto L_08986618;
    case 95u: goto L_08986620;
    case 96u: goto L_08986628;
    case 97u: goto L_0898663C;
    case 98u: goto L_08986644;
    case 99u: goto L_0898664C;
    case 100u: goto L_08986654;
    case 101u: goto L_08986660;
    case 102u: goto L_0898666C;
    case 103u: goto L_08986678;
    case 104u: goto L_08986684;
    case 105u: goto L_0898668C;
    case 106u: goto L_08986694;
    case 107u: goto L_0898669C;
    case 108u: goto L_089866E0;
    case 109u: goto L_089866EC;
    case 110u: goto L_089866F4;
    case 111u: goto L_08986700;
    case 112u: goto L_08986708;
    case 113u: goto L_08986714;
    case 114u: goto L_0898671C;
    case 115u: goto L_08986730;
    case 116u: goto L_0898675C;
    case 117u: goto L_08986788;
    case 118u: goto L_0898678C;
    case 119u: goto L_089867B0;
    case 120u: goto L_089867EC;
    case 121u: goto L_089867F0;
    case 122u: goto L_08986814;
    case 123u: goto L_0898681C;
    case 124u: goto L_08986820;
    case 125u: goto L_08986854;
    case 126u: goto L_0898685C;
    case 127u: goto L_08986874;
    case 128u: goto L_0898687C;
    case 129u: goto L_08986884;
    case 130u: goto L_0898688C;
    case 131u: goto L_08986894;
    case 132u: goto L_089868A4;
    case 133u: goto L_089868AC;
    case 134u: goto L_089868B8;
    case 135u: goto L_089868C0;
    case 136u: goto L_089868C4;
    case 137u: goto L_089868D4;
    case 138u: goto L_0898692C;
    case 139u: goto L_08986938;
    case 140u: goto L_0898696C;
    case 141u: goto L_08986984;
    case 142u: goto L_08986998;
    case 143u: goto L_089869A0;
    case 144u: goto L_089869A8;
    case 145u: goto L_089869BC;
    case 146u: goto L_089869CC;
    case 147u: goto L_08986A00;
    case 148u: goto L_08986A10;
    case 149u: goto L_08986A40;
    case 150u: goto L_08986A50;
    case 151u: goto L_08986A58;
    case 152u: goto L_08986A5C;
    case 153u: goto L_08986A90;
    case 154u: goto L_08986A98;
    case 155u: goto L_08986AB0;
    case 156u: goto L_08986AB8;
    case 157u: goto L_08986AE4;
    case 158u: goto L_08986AF0;
    case 159u: goto L_08986AF8;
    case 160u: goto L_08986B00;
    case 161u: goto L_08986B08;
    case 162u: goto L_08986B2C;
    case 163u: goto L_08986B3C;
    case 164u: goto L_08986B54;
    case 165u: goto L_08986B5C;
    case 166u: goto L_08986B80;
    case 167u: goto L_08986B8C;
    case 168u: goto L_08986B94;
    case 169u: goto L_08986BB8;
    case 170u: goto L_08986BC8;
    case 171u: goto L_08986BE0;
    case 172u: goto L_08986BE8;
    case 173u: goto L_08986C0C;
    case 174u: goto L_08986C18;
    case 175u: goto L_08986C20;
    case 176u: goto L_08986C48;
    case 177u: goto L_08986C58;
    case 178u: goto L_08986C70;
    case 179u: goto L_08986C78;
    case 180u: goto L_08986C9C;
    case 181u: goto L_08986CA8;
    case 182u: goto L_08986CB0;
    case 183u: goto L_08986CEC;
    case 184u: goto L_08986CFC;
    case 185u: goto L_08986D14;
    case 186u: goto L_08986D20;
    case 187u: goto L_08986D34;
    case 188u: goto L_08986D48;
    case 189u: goto L_08986D50;
    case 190u: goto L_08986D5C;
    case 191u: goto L_08986D6C;
    case 192u: goto L_08986D74;
    case 193u: goto L_08986D84;
    case 194u: goto L_08986D88;
    case 195u: goto L_08986D94;
    case 196u: goto L_08986DA8;
    case 197u: goto L_08986DB8;
    case 198u: goto L_08986DBC;
    case 199u: goto L_08986DF0;
    case 200u: goto L_08986DFC;
    case 201u: goto L_08986E10;
    case 202u: goto L_08986E34;
    case 203u: goto L_08986E38;
    case 204u: goto L_08986E40;
    case 205u: goto L_08986E44;
    case 206u: goto L_08986E4C;
    case 207u: goto L_08986E50;
    case 208u: goto L_08986E84;
    case 209u: goto L_08986E9C;
    case 210u: goto L_08986EA4;
    case 211u: goto L_08986EAC;
    case 212u: goto L_08986EB8;
    case 213u: goto L_08986ECC;
    case 214u: goto L_08986EDC;
    case 215u: goto L_08986EF4;
    case 216u: goto L_08986EFC;
    case 217u: goto L_08986F04;
    case 218u: goto L_08986F10;
    case 219u: goto L_08986F3C;
    case 220u: goto L_08986F44;
    case 221u: goto L_08986F4C;
    case 222u: goto L_08986F70;
    case 223u: goto L_08986F80;
    case 224u: goto L_08986F88;
    case 225u: goto L_08986F90;
    case 226u: goto L_08986F98;
    case 227u: goto L_08986FC4;
    case 228u: goto L_08986FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08986000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898600C:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 288u, 0x08985FA4u>(ctx, &aot_mem); return;
      }
      goto L_0898601C;
    }
L_0898601C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    goto L_0898602C;
L_0898602C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986040u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986040u) goto L_08986040;
    return;
L_08986040:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_08986090;
      }
      goto L_08986048;
    }
L_08986048:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    if (aot_gpr[7] == 0u) aot_gpr[4] = (aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[8]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08986090;
L_08986090:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089860ACu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089860ACu) goto L_089860AC;
    return;
L_089860AC:
    aot_gpr[31] = (0x089860B4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089860B4u) goto L_089860B4;
    return;
L_089860B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 287u, 0x08985F7Cu>(ctx, &aot_mem); return;
      }
      goto L_089860BC;
    }
L_089860BC:
    aot_gpr[2] = (aot_gpr[17] << 3u);
    aot_gpr[4] = (aot_gpr[17] << 5u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[3] << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[7] = (0u + 0u);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 287u, 0x08985F7Cu>(ctx, &aot_mem); return;
L_0898610C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986120u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986120u) goto L_08986120;
    return;
L_08986120:
    aot_gpr[31] = (0x08986128u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986128u) goto L_08986128;
    return;
L_08986128:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 287u, 0x08985F7Cu>(ctx, &aot_mem); return;
      }
      goto L_08986130;
    }
L_08986130:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_0898602C;
L_08986150:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986158:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986160:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898620C;
      }
      goto L_0898618C;
    }
L_0898618C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2812)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898619Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898619Cu) goto L_0898619C;
    return;
L_0898619C:
    aot_gpr[31] = (0x089861A4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089861A4u) goto L_089861A4;
    return;
L_089861A4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089861CC;
      }
      goto L_089861B0;
    }
L_089861B0:
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
L_089861CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2812)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089861DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089861DCu) goto L_089861DC;
    return;
L_089861DC:
    aot_gpr[31] = (0x089861E4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089861E4u) goto L_089861E4;
    return;
L_089861E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089861B0;
      }
      goto L_089861EC;
    }
L_089861EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898620C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986220u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986220u) goto L_08986220;
    return;
L_08986220:
    aot_gpr[31] = (0x08986228u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986228u) goto L_08986228;
    return;
L_08986228:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089861EC;
      }
      goto L_08986230;
    }
L_08986230:
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
L_0898624C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08986270;
      }
      goto L_08986254;
    }
L_08986254:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08986270;
      }
      goto L_08986260;
    }
L_08986260:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986270:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898627C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08986304;
      }
      goto L_08986298;
    }
L_08986298:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08986308;
      }
      goto L_089862A8;
    }
L_089862A8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08986308;
      }
      goto L_089862B0;
    }
L_089862B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089862CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089862CCu) goto L_089862CC;
    return;
L_089862CC:
    aot_gpr[31] = (0x089862D4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089862D4u) goto L_089862D4;
    return;
L_089862D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089862F0;
      }
      goto L_089862DC;
    }
L_089862DC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898631C;
      }
      goto L_089862EC;
    }
L_089862EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089862F0;
L_089862F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986304:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08986308;
L_08986308:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898631C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986330:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986340:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08986358u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08986358u) goto L_08986358;
    return;
L_08986358:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986368:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898637C;
      }
      goto L_08986374;
    }
L_08986374:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem); return;
L_0898637C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089863B4;
      }
      goto L_0898639C;
    }
L_0898639C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089863A8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 229u, 0x0898FE90u>(ctx, &aot_mem) && ctx.pc == 0x089863A8u) goto L_089863A8;
    return;
L_089863A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089863C8;
      }
      goto L_089863B0;
    }
L_089863B0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(20));
    goto L_089863B4;
L_089863B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089863B8;
L_089863B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089863C8:
    aot_gpr[31] = (0x089863D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 230u, 0x0898FEA8u>(ctx, &aot_mem) && ctx.pc == 0x089863D0u) goto L_089863D0;
    return;
L_089863D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089863B0;
      }
      goto L_089863D8;
    }
L_089863D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089863B8;
L_089863E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08986438;
      }
      goto L_089863FC;
    }
L_089863FC:
    aot_gpr[31] = (0x08986404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 283u, 0x08985ED4u>(ctx, &aot_mem) && ctx.pc == 0x08986404u) goto L_08986404;
    return;
L_08986404:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    goto L_08986438;
L_08986438:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898644C:
    aot_gpr[6] = (0u + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_08986468;
      }
      goto L_08986458;
    }
L_08986458:
    aot_gpr[2] = (aot_gpr[5] << 2u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08986468;
      }
      goto L_08986464;
    }
L_08986464:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08986468;
L_08986468:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_08986500;
      }
      goto L_08986498;
    }
L_08986498:
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08986500;
      }
      goto L_089864A0;
    }
L_089864A0:
    aot_gpr[19] = (aot_gpr[5] << 2u);
    aot_gpr[18] = (aot_gpr[19] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089864E0;
      }
      goto L_089864B0;
    }
L_089864B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089864D0;
      }
      goto L_089864BC;
    }
L_089864BC:
    aot_gpr[31] = (0x089864C4u);
    // nop
    goto L_08986340;
L_089864C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089864E0;
      }
      goto L_089864D0;
    }
L_089864D0:
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089864E0;
L_089864E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986500:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08986534u);
    // nop
    goto L_0898644C;
L_08986534:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0898656C;
      }
      goto L_0898653C;
    }
L_0898653C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0898656C;
L_0898656C:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986574:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08986584u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x08986584u) goto L_08986584;
    return;
L_08986584:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1172)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_089865C4;
      }
      goto L_089865B0;
    }
L_089865B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4228)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089865D8;
      }
      goto L_089865C0;
    }
L_089865C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_089865C4;
L_089865C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089865D8:
    aot_gpr[31] = (0x089865E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 202u, 0x08992E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089865E0u) goto L_089865E0;
    return;
L_089865E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26192)));
    goto L_089865C0;
L_089865E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898663C;
      }
      goto L_089865F0;
    }
L_089865F0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898663C;
      }
      goto L_089865F8;
    }
L_089865F8:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08986620;
      }
      goto L_0898660C;
    }
L_0898660C:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986618:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898660C;
      }
      goto L_08986620;
    }
L_08986620:
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1316)));
        goto L_08986618;
    }
    goto L_08986628;
L_08986628:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1072)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898663C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986644:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986694;
      }
      goto L_0898664C;
    }
L_0898664C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08986694;
      }
      goto L_08986654;
    }
L_08986654:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08986660;
L_08986660:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08986684;
      }
      goto L_0898666C;
    }
L_0898666C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986684;
      }
      goto L_08986678;
    }
L_08986678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986684;
L_08986684:
    if (aot_gpr[3] != aot_gpr[6]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08986660;
    }
    goto L_0898668C;
L_0898668C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986694:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898669C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089867EC;
      }
      goto L_089866E0;
    }
L_089866E0:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089867F0;
    }
    goto L_089866EC;
L_089866EC:
    if (aot_gpr[8] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089867F0;
    }
    goto L_089866F4;
L_089866F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1399) ? 1u : 0u);
      if (branch_taken) {
          goto L_089867EC;
      }
      goto L_08986700;
    }
L_08986700:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_0898678C;
      }
      goto L_08986708;
    }
L_08986708:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08986714u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x08986714u) goto L_08986714;
    return;
L_08986714:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089867F0;
      }
      goto L_0898671C;
    }
L_0898671C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_089867B0;
      }
      goto L_08986730;
    }
L_08986730:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898675Cu);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898675Cu) goto L_0898675C;
    return;
L_0898675C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[31] = (0x08986788u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986788u) goto L_08986788;
    return;
L_08986788:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_0898678C;
L_0898678C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867B0:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    goto L_08986730;
L_089867EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089867F0;
L_089867F0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986814:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08986854;
      }
      goto L_0898681C;
    }
L_0898681C:
    aot_gpr[8] = (0u + 0u);
    goto L_08986820;
L_08986820:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08986820;
      }
      goto L_08986854;
    }
L_08986854:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898685C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[4]))));
    aot_gpr[2] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[2] & 64u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (aot_gpr[2] & 16u);
      if (branch_taken) {
          goto L_0898688C;
      }
      goto L_08986874;
    }
L_08986874:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089868AC;
      }
      goto L_0898687C;
    }
L_0898687C:
    if (aot_gpr[6] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08986894;
    }
    goto L_08986884;
L_08986884:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089868C0;
      }
      goto L_0898688C;
    }
L_0898688C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986894:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] | 16384u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_0898688C;
      }
      goto L_089868A4;
    }
L_089868A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089868C4;
L_089868AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08986884;
      }
      goto L_089868B8;
    }
L_089868B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08986894;
L_089868C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089868C4;
L_089868C4:
    aot_gpr[2] = (aot_gpr[2] | 4096u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089868D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[4]))));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x0898692Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0898685C;
L_0898692C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898696C;
      }
      goto L_08986938;
    }
L_08986938:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898696C:
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986984u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986984u) goto L_08986984;
    return;
L_08986984:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(257));
      if (branch_taken) {
          goto L_08986C20;
      }
      goto L_08986998;
    }
L_08986998:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08986A90;
      }
      goto L_089869A0;
    }
L_089869A0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08986AF8;
      }
      goto L_089869A8;
    }
L_089869A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089869CC;
      }
      goto L_089869BC;
    }
L_089869BC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08986A00;
      }
      goto L_089869CC;
    }
L_089869CC:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A00:
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08986A10u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08986814;
L_08986A10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (aot_gpr[19] & 255u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (aot_gpr[30] + 0u);
    aot_gpr[10] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986A40u);
    aot_gpr[11] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986A40u) goto L_08986A40;
    return;
L_08986A40:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A50;
    }
L_08986A50:
    aot_gpr[31] = (0x08986A58u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986A58u) goto L_08986A58;
    return;
L_08986A58:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986A5C;
L_08986A5C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A90:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(5));
    goto L_08986938;
L_08986A98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986AB0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986AB0u) goto L_08986AB0;
    return;
L_08986AB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986AB8;
    }
L_08986AB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (aot_gpr[30] + 0u);
    aot_gpr[10] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986AE4u);
    aot_gpr[11] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986AE4u) goto L_08986AE4;
    return;
L_08986AE4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08986AF0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986AF0u) goto L_08986AF0;
    return;
L_08986AF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986A5C;
L_08986AF8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986B00;
    }
L_08986B00:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_08986B94;
      }
      goto L_08986B08;
    }
L_08986B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986B2Cu);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986B2Cu) goto L_08986B2C;
    return;
L_08986B2C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986B3C;
    }
L_08986B3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986B54u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986B54u) goto L_08986B54;
    return;
L_08986B54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986B5C;
    }
L_08986B5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986B80u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986B80u) goto L_08986B80;
    return;
L_08986B80:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08986B8Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986B8Cu) goto L_08986B8C;
    return;
L_08986B8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986A5C;
L_08986B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (0u | 65534u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986BB8u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986BB8u) goto L_08986BB8;
    return;
L_08986BB8:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986BC8;
    }
L_08986BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986BE0u);
    aot_gpr[5] = (0u | 65534u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986BE0u) goto L_08986BE0;
    return;
L_08986BE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986BE8;
    }
L_08986BE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986C0Cu);
    aot_gpr[5] = (0u | 65534u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986C0Cu) goto L_08986C0C;
    return;
L_08986C0C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08986C18u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986C18u) goto L_08986C18;
    return;
L_08986C18:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986A5C;
L_08986C20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (0u | 65533u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986C48u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986C48u) goto L_08986C48;
    return;
L_08986C48:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986C58;
    }
L_08986C58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986C70u);
    aot_gpr[5] = (0u | 65533u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986C70u) goto L_08986C70;
    return;
L_08986C70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08986A50;
      }
      goto L_08986C78;
    }
L_08986C78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (aot_gpr[23] + 0u);
    aot_gpr[8] = (aot_gpr[21] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986C9Cu);
    aot_gpr[5] = (0u | 65533u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986C9Cu) goto L_08986C9C;
    return;
L_08986C9C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08986CA8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986CA8u) goto L_08986CA8;
    return;
L_08986CA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986A5C;
L_08986CB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[22] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08986E84;
      }
      goto L_08986CEC;
    }
L_08986CEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08986E84;
      }
      goto L_08986CFC;
    }
L_08986CFC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986D14;
    }
L_08986D14:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1401) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986D20;
    }
L_08986D20:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_08986D88;
      }
      goto L_08986D34;
    }
L_08986D34:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[22] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[3] + static_cast<std::uint32_t>(2828));
    aot_gpr[17] = (0u + 0u);
    goto L_08986D50;
L_08986D48:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08986D84;
      }
      goto L_08986D50;
    }
L_08986D50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08986D48;
      }
      goto L_08986D5C;
    }
L_08986D5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08986D48;
      }
      goto L_08986D6C;
    }
L_08986D6C:
    aot_gpr[31] = (0x08986D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08986D74u) goto L_08986D74;
    return;
L_08986D74:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
      if (branch_taken) {
          goto L_08986D50;
      }
      goto L_08986D84;
    }
L_08986D84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08986D88;
L_08986D88:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[30] & 1u);
      if (branch_taken) {
          goto L_08986EAC;
      }
      goto L_08986D94;
    }
L_08986D94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986DA8;
    }
L_08986DA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
        goto L_08986DF0;
    }
    goto L_08986DB8;
L_08986DB8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_08986DBC;
L_08986DBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986DF0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08986DFCu);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    goto L_08986814;
L_08986DFC:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2812)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    goto L_08986E10;
L_08986E10:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (2217u << 16u);
    aot_gpr[11] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[30] + 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2828));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986E34u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986E34u) goto L_08986E34;
    return;
L_08986E34:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_08986E38;
L_08986E38:
    aot_gpr[31] = (0x08986E40u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08986E40u) goto L_08986E40;
    return;
L_08986E40:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08986E44;
L_08986E44:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[3] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986E4C;
    }
L_08986E4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08986E50;
L_08986E50:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986E84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08986E9Cu);
    aot_gpr[9] = (aot_gpr[22] + 0u);
    goto L_089868D4;
L_08986E9C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986EA4;
    }
L_08986EA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08986E50;
L_08986EAC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(257));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986EF4;
      }
      goto L_08986EB8;
    }
L_08986EB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
        goto L_08986DBC;
    }
    goto L_08986ECC;
L_08986ECC:
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08986EDCu);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    goto L_08986814;
L_08986EDC:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2812)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    goto L_08986E10;
L_08986EF4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08986F44;
      }
      goto L_08986EFC;
    }
L_08986EFC:
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[23] = (0u | 65535u);
        goto L_08986F10;
    }
    goto L_08986F04;
L_08986F04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1028)));
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08986E44;
    }
    goto L_08986F10;
L_08986F10:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1096)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08986F3Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2828));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08986F3Cu) goto L_08986F3C;
    return;
L_08986F3C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_08986E38;
L_08986F44:
    aot_gpr[23] = (0u | 65534u);
    goto L_08986F10;
L_08986F4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[10] = (aot_gpr[6] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 4u, 0x08987034u>(ctx, &aot_mem); return;
      }
      goto L_08986F70;
    }
L_08986F70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 5u, 0x08987044u>(ctx, &aot_mem); return;
      }
      goto L_08986F80;
    }
L_08986F80:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 5u, 0x08987044u>(ctx, &aot_mem); return;
      }
      goto L_08986F88;
    }
L_08986F88:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 5u, 0x08987044u>(ctx, &aot_mem); return;
      }
      goto L_08986F90;
    }
L_08986F90:
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    goto L_08986F98;
L_08986F98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08986F98;
      }
      goto L_08986FC4;
    }
L_08986FC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < 1399 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 6u, 0x08987058u>(ctx, &aot_mem); return;
      }
      goto L_08986FEC;
    }
L_08986FEC:
    aot_gpr[4] = (aot_gpr[10] + 0u);
    aot_gpr[10] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] | 80u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(68)));
    ctx.pc = 0x08987000u; return;
}

void recomp_unit_0386(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0386_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_386(Runtime &runtime) {
    runtime.register_generated_unit(386u, 0x08986000u, 4096u, &recomp_unit_0386, &recomp_unit_0386_entry);
    runtime.register_function(0x08986000u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898600Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898601Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898602Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986040u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986048u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986090u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089860ACu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089860B4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089860BCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898610Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986120u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986128u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986130u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986150u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986158u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986160u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898618Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898619Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089861A4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089861B0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089861CCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089861DCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089861E4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089861ECu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898620Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986220u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986228u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986230u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898624Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986254u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986260u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986270u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898627Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986298u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862A8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862B0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862CCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862D4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862DCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862ECu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089862F0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986304u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986308u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898631Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986330u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986340u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986358u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986368u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986374u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898637Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986384u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898639Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863A8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863B0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863B4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863B8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863C8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863D0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863D8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863E0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089863FCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986404u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986438u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898644Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986458u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986464u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986468u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986470u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986498u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089864A0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089864B0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089864BCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089864C4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089864D0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089864E0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986500u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986524u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986534u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898653Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898656Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986574u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986584u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986594u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865B0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865C0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865C4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865D8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865E0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865E8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865F0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089865F8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898660Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986618u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986620u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986628u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898663Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986644u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898664Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986654u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986660u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898666Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986678u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986684u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898668Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986694u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898669Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089866E0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089866ECu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089866F4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986700u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986708u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986714u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898671Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986730u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898675Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986788u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898678Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089867B0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089867ECu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089867F0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986814u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898681Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986820u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986854u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898685Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986874u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898687Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986884u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898688Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986894u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089868A4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089868ACu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089868B8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089868C0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089868C4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089868D4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898692Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986938u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x0898696Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986984u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986998u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089869A0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089869A8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089869BCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x089869CCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A00u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A10u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A40u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A50u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A58u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A5Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A90u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986A98u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986AB0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986AB8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986AE4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986AF0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986AF8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B00u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B08u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B2Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B3Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B54u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B5Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B80u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B8Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986B94u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986BB8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986BC8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986BE0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986BE8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C0Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C18u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C20u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C48u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C58u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C70u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C78u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986C9Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986CA8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986CB0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986CECu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986CFCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D14u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D20u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D34u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D48u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D50u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D5Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D6Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D74u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D84u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D88u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986D94u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986DA8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986DB8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986DBCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986DF0u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986DFCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E10u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E34u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E38u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E40u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E44u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E4Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E50u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E84u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986E9Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986EA4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986EACu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986EB8u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986ECCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986EDCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986EF4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986EFCu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F04u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F10u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F3Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F44u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F4Cu, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F70u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F80u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F88u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F90u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986F98u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986FC4u, &recomp_unit_0386, "recomp_unit_0386");
    runtime.register_function(0x08986FECu, &recomp_unit_0386, "recomp_unit_0386");
}
} // namespace psprecomp
