#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0162[1000] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0,
    29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 62, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 76, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0,
    86, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 94, 95,
    0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0,
    0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 132, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    144, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0,
    162, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0,
    0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0,
    194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 225, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 231,
};
void recomp_unit_0162_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A6000u;
        entry_id = (entry_delta < 4000u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0162[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A6000;
    case 2u: goto L_088A6034;
    case 3u: goto L_088A604C;
    case 4u: goto L_088A605C;
    case 5u: goto L_088A6068;
    case 6u: goto L_088A607C;
    case 7u: goto L_088A60AC;
    case 8u: goto L_088A60B8;
    case 9u: goto L_088A60C0;
    case 10u: goto L_088A60CC;
    case 11u: goto L_088A60DC;
    case 12u: goto L_088A60E8;
    case 13u: goto L_088A60F0;
    case 14u: goto L_088A610C;
    case 15u: goto L_088A6124;
    case 16u: goto L_088A6138;
    case 17u: goto L_088A613C;
    case 18u: goto L_088A6160;
    case 19u: goto L_088A6194;
    case 20u: goto L_088A61B4;
    case 21u: goto L_088A61D4;
    case 22u: goto L_088A61F4;
    case 23u: goto L_088A6208;
    case 24u: goto L_088A6218;
    case 25u: goto L_088A6238;
    case 26u: goto L_088A6254;
    case 27u: goto L_088A626C;
    case 28u: goto L_088A6278;
    case 29u: goto L_088A6280;
    case 30u: goto L_088A6294;
    case 31u: goto L_088A62BC;
    case 32u: goto L_088A62C4;
    case 33u: goto L_088A62D0;
    case 34u: goto L_088A62D8;
    case 35u: goto L_088A62E0;
    case 36u: goto L_088A62E8;
    case 37u: goto L_088A6304;
    case 38u: goto L_088A6310;
    case 39u: goto L_088A6320;
    case 40u: goto L_088A6330;
    case 41u: goto L_088A6350;
    case 42u: goto L_088A6358;
    case 43u: goto L_088A636C;
    case 44u: goto L_088A6374;
    case 45u: goto L_088A6380;
    case 46u: goto L_088A6390;
    case 47u: goto L_088A63AC;
    case 48u: goto L_088A63CC;
    case 49u: goto L_088A63D8;
    case 50u: goto L_088A63E0;
    case 51u: goto L_088A63F4;
    case 52u: goto L_088A6408;
    case 53u: goto L_088A6410;
    case 54u: goto L_088A642C;
    case 55u: goto L_088A643C;
    case 56u: goto L_088A6450;
    case 57u: goto L_088A6470;
    case 58u: goto L_088A6494;
    case 59u: goto L_088A64A0;
    case 60u: goto L_088A64AC;
    case 61u: goto L_088A64B4;
    case 62u: goto L_088A64B8;
    case 63u: goto L_088A64BC;
    case 64u: goto L_088A64D8;
    case 65u: goto L_088A64E0;
    case 66u: goto L_088A64E8;
    case 67u: goto L_088A6508;
    case 68u: goto L_088A6518;
    case 69u: goto L_088A6524;
    case 70u: goto L_088A6534;
    case 71u: goto L_088A6540;
    case 72u: goto L_088A6548;
    case 73u: goto L_088A6558;
    case 74u: goto L_088A6560;
    case 75u: goto L_088A6568;
    case 76u: goto L_088A656C;
    case 77u: goto L_088A6584;
    case 78u: goto L_088A65A4;
    case 79u: goto L_088A65B0;
    case 80u: goto L_088A65B8;
    case 81u: goto L_088A65C4;
    case 82u: goto L_088A65D4;
    case 83u: goto L_088A65DC;
    case 84u: goto L_088A65F0;
    case 85u: goto L_088A65F8;
    case 86u: goto L_088A6600;
    case 87u: goto L_088A6604;
    case 88u: goto L_088A661C;
    case 89u: goto L_088A6644;
    case 90u: goto L_088A6650;
    case 91u: goto L_088A665C;
    case 92u: goto L_088A6668;
    case 93u: goto L_088A6674;
    case 94u: goto L_088A6678;
    case 95u: goto L_088A667C;
    case 96u: goto L_088A6684;
    case 97u: goto L_088A668C;
    case 98u: goto L_088A66A4;
    case 99u: goto L_088A66AC;
    case 100u: goto L_088A66CC;
    case 101u: goto L_088A66EC;
    case 102u: goto L_088A6704;
    case 103u: goto L_088A670C;
    case 104u: goto L_088A6744;
    case 105u: goto L_088A6750;
    case 106u: goto L_088A6774;
    case 107u: goto L_088A6784;
    case 108u: goto L_088A6790;
    case 109u: goto L_088A67AC;
    case 110u: goto L_088A67F0;
    case 111u: goto L_088A67F8;
    case 112u: goto L_088A6800;
    case 113u: goto L_088A6824;
    case 114u: goto L_088A6828;
    case 115u: goto L_088A6844;
    case 116u: goto L_088A685C;
    case 117u: goto L_088A6864;
    case 118u: goto L_088A6874;
    case 119u: goto L_088A6880;
    case 120u: goto L_088A6898;
    case 121u: goto L_088A68A0;
    case 122u: goto L_088A68A8;
    case 123u: goto L_088A68C0;
    case 124u: goto L_088A68CC;
    case 125u: goto L_088A68E8;
    case 126u: goto L_088A68F8;
    case 127u: goto L_088A6904;
    case 128u: goto L_088A690C;
    case 129u: goto L_088A6914;
    case 130u: goto L_088A691C;
    case 131u: goto L_088A6924;
    case 132u: goto L_088A6928;
    case 133u: goto L_088A692C;
    case 134u: goto L_088A6940;
    case 135u: goto L_088A6950;
    case 136u: goto L_088A6960;
    case 137u: goto L_088A6974;
    case 138u: goto L_088A698C;
    case 139u: goto L_088A6994;
    case 140u: goto L_088A699C;
    case 141u: goto L_088A69A8;
    case 142u: goto L_088A69E8;
    case 143u: goto L_088A69F8;
    case 144u: goto L_088A6A00;
    case 145u: goto L_088A6A14;
    case 146u: goto L_088A6A1C;
    case 147u: goto L_088A6A24;
    case 148u: goto L_088A6A2C;
    case 149u: goto L_088A6A50;
    case 150u: goto L_088A6A58;
    case 151u: goto L_088A6A64;
    case 152u: goto L_088A6A70;
    case 153u: goto L_088A6A78;
    case 154u: goto L_088A6A94;
    case 155u: goto L_088A6AC0;
    case 156u: goto L_088A6ACC;
    case 157u: goto L_088A6AD4;
    case 158u: goto L_088A6ADC;
    case 159u: goto L_088A6AE4;
    case 160u: goto L_088A6AEC;
    case 161u: goto L_088A6AF4;
    case 162u: goto L_088A6B00;
    case 163u: goto L_088A6B10;
    case 164u: goto L_088A6B18;
    case 165u: goto L_088A6B24;
    case 166u: goto L_088A6B34;
    case 167u: goto L_088A6B40;
    case 168u: goto L_088A6B4C;
    case 169u: goto L_088A6B5C;
    case 170u: goto L_088A6B68;
    case 171u: goto L_088A6B78;
    case 172u: goto L_088A6B84;
    case 173u: goto L_088A6B9C;
    case 174u: goto L_088A6BB0;
    case 175u: goto L_088A6BC8;
    case 176u: goto L_088A6BDC;
    case 177u: goto L_088A6BEC;
    case 178u: goto L_088A6C00;
    case 179u: goto L_088A6C10;
    case 180u: goto L_088A6C24;
    case 181u: goto L_088A6C34;
    case 182u: goto L_088A6C48;
    case 183u: goto L_088A6C58;
    case 184u: goto L_088A6C6C;
    case 185u: goto L_088A6C7C;
    case 186u: goto L_088A6C90;
    case 187u: goto L_088A6C9C;
    case 188u: goto L_088A6CB0;
    case 189u: goto L_088A6CBC;
    case 190u: goto L_088A6CC8;
    case 191u: goto L_088A6CDC;
    case 192u: goto L_088A6CE8;
    case 193u: goto L_088A6CF8;
    case 194u: goto L_088A6D00;
    case 195u: goto L_088A6D04;
    case 196u: goto L_088A6D28;
    case 197u: goto L_088A6D60;
    case 198u: goto L_088A6D68;
    case 199u: goto L_088A6D70;
    case 200u: goto L_088A6D84;
    case 201u: goto L_088A6D90;
    case 202u: goto L_088A6DA8;
    case 203u: goto L_088A6DB0;
    case 204u: goto L_088A6DB8;
    case 205u: goto L_088A6DC0;
    case 206u: goto L_088A6DC4;
    case 207u: goto L_088A6DE0;
    case 208u: goto L_088A6E18;
    case 209u: goto L_088A6E28;
    case 210u: goto L_088A6E30;
    case 211u: goto L_088A6E3C;
    case 212u: goto L_088A6E50;
    case 213u: goto L_088A6E64;
    case 214u: goto L_088A6E70;
    case 215u: goto L_088A6E84;
    case 216u: goto L_088A6E90;
    case 217u: goto L_088A6EA0;
    case 218u: goto L_088A6EA8;
    case 219u: goto L_088A6EB4;
    case 220u: goto L_088A6EBC;
    case 221u: goto L_088A6ED0;
    case 222u: goto L_088A6ED8;
    case 223u: goto L_088A6EE0;
    case 224u: goto L_088A6EE8;
    case 225u: goto L_088A6EEC;
    case 226u: goto L_088A6F04;
    case 227u: goto L_088A6F30;
    case 228u: goto L_088A6F4C;
    case 229u: goto L_088A6F68;
    case 230u: goto L_088A6F84;
    case 231u: goto L_088A6F9C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A6000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    aot_gpr[22] = (aot_gpr[9] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x088A6034u);
    aot_gpr[6] = (0u | 320u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6034u) goto L_088A6034;
    return;
L_088A6034:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(27872));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A604Cu);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A604Cu) goto L_088A604C;
    return;
L_088A604C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A605Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28432));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088A605Cu) goto L_088A605C;
    return;
L_088A605C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A6160;
      }
      goto L_088A6068;
    }
L_088A6068:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A6160;
      }
      goto L_088A607C;
    }
L_088A607C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28448));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28456));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28464));
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    goto L_088A60AC;
L_088A60AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A60B8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088A60B8u) goto L_088A60B8;
    return;
L_088A60B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A613C;
      }
      goto L_088A60C0;
    }
L_088A60C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088A60CCu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 184u, 0x088A5EF8u>(ctx, &aot_mem) && ctx.pc == 0x088A60CCu) goto L_088A60CC;
    return;
L_088A60CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A60DCu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 184u, 0x088A5EF8u>(ctx, &aot_mem) && ctx.pc == 0x088A60DCu) goto L_088A60DC;
    return;
L_088A60DC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A613C;
      }
      goto L_088A60E8;
    }
L_088A60E8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A613C;
      }
      goto L_088A60F0;
    }
L_088A60F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A610Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x088A610Cu) goto L_088A610C;
    return;
L_088A610C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6124u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088A6124u) goto L_088A6124;
    return;
L_088A6124:
    aot_gpr[6] = (0u | 32u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088A6138u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 243u, 0x08A3AC74u>(ctx, &aot_mem) && ctx.pc == 0x088A6138u) goto L_088A6138;
    return;
L_088A6138:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    goto L_088A613C;
L_088A613C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A60AC;
      }
      goto L_088A6160;
    }
L_088A6160:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6194:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A61B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A61D4u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x088A61D4u) goto L_088A61D4;
    return;
L_088A61D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5496));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    aot_gpr[31] = (0x088A61F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28472));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x088A61F4u) goto L_088A61F4;
    return;
L_088A61F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[31] = (0x088A6208u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(28492));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6208u) goto L_088A6208;
    return;
L_088A6208:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A6218u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6218u) goto L_088A6218;
    return;
L_088A6218:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_088A6238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A6280;
      }
      goto L_088A6254;
    }
L_088A6254:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5496));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A626Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x088A626Cu) goto L_088A626C;
    return;
L_088A626C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6280;
      }
      goto L_088A6278;
    }
L_088A6278:
    aot_gpr[31] = (0x088A6280u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x088A6280u) goto L_088A6280;
    return;
L_088A6280:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6294:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A62BCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A62BCu) goto L_088A62BC;
    return;
L_088A62BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A62D8;
      }
      goto L_088A62C4;
    }
L_088A62C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
        goto L_088A62E0;
    }
    goto L_088A62D0;
L_088A62D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6320;
      }
      goto L_088A62D8;
    }
L_088A62D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6320;
      }
      goto L_088A62E0;
    }
L_088A62E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6320;
      }
      goto L_088A62E8;
    }
L_088A62E8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A6304u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28500));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A6304u) goto L_088A6304;
    return;
L_088A6304:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x088A6310u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088A6310u) goto L_088A6310;
    return;
L_088A6310:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A6320u);
    aot_gpr[6] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6320u) goto L_088A6320;
    return;
L_088A6320:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6330:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6350:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A636Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A636Cu) goto L_088A636C;
    return;
L_088A636C:
    aot_gpr[31] = (0x088A6374u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6374u) goto L_088A6374;
    return;
L_088A6374:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A6380u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x088A6380u) goto L_088A6380;
    return;
L_088A6380:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A63E0;
      }
      goto L_088A63AC;
    }
L_088A63AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5360));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27212), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A63CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A63CCu) goto L_088A63CC;
    return;
L_088A63CC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A63E0;
      }
      goto L_088A63D8;
    }
L_088A63D8:
    aot_gpr[31] = (0x088A63E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A6358;
L_088A63E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A63F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A6408u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A6408u) goto L_088A6408;
    return;
L_088A6408:
    aot_gpr[31] = (0x088A6410u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6410u) goto L_088A6410;
    return;
L_088A6410:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 69u);
    aot_gpr[31] = (0x088A642Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28580));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x088A642Cu) goto L_088A642C;
    return;
L_088A642C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A643C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A6450u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x088A6450u) goto L_088A6450;
    return;
L_088A6450:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5360));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A64BC;
      }
      goto L_088A6494;
    }
L_088A6494:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x088A64A0u);
    aot_gpr[4] = (0u | 8u);
    goto L_088A63F4;
L_088A64A0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A64B8;
      }
      goto L_088A64AC;
    }
L_088A64AC:
    aot_gpr[31] = (0x088A64B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A643C;
L_088A64B4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088A64B8;
L_088A64B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(27212), aot_gpr[17]);
    goto L_088A64BC;
L_088A64BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27212)));
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
L_088A64D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A64E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A64E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A6508u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6508u) goto L_088A6508;
    return;
L_088A6508:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A6518u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6518u) goto L_088A6518;
    return;
L_088A6518:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6568;
      }
      goto L_088A6524;
    }
L_088A6524:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(28564));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_088A6534;
L_088A6534:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6540u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088A6540u) goto L_088A6540;
    return;
L_088A6540:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6560;
      }
      goto L_088A6548;
    }
L_088A6548:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A6534;
      }
      goto L_088A6558;
    }
L_088A6558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6568;
      }
      goto L_088A6560;
    }
L_088A6560:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A656C;
      }
      goto L_088A6568;
    }
L_088A6568:
    aot_gpr[2] = (0u | 0u);
    goto L_088A656C;
L_088A656C:
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
L_088A6584:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A65A4u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A65A4u) goto L_088A65A4;
    return;
L_088A65A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A65B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A65B0u) goto L_088A65B0;
    return;
L_088A65B0:
    aot_gpr[31] = (0x088A65B8u);
    aot_gpr[18] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A65B8u) goto L_088A65B8;
    return;
L_088A65B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A65C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A65C4u) goto L_088A65C4;
    return;
L_088A65C4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A65D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28612));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A65D4u) goto L_088A65D4;
    return;
L_088A65D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6600;
      }
      goto L_088A65DC;
    }
L_088A65DC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A65F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28624));
    goto L_088A64E8;
L_088A65F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6600;
      }
      goto L_088A65F8;
    }
L_088A65F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A6604;
      }
      goto L_088A6600;
    }
L_088A6600:
    aot_gpr[2] = (0u | 0u);
    goto L_088A6604;
L_088A6604:
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
L_088A661C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088A6644u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28624));
    goto L_088A64E8;
L_088A6644:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6684;
      }
      goto L_088A6650;
    }
L_088A6650:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x088A665Cu);
    aot_gpr[4] = (0u | 304u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A665Cu) goto L_088A665C;
    return;
L_088A665C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6678;
      }
      goto L_088A6668;
    }
L_088A6668:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x088A6674u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088A61B4;
L_088A6674:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A6678;
L_088A6678:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_088A667C;
L_088A667C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A668C;
      }
      goto L_088A6684;
    }
L_088A6684:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088A667C;
      }
      goto L_088A668C;
    }
L_088A668C:
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
L_088A66A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A66AC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27208), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A66CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5296));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088A66ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A66ECu) goto L_088A66EC;
    return;
L_088A66EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6704:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A670C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A6744u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6744u) goto L_088A6744;
    return;
L_088A6744:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A6790;
      }
      goto L_088A6750;
    }
L_088A6750:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A6774u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6774u) goto L_088A6774;
    return;
L_088A6774:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A6784u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6784u) goto L_088A6784;
    return;
L_088A6784:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6750;
      }
      goto L_088A6790;
    }
L_088A6790:
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
L_088A67AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A67F0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A67F0u) goto L_088A67F0;
    return;
L_088A67F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6800;
      }
      goto L_088A67F8;
    }
L_088A67F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A6828;
      }
      goto L_088A6800;
    }
L_088A6800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A6824u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6824u) goto L_088A6824;
    return;
L_088A6824:
    aot_gpr[2] = (0u | 1u);
    goto L_088A6828;
L_088A6828:
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
L_088A6844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A6864;
      }
      goto L_088A685C;
    }
L_088A685C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A6874;
      }
      goto L_088A6864;
    }
L_088A6864:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A6874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6874u) goto L_088A6874;
    return;
L_088A6874:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A68A0;
      }
      goto L_088A6898;
    }
L_088A6898:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A68A8;
      }
      goto L_088A68A0;
    }
L_088A68A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A68C0;
      }
      goto L_088A68A8;
    }
L_088A68A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A68C0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A68C0u) goto L_088A68C0;
    return;
L_088A68C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A68CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A690C;
      }
      goto L_088A68E8;
    }
L_088A68E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A68F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A68F8u) goto L_088A68F8;
    return;
L_088A68F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A6914;
      }
      goto L_088A6904;
    }
L_088A6904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6928;
      }
      goto L_088A690C;
    }
L_088A690C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A692C;
      }
      goto L_088A6914;
    }
L_088A6914:
    aot_gpr[31] = (0x088A691Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A691Cu) goto L_088A691C;
    return;
L_088A691C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6928;
      }
      goto L_088A6924;
    }
L_088A6924:
    aot_gpr[17] = (0u | 1u);
    goto L_088A6928;
L_088A6928:
    aot_gpr[2] = (aot_gpr[17] & 255u);
    goto L_088A692C;
L_088A692C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A699C;
      }
      goto L_088A6950;
    }
L_088A6950:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5296));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_088A699C;
      }
      goto L_088A6960;
    }
L_088A6960:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6994;
      }
      goto L_088A6974;
    }
L_088A6974:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A698Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A698Cu) goto L_088A698C;
    return;
L_088A698C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A699C;
      }
      goto L_088A6994;
    }
L_088A6994:
    aot_gpr[31] = (0x088A699Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088A699Cu) goto L_088A699C;
    return;
L_088A699C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A69A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A69E8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A69E8u) goto L_088A69E8;
    return;
L_088A69E8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A69F8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_088A68CC;
L_088A69F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6A2C;
      }
      goto L_088A6A00;
    }
L_088A6A00:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A6A14u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28648));
    goto L_088A68CC;
L_088A6A14:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088A6A24;
      }
      goto L_088A6A1C;
    }
L_088A6A1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6A58;
      }
      goto L_088A6A24;
    }
L_088A6A24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A6A78;
      }
      goto L_088A6A2C;
    }
L_088A6A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A6A50u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6A50u) goto L_088A6A50;
    return;
L_088A6A50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A6A78;
      }
      goto L_088A6A58;
    }
L_088A6A58:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A6A64u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088A6844;
L_088A6A64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088A6A70u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 12u, 0x0889F0BCu>(ctx, &aot_mem) && ctx.pc == 0x088A6A70u) goto L_088A6A70;
    return;
L_088A6A70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A6A78;
      }
      goto L_088A6A78;
    }
L_088A6A78:
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
L_088A6A94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-512));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(480), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088A6AD4;
      }
      goto L_088A6AC0;
    }
L_088A6AC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6ADC;
      }
      goto L_088A6ACC;
    }
L_088A6ACC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A6D04;
      }
      goto L_088A6AD4;
    }
L_088A6AD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A6D04;
      }
      goto L_088A6ADC;
    }
L_088A6ADC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6ACC;
      }
      goto L_088A6AE4;
    }
L_088A6AE4:
    aot_gpr[31] = (0x088A6AECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 214u, 0x0889EDE4u>(ctx, &aot_mem) && ctx.pc == 0x088A6AECu) goto L_088A6AEC;
    return;
L_088A6AEC:
    aot_gpr[31] = (0x088A6AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6AF4u) goto L_088A6AF4;
    return;
L_088A6AF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A6B00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6B00u) goto L_088A6B00;
    return;
L_088A6B00:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A6B10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28724));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6B10u) goto L_088A6B10;
    return;
L_088A6B10:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6D00;
      }
      goto L_088A6B18;
    }
L_088A6B18:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088A6B24u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(28680));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6B24u) goto L_088A6B24;
    return;
L_088A6B24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A6B34u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6B34u) goto L_088A6B34;
    return;
L_088A6B34:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6CF8;
      }
      goto L_088A6B40;
    }
L_088A6B40:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088A6B4Cu);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(28736));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6B4Cu) goto L_088A6B4C;
    return;
L_088A6B4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A6B5Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6B5Cu) goto L_088A6B5C;
    return;
L_088A6B5C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6CF8;
      }
      goto L_088A6B68;
    }
L_088A6B68:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A6B78u);
    aot_gpr[6] = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6B78u) goto L_088A6B78;
    return;
L_088A6B78:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088A6B84u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(28748));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6B84u) goto L_088A6B84;
    return;
L_088A6B84:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A6B9Cu);
    aot_gpr[7] = (0u | 100u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6B9Cu) goto L_088A6B9C;
    return;
L_088A6B9C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6CF8;
      }
      goto L_088A6BB0;
    }
L_088A6BB0:
    aot_gpr[4] = (aot_gpr[18] << 2u);
    aot_gpr[19] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6BC8u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(28756));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6BC8u) goto L_088A6BC8;
    return;
L_088A6BC8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6BDCu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(404));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6BDCu) goto L_088A6BDC;
    return;
L_088A6BDC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6BECu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(28768));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6BECu) goto L_088A6BEC;
    return;
L_088A6BEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6C00u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(408));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6C00u) goto L_088A6C00;
    return;
L_088A6C00:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6C10u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(28776));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6C10u) goto L_088A6C10;
    return;
L_088A6C10:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6C24u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6C24u) goto L_088A6C24;
    return;
L_088A6C24:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6C34u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(28788));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6C34u) goto L_088A6C34;
    return;
L_088A6C34:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6C48u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(412));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6C48u) goto L_088A6C48;
    return;
L_088A6C48:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6C58u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(28800));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6C58u) goto L_088A6C58;
    return;
L_088A6C58:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6C6Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6C6Cu) goto L_088A6C6C;
    return;
L_088A6C6C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A6C7Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(28816));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6C7Cu) goto L_088A6C7C;
    return;
L_088A6C7C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6C90u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(420));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6C90u) goto L_088A6C90;
    return;
L_088A6C90:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(424));
    aot_gpr[31] = (0x088A6C9Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 218u, 0x0889EE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6C9Cu) goto L_088A6C9C;
    return;
L_088A6C9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[31] = (0x088A6CB0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 17u, 0x0889F0F4u>(ctx, &aot_mem) && ctx.pc == 0x088A6CB0u) goto L_088A6CB0;
    return;
L_088A6CB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[31] = (0x088A6CBCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 15u, 0x0889F0E0u>(ctx, &aot_mem) && ctx.pc == 0x088A6CBCu) goto L_088A6CBC;
    return;
L_088A6CBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[31] = (0x088A6CC8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 14u, 0x0889F0D8u>(ctx, &aot_mem) && ctx.pc == 0x088A6CC8u) goto L_088A6CC8;
    return;
L_088A6CC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[31] = (0x088A6CDCu);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 16u, 0x0889F0E8u>(ctx, &aot_mem) && ctx.pc == 0x088A6CDCu) goto L_088A6CDC;
    return;
L_088A6CDC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A6CE8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 26u, 0x0889F18Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6CE8u) goto L_088A6CE8;
    return;
L_088A6CE8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6BB0;
      }
      goto L_088A6CF8;
    }
L_088A6CF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A6D04;
      }
      goto L_088A6D00;
    }
L_088A6D00:
    aot_gpr[2] = (0u | 0u);
    goto L_088A6D04;
L_088A6D04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088A6D60u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28824));
    goto L_088A68CC;
L_088A6D60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088A6DC0;
      }
      goto L_088A6D68;
    }
L_088A6D68:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6DC0;
      }
      goto L_088A6D70;
    }
L_088A6D70:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A6D84u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28832));
    goto L_088A6880;
L_088A6D84:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6DC0;
      }
      goto L_088A6D90;
    }
L_088A6D90:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A6DA8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28644));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x088A6DA8u) goto L_088A6DA8;
    return;
L_088A6DA8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6DB8;
      }
      goto L_088A6DB0;
    }
L_088A6DB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088A6DB8;
L_088A6DB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A6DC4;
      }
      goto L_088A6DC0;
    }
L_088A6DC0:
    aot_gpr[2] = (0u | 0u);
    goto L_088A6DC4;
L_088A6DC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A6E18u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6E18u) goto L_088A6E18;
    return;
L_088A6E18:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A6E28u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_088A68CC;
L_088A6E28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6EE8;
      }
      goto L_088A6E30;
    }
L_088A6E30:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6EE8;
      }
      goto L_088A6E3C;
    }
L_088A6E3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x088A6E50u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(28848));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E50u) goto L_088A6E50;
    return;
L_088A6E50:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6E64u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6E64u) goto L_088A6E64;
    return;
L_088A6E64:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088A6E70u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(28856));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E70u) goto L_088A6E70;
    return;
L_088A6E70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088A6E84u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6E84u) goto L_088A6E84;
    return;
L_088A6E84:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088A6E90u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(28872));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6E90u) goto L_088A6E90;
    return;
L_088A6E90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088A6EA0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6EA0u) goto L_088A6EA0;
    return;
L_088A6EA0:
    aot_gpr[31] = (0x088A6EA8u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x088A6EA8u) goto L_088A6EA8;
    return;
L_088A6EA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088A6EB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A6EB4u) goto L_088A6EB4;
    return;
L_088A6EB4:
    aot_gpr[31] = (0x088A6EBCu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x088A6EBCu) goto L_088A6EBC;
    return;
L_088A6EBC:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1292));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A6ED0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 205u, 0x0889CB40u>(ctx, &aot_mem) && ctx.pc == 0x088A6ED0u) goto L_088A6ED0;
    return;
L_088A6ED0:
    aot_gpr[31] = (0x088A6ED8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 81u, 0x088C6720u>(ctx, &aot_mem) && ctx.pc == 0x088A6ED8u) goto L_088A6ED8;
    return;
L_088A6ED8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6EE8;
      }
      goto L_088A6EE0;
    }
L_088A6EE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A6EEC;
      }
      goto L_088A6EE8;
    }
L_088A6EE8:
    aot_gpr[2] = (0u | 0u);
    goto L_088A6EEC;
L_088A6EEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6F04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088A6F30u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_088A66CC;
L_088A6F30:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5056));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x088A6F4Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088A66CC;
L_088A6F4C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5248));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x088A6F68u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_088A66CC;
L_088A6F68:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5200));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x088A6F84u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_088A66CC;
L_088A6F84:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5152));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x088A6F9Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088A66CC;
L_088A6F9C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5104));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x088A7000u; return;
}

void recomp_unit_0162(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0162_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_162(Runtime &runtime) {
    runtime.register_generated_unit(162u, 0x088A6000u, 4096u, &recomp_unit_0162, &recomp_unit_0162_entry);
    runtime.register_function(0x088A6000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6034u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A604Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A605Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6068u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A607Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A60F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A610Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6124u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6138u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A613Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6160u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A61B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A61D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A61F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6208u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6218u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6238u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6254u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A626Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6278u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6280u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A62BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A62C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A62D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A62D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A62E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A62E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6304u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6310u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6320u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6330u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6350u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6358u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A636Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6374u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6380u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A63ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A63CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A63D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A63E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A63F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6408u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6410u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A642Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A643Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6450u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6470u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6494u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A64E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6508u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6524u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6534u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6540u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6558u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6568u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A656Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A65F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6600u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A661Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6644u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6650u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A665Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6668u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6678u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A667Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A668Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A66A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A66ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A66CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A66ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6704u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A670Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6744u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6750u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6774u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6784u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A67ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A67F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A67F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6800u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6828u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6844u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A685Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6864u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6874u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6880u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6898u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A68A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A68A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A68C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A68CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A68E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A68F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6904u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A690Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6914u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A691Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6924u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6928u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A692Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6940u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6950u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6960u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6974u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A698Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A699Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A69A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A69E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A69F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6A94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6AC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6ACCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6AD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6ADCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6AE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6AECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6AF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6B9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6BB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6BC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6BDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6BECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6C9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6CB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6CBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6CC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6CDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6CE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6CF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6D90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6DA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6DB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6DB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6DC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6DC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6DE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6E90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6ED0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6ED8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6EECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6F04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6F30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6F4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6F68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6F84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x088A6F9Cu, &recomp_unit_0162, "recomp_unit_0162");
}
} // namespace psprecomp
