#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0434[1023] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 15, 0, 16,
    17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 35, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0,
    0, 46, 0, 0, 47, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65,
    0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117,
    0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 0, 151, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 158, 0, 159,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0,
    212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219,
    0, 0, 220, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226,
};
void recomp_unit_0434_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B6000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0434[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B6000;
    case 2u: goto L_089B6010;
    case 3u: goto L_089B601C;
    case 4u: goto L_089B6030;
    case 5u: goto L_089B6038;
    case 6u: goto L_089B6040;
    case 7u: goto L_089B605C;
    case 8u: goto L_089B6078;
    case 9u: goto L_089B6084;
    case 10u: goto L_089B60A0;
    case 11u: goto L_089B60A8;
    case 12u: goto L_089B60B8;
    case 13u: goto L_089B60D4;
    case 14u: goto L_089B60F0;
    case 15u: goto L_089B60F4;
    case 16u: goto L_089B60FC;
    case 17u: goto L_089B6100;
    case 18u: goto L_089B6104;
    case 19u: goto L_089B612C;
    case 20u: goto L_089B6134;
    case 21u: goto L_089B6144;
    case 22u: goto L_089B6150;
    case 23u: goto L_089B6158;
    case 24u: goto L_089B619C;
    case 25u: goto L_089B61A8;
    case 26u: goto L_089B61B4;
    case 27u: goto L_089B61C4;
    case 28u: goto L_089B61CC;
    case 29u: goto L_089B61D4;
    case 30u: goto L_089B61D8;
    case 31u: goto L_089B6200;
    case 32u: goto L_089B6208;
    case 33u: goto L_089B6224;
    case 34u: goto L_089B6234;
    case 35u: goto L_089B6238;
    case 36u: goto L_089B623C;
    case 37u: goto L_089B6244;
    case 38u: goto L_089B6274;
    case 39u: goto L_089B6284;
    case 40u: goto L_089B6294;
    case 41u: goto L_089B62A4;
    case 42u: goto L_089B62C8;
    case 43u: goto L_089B62D4;
    case 44u: goto L_089B62EC;
    case 45u: goto L_089B62F8;
    case 46u: goto L_089B6304;
    case 47u: goto L_089B6310;
    case 48u: goto L_089B6314;
    case 49u: goto L_089B631C;
    case 50u: goto L_089B6328;
    case 51u: goto L_089B6334;
    case 52u: goto L_089B6344;
    case 53u: goto L_089B635C;
    case 54u: goto L_089B6368;
    case 55u: goto L_089B6374;
    case 56u: goto L_089B6380;
    case 57u: goto L_089B6390;
    case 58u: goto L_089B63A0;
    case 59u: goto L_089B63AC;
    case 60u: goto L_089B63B4;
    case 61u: goto L_089B63C0;
    case 62u: goto L_089B63C8;
    case 63u: goto L_089B63E8;
    case 64u: goto L_089B63F0;
    case 65u: goto L_089B63FC;
    case 66u: goto L_089B6408;
    case 67u: goto L_089B6410;
    case 68u: goto L_089B641C;
    case 69u: goto L_089B6424;
    case 70u: goto L_089B6434;
    case 71u: goto L_089B643C;
    case 72u: goto L_089B6444;
    case 73u: goto L_089B6468;
    case 74u: goto L_089B6478;
    case 75u: goto L_089B6494;
    case 76u: goto L_089B64B8;
    case 77u: goto L_089B64C8;
    case 78u: goto L_089B64D4;
    case 79u: goto L_089B64E0;
    case 80u: goto L_089B64EC;
    case 81u: goto L_089B64F8;
    case 82u: goto L_089B6508;
    case 83u: goto L_089B6518;
    case 84u: goto L_089B6524;
    case 85u: goto L_089B6530;
    case 86u: goto L_089B653C;
    case 87u: goto L_089B6548;
    case 88u: goto L_089B6554;
    case 89u: goto L_089B6560;
    case 90u: goto L_089B656C;
    case 91u: goto L_089B6578;
    case 92u: goto L_089B6594;
    case 93u: goto L_089B65B8;
    case 94u: goto L_089B65C4;
    case 95u: goto L_089B65D0;
    case 96u: goto L_089B65EC;
    case 97u: goto L_089B6610;
    case 98u: goto L_089B6620;
    case 99u: goto L_089B662C;
    case 100u: goto L_089B6638;
    case 101u: goto L_089B6648;
    case 102u: goto L_089B6654;
    case 103u: goto L_089B6660;
    case 104u: goto L_089B6680;
    case 105u: goto L_089B6698;
    case 106u: goto L_089B66AC;
    case 107u: goto L_089B66D0;
    case 108u: goto L_089B66DC;
    case 109u: goto L_089B66E8;
    case 110u: goto L_089B66F4;
    case 111u: goto L_089B6710;
    case 112u: goto L_089B6724;
    case 113u: goto L_089B6748;
    case 114u: goto L_089B6754;
    case 115u: goto L_089B6760;
    case 116u: goto L_089B676C;
    case 117u: goto L_089B677C;
    case 118u: goto L_089B6788;
    case 119u: goto L_089B6794;
    case 120u: goto L_089B67A0;
    case 121u: goto L_089B67AC;
    case 122u: goto L_089B67C8;
    case 123u: goto L_089B67EC;
    case 124u: goto L_089B67FC;
    case 125u: goto L_089B6818;
    case 126u: goto L_089B683C;
    case 127u: goto L_089B6848;
    case 128u: goto L_089B6864;
    case 129u: goto L_089B6884;
    case 130u: goto L_089B6890;
    case 131u: goto L_089B689C;
    case 132u: goto L_089B68AC;
    case 133u: goto L_089B68B8;
    case 134u: goto L_089B68CC;
    case 135u: goto L_089B68D0;
    case 136u: goto L_089B68EC;
    case 137u: goto L_089B6910;
    case 138u: goto L_089B6920;
    case 139u: goto L_089B6940;
    case 140u: goto L_089B6984;
    case 141u: goto L_089B6994;
    case 142u: goto L_089B69A0;
    case 143u: goto L_089B69B0;
    case 144u: goto L_089B69B4;
    case 145u: goto L_089B69BC;
    case 146u: goto L_089B69CC;
    case 147u: goto L_089B69D8;
    case 148u: goto L_089B69E4;
    case 149u: goto L_089B69FC;
    case 150u: goto L_089B6A08;
    case 151u: goto L_089B6A18;
    case 152u: goto L_089B6A1C;
    case 153u: goto L_089B6A28;
    case 154u: goto L_089B6A38;
    case 155u: goto L_089B6A48;
    case 156u: goto L_089B6A54;
    case 157u: goto L_089B6A70;
    case 158u: goto L_089B6A74;
    case 159u: goto L_089B6A7C;
    case 160u: goto L_089B6A80;
    case 161u: goto L_089B6AAC;
    case 162u: goto L_089B6ABC;
    case 163u: goto L_089B6AD0;
    case 164u: goto L_089B6AF4;
    case 165u: goto L_089B6B00;
    case 166u: goto L_089B6B10;
    case 167u: goto L_089B6B20;
    case 168u: goto L_089B6B3C;
    case 169u: goto L_089B6B60;
    case 170u: goto L_089B6B70;
    case 171u: goto L_089B6B8C;
    case 172u: goto L_089B6BB0;
    case 173u: goto L_089B6BBC;
    case 174u: goto L_089B6BC8;
    case 175u: goto L_089B6BE4;
    case 176u: goto L_089B6BF8;
    case 177u: goto L_089B6C1C;
    case 178u: goto L_089B6C28;
    case 179u: goto L_089B6C34;
    case 180u: goto L_089B6C40;
    case 181u: goto L_089B6C50;
    case 182u: goto L_089B6C6C;
    case 183u: goto L_089B6C90;
    case 184u: goto L_089B6CA0;
    case 185u: goto L_089B6CAC;
    case 186u: goto L_089B6CCC;
    case 187u: goto L_089B6CF0;
    case 188u: goto L_089B6D00;
    case 189u: goto L_089B6D0C;
    case 190u: goto L_089B6D18;
    case 191u: goto L_089B6D24;
    case 192u: goto L_089B6D40;
    case 193u: goto L_089B6D64;
    case 194u: goto L_089B6D70;
    case 195u: goto L_089B6D8C;
    case 196u: goto L_089B6DB0;
    case 197u: goto L_089B6DD0;
    case 198u: goto L_089B6DF4;
    case 199u: goto L_089B6E00;
    case 200u: goto L_089B6E0C;
    case 201u: goto L_089B6E18;
    case 202u: goto L_089B6E24;
    case 203u: goto L_089B6E30;
    case 204u: goto L_089B6E3C;
    case 205u: goto L_089B6E58;
    case 206u: goto L_089B6E7C;
    case 207u: goto L_089B6E8C;
    case 208u: goto L_089B6EA8;
    case 209u: goto L_089B6ED8;
    case 210u: goto L_089B6EE8;
    case 211u: goto L_089B6EF8;
    case 212u: goto L_089B6F00;
    case 213u: goto L_089B6F0C;
    case 214u: goto L_089B6F14;
    case 215u: goto L_089B6F30;
    case 216u: goto L_089B6F54;
    case 217u: goto L_089B6F64;
    case 218u: goto L_089B6F70;
    case 219u: goto L_089B6F7C;
    case 220u: goto L_089B6F88;
    case 221u: goto L_089B6F9C;
    case 222u: goto L_089B6FA0;
    case 223u: goto L_089B6FBC;
    case 224u: goto L_089B6FE0;
    case 225u: goto L_089B6FEC;
    case 226u: goto L_089B6FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B6000:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089B612C;
      }
      goto L_089B6010;
    }
L_089B6010:
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B60F4;
      }
      goto L_089B601C;
    }
L_089B601C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    goto L_089B6078;
L_089B6030:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[20];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089B60A0;
      }
      goto L_089B6038;
    }
L_089B6038:
    aot_gpr[31] = (0x089B6040u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6040u) goto L_089B6040;
    return;
L_089B6040:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B605Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 253u, 0x089B5EB4u>(ctx, &aot_mem) && ctx.pc == 0x089B605Cu) goto L_089B605C;
    return;
L_089B605C:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[18] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B60F0;
      }
      goto L_089B6078;
    }
L_089B6078:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[21];
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B6030;
      }
      goto L_089B6084;
    }
L_089B6084:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[20];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089B6038;
      }
      goto L_089B60A0;
    }
L_089B60A0:
    aot_gpr[31] = (0x089B60A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 199u, 0x089B5A70u>(ctx, &aot_mem) && ctx.pc == 0x089B60A8u) goto L_089B60A8;
    return;
L_089B60A8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089B60B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B60B8u) goto L_089B60B8;
    return;
L_089B60B8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B60D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 253u, 0x089B5EB4u>(ctx, &aot_mem) && ctx.pc == 0x089B60D4u) goto L_089B60D4;
    return;
L_089B60D4:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[18] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B6078;
      }
      goto L_089B60F0;
    }
L_089B60F0:
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[6] ? 1u : 0u);
    goto L_089B60F4;
L_089B60F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B6100;
      }
      goto L_089B60FC;
    }
L_089B60FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B6100;
L_089B6100:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089B6104;
L_089B6104:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B612C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089B6010;
L_089B6134:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 268u, 0x089B5FF4u>(ctx, &aot_mem); return;
L_089B6144:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[3] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
        goto L_089B6100;
    }
    goto L_089B6150;
L_089B6150:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089B6104;
L_089B6158:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B619Cu);
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B619Cu) goto L_089B619C;
    return;
L_089B619C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B61A8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B61A8u) goto L_089B61A8;
    return;
L_089B61A8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B61B4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B61B4u) goto L_089B61B4;
    return;
L_089B61B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089B6274;
      }
      goto L_089B61C4;
    }
L_089B61C4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089B6368;
      }
      goto L_089B61CC;
    }
L_089B61CC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089B6200;
      }
      goto L_089B61D4;
    }
L_089B61D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089B61D8;
L_089B61D8:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6200:
    aot_gpr[31] = (0x089B6208u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6208u) goto L_089B6208;
    return;
L_089B6208:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(156));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x089B6224u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 143u, 0x0899499Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6224u) goto L_089B6224;
    return;
L_089B6224:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089B61D8;
      }
      goto L_089B6234;
    }
L_089B6234:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(192));
    goto L_089B6238;
L_089B6238:
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[18] ? 1u : 0u);
    goto L_089B623C;
L_089B623C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B61D4;
      }
      goto L_089B6244;
    }
L_089B6244:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6274:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6284u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6284u) goto L_089B6284;
    return;
L_089B6284:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6294u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6294u) goto L_089B6294;
    return;
L_089B6294:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B62A4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B62A4u) goto L_089B62A4;
    return;
L_089B62A4:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089B62C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 74u, 0x08994488u>(ctx, &aot_mem) && ctx.pc == 0x089B62C8u) goto L_089B62C8;
    return;
L_089B62C8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B62D4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B62D4u) goto L_089B62D4;
    return;
L_089B62D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(192));
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    if (aot_gpr[2] == 0u) aot_gpr[21] = (aot_gpr[3]);
      if (branch_taken) {
          goto L_089B63AC;
      }
      goto L_089B62EC;
    }
L_089B62EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[4] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), aot_gpr[21]);
        goto L_089B62F8;
    }
    goto L_089B62F8;
L_089B62F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (0x089B6304u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6304u) goto L_089B6304;
    return;
L_089B6304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == aot_gpr[18]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_089B643C;
    }
    goto L_089B6310;
L_089B6310:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089B6314;
L_089B6314:
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_089B63C0;
    }
    goto L_089B631C;
L_089B631C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6328u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6328u) goto L_089B6328;
    return;
L_089B6328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[18] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B6424;
      }
      goto L_089B6334;
    }
L_089B6334:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), aot_gpr[18]);
        goto L_089B641C;
    }
    goto L_089B6344;
L_089B6344:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (0x089B635Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 265u, 0x089B5F98u>(ctx, &aot_mem) && ctx.pc == 0x089B635Cu) goto L_089B635C;
    return;
L_089B635C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    goto L_089B6238;
L_089B6368:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089B6374u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6374u) goto L_089B6374;
    return;
L_089B6374:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6380u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6380u) goto L_089B6380;
    return;
L_089B6380:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089B6410;
      }
      goto L_089B6390;
    }
L_089B6390:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x089B63A0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B63A0u) goto L_089B63A0;
    return;
L_089B63A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
    goto L_089B6238;
L_089B63AC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B6314;
      }
      goto L_089B63B4;
    }
L_089B63B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089B6314;
L_089B63C0:
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
        goto L_089B631C;
    }
    goto L_089B63C8;
L_089B63C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[3] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[3] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089B63F0;
      }
      goto L_089B63E8;
    }
L_089B63E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_089B631C;
L_089B63F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B63FCu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0433_entry, 433u, 199u, 0x089B5A70u>(ctx, &aot_mem) && ctx.pc == 0x089B63FCu) goto L_089B63FC;
    return;
L_089B63FC:
    aot_gpr[3] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089B63F0;
      }
      goto L_089B6408;
    }
L_089B6408:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_089B631C;
L_089B6410:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    goto L_089B6390;
L_089B641C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B6344;
L_089B6424:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(128), 0u);
        goto L_089B6238;
    }
    goto L_089B6434;
L_089B6434:
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[18] ? 1u : 0u);
    goto L_089B623C;
L_089B643C:
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[2]);
    goto L_089B6310;
L_089B6444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6468u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6468u) goto L_089B6468;
    return;
L_089B6468:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089B6478u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6478u) goto L_089B6478;
    return;
L_089B6478:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B64B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B64B8u) goto L_089B64B8;
    return;
L_089B64B8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B64C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B64C8u) goto L_089B64C8;
    return;
L_089B64C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B64D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B64D4u) goto L_089B64D4;
    return;
L_089B64D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B64E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B64E0u) goto L_089B64E0;
    return;
L_089B64E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B64ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B64ECu) goto L_089B64EC;
    return;
L_089B64EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B64F8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B64F8u) goto L_089B64F8;
    return;
L_089B64F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x089B6508u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6508u) goto L_089B6508;
    return;
L_089B6508:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6518u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6518u) goto L_089B6518;
    return;
L_089B6518:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6524u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6524u) goto L_089B6524;
    return;
L_089B6524:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6530u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6530u) goto L_089B6530;
    return;
L_089B6530:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B653Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B653Cu) goto L_089B653C;
    return;
L_089B653C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6548u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6548u) goto L_089B6548;
    return;
L_089B6548:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6554u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6554u) goto L_089B6554;
    return;
L_089B6554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6560u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6560u) goto L_089B6560;
    return;
L_089B6560:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B656Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B656Cu) goto L_089B656C;
    return;
L_089B656C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6578u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6578u) goto L_089B6578;
    return;
L_089B6578:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(180));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B65B8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B65B8u) goto L_089B65B8;
    return;
L_089B65B8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B65C4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B65C4u) goto L_089B65C4;
    return;
L_089B65C4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B65D0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B65D0u) goto L_089B65D0;
    return;
L_089B65D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B65EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6610u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6610u) goto L_089B6610;
    return;
L_089B6610:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6620u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6620u) goto L_089B6620;
    return;
L_089B6620:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B662Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B662Cu) goto L_089B662C;
    return;
L_089B662C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6638u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6638u) goto L_089B6638;
    return;
L_089B6638:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6648u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6648u) goto L_089B6648;
    return;
L_089B6648:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6654u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B6654u) goto L_089B6654;
    return;
L_089B6654:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6660u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6660u) goto L_089B6660;
    return;
L_089B6660:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    aot_gpr[31] = (0x089B6680u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 139u, 0x08994940u>(ctx, &aot_mem) && ctx.pc == 0x089B6680u) goto L_089B6680;
    return;
L_089B6680:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[31] = (0x089B6698u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 74u, 0x08994488u>(ctx, &aot_mem) && ctx.pc == 0x089B6698u) goto L_089B6698;
    return;
L_089B6698:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B66AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B66D0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B66D0u) goto L_089B66D0;
    return;
L_089B66D0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B66DCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B66DCu) goto L_089B66DC;
    return;
L_089B66DC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B66E8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B66E8u) goto L_089B66E8;
    return;
L_089B66E8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B66F4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B66F4u) goto L_089B66F4;
    return;
L_089B66F4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(156));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089B6710u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 143u, 0x0899499Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6710u) goto L_089B6710;
    return;
L_089B6710:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6748u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6748u) goto L_089B6748;
    return;
L_089B6748:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6754u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B6754u) goto L_089B6754;
    return;
L_089B6754:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6760u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6760u) goto L_089B6760;
    return;
L_089B6760:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B676Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B676Cu) goto L_089B676C;
    return;
L_089B676C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B677Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B677Cu) goto L_089B677C;
    return;
L_089B677C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6788u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6788u) goto L_089B6788;
    return;
L_089B6788:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6794u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6794u) goto L_089B6794;
    return;
L_089B6794:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B67A0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B67A0u) goto L_089B67A0;
    return;
L_089B67A0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B67ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089B67ACu) goto L_089B67AC;
    return;
L_089B67AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089B67C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B67ECu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B67ECu) goto L_089B67EC;
    return;
L_089B67EC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089B67FCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B67FCu) goto L_089B67FC;
    return;
L_089B67FC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B683Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B683Cu) goto L_089B683C;
    return;
L_089B683C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6848u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6848u) goto L_089B6848;
    return;
L_089B6848:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_089B6864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6884u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6884u) goto L_089B6884;
    return;
L_089B6884:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6890u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6890u) goto L_089B6890;
    return;
L_089B6890:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B689Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B689Cu) goto L_089B689C;
    return;
L_089B689C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089B68ACu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B68ACu) goto L_089B68AC;
    return;
L_089B68AC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B68B8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B68B8u) goto L_089B68B8;
    return;
L_089B68B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089B68D0;
      }
      goto L_089B68CC;
    }
L_089B68CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    goto L_089B68D0;
L_089B68D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B68EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6910u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6910u) goto L_089B6910;
    return;
L_089B6910:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089B6920u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6920u) goto L_089B6920;
    return;
L_089B6920:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(38));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(36));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B6940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6984u);
    aot_gpr[23] = (aot_gpr[17] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6984u) goto L_089B6984;
    return;
L_089B6984:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089B6994u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6994u) goto L_089B6994;
    return;
L_089B6994:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B69A0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B69A0u) goto L_089B69A0;
    return;
L_089B69A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B6ABC;
      }
      goto L_089B69B0;
    }
L_089B69B0:
    aot_gpr[21] = (0u + 0u);
    goto L_089B69B4;
L_089B69B4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B6A74;
      }
      goto L_089B69BC;
    }
L_089B69BC:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    goto L_089B6A18;
L_089B69CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B69D8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089B69D8u) goto L_089B69D8;
    return;
L_089B69D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089B6AAC;
      }
      goto L_089B69E4;
    }
L_089B69E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B69FCu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B69FCu) goto L_089B69FC;
    return;
L_089B69FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[20];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B6A54;
      }
      goto L_089B6A08;
    }
L_089B6A08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B6A74;
      }
      goto L_089B6A18;
    }
L_089B6A18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089B6A1C;
L_089B6A1C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[22];
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B69CC;
      }
      goto L_089B6A28;
    }
L_089B6A28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[31] = (0x089B6A38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089B6A38u) goto L_089B6A38;
    return;
L_089B6A38:
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089B69CC;
      }
      goto L_089B6A48;
    }
L_089B6A48:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B6A80;
L_089B6A54:
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089B6A1C;
    }
    goto L_089B6A70;
L_089B6A70:
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[21] ? 1u : 0u);
    goto L_089B6A74;
L_089B6A74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B6A80;
      }
      goto L_089B6A7C;
    }
L_089B6A7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B6A80;
L_089B6A80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6AAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (aot_gpr[18] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    goto L_089B69E4;
L_089B6ABC:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[21] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089B69B4;
L_089B6AD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6AF4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6AF4u) goto L_089B6AF4;
    return;
L_089B6AF4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6B00u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6B00u) goto L_089B6B00;
    return;
L_089B6B00:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089B6B10u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6B10u) goto L_089B6B10;
    return;
L_089B6B10:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x089B6B20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6B20u) goto L_089B6B20;
    return;
L_089B6B20:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_089B6B3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6B60u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6B60u) goto L_089B6B60;
    return;
L_089B6B60:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089B6B70u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6B70u) goto L_089B6B70;
    return;
L_089B6B70:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6BB0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6BB0u) goto L_089B6BB0;
    return;
L_089B6BB0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6BBCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6BBCu) goto L_089B6BBC;
    return;
L_089B6BBC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6BC8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6BC8u) goto L_089B6BC8;
    return;
L_089B6BC8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(156));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089B6BE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 143u, 0x0899499Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6BE4u) goto L_089B6BE4;
    return;
L_089B6BE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6C1Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6C1Cu) goto L_089B6C1C;
    return;
L_089B6C1C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6C28u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6C28u) goto L_089B6C28;
    return;
L_089B6C28:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6C34u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6C34u) goto L_089B6C34;
    return;
L_089B6C34:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6C40u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6C40u) goto L_089B6C40;
    return;
L_089B6C40:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x089B6C50u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(600));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6C50u) goto L_089B6C50;
    return;
L_089B6C50:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(636));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_089B6C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6C90u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6C90u) goto L_089B6C90;
    return;
L_089B6C90:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[31] = (0x089B6CA0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6CA0u) goto L_089B6CA0;
    return;
L_089B6CA0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6CACu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6CACu) goto L_089B6CAC;
    return;
L_089B6CAC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B6CCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6CF0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6CF0u) goto L_089B6CF0;
    return;
L_089B6CF0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6D00u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6D00u) goto L_089B6D00;
    return;
L_089B6D00:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6D0Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6D0Cu) goto L_089B6D0C;
    return;
L_089B6D0C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6D18u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6D18u) goto L_089B6D18;
    return;
L_089B6D18:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6D24u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6D24u) goto L_089B6D24;
    return;
L_089B6D24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6D40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6D64u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6D64u) goto L_089B6D64;
    return;
L_089B6D64:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6D70u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6D70u) goto L_089B6D70;
    return;
L_089B6D70:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6D8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6DB0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6DB0u) goto L_089B6DB0;
    return;
L_089B6DB0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B6DD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6DF4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6DF4u) goto L_089B6DF4;
    return;
L_089B6DF4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6E00u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6E00u) goto L_089B6E00;
    return;
L_089B6E00:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6E0Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6E0Cu) goto L_089B6E0C;
    return;
L_089B6E0C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6E18u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6E18u) goto L_089B6E18;
    return;
L_089B6E18:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6E24u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6E24u) goto L_089B6E24;
    return;
L_089B6E24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6E30u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6E30u) goto L_089B6E30;
    return;
L_089B6E30:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6E3Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6E3Cu) goto L_089B6E3C;
    return;
L_089B6E3C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem); return;
L_089B6E58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6E7Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6E7Cu) goto L_089B6E7C;
    return;
L_089B6E7C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (0x089B6E8Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6E8Cu) goto L_089B6E8C;
    return;
L_089B6E8C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B6EA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6ED8u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6ED8u) goto L_089B6ED8;
    return;
L_089B6ED8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6EE8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6EE8u) goto L_089B6EE8;
    return;
L_089B6EE8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6EF8u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6EF8u) goto L_089B6EF8;
    return;
L_089B6EF8:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[18]);
    goto L_089B6F00;
L_089B6F00:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B6F0Cu);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6F0Cu) goto L_089B6F0C;
    return;
L_089B6F0C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[19];
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089B6F00;
      }
      goto L_089B6F14;
    }
L_089B6F14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089B6F30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6F54u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6F54u) goto L_089B6F54;
    return;
L_089B6F54:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6F64u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6F64u) goto L_089B6F64;
    return;
L_089B6F64:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6F70u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6F70u) goto L_089B6F70;
    return;
L_089B6F70:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6F7Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6F7Cu) goto L_089B6F7C;
    return;
L_089B6F7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6F88u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6F88u) goto L_089B6F88;
    return;
L_089B6F88:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_089B6FA0;
      }
      goto L_089B6F9C;
    }
L_089B6F9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    goto L_089B6FA0;
L_089B6FA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B6FBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B6FE0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B6FE0u) goto L_089B6FE0;
    return;
L_089B6FE0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6FECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6FECu) goto L_089B6FEC;
    return;
L_089B6FEC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B6FF8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B6FF8u) goto L_089B6FF8;
    return;
L_089B6FF8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B7004u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0434(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0434_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_434(Runtime &runtime) {
    runtime.register_generated_unit(434u, 0x089B6000u, 4096u, &recomp_unit_0434, &recomp_unit_0434_entry);
    runtime.register_function(0x089B6000u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6010u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B601Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6030u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6038u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6040u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B605Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6078u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6084u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60A0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60A8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60B8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60D4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60F0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60F4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B60FCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6100u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6104u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B612Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6134u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6144u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6150u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6158u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B619Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B61A8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B61B4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B61C4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B61CCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B61D4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B61D8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6200u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6208u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6224u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6234u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6238u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B623Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6244u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6274u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6284u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6294u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B62A4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B62C8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B62D4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B62ECu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B62F8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6304u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6310u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6314u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B631Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6328u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6334u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6344u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B635Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6368u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6374u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6380u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6390u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63A0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63ACu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63B4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63C0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63C8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63E8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63F0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B63FCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6408u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6410u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B641Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6424u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6434u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B643Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6444u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6468u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6478u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6494u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B64B8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B64C8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B64D4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B64E0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B64ECu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B64F8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6508u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6518u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6524u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6530u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B653Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6548u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6554u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6560u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B656Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6578u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6594u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B65B8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B65C4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B65D0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B65ECu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6610u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6620u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B662Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6638u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6648u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6654u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6660u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6680u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6698u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B66ACu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B66D0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B66DCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B66E8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B66F4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6710u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6724u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6748u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6754u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6760u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B676Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B677Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6788u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6794u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B67A0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B67ACu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B67C8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B67ECu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B67FCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6818u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B683Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6848u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6864u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6884u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6890u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B689Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B68ACu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B68B8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B68CCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B68D0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B68ECu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6910u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6920u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6940u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6984u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6994u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69A0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69B0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69B4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69BCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69CCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69D8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69E4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B69FCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A08u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A18u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A1Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A28u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A38u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A48u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A54u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A70u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A74u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A7Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6A80u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6AACu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6ABCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6AD0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6AF4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B00u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B10u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B20u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B3Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B60u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B70u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6B8Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6BB0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6BBCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6BC8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6BE4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6BF8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C1Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C28u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C34u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C40u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C50u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C6Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6C90u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6CA0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6CACu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6CCCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6CF0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D00u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D0Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D18u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D24u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D40u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D64u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D70u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6D8Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6DB0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6DD0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6DF4u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E00u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E0Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E18u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E24u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E30u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E3Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E58u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E7Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6E8Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6EA8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6ED8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6EE8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6EF8u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F00u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F0Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F14u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F30u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F54u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F64u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F70u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F7Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F88u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6F9Cu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6FA0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6FBCu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6FE0u, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6FECu, &recomp_unit_0434, "recomp_unit_0434");
    runtime.register_function(0x089B6FF8u, &recomp_unit_0434, "recomp_unit_0434");
}
} // namespace psprecomp
