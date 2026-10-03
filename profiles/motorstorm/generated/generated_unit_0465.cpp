#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0465[1003] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 10, 0, 0, 11, 0, 0, 12,
    0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 23, 0,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34,
    0, 0, 35, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 46, 0, 47, 0, 0, 48, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 101,
    0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 178, 179, 0,
    0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0,
    0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 219,
};
void recomp_unit_0465_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D5004u;
        entry_id = (entry_delta < 4012u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0465[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D5004;
    case 2u: goto L_089D5018;
    case 3u: goto L_089D5020;
    case 4u: goto L_089D502C;
    case 5u: goto L_089D5030;
    case 6u: goto L_089D503C;
    case 7u: goto L_089D5050;
    case 8u: goto L_089D5058;
    case 9u: goto L_089D5064;
    case 10u: goto L_089D5068;
    case 11u: goto L_089D5074;
    case 12u: goto L_089D5080;
    case 13u: goto L_089D5094;
    case 14u: goto L_089D509C;
    case 15u: goto L_089D50A8;
    case 16u: goto L_089D50AC;
    case 17u: goto L_089D50B8;
    case 18u: goto L_089D50C4;
    case 19u: goto L_089D50D0;
    case 20u: goto L_089D50E4;
    case 21u: goto L_089D50EC;
    case 22u: goto L_089D50F8;
    case 23u: goto L_089D50FC;
    case 24u: goto L_089D5108;
    case 25u: goto L_089D5114;
    case 26u: goto L_089D5128;
    case 27u: goto L_089D5130;
    case 28u: goto L_089D513C;
    case 29u: goto L_089D5140;
    case 30u: goto L_089D514C;
    case 31u: goto L_089D5158;
    case 32u: goto L_089D5164;
    case 33u: goto L_089D5178;
    case 34u: goto L_089D5180;
    case 35u: goto L_089D518C;
    case 36u: goto L_089D5190;
    case 37u: goto L_089D519C;
    case 38u: goto L_089D51A8;
    case 39u: goto L_089D51BC;
    case 40u: goto L_089D51C4;
    case 41u: goto L_089D51D0;
    case 42u: goto L_089D51D4;
    case 43u: goto L_089D51E0;
    case 44u: goto L_089D51EC;
    case 45u: goto L_089D51F8;
    case 46u: goto L_089D520C;
    case 47u: goto L_089D5214;
    case 48u: goto L_089D5220;
    case 49u: goto L_089D5224;
    case 50u: goto L_089D5230;
    case 51u: goto L_089D523C;
    case 52u: goto L_089D5250;
    case 53u: goto L_089D5258;
    case 54u: goto L_089D52B8;
    case 55u: goto L_089D52C0;
    case 56u: goto L_089D52C8;
    case 57u: goto L_089D52DC;
    case 58u: goto L_089D52E4;
    case 59u: goto L_089D52F4;
    case 60u: goto L_089D52FC;
    case 61u: goto L_089D5310;
    case 62u: goto L_089D5344;
    case 63u: goto L_089D5348;
    case 64u: goto L_089D537C;
    case 65u: goto L_089D539C;
    case 66u: goto L_089D53A8;
    case 67u: goto L_089D53AC;
    case 68u: goto L_089D53B4;
    case 69u: goto L_089D5418;
    case 70u: goto L_089D5424;
    case 71u: goto L_089D5430;
    case 72u: goto L_089D543C;
    case 73u: goto L_089D5448;
    case 74u: goto L_089D5454;
    case 75u: goto L_089D5460;
    case 76u: goto L_089D546C;
    case 77u: goto L_089D5478;
    case 78u: goto L_089D5484;
    case 79u: goto L_089D5494;
    case 80u: goto L_089D54A0;
    case 81u: goto L_089D54B0;
    case 82u: goto L_089D54B8;
    case 83u: goto L_089D54D4;
    case 84u: goto L_089D54E4;
    case 85u: goto L_089D54F4;
    case 86u: goto L_089D5508;
    case 87u: goto L_089D5510;
    case 88u: goto L_089D5518;
    case 89u: goto L_089D5520;
    case 90u: goto L_089D5528;
    case 91u: goto L_089D5538;
    case 92u: goto L_089D5584;
    case 93u: goto L_089D558C;
    case 94u: goto L_089D55DC;
    case 95u: goto L_089D55EC;
    case 96u: goto L_089D55FC;
    case 97u: goto L_089D561C;
    case 98u: goto L_089D5634;
    case 99u: goto L_089D5660;
    case 100u: goto L_089D567C;
    case 101u: goto L_089D5680;
    case 102u: goto L_089D5690;
    case 103u: goto L_089D5698;
    case 104u: goto L_089D56A0;
    case 105u: goto L_089D56B0;
    case 106u: goto L_089D56BC;
    case 107u: goto L_089D56C8;
    case 108u: goto L_089D56D4;
    case 109u: goto L_089D56E0;
    case 110u: goto L_089D56E8;
    case 111u: goto L_089D5704;
    case 112u: goto L_089D5740;
    case 113u: goto L_089D574C;
    case 114u: goto L_089D5750;
    case 115u: goto L_089D5760;
    case 116u: goto L_089D5768;
    case 117u: goto L_089D5770;
    case 118u: goto L_089D57A8;
    case 119u: goto L_089D57C8;
    case 120u: goto L_089D57E0;
    case 121u: goto L_089D57F0;
    case 122u: goto L_089D5814;
    case 123u: goto L_089D581C;
    case 124u: goto L_089D582C;
    case 125u: goto L_089D5834;
    case 126u: goto L_089D5848;
    case 127u: goto L_089D5850;
    case 128u: goto L_089D585C;
    case 129u: goto L_089D5888;
    case 130u: goto L_089D58A8;
    case 131u: goto L_089D58AC;
    case 132u: goto L_089D58C8;
    case 133u: goto L_089D58E0;
    case 134u: goto L_089D58EC;
    case 135u: goto L_089D58F4;
    case 136u: goto L_089D590C;
    case 137u: goto L_089D5918;
    case 138u: goto L_089D5924;
    case 139u: goto L_089D5950;
    case 140u: goto L_089D5954;
    case 141u: goto L_089D599C;
    case 142u: goto L_089D59B4;
    case 143u: goto L_089D59C4;
    case 144u: goto L_089D59CC;
    case 145u: goto L_089D59E4;
    case 146u: goto L_089D59F8;
    case 147u: goto L_089D5A00;
    case 148u: goto L_089D5A08;
    case 149u: goto L_089D5A18;
    case 150u: goto L_089D5A34;
    case 151u: goto L_089D5A3C;
    case 152u: goto L_089D5A78;
    case 153u: goto L_089D5A88;
    case 154u: goto L_089D5A90;
    case 155u: goto L_089D5A9C;
    case 156u: goto L_089D5AA8;
    case 157u: goto L_089D5AB4;
    case 158u: goto L_089D5AC8;
    case 159u: goto L_089D5AD4;
    case 160u: goto L_089D5ADC;
    case 161u: goto L_089D5AF8;
    case 162u: goto L_089D5B04;
    case 163u: goto L_089D5B40;
    case 164u: goto L_089D5B4C;
    case 165u: goto L_089D5B78;
    case 166u: goto L_089D5B94;
    case 167u: goto L_089D5B9C;
    case 168u: goto L_089D5BD8;
    case 169u: goto L_089D5C10;
    case 170u: goto L_089D5C18;
    case 171u: goto L_089D5C20;
    case 172u: goto L_089D5C28;
    case 173u: goto L_089D5C3C;
    case 174u: goto L_089D5C44;
    case 175u: goto L_089D5C54;
    case 176u: goto L_089D5C6C;
    case 177u: goto L_089D5C74;
    case 178u: goto L_089D5C78;
    case 179u: goto L_089D5C7C;
    case 180u: goto L_089D5C98;
    case 181u: goto L_089D5CA0;
    case 182u: goto L_089D5CB8;
    case 183u: goto L_089D5CC0;
    case 184u: goto L_089D5CD0;
    case 185u: goto L_089D5CF0;
    case 186u: goto L_089D5D04;
    case 187u: goto L_089D5D18;
    case 188u: goto L_089D5D20;
    case 189u: goto L_089D5D30;
    case 190u: goto L_089D5D4C;
    case 191u: goto L_089D5D64;
    case 192u: goto L_089D5D6C;
    case 193u: goto L_089D5D7C;
    case 194u: goto L_089D5D9C;
    case 195u: goto L_089D5DB0;
    case 196u: goto L_089D5DD4;
    case 197u: goto L_089D5E08;
    case 198u: goto L_089D5E10;
    case 199u: goto L_089D5E20;
    case 200u: goto L_089D5E58;
    case 201u: goto L_089D5E64;
    case 202u: goto L_089D5E8C;
    case 203u: goto L_089D5EAC;
    case 204u: goto L_089D5EBC;
    case 205u: goto L_089D5ED4;
    case 206u: goto L_089D5ED8;
    case 207u: goto L_089D5EE8;
    case 208u: goto L_089D5EFC;
    case 209u: goto L_089D5F04;
    case 210u: goto L_089D5F38;
    case 211u: goto L_089D5F40;
    case 212u: goto L_089D5F54;
    case 213u: goto L_089D5F5C;
    case 214u: goto L_089D5F6C;
    case 215u: goto L_089D5F74;
    case 216u: goto L_089D5F88;
    case 217u: goto L_089D5F90;
    case 218u: goto L_089D5F98;
    case 219u: goto L_089D5FAC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D5004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 263u, 0x089D4FF8u>(ctx, &aot_mem); return;
      }
      goto L_089D5018;
    }
L_089D5018:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D5020:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D502C;
    }
L_089D502C:
    aot_gpr[19] = (0u + 0u);
    goto L_089D5030;
L_089D5030:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D503Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 210u, 0x08990F38u>(ctx, &aot_mem) && ctx.pc == 0x089D503Cu) goto L_089D503C;
    return;
L_089D503C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D5030;
      }
      goto L_089D5050;
    }
L_089D5050:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D5058:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D5064;
    }
L_089D5064:
    aot_gpr[19] = (0u + 0u);
    goto L_089D5068;
L_089D5068:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D5074u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D5074u) goto L_089D5074;
    return;
L_089D5074:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089D5080u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D5080u) goto L_089D5080;
    return;
L_089D5080:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D5068;
      }
      goto L_089D5094;
    }
L_089D5094:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D509C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D50A8;
    }
L_089D50A8:
    aot_gpr[19] = (0u + 0u);
    goto L_089D50AC;
L_089D50AC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D50B8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D50B8u) goto L_089D50B8;
    return;
L_089D50B8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089D50C4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D50C4u) goto L_089D50C4;
    return;
L_089D50C4:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D50D0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D50D0u) goto L_089D50D0;
    return;
L_089D50D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089D50AC;
      }
      goto L_089D50E4;
    }
L_089D50E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D50EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D50F8;
    }
L_089D50F8:
    aot_gpr[19] = (0u + 0u);
    goto L_089D50FC;
L_089D50FC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D5108u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5108u) goto L_089D5108;
    return;
L_089D5108:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D5114u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5114u) goto L_089D5114;
    return;
L_089D5114:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D50FC;
      }
      goto L_089D5128;
    }
L_089D5128:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D5130:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D513C;
    }
L_089D513C:
    aot_gpr[19] = (0u + 0u);
    goto L_089D5140;
L_089D5140:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D514Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D514Cu) goto L_089D514C;
    return;
L_089D514C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D5158u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5158u) goto L_089D5158;
    return;
L_089D5158:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D5164u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5164u) goto L_089D5164;
    return;
L_089D5164:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D5140;
      }
      goto L_089D5178;
    }
L_089D5178:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D5180:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D518C;
    }
L_089D518C:
    aot_gpr[19] = (0u + 0u);
    goto L_089D5190;
L_089D5190:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D519Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D519Cu) goto L_089D519C;
    return;
L_089D519C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D51A8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D51A8u) goto L_089D51A8;
    return;
L_089D51A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D5190;
      }
      goto L_089D51BC;
    }
L_089D51BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D51C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D51D0;
    }
L_089D51D0:
    aot_gpr[19] = (0u + 0u);
    goto L_089D51D4;
L_089D51D4:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D51E0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D51E0u) goto L_089D51E0;
    return;
L_089D51E0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089D51ECu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D51ECu) goto L_089D51EC;
    return;
L_089D51EC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D51F8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D51F8u) goto L_089D51F8;
    return;
L_089D51F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089D51D4;
      }
      goto L_089D520C;
    }
L_089D520C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D5214:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
      }
      goto L_089D5220;
    }
L_089D5220:
    aot_gpr[19] = (0u + 0u);
    goto L_089D5224;
L_089D5224:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089D5230u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 210u, 0x08990F38u>(ctx, &aot_mem) && ctx.pc == 0x089D5230u) goto L_089D5230;
    return;
L_089D5230:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D523Cu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 210u, 0x08990F38u>(ctx, &aot_mem) && ctx.pc == 0x089D523Cu) goto L_089D523C;
    return;
L_089D523C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D5224;
      }
      goto L_089D5250;
    }
L_089D5250:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 233u, 0x089D4E9Cu>(ctx, &aot_mem); return;
L_089D5258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089D5344;
      }
      goto L_089D52B8;
    }
L_089D52B8:
    if (aot_gpr[11] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
        goto L_089D5348;
    }
    goto L_089D52C0;
L_089D52C0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D5344;
      }
      goto L_089D52C8;
    }
L_089D52C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(240)));
    aot_gpr[3] = (aot_gpr[20] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[22] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D5344;
      }
      goto L_089D52DC;
    }
L_089D52DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D5344;
      }
      goto L_089D52E4;
    }
L_089D52E4:
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D5344;
      }
      goto L_089D52F4;
    }
L_089D52F4:
    aot_gpr[31] = (0x089D52FCu);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 109u, 0x089D2700u>(ctx, &aot_mem) && ctx.pc == 0x089D52FCu) goto L_089D52FC;
    return;
L_089D52FC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089D537C;
      }
      goto L_089D5310;
    }
L_089D5310:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5344:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    goto L_089D5348;
L_089D5348:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D537C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[20] << 4u);
    aot_gpr[2] = (aot_gpr[20] << 6u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x089D539Cu);
    aot_gpr[19] = (aot_gpr[6] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089D539Cu) goto L_089D539C;
    return;
L_089D539C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[21] == aot_gpr[3]) {
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[16]));
        goto L_089D53AC;
    }
    goto L_089D53A8;
L_089D53A8:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr[22]));
    goto L_089D53AC;
L_089D53AC:
    aot_gpr[31] = (0x089D53B4u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x089D53B4u) goto L_089D53B4;
    return;
L_089D53B4:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19482));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(18084));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr[30]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[31] = (0x089D5418u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089D5418u) goto L_089D5418;
    return;
L_089D5418:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5424u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D5424u) goto L_089D5424;
    return;
L_089D5424:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5430u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D5430u) goto L_089D5430;
    return;
L_089D5430:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D543Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D543Cu) goto L_089D543C;
    return;
L_089D543C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5448u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D5448u) goto L_089D5448;
    return;
L_089D5448:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5454u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D5454u) goto L_089D5454;
    return;
L_089D5454:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5460u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D5460u) goto L_089D5460;
    return;
L_089D5460:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D546Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D546Cu) goto L_089D546C;
    return;
L_089D546C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5478u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5478u) goto L_089D5478;
    return;
L_089D5478:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D5484u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5484u) goto L_089D5484;
    return;
L_089D5484:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x089D5494u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089D5494u) goto L_089D5494;
    return;
L_089D5494:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D5510;
      }
      goto L_089D54A0;
    }
L_089D54A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089D5508;
      }
      goto L_089D54B0;
    }
L_089D54B0:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(4));
    goto L_089D54B8;
L_089D54B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D54D4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 229u, 0x089D4E40u>(ctx, &aot_mem) && ctx.pc == 0x089D54D4u) goto L_089D54D4;
    return;
L_089D54D4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D5310;
      }
      goto L_089D54E4;
    }
L_089D54E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089D5510;
    }
    goto L_089D54F4;
L_089D54F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D54B8;
      }
      goto L_089D5508;
    }
L_089D5508:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D5310;
L_089D5510:
    aot_gpr[31] = (0x089D5518u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D5518u) goto L_089D5518;
    return;
L_089D5518:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
      if (branch_taken) {
          goto L_089D5528;
      }
      goto L_089D5520;
    }
L_089D5520:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089D5310;
L_089D5528:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D5538u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5538u) goto L_089D5538;
    return;
L_089D5538:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(304)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[21] + static_cast<std::uint32_t>(18084));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[2]);
    aot_gpr[31] = (0x089D5584u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5584u) goto L_089D5584;
    return;
L_089D5584:
    aot_gpr[3] = (0u + 0u);
    goto L_089D5310;
L_089D558C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(512), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(508), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(504), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(500), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(496), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(480), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089D5770;
      }
      goto L_089D55DC;
    }
L_089D55DC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D55ECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D55ECu) goto L_089D55EC;
    return;
L_089D55EC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(220));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089D55FCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089D55FCu) goto L_089D55FC;
    return;
L_089D55FC:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(68));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(19484));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(19492));
    aot_gpr[31] = (0x089D561Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089D561Cu) goto L_089D561C;
    return;
L_089D561C:
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(19492));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20882));
    aot_gpr[31] = (0x089D5634u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089D5634u) goto L_089D5634;
    return;
L_089D5634:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[23] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D567C;
      }
      goto L_089D5660;
    }
L_089D5660:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D57A8;
      }
      goto L_089D567C;
    }
L_089D567C:
    aot_gpr[2] = (0u + 0u);
    goto L_089D5680;
L_089D5680:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089D5690u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D5690u) goto L_089D5690;
    return;
L_089D5690:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
      if (branch_taken) {
          goto L_089D5A34;
      }
      goto L_089D5698;
    }
L_089D5698:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D5A90;
      }
      goto L_089D56A0;
    }
L_089D56A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D56B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D56B0u) goto L_089D56B0;
    return;
L_089D56B0:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D56BCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D56BCu) goto L_089D56BC;
    return;
L_089D56BC:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D56C8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D56C8u) goto L_089D56C8;
    return;
L_089D56C8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D56D4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D56D4u) goto L_089D56D4;
    return;
L_089D56D4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D56E0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D56E0u) goto L_089D56E0;
    return;
L_089D56E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D5B94;
      }
      goto L_089D56E8;
    }
L_089D56E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(19488));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[3]);
    goto L_089D5704;
L_089D5704:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(380)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[3]);
      if (branch_taken) {
          goto L_089D5770;
      }
      goto L_089D5740;
    }
L_089D5740:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D5AF8;
      }
      goto L_089D574C;
    }
L_089D574C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    goto L_089D5750;
L_089D5750:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[31] = (0x089D5760u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5760u) goto L_089D5760;
    return;
L_089D5760:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D5770;
      }
      goto L_089D5768;
    }
L_089D5768:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(52), 0u);
    goto L_089D5770;
L_089D5770:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D57A8:
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(22284));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    aot_gpr[2] = (aot_gpr[5] << 6u);
    aot_gpr[3] = (aot_gpr[5] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089D5680;
      }
      goto L_089D57C8;
    }
L_089D57C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089D5A88;
      }
      goto L_089D57E0;
    }
L_089D57E0:
    aot_gpr[9] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), 0u);
    goto L_089D58C8;
L_089D57F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    goto L_089D5814;
L_089D5814:
    aot_gpr[31] = (0x089D581Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D581Cu) goto L_089D581C;
    return;
L_089D581C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x089D582Cu);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 229u, 0x089D4E40u>(ctx, &aot_mem) && ctx.pc == 0x089D582Cu) goto L_089D582C;
    return;
L_089D582C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 26u, 0x089D6264u>(ctx, &aot_mem); return;
      }
      goto L_089D5834;
    }
L_089D5834:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D5850;
      }
      goto L_089D5848;
    }
L_089D5848:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[2]);
    goto L_089D5850;
L_089D5850:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D585Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 31u, 0x089852F8u>(ctx, &aot_mem) && ctx.pc == 0x089D585Cu) goto L_089D585C;
    return;
L_089D585C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[31] = (0x089D5888u);
    aot_gpr[6] = (ctx.lo);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D5888u) goto L_089D5888;
    return;
L_089D5888:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089D58A8;
L_089D58A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D58AC;
L_089D58AC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D5A78;
      }
      goto L_089D58C8;
    }
L_089D58C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D58A8;
      }
      goto L_089D58E0;
    }
L_089D58E0:
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[9] + 0u);
      if (branch_taken) {
          goto L_089D58F4;
      }
      goto L_089D58EC;
    }
L_089D58EC:
    aot_gpr[5] = (aot_gpr[4] >> 1u);
    aot_gpr[3] = (aot_gpr[23] + static_cast<std::uint32_t>(40));
    goto L_089D58F4;
L_089D58F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[2]);
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
        goto L_089D57F0;
    }
    goto L_089D590C;
L_089D590C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D58AC;
      }
      goto L_089D5918;
    }
L_089D5918:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
        goto L_089D5954;
    }
    goto L_089D5924;
L_089D5924:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D58AC;
      }
      goto L_089D5950;
    }
L_089D5950:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    goto L_089D5954;
L_089D5954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(22284));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[5]);
      if (branch_taken) {
          goto L_089D58A8;
      }
      goto L_089D599C;
    }
L_089D599C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D58A8;
      }
      goto L_089D59B4;
    }
L_089D59B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D58A8;
      }
      goto L_089D59C4;
    }
L_089D59C4:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[19] = (aot_gpr[8] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089D58A8;
      }
      goto L_089D59CC;
    }
L_089D59CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[17] = (aot_gpr[7] + aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[3]);
      if (branch_taken) {
          goto L_089D5BD8;
      }
      goto L_089D59E4;
    }
L_089D59E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[5]);
      if (branch_taken) {
          goto L_089D58A8;
      }
      goto L_089D59F8;
    }
L_089D59F8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          goto L_089D5C78;
      }
      goto L_089D5A00;
    }
L_089D5A00:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          goto L_089D5C78;
      }
      goto L_089D5A08;
    }
L_089D5A08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
        goto L_089D5C7C;
    }
    goto L_089D5A18;
L_089D5A18:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12484));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5A34:
    aot_gpr[31] = (0x089D5A3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D5A3Cu) goto L_089D5A3C;
    return;
L_089D5A3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5A78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[4] | 128u);
      if (branch_taken) {
          goto L_089D5680;
      }
      goto L_089D5A88;
    }
L_089D5A88:
    aot_gpr[2] = (aot_gpr[4] & 127u);
    goto L_089D5680;
L_089D5A90:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089D5A9Cu);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D5A9Cu) goto L_089D5A9C;
    return;
L_089D5A9C:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D5AA8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D5AA8u) goto L_089D5AA8;
    return;
L_089D5AA8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D5AB4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D5AB4u) goto L_089D5AB4;
    return;
L_089D5AB4:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D5AC8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D5AC8u) goto L_089D5AC8;
    return;
L_089D5AC8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D5AD4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D5AD4u) goto L_089D5AD4;
    return;
L_089D5AD4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D5B94;
      }
      goto L_089D5ADC;
    }
L_089D5ADC:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(19484));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[3]);
    goto L_089D5704;
L_089D5AF8:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089D5B04u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(220));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 52u, 0x08985468u>(ctx, &aot_mem) && ctx.pc == 0x089D5B04u) goto L_089D5B04;
    return;
L_089D5B04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(9)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D5B40u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(220));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5B40u) goto L_089D5B40;
    return;
L_089D5B40:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(220));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(156));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(252));
    goto L_089D5B4C;
L_089D5B4C:
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
          goto L_089D5B4C;
      }
      goto L_089D5B78;
    }
L_089D5B78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_089D5750;
L_089D5B94:
    aot_gpr[31] = (0x089D5B9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D5B9Cu) goto L_089D5B9C;
    return;
L_089D5B9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5BD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089D58AC;
    }
    goto L_089D5C10;
L_089D5C10:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D5C18u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5C18u) goto L_089D5C18;
    return;
L_089D5C18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D58AC;
      }
      goto L_089D5C20;
    }
L_089D5C20:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    goto L_089D5814;
L_089D5C28:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 27u, 0x089D626Cu>(ctx, &aot_mem); return;
      }
      goto L_089D5C3C;
    }
L_089D5C3C:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[2]))));
    goto L_089D5C44;
L_089D5C44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[4] = (0u < aot_gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D5C6C;
      }
      goto L_089D5C54;
    }
L_089D5C54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[2]))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    goto L_089D5C6C;
L_089D5C6C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089D5814;
      }
      goto L_089D5C74;
    }
L_089D5C74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    goto L_089D5C78;
L_089D5C78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    goto L_089D5C7C;
L_089D5C7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[3];
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089D59F8;
      }
      goto L_089D5C98;
    }
L_089D5C98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089D58AC;
L_089D5CA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (aot_gpr[2] & 255u);
      if (branch_taken) {
          goto L_089D5CC0;
      }
      goto L_089D5CB8;
    }
L_089D5CB8:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[2] & 255u);
    goto L_089D5CC0;
L_089D5CC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D5C6C;
      }
      goto L_089D5CD0;
    }
L_089D5CD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16016)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((aot_fpr[1] <= aot_fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
        (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 32u, 0x089D62B4u>(ctx, &aot_mem); return;
    }
    goto L_089D5CF0;
L_089D5CF0:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = (aot_gpr[3] & 255u);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    goto L_089D5C6C;
L_089D5D04:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 28u, 0x089D6274u>(ctx, &aot_mem); return;
      }
      goto L_089D5D18;
    }
L_089D5D18:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    goto L_089D5D20;
L_089D5D20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[4] = (0u < aot_gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D5C6C;
      }
      goto L_089D5D30;
    }
L_089D5D30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    goto L_089D5C6C;
L_089D5D4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_089D5D6C;
      }
      goto L_089D5D64;
    }
L_089D5D64:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[2] & 65535u);
    goto L_089D5D6C;
L_089D5D6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D5C6C;
      }
      goto L_089D5D7C;
    }
L_089D5D7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16016)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((aot_fpr[1] <= aot_fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
        (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 31u, 0x089D6298u>(ctx, &aot_mem); return;
    }
    goto L_089D5D9C;
L_089D5D9C:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    goto L_089D5C6C;
L_089D5DB0:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(2))))));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(4))))));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_089D5DD4;
L_089D5DD4:
    rt.unsupported(0x089D5DD4u, 0x0084001Cu, "special? not lowered yet"); return;
L_089D5E08:
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    goto L_089D5C6C;
L_089D5E10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089D5E20;
L_089D5E20:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    rt.unsupported(0x089D5E30u, 0x0063001Cu, "special? not lowered yet"); return;
L_089D5E58:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    goto L_089D5C6C;
L_089D5E64:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    if (aot_gpr[4] == 0u) aot_gpr[6] = (aot_gpr[5]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089D5C6C;
      }
      goto L_089D5E8C;
    }
L_089D5E8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16016)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((aot_fpr[1] <= aot_fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = aot_fpr[0] - aot_fpr[1];
        (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 33u, 0x089D62D0u>(ctx, &aot_mem); return;
    }
    goto L_089D5EAC;
L_089D5EAC:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[3] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[3] < aot_gpr[6] ? 1u : 0u);
    goto L_089D5C6C;
L_089D5EBC:
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[1] < aot_fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[1] = aot_fpr[1] - aot_fpr[0];
        goto L_089D5ED8;
    }
    goto L_089D5ED4;
L_089D5ED4:
    aot_fpr[1] = aot_fpr[0] - aot_fpr[1];
    goto L_089D5ED8;
L_089D5ED8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 37u, 0x089D630Cu>(ctx, &aot_mem); return;
      }
      goto L_089D5EE8;
    }
L_089D5EE8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089D5814;
      }
      goto L_089D5EFC;
    }
L_089D5EFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    goto L_089D5C7C;
L_089D5F04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[2]);
    aot_gpr[31] = (0x089D5F38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 178u, 0x08A3FD18u>(ctx, &aot_mem) && ctx.pc == 0x089D5F38u) goto L_089D5F38;
    return;
L_089D5F38:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 29u, 0x089D627Cu>(ctx, &aot_mem); return;
      }
      goto L_089D5F40;
    }
L_089D5F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[31] = (0x089D5F54u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5F54u) goto L_089D5F54;
    return;
L_089D5F54:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[3]);
    goto L_089D5F5C;
L_089D5F5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 34u, 0x089D62E8u>(ctx, &aot_mem); return;
      }
      goto L_089D5F6C;
    }
L_089D5F6C:
    aot_gpr[31] = (0x089D5F74u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x089D5F74u) goto L_089D5F74;
    return;
L_089D5F74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089D5F88u);
    aot_gpr[7] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 171u, 0x08A3FC90u>(ctx, &aot_mem) && ctx.pc == 0x089D5F88u) goto L_089D5F88;
    return;
L_089D5F88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089D5814;
      }
      goto L_089D5F90;
    }
L_089D5F90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    goto L_089D5C78;
L_089D5F98:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(2))))));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_089D5E20;
L_089D5FAC:
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[0] = aot_fpr[0] - aot_fpr[2];
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_fpr[3] = aot_fpr[3] - aot_fpr[4];
    aot_fpr[5] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_fpr[1] = aot_fpr[1] - aot_fpr[5];
    { const float fs = aot_fpr[3]; const float ft = aot_fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[3] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[3] = fs * ft; }
    aot_fpr[2] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[1] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[1] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[3];
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[0] = aot_fpr[0] + aot_fpr[1];
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D5E58;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0466_entry, 466u, 1u, 0x089D6000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0465(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0465_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_465(Runtime &runtime) {
    runtime.register_generated_unit(465u, 0x089D5000u, 4096u, &recomp_unit_0465, &recomp_unit_0465_entry);
    runtime.register_function(0x089D5004u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5018u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5020u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D502Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5030u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D503Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5050u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5058u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5064u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5068u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5074u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5080u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5094u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D509Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50A8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50ACu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50B8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50C4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50D0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50E4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50ECu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50F8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D50FCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5108u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5114u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5128u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5130u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D513Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5140u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D514Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5158u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5164u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5178u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5180u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D518Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5190u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D519Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51A8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51BCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51C4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51D0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51D4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51E0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51ECu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D51F8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D520Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5214u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5220u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5224u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5230u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D523Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5250u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5258u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52B8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52C0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52C8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52DCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52E4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52F4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D52FCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5310u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5344u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5348u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D537Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D539Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D53A8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D53ACu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D53B4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5418u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5424u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5430u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D543Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5448u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5454u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5460u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D546Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5478u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5484u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5494u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D54A0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D54B0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D54B8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D54D4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D54E4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D54F4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5508u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5510u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5518u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5520u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5528u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5538u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5584u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D558Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D55DCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D55ECu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D55FCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D561Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5634u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5660u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D567Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5680u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5690u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5698u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56A0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56B0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56BCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56C8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56D4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56E0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D56E8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5704u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5740u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D574Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5750u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5760u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5768u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5770u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D57A8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D57C8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D57E0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D57F0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5814u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D581Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D582Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5834u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5848u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5850u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D585Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5888u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D58A8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D58ACu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D58C8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D58E0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D58ECu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D58F4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D590Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5918u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5924u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5950u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5954u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D599Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D59B4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D59C4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D59CCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D59E4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D59F8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A00u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A08u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A18u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A34u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A3Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A78u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A88u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A90u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5A9Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5AA8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5AB4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5AC8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5AD4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5ADCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5AF8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5B04u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5B40u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5B4Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5B78u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5B94u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5B9Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5BD8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C10u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C18u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C20u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C28u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C3Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C44u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C54u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C6Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C74u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C78u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C7Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5C98u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5CA0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5CB8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5CC0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5CD0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5CF0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D04u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D18u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D20u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D30u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D4Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D64u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D6Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D7Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5D9Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5DB0u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5DD4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5E08u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5E10u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5E20u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5E58u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5E64u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5E8Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5EACu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5EBCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5ED4u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5ED8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5EE8u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5EFCu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F04u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F38u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F40u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F54u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F5Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F6Cu, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F74u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F88u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F90u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5F98u, &recomp_unit_0465, "recomp_unit_0465");
    runtime.register_function(0x089D5FACu, &recomp_unit_0465, "recomp_unit_0465");
}
} // namespace psprecomp
