#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0594[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 7,
    0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0,
    16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 80, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 89, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96,
    0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0,
    0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 163,
    0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174,
    0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0,
    0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 198, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206,
};
void recomp_unit_0594_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A56000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0594[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A56000;
    case 2u: goto L_08A56010;
    case 3u: goto L_08A56030;
    case 4u: goto L_08A56058;
    case 5u: goto L_08A56064;
    case 6u: goto L_08A56078;
    case 7u: goto L_08A5607C;
    case 8u: goto L_08A56090;
    case 9u: goto L_08A56098;
    case 10u: goto L_08A560A0;
    case 11u: goto L_08A560B4;
    case 12u: goto L_08A560C4;
    case 13u: goto L_08A560E0;
    case 14u: goto L_08A560E8;
    case 15u: goto L_08A560F8;
    case 16u: goto L_08A56100;
    case 17u: goto L_08A56108;
    case 18u: goto L_08A56124;
    case 19u: goto L_08A56138;
    case 20u: goto L_08A56148;
    case 21u: goto L_08A56158;
    case 22u: goto L_08A5615C;
    case 23u: goto L_08A56164;
    case 24u: goto L_08A56184;
    case 25u: goto L_08A561A4;
    case 26u: goto L_08A56204;
    case 27u: goto L_08A56218;
    case 28u: goto L_08A56220;
    case 29u: goto L_08A56228;
    case 30u: goto L_08A5623C;
    case 31u: goto L_08A56248;
    case 32u: goto L_08A5625C;
    case 33u: goto L_08A56268;
    case 34u: goto L_08A56270;
    case 35u: goto L_08A56280;
    case 36u: goto L_08A562AC;
    case 37u: goto L_08A5630C;
    case 38u: goto L_08A56320;
    case 39u: goto L_08A56328;
    case 40u: goto L_08A56330;
    case 41u: goto L_08A56344;
    case 42u: goto L_08A56350;
    case 43u: goto L_08A56364;
    case 44u: goto L_08A56370;
    case 45u: goto L_08A56378;
    case 46u: goto L_08A56388;
    case 47u: goto L_08A563B4;
    case 48u: goto L_08A563D0;
    case 49u: goto L_08A563E8;
    case 50u: goto L_08A563F4;
    case 51u: goto L_08A56414;
    case 52u: goto L_08A56428;
    case 53u: goto L_08A56434;
    case 54u: goto L_08A56440;
    case 55u: goto L_08A56448;
    case 56u: goto L_08A56484;
    case 57u: goto L_08A5648C;
    case 58u: goto L_08A56498;
    case 59u: goto L_08A564A4;
    case 60u: goto L_08A564AC;
    case 61u: goto L_08A564E8;
    case 62u: goto L_08A564F0;
    case 63u: goto L_08A56500;
    case 64u: goto L_08A5650C;
    case 65u: goto L_08A56518;
    case 66u: goto L_08A56524;
    case 67u: goto L_08A56544;
    case 68u: goto L_08A56550;
    case 69u: goto L_08A56560;
    case 70u: goto L_08A5656C;
    case 71u: goto L_08A56578;
    case 72u: goto L_08A56584;
    case 73u: goto L_08A565A4;
    case 74u: goto L_08A565B0;
    case 75u: goto L_08A56608;
    case 76u: goto L_08A5660C;
    case 77u: goto L_08A5663C;
    case 78u: goto L_08A56648;
    case 79u: goto L_08A56674;
    case 80u: goto L_08A5668C;
    case 81u: goto L_08A56690;
    case 82u: goto L_08A5669C;
    case 83u: goto L_08A566B4;
    case 84u: goto L_08A5670C;
    case 85u: goto L_08A56710;
    case 86u: goto L_08A56740;
    case 87u: goto L_08A5674C;
    case 88u: goto L_08A56778;
    case 89u: goto L_08A56790;
    case 90u: goto L_08A56794;
    case 91u: goto L_08A567A0;
    case 92u: goto L_08A567B8;
    case 93u: goto L_08A567C8;
    case 94u: goto L_08A567D0;
    case 95u: goto L_08A567F0;
    case 96u: goto L_08A567FC;
    case 97u: goto L_08A5680C;
    case 98u: goto L_08A56814;
    case 99u: goto L_08A56834;
    case 100u: goto L_08A56840;
    case 101u: goto L_08A56874;
    case 102u: goto L_08A568A8;
    case 103u: goto L_08A568C4;
    case 104u: goto L_08A568C8;
    case 105u: goto L_08A568EC;
    case 106u: goto L_08A568F4;
    case 107u: goto L_08A568FC;
    case 108u: goto L_08A56900;
    case 109u: goto L_08A56930;
    case 110u: goto L_08A56938;
    case 111u: goto L_08A56954;
    case 112u: goto L_08A56978;
    case 113u: goto L_08A56980;
    case 114u: goto L_08A569A0;
    case 115u: goto L_08A569A8;
    case 116u: goto L_08A569B0;
    case 117u: goto L_08A569DC;
    case 118u: goto L_08A569E8;
    case 119u: goto L_08A56A1C;
    case 120u: goto L_08A56A44;
    case 121u: goto L_08A56A5C;
    case 122u: goto L_08A56A64;
    case 123u: goto L_08A56A70;
    case 124u: goto L_08A56A7C;
    case 125u: goto L_08A56ACC;
    case 126u: goto L_08A56AD8;
    case 127u: goto L_08A56B00;
    case 128u: goto L_08A56B10;
    case 129u: goto L_08A56B24;
    case 130u: goto L_08A56B44;
    case 131u: goto L_08A56B4C;
    case 132u: goto L_08A56B54;
    case 133u: goto L_08A56B70;
    case 134u: goto L_08A56B74;
    case 135u: goto L_08A56B84;
    case 136u: goto L_08A56BA8;
    case 137u: goto L_08A56BB0;
    case 138u: goto L_08A56BC0;
    case 139u: goto L_08A56BE0;
    case 140u: goto L_08A56BEC;
    case 141u: goto L_08A56C04;
    case 142u: goto L_08A56C10;
    case 143u: goto L_08A56C1C;
    case 144u: goto L_08A56C30;
    case 145u: goto L_08A56C38;
    case 146u: goto L_08A56C40;
    case 147u: goto L_08A56C4C;
    case 148u: goto L_08A56C54;
    case 149u: goto L_08A56C68;
    case 150u: goto L_08A56C70;
    case 151u: goto L_08A56C78;
    case 152u: goto L_08A56C88;
    case 153u: goto L_08A56C94;
    case 154u: goto L_08A56CB0;
    case 155u: goto L_08A56CB8;
    case 156u: goto L_08A56D00;
    case 157u: goto L_08A56D04;
    case 158u: goto L_08A56D0C;
    case 159u: goto L_08A56D50;
    case 160u: goto L_08A56D58;
    case 161u: goto L_08A56D70;
    case 162u: goto L_08A56D78;
    case 163u: goto L_08A56D7C;
    case 164u: goto L_08A56D84;
    case 165u: goto L_08A56D9C;
    case 166u: goto L_08A56DA4;
    case 167u: goto L_08A56DAC;
    case 168u: goto L_08A56DB4;
    case 169u: goto L_08A56DC8;
    case 170u: goto L_08A56DD0;
    case 171u: goto L_08A56DD8;
    case 172u: goto L_08A56DE0;
    case 173u: goto L_08A56DE8;
    case 174u: goto L_08A56DFC;
    case 175u: goto L_08A56E04;
    case 176u: goto L_08A56E0C;
    case 177u: goto L_08A56E14;
    case 178u: goto L_08A56E28;
    case 179u: goto L_08A56E30;
    case 180u: goto L_08A56E38;
    case 181u: goto L_08A56E40;
    case 182u: goto L_08A56E54;
    case 183u: goto L_08A56E70;
    case 184u: goto L_08A56E90;
    case 185u: goto L_08A56E94;
    case 186u: goto L_08A56EB4;
    case 187u: goto L_08A56EC4;
    case 188u: goto L_08A56ED8;
    case 189u: goto L_08A56EE0;
    case 190u: goto L_08A56EE8;
    case 191u: goto L_08A56F04;
    case 192u: goto L_08A56F0C;
    case 193u: goto L_08A56F44;
    case 194u: goto L_08A56F4C;
    case 195u: goto L_08A56F58;
    case 196u: goto L_08A56F68;
    case 197u: goto L_08A56F8C;
    case 198u: goto L_08A56F94;
    case 199u: goto L_08A56F98;
    case 200u: goto L_08A56FA0;
    case 201u: goto L_08A56FB4;
    case 202u: goto L_08A56FC4;
    case 203u: goto L_08A56FD4;
    case 204u: goto L_08A56FDC;
    case 205u: goto L_08A56FE8;
    case 206u: goto L_08A56FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A56000:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A56010u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56010u) goto L_08A56010;
    return;
L_08A56010:
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
L_08A56030:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A56184;
      }
      goto L_08A56058;
    }
L_08A56058:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A5615C;
      }
      goto L_08A56064;
    }
L_08A56064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56138;
      }
      goto L_08A56078;
    }
L_08A56078:
    aot_gpr[19] = (0u | 0u);
    goto L_08A5607C;
L_08A5607C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56124;
      }
      goto L_08A56090;
    }
L_08A56090:
    aot_gpr[31] = (0x08A56098u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 206u, 0x08A55E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56098u) goto L_08A56098;
    return;
L_08A56098:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56124;
      }
      goto L_08A560A0;
    }
L_08A560A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A560E8;
      }
      goto L_08A560B4;
    }
L_08A560B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A56124;
      }
      goto L_08A560C4;
    }
L_08A560C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A560E0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A560E0u) goto L_08A560E0;
    return;
L_08A560E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56124;
      }
      goto L_08A560E8;
    }
L_08A560E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56100;
      }
      goto L_08A560F8;
    }
L_08A560F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A56124;
      }
      goto L_08A56100;
    }
L_08A56100:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56124;
      }
      goto L_08A56108;
    }
L_08A56108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A56124u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56124u) goto L_08A56124;
    return;
L_08A56124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5607C;
      }
      goto L_08A56138;
    }
L_08A56138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A5615C;
      }
      goto L_08A56148;
    }
L_08A56148:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A56158u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A56158u) goto L_08A56158;
    return;
L_08A56158:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A5615C;
L_08A5615C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A56184;
      }
      goto L_08A56164;
    }
L_08A56164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A56184u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56184u) goto L_08A56184;
    return;
L_08A56184:
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
L_08A561A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56280;
      }
      goto L_08A56204;
    }
L_08A56204:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A56218u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 206u, 0x08A55E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56218u) goto L_08A56218;
    return;
L_08A56218:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5623C;
      }
      goto L_08A56220;
    }
L_08A56220:
    aot_gpr[31] = (0x08A56228u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A56228u) goto L_08A56228;
    return;
L_08A56228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A56270;
      }
      goto L_08A5623C;
    }
L_08A5623C:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56268;
      }
      goto L_08A56248;
    }
L_08A56248:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A5625Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 63u, 0x0892459Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5625Cu) goto L_08A5625C;
    return;
L_08A5625C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A56268;
L_08A56268:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A56270;
L_08A56270:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A56204;
      }
      goto L_08A56280;
    }
L_08A56280:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A562AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56388;
      }
      goto L_08A5630C;
    }
L_08A5630C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A56320u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 207u, 0x08A55EACu>(ctx, &aot_mem) && ctx.pc == 0x08A56320u) goto L_08A56320;
    return;
L_08A56320:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56344;
      }
      goto L_08A56328;
    }
L_08A56328:
    aot_gpr[31] = (0x08A56330u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A56330u) goto L_08A56330;
    return;
L_08A56330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A56378;
      }
      goto L_08A56344;
    }
L_08A56344:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56370;
      }
      goto L_08A56350;
    }
L_08A56350:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A56364u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 68u, 0x089245F4u>(ctx, &aot_mem) && ctx.pc == 0x08A56364u) goto L_08A56364;
    return;
L_08A56364:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A56370;
L_08A56370:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A56378;
L_08A56378:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5630C;
      }
      goto L_08A56388;
    }
L_08A56388:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A563B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A56414;
      }
      goto L_08A563D0;
    }
L_08A563D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25432));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A563E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08A563E8u) goto L_08A563E8;
    return;
L_08A563E8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A56414;
      }
      goto L_08A563F4;
    }
L_08A563F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A56414u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56414u) goto L_08A56414;
    return;
L_08A56414:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56440;
      }
      goto L_08A56434;
    }
L_08A56434:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A56448;
    }
    goto L_08A56440;
L_08A56440:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56484;
      }
      goto L_08A56448;
    }
L_08A56448:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), 0u);
    goto L_08A56484;
L_08A56484:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5648C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A564A4;
      }
      goto L_08A56498;
    }
L_08A56498:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A564AC;
    }
    goto L_08A564A4;
L_08A564A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A564E8;
      }
      goto L_08A564AC;
    }
L_08A564AC:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), 0u);
    goto L_08A564E8;
L_08A564E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A564F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A56544;
      }
      goto L_08A56500;
    }
L_08A56500:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1760));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A56518;
      }
      goto L_08A5650C;
    }
L_08A5650C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), aot_gpr[6]);
    goto L_08A56518;
L_08A56518:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A56544;
      }
      goto L_08A56524;
    }
L_08A56524:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A56544u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56544u) goto L_08A56544;
    return;
L_08A56544:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A565A4;
      }
      goto L_08A56560;
    }
L_08A56560:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1800));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A56578;
      }
      goto L_08A5656C;
    }
L_08A5656C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(208), aot_gpr[6]);
    goto L_08A56578;
L_08A56578:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A565A4;
      }
      goto L_08A56584;
    }
L_08A56584:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A565A4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A565A4u) goto L_08A565A4;
    return;
L_08A565A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A565B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(224));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(448));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_08A5663C;
      }
      goto L_08A56608;
    }
L_08A56608:
    aot_gpr[5] = (0u | 672u);
    goto L_08A5660C;
L_08A5660C:
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_08A5660C;
      }
      goto L_08A5663C;
    }
L_08A5663C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56648:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17688)));
      if (branch_taken) {
          goto L_08A56690;
      }
      goto L_08A56674;
    }
L_08A56674:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[6] = (0u | 224u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A5668Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(23104));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 77u, 0x08A2D520u>(ctx, &aot_mem) && ctx.pc == 0x08A5668Cu) goto L_08A5668C;
    return;
L_08A5668C:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A56690;
L_08A56690:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[31] = (0x08A5669Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A565B0;
L_08A5669C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A566B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(272));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(544));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_08A56740;
      }
      goto L_08A5670C;
    }
L_08A5670C:
    aot_gpr[5] = (0u | 816u);
    goto L_08A56710;
L_08A56710:
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A56710;
      }
      goto L_08A56740;
    }
L_08A56740:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5674C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17688)));
      if (branch_taken) {
          goto L_08A56794;
      }
      goto L_08A56778;
    }
L_08A56778:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[7] = (2194u << 16u);
    aot_gpr[6] = (0u | 272u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A56790u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(23612));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 77u, 0x08A2D520u>(ctx, &aot_mem) && ctx.pc == 0x08A56790u) goto L_08A56790;
    return;
L_08A56790:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A56794;
L_08A56794:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[31] = (0x08A567A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A566B4;
L_08A567A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A567B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A567F0;
      }
      goto L_08A567C8;
    }
L_08A567C8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A567F0;
      }
      goto L_08A567D0;
    }
L_08A567D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A567F0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A567F0u) goto L_08A567F0;
    return;
L_08A567F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A567FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A56834;
      }
      goto L_08A5680C;
    }
L_08A5680C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A56834;
      }
      goto L_08A56814;
    }
L_08A56814:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A56834u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A56834u) goto L_08A56834;
    return;
L_08A56834:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56840:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56874:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A568A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[8] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A56930;
      }
      goto L_08A568C4;
    }
L_08A568C4:
    aot_gpr[10] = (aot_gpr[9] << 2u);
    goto L_08A568C8;
L_08A568C8:
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-4)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08A568F4;
      }
      goto L_08A568EC;
    }
L_08A568EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A568F4;
      }
      goto L_08A568F4;
    }
L_08A568F4:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56900;
      }
      goto L_08A568FC;
    }
L_08A568FC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08A56900;
L_08A56900:
    aot_gpr[10] = (aot_gpr[9] << 2u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[10] = (aot_gpr[9] << 2u);
      if (branch_taken) {
          goto L_08A568C8;
      }
      goto L_08A56930;
    }
L_08A56930:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A56954;
      }
      goto L_08A56938;
    }
L_08A56938:
    aot_gpr[6] = (aot_gpr[9] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08A56954;
L_08A56954:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (aot_gpr[5] << 2u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[10]);
    goto L_08A56978;
L_08A56978:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A569DC;
      }
      goto L_08A56980;
    }
L_08A56980:
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08A569A8;
      }
      goto L_08A569A0;
    }
L_08A569A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A569A8;
      }
      goto L_08A569A8;
    }
L_08A569A8:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[10] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A569DC;
      }
      goto L_08A569B0;
    }
L_08A569B0:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[10] >> 31u);
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[11] << 2u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A56978;
      }
      goto L_08A569DC;
    }
L_08A569DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A569E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_gpr[14] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[14]) >> 2u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[14]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A56A70;
      }
      goto L_08A56A1C;
    }
L_08A56A1C:
    aot_gpr[4] = (aot_gpr[14] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[14] + aot_gpr[4]);
    aot_gpr[13] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> 1u));
    aot_gpr[12] = (aot_gpr[13] << 2u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_gpr[12] = (aot_gpr[2] + aot_gpr[12]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_08A56A44;
L_08A56A44:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[13] | 0u);
    aot_gpr[6] = (aot_gpr[14] | 0u);
    aot_gpr[31] = (0x08A56A5Cu);
    aot_gpr[8] = (aot_gpr[3] | 0u);
    goto L_08A568A8;
L_08A56A5C:
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A56A70;
      }
      goto L_08A56A64;
    }
L_08A56A64:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56A44;
      }
      goto L_08A56A70;
    }
L_08A56A70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56A7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A56ACCu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A568A8;
L_08A56ACC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56AD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[15] = (aot_gpr[4] | 0u);
    aot_gpr[24] = (aot_gpr[5] | 0u);
    aot_gpr[25] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_gpr[4] = (aot_gpr[15] | 0u);
    aot_gpr[31] = (0x08A56B00u);
    aot_gpr[5] = (aot_gpr[24] | 0u);
    goto L_08A569E8;
L_08A56B00:
    aot_gpr[3] = (aot_gpr[24] | 0u);
    aot_gpr[5] = (aot_gpr[3] < aot_gpr[25] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08A56B84;
      }
      goto L_08A56B10;
    }
L_08A56B10:
    aot_gpr[5] = (aot_gpr[24] - aot_gpr[15]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 2u));
    goto L_08A56B24;
L_08A56B24:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56B4C;
      }
      goto L_08A56B44;
    }
L_08A56B44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56B4C;
      }
      goto L_08A56B4C;
    }
L_08A56B4C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B74;
      }
      goto L_08A56B54;
    }
L_08A56B54:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[15] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A56B70u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A568A8;
L_08A56B70:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08A56B74;
L_08A56B74:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[3] < aot_gpr[25] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B24;
      }
      goto L_08A56B84;
    }
L_08A56B84:
    aot_gpr[5] = (aot_gpr[24] - aot_gpr[15]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[6] = (aot_gpr[6] >> 30u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BE0;
      }
      goto L_08A56BA8;
    }
L_08A56BA8:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17))))));
    aot_gpr[5] = (aot_gpr[24] | 0u);
    goto L_08A56BB0;
L_08A56BB0:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[15] | 0u);
    aot_gpr[31] = (0x08A56BC0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A56A7C;
L_08A56BC0:
    aot_gpr[4] = (aot_gpr[24] - aot_gpr[15]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[24] | 0u);
      if (branch_taken) {
          goto L_08A56BB0;
      }
      goto L_08A56BE0;
    }
L_08A56BE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56BEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A56C04u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A56AD8;
L_08A56C04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56C10:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(164)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08A56C1C;
L_08A56C1C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56C38;
      }
      goto L_08A56C30;
    }
L_08A56C30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56C38;
      }
      goto L_08A56C38;
    }
L_08A56C38:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C4C;
      }
      goto L_08A56C40;
    }
L_08A56C40:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56C1C;
      }
      goto L_08A56C4C;
    }
L_08A56C4C:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A56C54;
L_08A56C54:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56C70;
      }
      goto L_08A56C68;
    }
L_08A56C68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56C70;
      }
      goto L_08A56C70;
    }
L_08A56C70:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C88;
      }
      goto L_08A56C78;
    }
L_08A56C78:
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56C54;
      }
      goto L_08A56C88;
    }
L_08A56C88:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56CB0;
      }
      goto L_08A56C94;
    }
L_08A56C94:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A56C1C;
      }
      goto L_08A56CB0;
    }
L_08A56CB0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56CB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A56E94;
      }
      goto L_08A56D00;
    }
L_08A56D00:
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_08A56D04;
L_08A56D04:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08A56D58;
      }
      goto L_08A56D0C;
    }
L_08A56D0C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A56D78;
      }
      goto L_08A56D50;
    }
L_08A56D50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56D7C;
      }
      goto L_08A56D58;
    }
L_08A56D58:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A56D70u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_08A56BEC;
L_08A56D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E94;
      }
      goto L_08A56D78;
    }
L_08A56D78:
    aot_gpr[10] = (0u | 1u);
    goto L_08A56D7C;
L_08A56D7C:
    if (aot_gpr[10] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
        goto L_08A56DE8;
    }
    goto L_08A56D84;
L_08A56D84:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56DA4;
      }
      goto L_08A56D9C;
    }
L_08A56D9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56DA4;
      }
      goto L_08A56DA4;
    }
L_08A56DA4:
    if (aot_gpr[8] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
        goto L_08A56DB4;
    }
    goto L_08A56DAC;
L_08A56DAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56E40;
      }
      goto L_08A56DB4;
    }
L_08A56DB4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56DD0;
      }
      goto L_08A56DC8;
    }
L_08A56DC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56DD0;
      }
      goto L_08A56DD0;
    }
L_08A56DD0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DE0;
      }
      goto L_08A56DD8;
    }
L_08A56DD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56E40;
      }
      goto L_08A56DE0;
    }
L_08A56DE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56E40;
      }
      goto L_08A56DE8;
    }
L_08A56DE8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56E04;
      }
      goto L_08A56DFC;
    }
L_08A56DFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56E04;
      }
      goto L_08A56E04;
    }
L_08A56E04:
    if (aot_gpr[7] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(164)));
        goto L_08A56E14;
    }
    goto L_08A56E0C;
L_08A56E0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56E40;
      }
      goto L_08A56E14;
    }
L_08A56E14:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56E30;
      }
      goto L_08A56E28;
    }
L_08A56E28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56E30;
      }
      goto L_08A56E30;
    }
L_08A56E30:
    if (aot_gpr[7] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A56E40;
    }
    goto L_08A56E38;
L_08A56E38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A56E40;
      }
      goto L_08A56E40;
    }
L_08A56E40:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A56E54u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A56C10;
L_08A56E54:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A56E70u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_08A56CB8;
L_08A56E70:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A56D04;
      }
      goto L_08A56E90;
    }
L_08A56E90:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[19]));
    goto L_08A56E94;
L_08A56E94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56EB4:
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(164)));
    goto L_08A56EC4;
L_08A56EC4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56EE0;
      }
      goto L_08A56ED8;
    }
L_08A56ED8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56EE0;
      }
      goto L_08A56EE0;
    }
L_08A56EE0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56F04;
      }
      goto L_08A56EE8;
    }
L_08A56EE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(-4));
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08A56EC4;
      }
      goto L_08A56F04;
    }
L_08A56F04:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56F0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A56F4C;
      }
      goto L_08A56F44;
    }
L_08A56F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 1u, 0x08A57000u>(ctx, &aot_mem); return;
      }
      goto L_08A56F4C;
    }
L_08A56F4C:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 1u, 0x08A57000u>(ctx, &aot_mem); return;
      }
      goto L_08A56F58;
    }
L_08A56F58:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17))))));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A56F68;
L_08A56F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[23] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A56F94;
      }
      goto L_08A56F8C;
    }
L_08A56F8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56F98;
      }
      goto L_08A56F94;
    }
L_08A56F94:
    aot_gpr[4] = (0u | 1u);
    goto L_08A56F98;
L_08A56F98:
    if (aot_gpr[4] == 0u) {
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
        goto L_08A56FDC;
    }
    goto L_08A56FA0;
L_08A56FA0:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(18))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A56FB4u);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(21))))));
    if (rt.invoke_chained_direct<&recomp_unit_0290_entry, 290u, 29u, 0x089261E0u>(ctx, &aot_mem) && ctx.pc == 0x08A56FB4u) goto L_08A56FB4;
    return;
L_08A56FB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08A56FD4;
      }
      goto L_08A56FC4;
    }
L_08A56FC4:
    aot_gpr[4] = (aot_gpr[23] - aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A56FD4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A56FD4u) goto L_08A56FD4;
    return;
L_08A56FD4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_08A56FE8;
      }
      goto L_08A56FDC;
    }
L_08A56FDC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A56FE8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A56EB4;
L_08A56FE8:
    aot_gpr[18] = (aot_gpr[23] | 0u);
    if (aot_gpr[18] != aot_gpr[17]) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A56F68;
    }
    goto L_08A56FF4;
L_08A56FF4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[22]));
    ctx.pc = 0x08A57000u; return;
}

void recomp_unit_0594(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0594_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_594(Runtime &runtime) {
    runtime.register_generated_unit(594u, 0x08A56000u, 4096u, &recomp_unit_0594, &recomp_unit_0594_entry);
    runtime.register_function(0x08A56000u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56010u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56030u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56058u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56064u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56078u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5607Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56090u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56098u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A560A0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A560B4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A560C4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A560E0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A560E8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A560F8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56100u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56108u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56124u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56138u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56148u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56158u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5615Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56164u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56184u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A561A4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56204u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56218u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56220u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56228u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5623Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56248u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5625Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56268u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56270u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56280u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A562ACu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5630Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56320u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56328u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56330u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56344u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56350u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56364u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56370u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56378u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56388u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A563B4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A563D0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A563E8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A563F4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56414u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56428u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56434u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56440u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56448u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56484u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5648Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56498u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A564A4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A564ACu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A564E8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A564F0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56500u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5650Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56518u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56524u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56544u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56550u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56560u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5656Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56578u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56584u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A565A4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A565B0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56608u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5660Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5663Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56648u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56674u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5668Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56690u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5669Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A566B4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5670Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56710u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56740u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5674Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56778u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56790u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56794u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A567A0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A567B8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A567C8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A567D0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A567F0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A567FCu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A5680Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56814u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56834u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56840u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56874u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A568A8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A568C4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A568C8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A568ECu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A568F4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A568FCu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56900u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56930u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56938u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56954u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56978u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56980u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A569A0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A569A8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A569B0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A569DCu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A569E8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56A1Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56A44u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56A5Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56A64u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56A70u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56A7Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56ACCu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56AD8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B00u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B10u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B24u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B44u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B4Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B54u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B70u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B74u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56B84u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56BA8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56BB0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56BC0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56BE0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56BECu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C04u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C10u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C1Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C30u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C38u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C40u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C4Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C54u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C68u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C70u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C78u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C88u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56C94u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56CB0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56CB8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D00u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D04u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D0Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D50u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D58u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D70u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D78u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D7Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D84u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56D9Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DA4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DACu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DB4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DC8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DD0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DD8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DE0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DE8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56DFCu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E04u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E0Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E14u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E28u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E30u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E38u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E40u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E54u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E70u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E90u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56E94u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56EB4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56EC4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56ED8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56EE0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56EE8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F04u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F0Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F44u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F4Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F58u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F68u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F8Cu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F94u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56F98u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FA0u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FB4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FC4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FD4u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FDCu, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FE8u, &recomp_unit_0594, "recomp_unit_0594");
    runtime.register_function(0x08A56FF4u, &recomp_unit_0594, "recomp_unit_0594");
}
} // namespace psprecomp
