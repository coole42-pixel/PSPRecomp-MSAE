#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0378[1022] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0,
    16, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 25, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0,
    0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0,
    109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0,
    139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0,
    0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0,
    0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213,
};
void recomp_unit_0378_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0897E004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0378[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897E004;
    case 2u: goto L_0897E018;
    case 3u: goto L_0897E020;
    case 4u: goto L_0897E030;
    case 5u: goto L_0897E034;
    case 6u: goto L_0897E050;
    case 7u: goto L_0897E08C;
    case 8u: goto L_0897E094;
    case 9u: goto L_0897E09C;
    case 10u: goto L_0897E0A8;
    case 11u: goto L_0897E0B0;
    case 12u: goto L_0897E0C0;
    case 13u: goto L_0897E0C8;
    case 14u: goto L_0897E0F0;
    case 15u: goto L_0897E0F8;
    case 16u: goto L_0897E104;
    case 17u: goto L_0897E110;
    case 18u: goto L_0897E114;
    case 19u: goto L_0897E140;
    case 20u: goto L_0897E154;
    case 21u: goto L_0897E170;
    case 22u: goto L_0897E178;
    case 23u: goto L_0897E198;
    case 24u: goto L_0897E1AC;
    case 25u: goto L_0897E1B0;
    case 26u: goto L_0897E1B8;
    case 27u: goto L_0897E1C0;
    case 28u: goto L_0897E1CC;
    case 29u: goto L_0897E1D4;
    case 30u: goto L_0897E1F8;
    case 31u: goto L_0897E248;
    case 32u: goto L_0897E254;
    case 33u: goto L_0897E278;
    case 34u: goto L_0897E298;
    case 35u: goto L_0897E2A0;
    case 36u: goto L_0897E2A8;
    case 37u: goto L_0897E2C4;
    case 38u: goto L_0897E2DC;
    case 39u: goto L_0897E2E4;
    case 40u: goto L_0897E2EC;
    case 41u: goto L_0897E30C;
    case 42u: goto L_0897E318;
    case 43u: goto L_0897E320;
    case 44u: goto L_0897E33C;
    case 45u: goto L_0897E344;
    case 46u: goto L_0897E34C;
    case 47u: goto L_0897E354;
    case 48u: goto L_0897E368;
    case 49u: goto L_0897E378;
    case 50u: goto L_0897E388;
    case 51u: goto L_0897E390;
    case 52u: goto L_0897E3A8;
    case 53u: goto L_0897E3B0;
    case 54u: goto L_0897E3D8;
    case 55u: goto L_0897E3F4;
    case 56u: goto L_0897E420;
    case 57u: goto L_0897E44C;
    case 58u: goto L_0897E464;
    case 59u: goto L_0897E46C;
    case 60u: goto L_0897E48C;
    case 61u: goto L_0897E494;
    case 62u: goto L_0897E49C;
    case 63u: goto L_0897E4A4;
    case 64u: goto L_0897E4BC;
    case 65u: goto L_0897E4C8;
    case 66u: goto L_0897E4D8;
    case 67u: goto L_0897E4E4;
    case 68u: goto L_0897E4F0;
    case 69u: goto L_0897E4F8;
    case 70u: goto L_0897E518;
    case 71u: goto L_0897E520;
    case 72u: goto L_0897E550;
    case 73u: goto L_0897E59C;
    case 74u: goto L_0897E5A4;
    case 75u: goto L_0897E5D0;
    case 76u: goto L_0897E5F0;
    case 77u: goto L_0897E634;
    case 78u: goto L_0897E660;
    case 79u: goto L_0897E668;
    case 80u: goto L_0897E670;
    case 81u: goto L_0897E678;
    case 82u: goto L_0897E684;
    case 83u: goto L_0897E698;
    case 84u: goto L_0897E6AC;
    case 85u: goto L_0897E6B4;
    case 86u: goto L_0897E6C4;
    case 87u: goto L_0897E6C8;
    case 88u: goto L_0897E6D8;
    case 89u: goto L_0897E6F4;
    case 90u: goto L_0897E728;
    case 91u: goto L_0897E738;
    case 92u: goto L_0897E740;
    case 93u: goto L_0897E754;
    case 94u: goto L_0897E76C;
    case 95u: goto L_0897E78C;
    case 96u: goto L_0897E794;
    case 97u: goto L_0897E7A0;
    case 98u: goto L_0897E7B8;
    case 99u: goto L_0897E7DC;
    case 100u: goto L_0897E7E8;
    case 101u: goto L_0897E7F0;
    case 102u: goto L_0897E804;
    case 103u: goto L_0897E814;
    case 104u: goto L_0897E828;
    case 105u: goto L_0897E84C;
    case 106u: goto L_0897E864;
    case 107u: goto L_0897E870;
    case 108u: goto L_0897E87C;
    case 109u: goto L_0897E884;
    case 110u: goto L_0897E88C;
    case 111u: goto L_0897E898;
    case 112u: goto L_0897E8A4;
    case 113u: goto L_0897E8B0;
    case 114u: goto L_0897E8B8;
    case 115u: goto L_0897E8D4;
    case 116u: goto L_0897E8E4;
    case 117u: goto L_0897E908;
    case 118u: goto L_0897E914;
    case 119u: goto L_0897E920;
    case 120u: goto L_0897E92C;
    case 121u: goto L_0897E940;
    case 122u: goto L_0897E948;
    case 123u: goto L_0897E96C;
    case 124u: goto L_0897E97C;
    case 125u: goto L_0897E98C;
    case 126u: goto L_0897E998;
    case 127u: goto L_0897E9A0;
    case 128u: goto L_0897E9B0;
    case 129u: goto L_0897E9C8;
    case 130u: goto L_0897E9D4;
    case 131u: goto L_0897E9EC;
    case 132u: goto L_0897E9F4;
    case 133u: goto L_0897EA24;
    case 134u: goto L_0897EA34;
    case 135u: goto L_0897EA40;
    case 136u: goto L_0897EA50;
    case 137u: goto L_0897EA74;
    case 138u: goto L_0897EA7C;
    case 139u: goto L_0897EA84;
    case 140u: goto L_0897EA98;
    case 141u: goto L_0897EAA8;
    case 142u: goto L_0897EAB4;
    case 143u: goto L_0897EABC;
    case 144u: goto L_0897EACC;
    case 145u: goto L_0897EAD8;
    case 146u: goto L_0897EAE0;
    case 147u: goto L_0897EAEC;
    case 148u: goto L_0897EAFC;
    case 149u: goto L_0897EB08;
    case 150u: goto L_0897EB10;
    case 151u: goto L_0897EB18;
    case 152u: goto L_0897EB24;
    case 153u: goto L_0897EB2C;
    case 154u: goto L_0897EB50;
    case 155u: goto L_0897EB78;
    case 156u: goto L_0897EBB0;
    case 157u: goto L_0897EBBC;
    case 158u: goto L_0897EBD0;
    case 159u: goto L_0897EBD8;
    case 160u: goto L_0897EBF4;
    case 161u: goto L_0897EC00;
    case 162u: goto L_0897EC14;
    case 163u: goto L_0897EC44;
    case 164u: goto L_0897EC54;
    case 165u: goto L_0897EC60;
    case 166u: goto L_0897EC70;
    case 167u: goto L_0897EC94;
    case 168u: goto L_0897EC9C;
    case 169u: goto L_0897ECA4;
    case 170u: goto L_0897ECB0;
    case 171u: goto L_0897ECBC;
    case 172u: goto L_0897ECCC;
    case 173u: goto L_0897ECD8;
    case 174u: goto L_0897ECE0;
    case 175u: goto L_0897ECF0;
    case 176u: goto L_0897ED28;
    case 177u: goto L_0897ED30;
    case 178u: goto L_0897ED40;
    case 179u: goto L_0897ED4C;
    case 180u: goto L_0897ED50;
    case 181u: goto L_0897ED78;
    case 182u: goto L_0897EDA0;
    case 183u: goto L_0897EDAC;
    case 184u: goto L_0897EDB8;
    case 185u: goto L_0897EDD4;
    case 186u: goto L_0897EDE0;
    case 187u: goto L_0897EDF4;
    case 188u: goto L_0897EE10;
    case 189u: goto L_0897EE28;
    case 190u: goto L_0897EE3C;
    case 191u: goto L_0897EE58;
    case 192u: goto L_0897EE68;
    case 193u: goto L_0897EE7C;
    case 194u: goto L_0897EE88;
    case 195u: goto L_0897EE94;
    case 196u: goto L_0897EE9C;
    case 197u: goto L_0897EEAC;
    case 198u: goto L_0897EEB4;
    case 199u: goto L_0897EEF8;
    case 200u: goto L_0897EF0C;
    case 201u: goto L_0897EF18;
    case 202u: goto L_0897EF20;
    case 203u: goto L_0897EF34;
    case 204u: goto L_0897EF40;
    case 205u: goto L_0897EF6C;
    case 206u: goto L_0897EF78;
    case 207u: goto L_0897EF80;
    case 208u: goto L_0897EFA4;
    case 209u: goto L_0897EFB0;
    case 210u: goto L_0897EFD4;
    case 211u: goto L_0897EFE0;
    case 212u: goto L_0897EFE8;
    case 213u: goto L_0897EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897E004:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897E018u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20196));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 127u, 0x0897DA54u>(ctx, &aot_mem) && ctx.pc == 0x0897E018u) goto L_0897E018;
    return;
L_0897E018:
    aot_gpr[31] = (0x0897E020u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897E020u) goto L_0897E020;
    return;
L_0897E020:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897E030u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897E030u) goto L_0897E030;
    return;
L_0897E030:
    aot_gpr[2] = (0u | 0u);
    goto L_0897E034;
L_0897E034:
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
L_0897E050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897E09C;
      }
      goto L_0897E08C;
    }
L_0897E08C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E0A8;
      }
      goto L_0897E094;
    }
L_0897E094:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E0B0;
      }
      goto L_0897E09C;
    }
L_0897E09C:
    aot_gpr[3] = (aot_gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0897E1D4;
      }
      goto L_0897E0A8;
    }
L_0897E0A8:
    aot_gpr[31] = (0x0897E0B0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897E0B0u) goto L_0897E0B0;
    return;
L_0897E0B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0897E0C8;
      }
      goto L_0897E0C0;
    }
L_0897E0C0:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0897E110;
      }
      goto L_0897E0C8;
    }
L_0897E0C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[3] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
        goto L_0897E114;
    }
    goto L_0897E0F0;
L_0897E0F0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E104;
      }
      goto L_0897E0F8;
    }
L_0897E0F8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897E104u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897E104u) goto L_0897E104;
    return;
L_0897E104:
    aot_gpr[3] = (aot_gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0897E1D4;
      }
      goto L_0897E110;
    }
L_0897E110:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    goto L_0897E114;
L_0897E114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[5] ^ aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E154;
      }
      goto L_0897E140;
    }
L_0897E140:
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[11] - aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[10] - aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[7] - aot_gpr[6]);
      if (branch_taken) {
          goto L_0897E1B8;
      }
      goto L_0897E154;
    }
L_0897E154:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[6] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[10] != aot_gpr[4];
    aot_gpr[17] = (aot_gpr[9] - aot_gpr[8]);
      if (branch_taken) {
          goto L_0897E1B8;
      }
      goto L_0897E170;
    }
L_0897E170:
    { const bool branch_taken = aot_gpr[11] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897E1B8;
      }
      goto L_0897E178;
    }
L_0897E178:
    aot_gpr[4] = (aot_gpr[3] ^ aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] < aot_gpr[17] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0897E1AC;
      }
      goto L_0897E198;
    }
L_0897E198:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[2]);
      if (branch_taken) {
          goto L_0897E1B0;
      }
      goto L_0897E1AC;
    }
L_0897E1AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_0897E1B0;
L_0897E1B0:
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0897E1B8;
L_0897E1B8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E1CC;
      }
      goto L_0897E1C0;
    }
L_0897E1C0:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897E1CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897E1CCu) goto L_0897E1CC;
    return;
L_0897E1CC:
    aot_gpr[3] = (aot_gpr[17] | 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_0897E1D4;
L_0897E1D4:
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
L_0897E1F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_0897E278;
      }
      goto L_0897E248;
    }
L_0897E248:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897E254u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897E254u) goto L_0897E254;
    return;
L_0897E254:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[30] = (0u | 1u);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(104));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-20132));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-20108));
      if (branch_taken) {
          goto L_0897E2A0;
      }
      goto L_0897E278;
    }
L_0897E278:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[31] = (0x0897E298u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20180));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 127u, 0x0897DA54u>(ctx, &aot_mem) && ctx.pc == 0x0897E298u) goto L_0897E298;
    return;
L_0897E298:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E520;
      }
      goto L_0897E2A0;
    }
L_0897E2A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E2EC;
      }
      goto L_0897E2A8;
    }
L_0897E2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897E2C4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E2C4u) goto L_0897E2C4;
    return;
L_0897E2C4:
    aot_gpr[13] = (aot_gpr[3] | 0u);
    aot_gpr[12] = (aot_gpr[2] | 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897E2E4;
      }
      goto L_0897E2DC;
    }
L_0897E2DC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897E33C;
      }
      goto L_0897E2E4;
    }
L_0897E2E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[13] ^ aot_gpr[3]);
      if (branch_taken) {
          goto L_0897E320;
      }
      goto L_0897E2EC;
    }
L_0897E2EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[31] = (0x0897E30Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20160));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 127u, 0x0897DA54u>(ctx, &aot_mem) && ctx.pc == 0x0897E30Cu) goto L_0897E30C;
    return;
L_0897E30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0897E318u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897E318u) goto L_0897E318;
    return;
L_0897E318:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E520;
      }
      goto L_0897E320;
    }
L_0897E320:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[12] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[13] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E378;
      }
      goto L_0897E33C;
    }
L_0897E33C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897E354;
      }
      goto L_0897E344;
    }
L_0897E344:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897E354;
      }
      goto L_0897E34C;
    }
L_0897E34C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    goto L_0897E354;
L_0897E354:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_0897E368;
L_0897E368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_0897E520;
      }
      goto L_0897E378;
    }
L_0897E378:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897E390;
      }
      goto L_0897E388;
    }
L_0897E388:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E390;
    }
L_0897E390:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E3A8;
    }
L_0897E3A8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E3B0;
    }
L_0897E3B0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[10] = (aot_gpr[7] ^ aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[10] & aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[7] ^ aot_gpr[5]);
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E3D8;
    }
L_0897E3D8:
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E3F4;
    }
L_0897E3F4:
    aot_gpr[9] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[5] ^ aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E420;
    }
L_0897E420:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897E44Cu);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E44Cu) goto L_0897E44C;
    return;
L_0897E44C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[3] | 0u);
    aot_gpr[12] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897E46C;
      }
      goto L_0897E464;
    }
L_0897E464:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897E48C;
      }
      goto L_0897E46C;
    }
L_0897E46C:
    aot_gpr[6] = (aot_gpr[13] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[12] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[13] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4BC;
      }
      goto L_0897E48C;
    }
L_0897E48C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0897E4A4;
      }
      goto L_0897E494;
    }
L_0897E494:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897E4A4;
      }
      goto L_0897E49C;
    }
L_0897E49C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    goto L_0897E4A4;
L_0897E4A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0897E368;
      }
      goto L_0897E4BC;
    }
L_0897E4BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4F8;
      }
      goto L_0897E4C8;
    }
L_0897E4C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897E4D8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 127u, 0x0897DA54u>(ctx, &aot_mem) && ctx.pc == 0x0897E4D8u) goto L_0897E4D8;
    return;
L_0897E4D8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0897E4E4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 23u, 0x08A42140u>(ctx, &aot_mem) && ctx.pc == 0x0897E4E4u) goto L_0897E4E4;
    return;
L_0897E4E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897E4F0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 127u, 0x0897DA54u>(ctx, &aot_mem) && ctx.pc == 0x0897E4F0u) goto L_0897E4F0;
    return;
L_0897E4F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0897E518;
      }
      goto L_0897E4F8;
    }
L_0897E4F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0897E368;
      }
      goto L_0897E518;
    }
L_0897E518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E2A0;
      }
      goto L_0897E520;
    }
L_0897E520:
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
L_0897E550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[3] ^ aot_gpr[13]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[15] = (aot_gpr[2] < aot_gpr[12] ? 1u : 0u);
    aot_gpr[14] = (aot_gpr[3] < aot_gpr[13] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[15]);
    aot_gpr[11] = (aot_gpr[9] | 0u);
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897E5A4;
      }
      goto L_0897E59C;
    }
L_0897E59C:
    aot_gpr[11] = (aot_gpr[13] | 0u);
    aot_gpr[10] = (aot_gpr[12] | 0u);
    goto L_0897E5A4;
L_0897E5A4:
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[12] = (aot_gpr[3] ^ aot_gpr[11]);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[13] = (aot_gpr[3] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[12] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[13]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
      if (branch_taken) {
          goto L_0897E5F0;
      }
      goto L_0897E5D0;
    }
L_0897E5D0:
    aot_gpr[2] = (aot_gpr[11] ^ aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[2] & aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[3]);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E670;
      }
      goto L_0897E5F0;
    }
L_0897E5F0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[3] + aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (aot_gpr[7] ^ aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[2] & aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[3]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E668;
      }
      goto L_0897E634;
    }
L_0897E634:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] ^ aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[11]);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[10]);
      if (branch_taken) {
          goto L_0897E678;
      }
      goto L_0897E660;
    }
L_0897E660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E684;
      }
      goto L_0897E668;
    }
L_0897E668:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 157u);
      if (branch_taken) {
          goto L_0897E6C8;
      }
      goto L_0897E670;
    }
L_0897E670:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 157u);
      if (branch_taken) {
          goto L_0897E6C8;
      }
      goto L_0897E678;
    }
L_0897E678:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    goto L_0897E684;
L_0897E684:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E6B4;
      }
      goto L_0897E698;
    }
L_0897E698:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897E6ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20084));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 127u, 0x0897DA54u>(ctx, &aot_mem) && ctx.pc == 0x0897E6ACu) goto L_0897E6AC;
    return;
L_0897E6AC:
    aot_gpr[31] = (0x0897E6B4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897E6B4u) goto L_0897E6B4;
    return;
L_0897E6B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0897E6C4u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897E6C4u) goto L_0897E6C4;
    return;
L_0897E6C4:
    aot_gpr[2] = (0u | 0u);
    goto L_0897E6C8;
L_0897E6C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E6D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0897E6F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 223u, 0x08979FCCu>(ctx, &aot_mem) && ctx.pc == 0x0897E6F4u) goto L_0897E6F4;
    return;
L_0897E6F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8512));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x0897E728u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 115u, 0x08979768u>(ctx, &aot_mem) && ctx.pc == 0x0897E728u) goto L_0897E728;
    return;
L_0897E728:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(632), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(612));
    aot_gpr[31] = (0x0897E738u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 173u, 0x08A41BA0u>(ctx, &aot_mem) && ctx.pc == 0x0897E738u) goto L_0897E738;
    return;
L_0897E738:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897E740;
L_0897E740:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897E740;
      }
      goto L_0897E754;
    }
L_0897E754:
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
L_0897E76C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0897E78Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897E78Cu) goto L_0897E78C;
    return;
L_0897E78C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897E794;
L_0897E794:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7F0;
      }
      goto L_0897E7A0;
    }
L_0897E7A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897E7B8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897E7B8u) goto L_0897E7B8;
    return;
L_0897E7B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897E7DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E7DCu) goto L_0897E7DC;
    return;
L_0897E7DC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897E7E8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E7E8u) goto L_0897E7E8;
    return;
L_0897E7E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0897E7F0;
L_0897E7F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897E794;
      }
      goto L_0897E804;
    }
L_0897E804:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897E814u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897E814u) goto L_0897E814;
    return;
L_0897E814:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897E8B8;
      }
      goto L_0897E84C;
    }
L_0897E84C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8512));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x0897E864u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897E864u) goto L_0897E864;
    return;
L_0897E864:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(612));
    aot_gpr[31] = (0x0897E870u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897E870u) goto L_0897E870;
    return;
L_0897E870:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897E87Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897E87Cu) goto L_0897E87C;
    return;
L_0897E87C:
    aot_gpr[31] = (0x0897E884u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 194u, 0x08A41CD0u>(ctx, &aot_mem) && ctx.pc == 0x0897E884u) goto L_0897E884;
    return;
L_0897E884:
    aot_gpr[31] = (0x0897E88Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897E76C;
L_0897E88C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897E898u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 117u, 0x089797B0u>(ctx, &aot_mem) && ctx.pc == 0x0897E898u) goto L_0897E898;
    return;
L_0897E898:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897E8A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 8u, 0x0897A074u>(ctx, &aot_mem) && ctx.pc == 0x0897E8A4u) goto L_0897E8A4;
    return;
L_0897E8A4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8B8;
      }
      goto L_0897E8B0;
    }
L_0897E8B0:
    aot_gpr[31] = (0x0897E8B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897E8B8u) goto L_0897E8B8;
    return;
L_0897E8B8:
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
L_0897E8D4:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E8E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897E908u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E908u) goto L_0897E908;
    return;
L_0897E908:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E914:
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E92C;
      }
      goto L_0897E920;
    }
L_0897E920:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_0897E940;
      }
      goto L_0897E92C;
    }
L_0897E92C:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0897E940;
L_0897E940:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E948:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0897E96Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897E96Cu) goto L_0897E96C;
    return;
L_0897E96C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20320)));
    goto L_0897E97C;
L_0897E97C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897E98Cu);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    goto L_0897E914;
L_0897E98C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9A0;
      }
      goto L_0897E998;
    }
L_0897E998:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    goto L_0897E9A0;
L_0897E9A0:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[10] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E97C;
      }
      goto L_0897E9B0;
    }
L_0897E9B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
    aot_gpr[31] = (0x0897E9C8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(612));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897E9C8u) goto L_0897E9C8;
    return;
L_0897E9C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897E9D4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897E9D4u) goto L_0897E9D4;
    return;
L_0897E9D4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E9EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E9F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897EA74;
      }
      goto L_0897EA24;
    }
L_0897EA24:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EA34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20048));
    goto L_0897E9EC;
L_0897EA34:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x0897EA40u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897EA40u) goto L_0897EA40;
    return;
L_0897EA40:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EA50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20028));
    goto L_0897E9EC;
L_0897EA50:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(612));
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(456));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-19960));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-19944));
      if (branch_taken) {
          goto L_0897EA7C;
      }
      goto L_0897EA74;
    }
L_0897EA74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EB50;
      }
      goto L_0897EA7C;
    }
L_0897EA7C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EABC;
      }
      goto L_0897EA84;
    }
L_0897EA84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EAE0;
      }
      goto L_0897EA98;
    }
L_0897EA98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EAA8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0897E914;
L_0897EAA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897EB18;
      }
      goto L_0897EAB4;
    }
L_0897EAB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB10;
      }
      goto L_0897EABC;
    }
L_0897EABC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EACCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20000));
    goto L_0897E9EC;
L_0897EACC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897EAD8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897EAD8u) goto L_0897EAD8;
    return;
L_0897EAD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EB50;
      }
      goto L_0897EAE0;
    }
L_0897EAE0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EAECu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    goto L_0897E9EC;
L_0897EAEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(624), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0897EAFCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 23u, 0x08A42140u>(ctx, &aot_mem) && ctx.pc == 0x0897EAFCu) goto L_0897EAFC;
    return;
L_0897EAFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EB08u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_0897E9EC;
L_0897EB08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_0897EA7C;
      }
      goto L_0897EB10;
    }
L_0897EB10:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
        goto L_0897EB2C;
    }
    goto L_0897EB18;
L_0897EB18:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897EB24u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897EB24u) goto L_0897EB24;
    return;
L_0897EB24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EB50;
      }
      goto L_0897EB2C;
    }
L_0897EB2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19924));
    aot_gpr[6] = (ctx.hi);
    aot_gpr[31] = (0x0897EB50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[6]);
    goto L_0897E9EC;
L_0897EB50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EB78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897EBB0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19908));
    goto L_0897E9EC;
L_0897EBB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EBD8;
      }
      goto L_0897EBBC;
    }
L_0897EBBC:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(628), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EBD0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19896));
    goto L_0897E9EC;
L_0897EBD0:
    aot_gpr[31] = (0x0897EBD8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(612));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897EBD8u) goto L_0897EBD8;
    return;
L_0897EBD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897EBF4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897EBF4u) goto L_0897EBF4;
    return;
L_0897EBF4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x0897EC00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897EC00u) goto L_0897EC00;
    return;
L_0897EC00:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EC14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897EC94;
      }
      goto L_0897EC44;
    }
L_0897EC44:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EC54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19872));
    goto L_0897E9EC;
L_0897EC54:
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x0897EC60u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 123u, 0x08979824u>(ctx, &aot_mem) && ctx.pc == 0x0897EC60u) goto L_0897EC60;
    return;
L_0897EC60:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897EC70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19852));
    goto L_0897E9EC;
L_0897EC70:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(612));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(456));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-19788));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-19768));
      if (branch_taken) {
          goto L_0897EC9C;
      }
      goto L_0897EC94;
    }
L_0897EC94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897ED50;
      }
      goto L_0897EC9C;
    }
L_0897EC9C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ED30;
      }
      goto L_0897ECA4;
    }
L_0897ECA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECE0;
      }
      goto L_0897ECB0;
    }
L_0897ECB0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897ECBCu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_0897E9EC;
L_0897ECBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(628), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0897ECCCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 23u, 0x08A42140u>(ctx, &aot_mem) && ctx.pc == 0x0897ECCCu) goto L_0897ECCC;
    return;
L_0897ECCC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897ECD8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0897E9EC;
L_0897ECD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_0897EC9C;
      }
      goto L_0897ECE0;
    }
L_0897ECE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(440)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897ECF0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0897E914;
L_0897ECF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19744));
    aot_gpr[6] = (ctx.hi);
    aot_gpr[31] = (0x0897ED28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), aot_gpr[6]);
    goto L_0897E9EC;
L_0897ED28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ED50;
      }
      goto L_0897ED30;
    }
L_0897ED30:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897ED40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19824));
    goto L_0897E9EC;
L_0897ED40:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0897ED4Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897ED4Cu) goto L_0897ED4C;
    return;
L_0897ED4C:
    aot_gpr[2] = (0u | 0u);
    goto L_0897ED50;
L_0897ED50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ED78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(444)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897EDA0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19708));
    goto L_0897E9EC;
L_0897EDA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EDB8;
      }
      goto L_0897EDAC;
    }
L_0897EDAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(624), 0u);
    aot_gpr[31] = (0x0897EDB8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(612));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 25u, 0x08A42194u>(ctx, &aot_mem) && ctx.pc == 0x0897EDB8u) goto L_0897EDB8;
    return;
L_0897EDB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897EDD4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897EDD4u) goto L_0897EDD4;
    return;
L_0897EDD4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x0897EDE0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 125u, 0x08979840u>(ctx, &aot_mem) && ctx.pc == 0x0897EDE0u) goto L_0897EDE0;
    return;
L_0897EDE0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EDF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0897EE10u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897EE10u) goto L_0897EE10;
    return;
L_0897EE10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(444)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[16] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[31] = (0x0897EE28u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897EE28u) goto L_0897EE28;
    return;
L_0897EE28:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EE3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0897EE58u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897EE58u) goto L_0897EE58;
    return;
L_0897EE58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(444)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897EE68u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897EE68u) goto L_0897EE68;
    return;
L_0897EE68:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EE7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EE88:
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EE9C;
      }
      goto L_0897EE94;
    }
L_0897EE94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_0897EEAC;
      }
      goto L_0897EE9C;
    }
L_0897EE9C:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897EEAC;
L_0897EEAC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EEB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20316)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0897EF34;
      }
      goto L_0897EEF8;
    }
L_0897EEF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x0897EF0Cu);
    aot_gpr[6] = (aot_gpr[3] | 0u);
    goto L_0897E914;
L_0897EF0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF20;
      }
      goto L_0897EF18;
    }
L_0897EF18:
    aot_gpr[31] = (0x0897EF20u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EF20u) goto L_0897EF20;
    return;
L_0897EF20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(368)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EEF8;
      }
      goto L_0897EF34;
    }
L_0897EF34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EF40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897EF6Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897EF6Cu) goto L_0897EF6C;
    return;
L_0897EF6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EF78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EF80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897EFA4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897EFA4u) goto L_0897EFA4;
    return;
L_0897EFA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EFB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897EFD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897EFD4u) goto L_0897EFD4;
    return;
L_0897EFD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EFE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EFE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897EFF8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x0897EFF8u) goto L_0897EFF8;
    return;
L_0897EFF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0378(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0378_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_378(Runtime &runtime) {
    runtime.register_generated_unit(378u, 0x0897E000u, 4096u, &recomp_unit_0378, &recomp_unit_0378_entry);
    runtime.register_function(0x0897E004u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E018u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E020u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E030u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E034u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E050u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E08Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E094u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E09Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E0A8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E0B0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E0C0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E0C8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E0F0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E0F8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E104u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E110u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E114u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E140u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E154u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E170u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E178u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E198u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1ACu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1B0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1B8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1C0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1CCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1D4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E1F8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E248u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E254u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E278u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E298u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E2A0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E2A8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E2C4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E2DCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E2E4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E2ECu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E30Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E318u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E320u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E33Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E344u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E34Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E354u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E368u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E378u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E388u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E390u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E3A8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E3B0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E3D8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E3F4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E420u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E44Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E464u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E46Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E48Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E494u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E49Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4A4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4BCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4C8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4D8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4E4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4F0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E4F8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E518u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E520u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E550u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E59Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E5A4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E5D0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E5F0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E634u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E660u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E668u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E670u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E678u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E684u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E698u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E6ACu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E6B4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E6C4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E6C8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E6D8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E6F4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E728u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E738u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E740u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E754u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E76Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E78Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E794u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E7A0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E7B8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E7DCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E7E8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E7F0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E804u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E814u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E828u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E84Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E864u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E870u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E87Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E884u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E88Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E898u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E8A4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E8B0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E8B8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E8D4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E8E4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E908u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E914u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E920u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E92Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E940u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E948u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E96Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E97Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E98Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E998u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E9A0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E9B0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E9C8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E9D4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E9ECu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897E9F4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA24u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA34u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA40u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA50u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA74u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA7Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA84u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EA98u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EAA8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EAB4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EABCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EACCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EAD8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EAE0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EAECu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EAFCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB08u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB10u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB18u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB24u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB2Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB50u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EB78u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EBB0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EBBCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EBD0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EBD8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EBF4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC00u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC14u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC44u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC54u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC60u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC70u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC94u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EC9Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECA4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECB0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECBCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECCCu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECD8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECE0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ECF0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ED28u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ED30u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ED40u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ED4Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ED50u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897ED78u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EDA0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EDACu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EDB8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EDD4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EDE0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EDF4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE10u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE28u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE3Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE58u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE68u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE7Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE88u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE94u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EE9Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EEACu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EEB4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EEF8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF0Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF18u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF20u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF34u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF40u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF6Cu, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF78u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EF80u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EFA4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EFB0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EFD4u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EFE0u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EFE8u, &recomp_unit_0378, "recomp_unit_0378");
    runtime.register_function(0x0897EFF8u, &recomp_unit_0378, "recomp_unit_0378");
}
} // namespace psprecomp
