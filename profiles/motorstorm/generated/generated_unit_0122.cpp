#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0122[1015] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15,
    0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 90, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109,
    0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 124, 0, 125,
    0, 126, 0, 127, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    150, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 171, 0, 0, 0, 172, 0, 173,
    0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206,
};
void recomp_unit_0122_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0887E000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0122[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887E000;
    case 2u: goto L_0887E01C;
    case 3u: goto L_0887E028;
    case 4u: goto L_0887E034;
    case 5u: goto L_0887E080;
    case 6u: goto L_0887E08C;
    case 7u: goto L_0887E094;
    case 8u: goto L_0887E0A0;
    case 9u: goto L_0887E0A8;
    case 10u: goto L_0887E0F8;
    case 11u: goto L_0887E100;
    case 12u: goto L_0887E138;
    case 13u: goto L_0887E158;
    case 14u: goto L_0887E174;
    case 15u: goto L_0887E17C;
    case 16u: goto L_0887E184;
    case 17u: goto L_0887E18C;
    case 18u: goto L_0887E1B4;
    case 19u: goto L_0887E1BC;
    case 20u: goto L_0887E1C4;
    case 21u: goto L_0887E1CC;
    case 22u: goto L_0887E1D4;
    case 23u: goto L_0887E1DC;
    case 24u: goto L_0887E204;
    case 25u: goto L_0887E20C;
    case 26u: goto L_0887E214;
    case 27u: goto L_0887E21C;
    case 28u: goto L_0887E224;
    case 29u: goto L_0887E22C;
    case 30u: goto L_0887E23C;
    case 31u: goto L_0887E244;
    case 32u: goto L_0887E25C;
    case 33u: goto L_0887E280;
    case 34u: goto L_0887E290;
    case 35u: goto L_0887E298;
    case 36u: goto L_0887E2A4;
    case 37u: goto L_0887E2B4;
    case 38u: goto L_0887E2C0;
    case 39u: goto L_0887E2C8;
    case 40u: goto L_0887E2DC;
    case 41u: goto L_0887E2FC;
    case 42u: goto L_0887E340;
    case 43u: goto L_0887E350;
    case 44u: goto L_0887E368;
    case 45u: goto L_0887E388;
    case 46u: goto L_0887E394;
    case 47u: goto L_0887E3A8;
    case 48u: goto L_0887E3B4;
    case 49u: goto L_0887E3D0;
    case 50u: goto L_0887E3F0;
    case 51u: goto L_0887E40C;
    case 52u: goto L_0887E420;
    case 53u: goto L_0887E42C;
    case 54u: goto L_0887E438;
    case 55u: goto L_0887E440;
    case 56u: goto L_0887E448;
    case 57u: goto L_0887E450;
    case 58u: goto L_0887E458;
    case 59u: goto L_0887E45C;
    case 60u: goto L_0887E464;
    case 61u: goto L_0887E4B0;
    case 62u: goto L_0887E4BC;
    case 63u: goto L_0887E4D4;
    case 64u: goto L_0887E4D8;
    case 65u: goto L_0887E4F4;
    case 66u: goto L_0887E50C;
    case 67u: goto L_0887E524;
    case 68u: goto L_0887E558;
    case 69u: goto L_0887E56C;
    case 70u: goto L_0887E57C;
    case 71u: goto L_0887E58C;
    case 72u: goto L_0887E59C;
    case 73u: goto L_0887E5AC;
    case 74u: goto L_0887E5BC;
    case 75u: goto L_0887E5C4;
    case 76u: goto L_0887E5D0;
    case 77u: goto L_0887E5DC;
    case 78u: goto L_0887E600;
    case 79u: goto L_0887E630;
    case 80u: goto L_0887E64C;
    case 81u: goto L_0887E658;
    case 82u: goto L_0887E660;
    case 83u: goto L_0887E668;
    case 84u: goto L_0887E670;
    case 85u: goto L_0887E684;
    case 86u: goto L_0887E6B4;
    case 87u: goto L_0887E6D8;
    case 88u: goto L_0887E6E0;
    case 89u: goto L_0887E6F4;
    case 90u: goto L_0887E6F8;
    case 91u: goto L_0887E700;
    case 92u: goto L_0887E710;
    case 93u: goto L_0887E720;
    case 94u: goto L_0887E730;
    case 95u: goto L_0887E73C;
    case 96u: goto L_0887E750;
    case 97u: goto L_0887E758;
    case 98u: goto L_0887E778;
    case 99u: goto L_0887E7A4;
    case 100u: goto L_0887E7C8;
    case 101u: goto L_0887E7D8;
    case 102u: goto L_0887E7E4;
    case 103u: goto L_0887E7F4;
    case 104u: goto L_0887E814;
    case 105u: goto L_0887E830;
    case 106u: goto L_0887E840;
    case 107u: goto L_0887E850;
    case 108u: goto L_0887E864;
    case 109u: goto L_0887E87C;
    case 110u: goto L_0887E884;
    case 111u: goto L_0887E88C;
    case 112u: goto L_0887E898;
    case 113u: goto L_0887E8B8;
    case 114u: goto L_0887E8DC;
    case 115u: goto L_0887E8E8;
    case 116u: goto L_0887E910;
    case 117u: goto L_0887E91C;
    case 118u: goto L_0887E924;
    case 119u: goto L_0887E92C;
    case 120u: goto L_0887E954;
    case 121u: goto L_0887E960;
    case 122u: goto L_0887E968;
    case 123u: goto L_0887E970;
    case 124u: goto L_0887E974;
    case 125u: goto L_0887E97C;
    case 126u: goto L_0887E984;
    case 127u: goto L_0887E98C;
    case 128u: goto L_0887E990;
    case 129u: goto L_0887E99C;
    case 130u: goto L_0887E9B0;
    case 131u: goto L_0887E9CC;
    case 132u: goto L_0887E9D4;
    case 133u: goto L_0887E9F0;
    case 134u: goto L_0887E9F4;
    case 135u: goto L_0887EA04;
    case 136u: goto L_0887EA1C;
    case 137u: goto L_0887EA34;
    case 138u: goto L_0887EA40;
    case 139u: goto L_0887EA58;
    case 140u: goto L_0887EA70;
    case 141u: goto L_0887EA7C;
    case 142u: goto L_0887EA9C;
    case 143u: goto L_0887EABC;
    case 144u: goto L_0887EAD0;
    case 145u: goto L_0887EAE4;
    case 146u: goto L_0887EAF4;
    case 147u: goto L_0887EAFC;
    case 148u: goto L_0887EB2C;
    case 149u: goto L_0887EB74;
    case 150u: goto L_0887EB80;
    case 151u: goto L_0887EB88;
    case 152u: goto L_0887EB8C;
    case 153u: goto L_0887EBB8;
    case 154u: goto L_0887EBC4;
    case 155u: goto L_0887EBCC;
    case 156u: goto L_0887EBD4;
    case 157u: goto L_0887EBFC;
    case 158u: goto L_0887EC08;
    case 159u: goto L_0887EC10;
    case 160u: goto L_0887EC18;
    case 161u: goto L_0887EC50;
    case 162u: goto L_0887EC60;
    case 163u: goto L_0887EC88;
    case 164u: goto L_0887ECAC;
    case 165u: goto L_0887ECD0;
    case 166u: goto L_0887ED14;
    case 167u: goto L_0887ED38;
    case 168u: goto L_0887ED4C;
    case 169u: goto L_0887ED58;
    case 170u: goto L_0887ED60;
    case 171u: goto L_0887ED64;
    case 172u: goto L_0887ED74;
    case 173u: goto L_0887ED7C;
    case 174u: goto L_0887ED8C;
    case 175u: goto L_0887ED94;
    case 176u: goto L_0887EDB4;
    case 177u: goto L_0887EDD0;
    case 178u: goto L_0887EE08;
    case 179u: goto L_0887EE14;
    case 180u: goto L_0887EE24;
    case 181u: goto L_0887EE2C;
    case 182u: goto L_0887EE34;
    case 183u: goto L_0887EE3C;
    case 184u: goto L_0887EE44;
    case 185u: goto L_0887EE4C;
    case 186u: goto L_0887EE54;
    case 187u: goto L_0887EE64;
    case 188u: goto L_0887EE8C;
    case 189u: goto L_0887EE94;
    case 190u: goto L_0887EEA8;
    case 191u: goto L_0887EEB0;
    case 192u: goto L_0887EEB4;
    case 193u: goto L_0887EED4;
    case 194u: goto L_0887EEE8;
    case 195u: goto L_0887EF08;
    case 196u: goto L_0887EF14;
    case 197u: goto L_0887EF28;
    case 198u: goto L_0887EF3C;
    case 199u: goto L_0887EF48;
    case 200u: goto L_0887EF60;
    case 201u: goto L_0887EF74;
    case 202u: goto L_0887EF80;
    case 203u: goto L_0887EF98;
    case 204u: goto L_0887EFA8;
    case 205u: goto L_0887EFB4;
    case 206u: goto L_0887EFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887E000:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887E01Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E01Cu) goto L_0887E01C;
    return;
L_0887E01C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887E028u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x0887E028u) goto L_0887E028;
    return;
L_0887E028:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0887E034u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x0887E034u) goto L_0887E034;
    return;
L_0887E034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887E094;
      }
      goto L_0887E080;
    }
L_0887E080:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887E08Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 78u, 0x0887D620u>(ctx, &aot_mem) && ctx.pc == 0x0887E08Cu) goto L_0887E08C;
    return;
L_0887E08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E0A0;
      }
      goto L_0887E094;
    }
L_0887E094:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887E0A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 78u, 0x0887D620u>(ctx, &aot_mem) && ctx.pc == 0x0887E0A0u) goto L_0887E0A0;
    return;
L_0887E0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E0F8;
      }
      goto L_0887E0A8;
    }
L_0887E0A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0887E0F8u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 78u, 0x0887D620u>(ctx, &aot_mem) && ctx.pc == 0x0887E0F8u) goto L_0887E0F8;
    return;
L_0887E0F8:
    aot_gpr[31] = (0x0887E100u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 109u, 0x0887D950u>(ctx, &aot_mem) && ctx.pc == 0x0887E100u) goto L_0887E100;
    return;
L_0887E100:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E138:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25640), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E158:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26500)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E17C;
      }
      goto L_0887E174;
    }
L_0887E174:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0887E17C;
L_0887E17C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E184:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E18C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E1C4;
      }
      goto L_0887E1B4;
    }
L_0887E1B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0887E244;
      }
      goto L_0887E1BC;
    }
L_0887E1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E2C8;
      }
      goto L_0887E1C4;
    }
L_0887E1C4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E1DC;
      }
      goto L_0887E1CC;
    }
L_0887E1CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1BC;
      }
      goto L_0887E1D4;
    }
L_0887E1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E21C;
      }
      goto L_0887E1DC;
    }
L_0887E1DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0887E214;
      }
      goto L_0887E204;
    }
L_0887E204:
    aot_gpr[31] = (0x0887E20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 215u, 0x0889ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0887E20Cu) goto L_0887E20C;
    return;
L_0887E20C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0887E214;
L_0887E214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1BC;
      }
      goto L_0887E21C;
    }
L_0887E21C:
    aot_gpr[31] = (0x0887E224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 11u, 0x0889A0BCu>(ctx, &aot_mem) && ctx.pc == 0x0887E224u) goto L_0887E224;
    return;
L_0887E224:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E23C;
      }
      goto L_0887E22C;
    }
L_0887E22C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x0887E23Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x0887E23Cu) goto L_0887E23C;
    return;
L_0887E23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1BC;
      }
      goto L_0887E244;
    }
L_0887E244:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10584));
    aot_gpr[31] = (0x0887E25Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10600));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E25Cu) goto L_0887E25C;
    return;
L_0887E25C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E2C0;
      }
      goto L_0887E280;
    }
L_0887E280:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E2A4;
      }
      goto L_0887E290;
    }
L_0887E290:
    aot_gpr[31] = (0x0887E298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 215u, 0x0889ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0887E298u) goto L_0887E298;
    return;
L_0887E298:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0887E2C0;
      }
      goto L_0887E2A4;
    }
L_0887E2A4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887E2B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10612));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887E2B4u) goto L_0887E2B4;
    return;
L_0887E2B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0887E2C0;
L_0887E2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1BC;
      }
      goto L_0887E2C8;
    }
L_0887E2C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E2DC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25648), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E2FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1900)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0887E340u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(10632));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 83u, 0x088BC5F8u>(ctx, &aot_mem) && ctx.pc == 0x0887E340u) goto L_0887E340;
    return;
L_0887E340:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887E350u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E350u) goto L_0887E350;
    return;
L_0887E350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887E368u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E368u) goto L_0887E368;
    return;
L_0887E368:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(10636));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887E388u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E388u) goto L_0887E388;
    return;
L_0887E388:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887E394u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x0887E394u) goto L_0887E394;
    return;
L_0887E394:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887E3A8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10688));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E3A8u) goto L_0887E3A8;
    return;
L_0887E3A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887E3B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x0887E3B4u) goto L_0887E3B4;
    return;
L_0887E3B4:
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
L_0887E3D0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25656), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E3F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E450;
      }
      goto L_0887E40C;
    }
L_0887E40C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E448;
      }
      goto L_0887E420;
    }
L_0887E420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887E440;
      }
      goto L_0887E42C;
    }
L_0887E42C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887E458;
      }
      goto L_0887E438;
    }
L_0887E438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E440;
    }
L_0887E440:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E448;
    }
L_0887E448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E450;
    }
L_0887E450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E458;
    }
L_0887E458:
    aot_gpr[2] = (0u | 0u);
    goto L_0887E45C;
L_0887E45C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10772));
    aot_gpr[31] = (0x0887E4B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10796));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E4B0u) goto L_0887E4B0;
    return;
L_0887E4B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887E4BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0887E4BCu) goto L_0887E4BC;
    return;
L_0887E4BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887E4F4;
      }
      goto L_0887E4D4;
    }
L_0887E4D4:
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_0887E4D8;
L_0887E4D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887E4D8;
      }
      goto L_0887E4F4;
    }
L_0887E4F4:
    aot_gpr[7] = (2184u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x0887E50Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-7184));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 202u, 0x08A39C40u>(ctx, &aot_mem) && ctx.pc == 0x0887E50Cu) goto L_0887E50C;
    return;
L_0887E50C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887E600;
      }
      goto L_0887E524;
    }
L_0887E524:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6488));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6968));
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[30] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[29] | 0u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(10856));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(25668));
    goto L_0887E558;
L_0887E558:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0887E56Cu);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E56Cu) goto L_0887E56C;
    return;
L_0887E56C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0887E57Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E57Cu) goto L_0887E57C;
    return;
L_0887E57C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887E58Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887E58Cu) goto L_0887E58C;
    return;
L_0887E58C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0887E59Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 106u, 0x0888C608u>(ctx, &aot_mem) && ctx.pc == 0x0887E59Cu) goto L_0887E59C;
    return;
L_0887E59C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0887E5ACu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887E5ACu) goto L_0887E5AC;
    return;
L_0887E5AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x0887E5BCu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0887E5BCu) goto L_0887E5BC;
    return;
L_0887E5BC:
    aot_gpr[31] = (0x0887E5C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E5C4u) goto L_0887E5C4;
    return;
L_0887E5C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0887E5DC;
      }
      goto L_0887E5D0;
    }
L_0887E5D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887E5DCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 123u, 0x0888C790u>(ctx, &aot_mem) && ctx.pc == 0x0887E5DCu) goto L_0887E5DC;
    return;
L_0887E5DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(9));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887E558;
      }
      goto L_0887E600;
    }
L_0887E600:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887E670;
      }
      goto L_0887E64C;
    }
L_0887E64C:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[31] = (0x0887E658u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1900)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 43u, 0x088BC2B4u>(ctx, &aot_mem) && ctx.pc == 0x0887E658u) goto L_0887E658;
    return;
L_0887E658:
    aot_gpr[31] = (0x0887E660u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1900)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 97u, 0x088BC6B4u>(ctx, &aot_mem) && ctx.pc == 0x0887E660u) goto L_0887E660;
    return;
L_0887E660:
    aot_gpr[31] = (0x0887E668u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887E464;
L_0887E668:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0887E670;
L_0887E670:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E684:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10772));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0887E6B4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10796));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E6B4u) goto L_0887E6B4;
    return;
L_0887E6B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E73C;
      }
      goto L_0887E6D8;
    }
L_0887E6D8:
    aot_gpr[31] = (0x0887E6E0u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887E6E0u) goto L_0887E6E0;
    return;
L_0887E6E0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2696)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887E6F8;
      }
      goto L_0887E6F4;
    }
L_0887E6F4:
    aot_gpr[16] = (0u | 1u);
    goto L_0887E6F8;
L_0887E6F8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E720;
      }
      goto L_0887E700;
    }
L_0887E700:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887E710u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10808));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887E710u) goto L_0887E710;
    return;
L_0887E710:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887E73C;
      }
      goto L_0887E720;
    }
L_0887E720:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887E730u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10840));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887E730u) goto L_0887E730;
    return;
L_0887E730:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0887E73C;
L_0887E73C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E750:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E758:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25664), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10864));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0887E7A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10892));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E7A4u) goto L_0887E7A4;
    return;
L_0887E7A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E7E4;
      }
      goto L_0887E7C8;
    }
L_0887E7C8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887E7D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887E7D8u) goto L_0887E7D8;
    return;
L_0887E7D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0887E7E4;
L_0887E7E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E7F4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25728), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E814:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24840));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887E88C;
      }
      goto L_0887E840;
    }
L_0887E840:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24840));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_0887E88C;
      }
      goto L_0887E850;
    }
L_0887E850:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E884;
      }
      goto L_0887E864;
    }
L_0887E864:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0887E87Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887E87Cu) goto L_0887E87C;
    return;
L_0887E87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E88C;
      }
      goto L_0887E884;
    }
L_0887E884:
    aot_gpr[31] = (0x0887E88Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0887E88Cu) goto L_0887E88C;
    return;
L_0887E88C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E898:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25736), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E8B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0887E924;
      }
      goto L_0887E8DC;
    }
L_0887E8DC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887E97C;
      }
      goto L_0887E8E8;
    }
L_0887E8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887E910u);
    aot_gpr[6] = (0u | 60u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887E910u) goto L_0887E910;
    return;
L_0887E910:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E968;
      }
      goto L_0887E91C;
    }
L_0887E91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E974;
      }
      goto L_0887E924;
    }
L_0887E924:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887E97C;
      }
      goto L_0887E92C;
    }
L_0887E92C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887E954u);
    aot_gpr[6] = (0u | 48u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887E954u) goto L_0887E954;
    return;
L_0887E954:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E984;
      }
      goto L_0887E960;
    }
L_0887E960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E990;
      }
      goto L_0887E968;
    }
L_0887E968:
    aot_gpr[31] = (0x0887E970u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887EAFC;
L_0887E970:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0887E974;
L_0887E974:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25748), aot_gpr[17]);
    goto L_0887E97C;
L_0887E97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E99C;
      }
      goto L_0887E984;
    }
L_0887E984:
    aot_gpr[31] = (0x0887E98Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 113u, 0x0887F974u>(ctx, &aot_mem) && ctx.pc == 0x0887E98Cu) goto L_0887E98C;
    return;
L_0887E98C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0887E990;
L_0887E990:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25748), aot_gpr[17]);
      if (branch_taken) {
          goto L_0887E97C;
      }
      goto L_0887E99C;
    }
L_0887E99C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E9B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E9F4;
      }
      goto L_0887E9CC;
    }
L_0887E9CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E9F0;
      }
      goto L_0887E9D4;
    }
L_0887E9D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0887E9F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887E9F0u) goto L_0887E9F0;
    return;
L_0887E9F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(25748), 0u);
    goto L_0887E9F4;
L_0887E9F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EA04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA34;
      }
      goto L_0887EA1C;
    }
L_0887EA1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0887EA34u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EA34u) goto L_0887EA34;
    return;
L_0887EA34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EA40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA70;
      }
      goto L_0887EA58;
    }
L_0887EA58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0887EA70u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EA70u) goto L_0887EA70;
    return;
L_0887EA70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EA7C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25744), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EA9C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[15] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (16384u << 16u);
      if (branch_taken) {
          goto L_0887EAD0;
      }
      goto L_0887EABC;
    }
L_0887EABC:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    goto L_0887EAD0;
L_0887EAD0:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_0887EAF4;
      }
      goto L_0887EAE4;
    }
L_0887EAE4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0887EAF4;
L_0887EAF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EAFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0887EB2Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0887E814;
L_0887EB2C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6876));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[19] = (1u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0887EB74u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EB74u) goto L_0887EB74;
    return;
L_0887EB74:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_0887EB8C;
      }
      goto L_0887EB80;
    }
L_0887EB80:
    aot_gpr[31] = (0x0887EB88u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 70u, 0x088C6608u>(ctx, &aot_mem) && ctx.pc == 0x0887EB88u) goto L_0887EB88;
    return;
L_0887EB88:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    goto L_0887EB8C;
L_0887EB8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887EBB8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EBB8u) goto L_0887EBB8;
    return;
L_0887EBB8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (aot_gpr[21] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[20]);
        goto L_0887EBD4;
    }
    goto L_0887EBC4;
L_0887EBC4:
    aot_gpr[31] = (0x0887EBCCu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 70u, 0x088C6608u>(ctx, &aot_mem) && ctx.pc == 0x0887EBCCu) goto L_0887EBCC;
    return;
L_0887EBCC:
    aot_gpr[20] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    goto L_0887EBD4;
L_0887EBD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0887EBFCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EBFCu) goto L_0887EBFC;
    return;
L_0887EBFC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (aot_gpr[19] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[17]);
        goto L_0887EC18;
    }
    goto L_0887EC08;
L_0887EC08:
    aot_gpr[31] = (0x0887EC10u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 70u, 0x088C6608u>(ctx, &aot_mem) && ctx.pc == 0x0887EC10u) goto L_0887EC10;
    return;
L_0887EC10:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    goto L_0887EC18;
L_0887EC18:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(7928)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25353)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25360)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2264)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2248)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(7932));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887EC60;
      }
      goto L_0887EC50;
    }
L_0887EC50:
    aot_gpr[4] = (aot_gpr[4] >> 1u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887EC50;
      }
      goto L_0887EC60;
    }
L_0887EC60:
    aot_gpr[23] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887EC88u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 76u, 0x088C6674u>(ctx, &aot_mem) && ctx.pc == 0x0887EC88u) goto L_0887EC88;
    return;
L_0887EC88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887ECACu);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 76u, 0x088C6674u>(ctx, &aot_mem) && ctx.pc == 0x0887ECACu) goto L_0887ECAC;
    return;
L_0887ECAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0887ECD0u);
    aot_gpr[11] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 76u, 0x088C6674u>(ctx, &aot_mem) && ctx.pc == 0x0887ECD0u) goto L_0887ECD0;
    return;
L_0887ECD0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7904), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887ED14:
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
          goto L_0887EDB4;
      }
      goto L_0887ED38;
    }
L_0887ED38:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6876));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_0887ED4C;
L_0887ED4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED64;
      }
      goto L_0887ED58;
    }
L_0887ED58:
    aot_gpr[31] = (0x0887ED60u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 72u, 0x088C6630u>(ctx, &aot_mem) && ctx.pc == 0x0887ED60u) goto L_0887ED60;
    return;
L_0887ED60:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_0887ED64;
L_0887ED64:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887ED4C;
      }
      goto L_0887ED74;
    }
L_0887ED74:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0887ED8C;
      }
      goto L_0887ED7C;
    }
L_0887ED7C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24840));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0887ED8C;
L_0887ED8C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887EDB4;
      }
      goto L_0887ED94;
    }
L_0887ED94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0887EDB4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EDB4u) goto L_0887EDB4;
    return;
L_0887EDB4:
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
L_0887EDD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[21] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_0887EE08;
L_0887EE08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE54;
      }
      goto L_0887EE14;
    }
L_0887EE14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
        goto L_0887EE34;
    }
    goto L_0887EE24;
L_0887EE24:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887EE54;
      }
      goto L_0887EE2C;
    }
L_0887EE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE4C;
      }
      goto L_0887EE34;
    }
L_0887EE34:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE54;
      }
      goto L_0887EE3C;
    }
L_0887EE3C:
    aot_gpr[31] = (0x0887EE44u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887EE44u) goto L_0887EE44;
    return;
L_0887EE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE54;
      }
      goto L_0887EE4C;
    }
L_0887EE4C:
    aot_gpr[31] = (0x0887EE54u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 99u, 0x088C6950u>(ctx, &aot_mem) && ctx.pc == 0x0887EE54u) goto L_0887EE54;
    return;
L_0887EE54:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887EE08;
      }
      goto L_0887EE64;
    }
L_0887EE64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0887EEE8;
      }
      goto L_0887EE8C;
    }
L_0887EE8C:
    aot_gpr[10] = (0u | 5u);
    aot_gpr[6] = (0u | 0u);
    goto L_0887EE94;
L_0887EE94:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[8] == aot_gpr[9]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
        goto L_0887EEB4;
    }
    goto L_0887EEA8;
L_0887EEA8:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0887EED4;
      }
      goto L_0887EEB0;
    }
L_0887EEB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    goto L_0887EEB4;
L_0887EEB4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[7] | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7508)));
    goto L_0887EED4;
L_0887EED4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_0887EE94;
      }
      goto L_0887EEE8;
    }
L_0887EEE8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887EF14;
      }
      goto L_0887EF08;
    }
L_0887EF08:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    goto L_0887EF14;
L_0887EF14:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25348)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0887EF28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 171u, 0x08873AD8u>(ctx, &aot_mem) && ctx.pc == 0x0887EF28u) goto L_0887EF28;
    return;
L_0887EF28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    aot_gpr[31] = (0x0887EF3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 153u, 0x088739BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EF3Cu) goto L_0887EF3C;
    return;
L_0887EF3C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EF60;
      }
      goto L_0887EF48;
    }
L_0887EF48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(27456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    goto L_0887EF60;
L_0887EF60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    aot_gpr[31] = (0x0887EF74u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 145u, 0x08873964u>(ctx, &aot_mem) && ctx.pc == 0x0887EF74u) goto L_0887EF74;
    return;
L_0887EF74:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EF98;
      }
      goto L_0887EF80;
    }
L_0887EF80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    goto L_0887EF98;
L_0887EF98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887EFB4;
      }
      goto L_0887EFA8;
    }
L_0887EFA8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    goto L_0887EFB4;
L_0887EFB4:
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
L_0887EFD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(23220)));
    ctx.pc = 0x0887F000u; return;
}

void recomp_unit_0122(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0122_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_122(Runtime &runtime) {
    runtime.register_generated_unit(122u, 0x0887E000u, 4096u, &recomp_unit_0122, &recomp_unit_0122_entry);
    runtime.register_function(0x0887E000u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E01Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E028u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E034u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E080u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E08Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E094u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E0A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E0A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E0F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E100u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E138u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E158u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E174u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E17Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E184u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E18Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E1B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E1BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E1C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E1CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E1D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E1DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E204u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E20Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E214u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E21Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E224u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E22Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E23Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E244u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E25Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E280u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E290u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E298u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E2A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E2B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E2C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E2C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E2DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E2FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E340u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E350u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E368u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E388u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E394u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E3A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E3B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E3D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E3F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E40Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E420u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E42Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E438u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E440u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E448u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E450u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E458u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E45Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E464u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E4B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E4BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E4D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E4D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E4F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E50Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E524u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E558u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E57Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E58Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E59Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E5ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E5BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E5C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E5D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E5DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E600u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E630u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E64Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E658u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E660u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E668u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E670u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E684u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E6B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E6D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E6E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E6F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E6F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E700u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E710u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E720u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E730u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E73Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E750u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E758u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E778u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E7A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E7C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E7D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E7E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E7F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E814u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E830u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E840u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E850u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E864u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E87Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E884u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E88Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E898u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E8B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E8DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E8E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E910u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E91Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E924u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E92Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E954u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E960u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E968u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E970u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E974u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E97Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E984u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E98Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E990u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E99Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E9B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E9CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E9D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E9F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887E9F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA58u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA7Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EA9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EABCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EAD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EAE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EAF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EAFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EB2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EB74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EB80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EB88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EB8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EBB8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EBC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EBCCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EBD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EBFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EC08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EC10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EC18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EC50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EC60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EC88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ECACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ECD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED58u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED7Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887ED94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EDB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EDD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EE94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EEA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EEB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EEB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EED4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EEE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EF98u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EFA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EFB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x0887EFD8u, &recomp_unit_0122, "recomp_unit_0122");
}
} // namespace psprecomp
