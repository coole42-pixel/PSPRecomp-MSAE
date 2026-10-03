#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0100[1019] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9,
    0, 10, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 21, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 0, 53, 54, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    98, 0, 99, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0,
    0, 110, 0, 111, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0,
    0, 144, 0, 0, 145, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178,
    0, 179, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 188, 0, 0,
    189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 195, 0, 196, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 204, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211,
};
void recomp_unit_0100_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08868004u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0100[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08868004;
    case 2u: goto L_08868014;
    case 3u: goto L_08868030;
    case 4u: goto L_08868038;
    case 5u: goto L_08868040;
    case 6u: goto L_0886804C;
    case 7u: goto L_0886805C;
    case 8u: goto L_08868064;
    case 9u: goto L_08868080;
    case 10u: goto L_08868088;
    case 11u: goto L_08868090;
    case 12u: goto L_08868094;
    case 13u: goto L_0886809C;
    case 14u: goto L_088680B8;
    case 15u: goto L_088680C0;
    case 16u: goto L_088680C8;
    case 17u: goto L_088680D4;
    case 18u: goto L_088680E4;
    case 19u: goto L_088680EC;
    case 20u: goto L_08868108;
    case 21u: goto L_08868110;
    case 22u: goto L_08868118;
    case 23u: goto L_0886811C;
    case 24u: goto L_08868124;
    case 25u: goto L_08868140;
    case 26u: goto L_08868148;
    case 27u: goto L_08868150;
    case 28u: goto L_08868154;
    case 29u: goto L_0886815C;
    case 30u: goto L_08868170;
    case 31u: goto L_0886818C;
    case 32u: goto L_08868194;
    case 33u: goto L_0886819C;
    case 34u: goto L_088681B8;
    case 35u: goto L_08868214;
    case 36u: goto L_0886821C;
    case 37u: goto L_08868230;
    case 38u: goto L_08868234;
    case 39u: goto L_08868240;
    case 40u: goto L_08868278;
    case 41u: goto L_0886828C;
    case 42u: goto L_08868294;
    case 43u: goto L_088682B4;
    case 44u: goto L_088682B8;
    case 45u: goto L_088682D4;
    case 46u: goto L_088682D8;
    case 47u: goto L_088682F0;
    case 48u: goto L_08868304;
    case 49u: goto L_08868318;
    case 50u: goto L_08868320;
    case 51u: goto L_08868340;
    case 52u: goto L_08868344;
    case 53u: goto L_08868360;
    case 54u: goto L_08868364;
    case 55u: goto L_0886837C;
    case 56u: goto L_0886838C;
    case 57u: goto L_08868390;
    case 58u: goto L_088683D8;
    case 59u: goto L_088683E8;
    case 60u: goto L_088683F0;
    case 61u: goto L_08868458;
    case 62u: goto L_08868460;
    case 63u: goto L_08868470;
    case 64u: goto L_08868480;
    case 65u: goto L_08868490;
    case 66u: goto L_088684A8;
    case 67u: goto L_088684B0;
    case 68u: goto L_088684C4;
    case 69u: goto L_088684CC;
    case 70u: goto L_088684E4;
    case 71u: goto L_088684FC;
    case 72u: goto L_08868514;
    case 73u: goto L_08868518;
    case 74u: goto L_0886852C;
    case 75u: goto L_08868538;
    case 76u: goto L_08868540;
    case 77u: goto L_08868548;
    case 78u: goto L_08868550;
    case 79u: goto L_08868558;
    case 80u: goto L_08868570;
    case 81u: goto L_0886859C;
    case 82u: goto L_088685AC;
    case 83u: goto L_088685C8;
    case 84u: goto L_088685E0;
    case 85u: goto L_088685F0;
    case 86u: goto L_0886860C;
    case 87u: goto L_08868618;
    case 88u: goto L_0886861C;
    case 89u: goto L_08868624;
    case 90u: goto L_08868638;
    case 91u: goto L_08868640;
    case 92u: goto L_08868648;
    case 93u: goto L_08868678;
    case 94u: goto L_088686B4;
    case 95u: goto L_088686C4;
    case 96u: goto L_088686DC;
    case 97u: goto L_088686F0;
    case 98u: goto L_08868704;
    case 99u: goto L_0886870C;
    case 100u: goto L_08868710;
    case 101u: goto L_08868718;
    case 102u: goto L_0886878C;
    case 103u: goto L_088687A0;
    case 104u: goto L_088687B4;
    case 105u: goto L_088687BC;
    case 106u: goto L_088687D0;
    case 107u: goto L_088687E4;
    case 108u: goto L_088687EC;
    case 109u: goto L_088687FC;
    case 110u: goto L_08868808;
    case 111u: goto L_08868810;
    case 112u: goto L_08868814;
    case 113u: goto L_08868824;
    case 114u: goto L_08868838;
    case 115u: goto L_08868860;
    case 116u: goto L_0886886C;
    case 117u: goto L_08868874;
    case 118u: goto L_0886887C;
    case 119u: goto L_08868890;
    case 120u: goto L_088688A4;
    case 121u: goto L_088688B8;
    case 122u: goto L_08868920;
    case 123u: goto L_08868934;
    case 124u: goto L_08868948;
    case 125u: goto L_0886894C;
    case 126u: goto L_088689B0;
    case 127u: goto L_088689C0;
    case 128u: goto L_088689D4;
    case 129u: goto L_088689DC;
    case 130u: goto L_08868A14;
    case 131u: goto L_08868A28;
    case 132u: goto L_08868A30;
    case 133u: goto L_08868A68;
    case 134u: goto L_08868A70;
    case 135u: goto L_08868A74;
    case 136u: goto L_08868A8C;
    case 137u: goto L_08868AA0;
    case 138u: goto L_08868AB4;
    case 139u: goto L_08868ABC;
    case 140u: goto L_08868AD0;
    case 141u: goto L_08868AE4;
    case 142u: goto L_08868AEC;
    case 143u: goto L_08868AFC;
    case 144u: goto L_08868B08;
    case 145u: goto L_08868B14;
    case 146u: goto L_08868B18;
    case 147u: goto L_08868B28;
    case 148u: goto L_08868B3C;
    case 149u: goto L_08868B64;
    case 150u: goto L_08868B70;
    case 151u: goto L_08868B78;
    case 152u: goto L_08868B80;
    case 153u: goto L_08868B98;
    case 154u: goto L_08868BAC;
    case 155u: goto L_08868BC0;
    case 156u: goto L_08868C28;
    case 157u: goto L_08868C3C;
    case 158u: goto L_08868C50;
    case 159u: goto L_08868C54;
    case 160u: goto L_08868CB8;
    case 161u: goto L_08868CC4;
    case 162u: goto L_08868CD8;
    case 163u: goto L_08868CE0;
    case 164u: goto L_08868D18;
    case 165u: goto L_08868D2C;
    case 166u: goto L_08868D34;
    case 167u: goto L_08868D6C;
    case 168u: goto L_08868D78;
    case 169u: goto L_08868D80;
    case 170u: goto L_08868D88;
    case 171u: goto L_08868DAC;
    case 172u: goto L_08868DB4;
    case 173u: goto L_08868DC4;
    case 174u: goto L_08868DC8;
    case 175u: goto L_08868DD0;
    case 176u: goto L_08868DD8;
    case 177u: goto L_08868DF8;
    case 178u: goto L_08868E00;
    case 179u: goto L_08868E08;
    case 180u: goto L_08868E0C;
    case 181u: goto L_08868E18;
    case 182u: goto L_08868E2C;
    case 183u: goto L_08868E38;
    case 184u: goto L_08868E44;
    case 185u: goto L_08868E64;
    case 186u: goto L_08868E6C;
    case 187u: goto L_08868E74;
    case 188u: goto L_08868E78;
    case 189u: goto L_08868E84;
    case 190u: goto L_08868E8C;
    case 191u: goto L_08868E9C;
    case 192u: goto L_08868EBC;
    case 193u: goto L_08868EC4;
    case 194u: goto L_08868ECC;
    case 195u: goto L_08868ED0;
    case 196u: goto L_08868ED8;
    case 197u: goto L_08868EDC;
    case 198u: goto L_08868EE8;
    case 199u: goto L_08868EFC;
    case 200u: goto L_08868F04;
    case 201u: goto L_08868F34;
    case 202u: goto L_08868F40;
    case 203u: goto L_08868F54;
    case 204u: goto L_08868F58;
    case 205u: goto L_08868F5C;
    case 206u: goto L_08868F78;
    case 207u: goto L_08868F80;
    case 208u: goto L_08868F8C;
    case 209u: goto L_08868FB0;
    case 210u: goto L_08868FE0;
    case 211u: goto L_08868FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08868004:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08868038;
      }
      goto L_08868014;
    }
L_08868014:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08868030u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868030u) goto L_08868030;
    return;
L_08868030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08868040;
      }
      goto L_08868038;
    }
L_08868038:
    aot_gpr[31] = (0x08868040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08868040u) goto L_08868040;
    return;
L_08868040:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088680C8;
      }
      goto L_0886804C;
    }
L_0886804C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08868094;
      }
      goto L_0886805C;
    }
L_0886805C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08868088;
      }
      goto L_08868064;
    }
L_08868064:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08868080u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868080u) goto L_08868080;
    return;
L_08868080:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08868094;
      }
      goto L_08868088;
    }
L_08868088:
    aot_gpr[31] = (0x08868090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08868090u) goto L_08868090;
    return;
L_08868090:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-30480)));
    goto L_08868094;
L_08868094:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088680C0;
      }
      goto L_0886809C;
    }
L_0886809C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088680B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088680B8u) goto L_088680B8;
    return;
L_088680B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088680C8;
      }
      goto L_088680C0;
    }
L_088680C0:
    aot_gpr[31] = (0x088680C8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088680C8u) goto L_088680C8;
    return;
L_088680C8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_08868154;
      }
      goto L_088680D4;
    }
L_088680D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_0886811C;
      }
      goto L_088680E4;
    }
L_088680E4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08868110;
      }
      goto L_088680EC;
    }
L_088680EC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08868108u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868108u) goto L_08868108;
    return;
L_08868108:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_0886811C;
      }
      goto L_08868110;
    }
L_08868110:
    aot_gpr[31] = (0x08868118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08868118u) goto L_08868118;
    return;
L_08868118:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    goto L_0886811C;
L_0886811C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08868148;
      }
      goto L_08868124;
    }
L_08868124:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08868140u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868140u) goto L_08868140;
    return;
L_08868140:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_08868154;
      }
      goto L_08868148;
    }
L_08868148:
    aot_gpr[31] = (0x08868150u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08868150u) goto L_08868150;
    return;
L_08868150:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_08868154;
L_08868154:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_0886815C;
    }
L_0886815C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868194;
      }
      goto L_08868170;
    }
L_08868170:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0886818Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886818Cu) goto L_0886818C;
    return;
L_0886818C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886819C;
      }
      goto L_08868194;
    }
L_08868194:
    aot_gpr[31] = (0x0886819Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0886819Cu) goto L_0886819C;
    return;
L_0886819C:
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
L_088681B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[7] & aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[8] ^ aot_gpr[19]);
    aot_gpr[18] = (0u < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08868230;
      }
      goto L_08868214;
    }
L_08868214:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868234;
      }
      goto L_0886821C;
    }
L_0886821C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(752)));
    aot_gpr[9] = (aot_gpr[9] & 1u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868234;
      }
      goto L_08868230;
    }
L_08868230:
    aot_gpr[8] = (0u | 1u);
    goto L_08868234;
L_08868234:
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886861C;
      }
      goto L_08868240;
    }
L_08868240:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(748)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(138)));
      if (branch_taken) {
          goto L_0886828C;
      }
      goto L_08868278;
    }
L_08868278:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
        goto L_08868294;
    }
    goto L_0886828C;
L_0886828C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088682F0;
      }
      goto L_08868294;
    }
L_08868294:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(-12));
        goto L_088682D8;
    }
    goto L_088682B4;
L_088682B4:
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(12));
    goto L_088682B8;
L_088682B8:
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(12));
        goto L_088682B8;
    }
    goto L_088682D4;
L_088682D4:
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(-12));
    goto L_088682D8;
L_088682D8:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[20] = aot_fpr[14] + aot_fpr[20];
    goto L_088682F0;
L_088682F0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868318;
      }
      goto L_08868304;
    }
L_08868304:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08868320;
    }
    goto L_08868318;
L_08868318:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886837C;
      }
      goto L_08868320;
    }
L_08868320:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(12));
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08868364;
      }
      goto L_08868340;
    }
L_08868340:
    aot_gpr[8] = (aot_gpr[10] + static_cast<std::uint32_t>(12));
    goto L_08868344;
L_08868344:
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[8] = (aot_gpr[10] + static_cast<std::uint32_t>(12));
        goto L_08868344;
    }
    goto L_08868360;
L_08868360:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12));
    goto L_08868364;
L_08868364:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[16];
    goto L_0886837C;
L_0886837C:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088683D8;
      }
      goto L_0886838C;
    }
L_0886838C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08868390;
L_08868390:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[7] >> (aot_gpr[10] & 31u));
    aot_gpr[10] = (aot_gpr[10] & 1u);
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[12] = (aot_gpr[7] >> (aot_gpr[12] & 31u));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[12] & 1u);
    aot_gpr[10] = (aot_gpr[10] << 2u);
    aot_fpr[20] = aot_fpr[20] + aot_fpr[14];
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[10]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08868390;
      }
      goto L_088683D8;
    }
L_088683D8:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[9] = (16256u << 16u);
      if (branch_taken) {
          goto L_08868458;
      }
      goto L_088683E8;
    }
L_088683E8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    goto L_088683F0;
L_088683F0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[9]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_fpr[17] = aot_fpr[14] - aot_fpr[15];
    aot_gpr[9] = (aot_gpr[10] << 2u);
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[9]);
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_fpr[2] = aot_fpr[14] - aot_fpr[19];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24));
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    { const float fs = aot_fpr[1]; const float ft = aot_fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    aot_fpr[20] = aot_fpr[15] + aot_fpr[20];
    aot_fpr[16] = aot_fpr[16] + aot_fpr[18];
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_fpr[13] = aot_fpr[16] + aot_fpr[13];
      if (branch_taken) {
          goto L_088683F0;
      }
      goto L_08868458;
    }
L_08868458:
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868470;
      }
      goto L_08868460;
    }
L_08868460:
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    goto L_08868470;
L_08868470:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868618;
      }
      goto L_08868480;
    }
L_08868480:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868618;
      }
      goto L_08868490;
    }
L_08868490:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088684B0;
      }
      goto L_088684A8;
    }
L_088684A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088684C4;
      }
      goto L_088684B0;
    }
L_088684B0:
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_088684C4;
    }
    goto L_088684C4;
L_088684C4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_08868518;
      }
      goto L_088684CC;
    }
L_088684CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(752)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868518;
      }
      goto L_088684E4;
    }
L_088684E4:
    aot_gpr[21] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[6] << 6u);
    aot_gpr[31] = (0x088684FCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 101u, 0x0892A7E0u>(ctx, &aot_mem) && ctx.pc == 0x088684FCu) goto L_088684FC;
    return;
L_088684FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x08868514u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x08868514u) goto L_08868514;
    return;
L_08868514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08868518;
L_08868518:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(752)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08868540;
      }
      goto L_0886852C;
    }
L_0886852C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08868540;
      }
      goto L_08868538;
    }
L_08868538:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868550;
      }
      goto L_08868540;
    }
L_08868540:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (15395u << 16u);
      if (branch_taken) {
          goto L_08868558;
      }
      goto L_08868548;
    }
L_08868548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_08868550;
    }
L_08868550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08868648;
      }
      goto L_08868558;
    }
L_08868558:
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_08868570;
    }
L_08868570:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(752)));
    aot_gpr[8] = (2183u << 16u);
    aot_gpr[7] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886859Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-30992));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 120u, 0x08863844u>(ctx, &aot_mem) && ctx.pc == 0x0886859Cu) goto L_0886859C;
    return;
L_0886859C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_088685AC;
    }
L_088685AC:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x088685C8u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 101u, 0x0892A7E0u>(ctx, &aot_mem) && ctx.pc == 0x088685C8u) goto L_088685C8;
    return;
L_088685C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x088685E0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x088685E0u) goto L_088685E0;
    return;
L_088685E0:
    aot_gpr[4] = (2u << 16u);
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886860C;
      }
      goto L_088685F0;
    }
L_088685F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0886860C;
L_0886860C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08868648;
      }
      goto L_08868618;
    }
L_08868618:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    goto L_0886861C;
L_0886861C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868640;
      }
      goto L_08868624;
    }
L_08868624:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[6] << 6u);
    aot_gpr[31] = (0x08868638u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 43u, 0x0892A384u>(ctx, &aot_mem) && ctx.pc == 0x08868638u) goto L_08868638;
    return;
L_08868638:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08868640;
L_08868640:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[2] = (0u | 0u);
    goto L_08868648;
L_08868648:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (2183u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088686B4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-30992));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 120u, 0x08863844u>(ctx, &aot_mem) && ctx.pc == 0x088686B4u) goto L_088686B4;
    return;
L_088686B4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_088686DC;
      }
      goto L_088686C4;
    }
L_088686C4:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[31] = (0x088686DCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 107u, 0x0892A828u>(ctx, &aot_mem) && ctx.pc == 0x088686DCu) goto L_088686DC;
    return;
L_088686DC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088686F0:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08868710;
      }
      goto L_08868704;
    }
L_08868704:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08868710;
      }
      goto L_0886870C;
    }
L_0886870C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08868710;
L_08868710:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08868718:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    goto L_0886878C;
L_0886878C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088687B4;
      }
      goto L_088687A0;
    }
L_088687A0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088687BC;
      }
      goto L_088687B4;
    }
L_088687B4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088687BC;
L_088687BC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088687E4;
      }
      goto L_088687D0;
    }
L_088687D0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088687EC;
      }
      goto L_088687E4;
    }
L_088687E4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_088687EC;
L_088687EC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0886878C;
      }
      goto L_088687FC;
    }
L_088687FC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08868810;
      }
      goto L_08868808;
    }
L_08868808:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08868814;
      }
      goto L_08868810;
    }
L_08868810:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08868814;
L_08868814:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868A70;
      }
      goto L_08868824;
    }
L_08868824:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_0886886C;
      }
      goto L_08868838;
    }
L_08868838:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08868860u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868860u) goto L_08868860;
    return;
L_08868860:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0886887C;
      }
      goto L_0886886C;
    }
L_0886886C:
    aot_gpr[31] = (0x08868874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08868874u) goto L_08868874;
    return;
L_08868874:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0886887C;
L_0886887C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08868890;
L_08868890:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088688B8;
      }
      goto L_088688A4;
    }
L_088688A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868920;
      }
      goto L_088688B8;
    }
L_088688B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08868920;
L_08868920:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_0886894C;
    }
    goto L_08868934;
L_08868934:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088689B0;
      }
      goto L_08868948;
    }
L_08868948:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0886894C;
L_0886894C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[7]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[7] << 3u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_088689B0;
L_088689B0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08868890;
      }
      goto L_088689C0;
    }
L_088689C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_08868A14;
      }
      goto L_088689D4;
    }
L_088689D4:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    goto L_088689DC;
L_088689DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088689DC;
      }
      goto L_08868A14;
    }
L_08868A14:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] << 3u);
      if (branch_taken) {
          goto L_08868A68;
      }
      goto L_08868A28;
    }
L_08868A28:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    goto L_08868A30;
L_08868A30:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08868A30;
      }
      goto L_08868A68;
    }
L_08868A68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08868A74;
      }
      goto L_08868A70;
    }
L_08868A70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_08868A74;
L_08868A74:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    goto L_08868A8C;
L_08868A8C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08868AB4;
      }
      goto L_08868AA0;
    }
L_08868AA0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868ABC;
      }
      goto L_08868AB4;
    }
L_08868AB4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08868ABC;
L_08868ABC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868AE4;
      }
      goto L_08868AD0;
    }
L_08868AD0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868AEC;
      }
      goto L_08868AE4;
    }
L_08868AE4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    goto L_08868AEC;
L_08868AEC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08868A8C;
      }
      goto L_08868AFC;
    }
L_08868AFC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08868B14;
      }
      goto L_08868B08;
    }
L_08868B08:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08868B18;
      }
      goto L_08868B14;
    }
L_08868B14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08868B18;
L_08868B18:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868D78;
      }
      goto L_08868B28;
    }
L_08868B28:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08868B70;
      }
      goto L_08868B3C;
    }
L_08868B3C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08868B64u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868B64u) goto L_08868B64;
    return;
L_08868B64:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08868B80;
      }
      goto L_08868B70;
    }
L_08868B70:
    aot_gpr[31] = (0x08868B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08868B78u) goto L_08868B78;
    return;
L_08868B78:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08868B80;
L_08868B80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(604));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 9u);
    goto L_08868B98;
L_08868B98:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08868BC0;
      }
      goto L_08868BAC;
    }
L_08868BAC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868C28;
      }
      goto L_08868BC0;
    }
L_08868BC0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    goto L_08868C28;
L_08868C28:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08868C54;
    }
    goto L_08868C3C;
L_08868C3C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868CB8;
      }
      goto L_08868C50;
    }
L_08868C50:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08868C54;
L_08868C54:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[8] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    goto L_08868CB8;
L_08868CB8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08868B98;
      }
      goto L_08868CC4;
    }
L_08868CC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_08868D18;
      }
      goto L_08868CD8;
    }
L_08868CD8:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    goto L_08868CE0;
L_08868CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08868CE0;
      }
      goto L_08868D18;
    }
L_08868D18:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] << 3u);
      if (branch_taken) {
          goto L_08868D6C;
      }
      goto L_08868D2C;
    }
L_08868D2C:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    goto L_08868D34;
L_08868D34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08868D34;
      }
      goto L_08868D6C;
    }
L_08868D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_08868D80;
      }
      goto L_08868D78;
    }
L_08868D78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    goto L_08868D80;
L_08868D80:
    aot_gpr[22] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08868D88;
L_08868D88:
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08868DB4;
      }
      goto L_08868DAC;
    }
L_08868DAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08868DC8;
      }
      goto L_08868DB4;
    }
L_08868DB4:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08868D88;
      }
      goto L_08868DC4;
    }
L_08868DC4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 2 ? 1u : 0u);
    goto L_08868DC8;
L_08868DC8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868E38;
      }
      goto L_08868DD0;
    }
L_08868DD0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08868E00;
      }
      goto L_08868DD8;
    }
L_08868DD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08868DF8u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868DF8u) goto L_08868DF8;
    return;
L_08868DF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08868E0C;
      }
      goto L_08868E00;
    }
L_08868E00:
    aot_gpr[31] = (0x08868E08u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08868E08u) goto L_08868E08;
    return;
L_08868E08:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08868E0C;
L_08868E0C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[18]);
        goto L_08868E2C;
    }
    goto L_08868E18;
L_08868E18:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    goto L_08868E2C;
L_08868E2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 7u, 0x0886904Cu>(ctx, &aot_mem); return;
      }
      goto L_08868E38;
    }
L_08868E38:
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[21] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08868E6C;
      }
      goto L_08868E44;
    }
L_08868E44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08868E64u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868E64u) goto L_08868E64;
    return;
L_08868E64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08868E78;
      }
      goto L_08868E6C;
    }
L_08868E6C:
    aot_gpr[31] = (0x08868E74u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08868E74u) goto L_08868E74;
    return;
L_08868E74:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08868E78;
L_08868E78:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08868EE8;
      }
      goto L_08868E84;
    }
L_08868E84:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[22]);
      if (branch_taken) {
          goto L_08868ED8;
      }
      goto L_08868E8C;
    }
L_08868E8C:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[22] << 2u);
      if (branch_taken) {
          goto L_08868EC4;
      }
      goto L_08868E9C;
    }
L_08868E9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08868EBCu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08868EBCu) goto L_08868EBC;
    return;
L_08868EBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08868ED0;
      }
      goto L_08868EC4;
    }
L_08868EC4:
    aot_gpr[31] = (0x08868ECCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08868ECCu) goto L_08868ECC;
    return;
L_08868ECC:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    goto L_08868ED0;
L_08868ED0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[22]);
      if (branch_taken) {
          goto L_08868EDC;
      }
      goto L_08868ED8;
    }
L_08868ED8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    goto L_08868EDC;
L_08868EDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_08868EE8;
L_08868EE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08868FB0;
      }
      goto L_08868EFC;
    }
L_08868EFC:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08868F04;
L_08868F04:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(20));
    aot_gpr[10] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08868F40;
      }
      goto L_08868F34;
    }
L_08868F34:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08868F58;
      }
      goto L_08868F40;
    }
L_08868F40:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08868F5C;
    }
    goto L_08868F54;
L_08868F54:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08868F58;
L_08868F58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_08868F5C;
L_08868F5C:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[14])) && aot_fpr[12] == aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08868F80;
      }
      goto L_08868F78;
    }
L_08868F78:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08868F8C;
      }
      goto L_08868F80;
    }
L_08868F80:
    aot_fpr[13] = aot_fpr[15] - aot_fpr[13];
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    aot_fpr[12] = aot_fpr[13] / aot_fpr[12];
    goto L_08868F8C;
L_08868F8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08868F04;
      }
      goto L_08868FB0;
    }
L_08868FB0:
    aot_gpr[4] = (aot_gpr[21] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[21]);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[18] = (aot_gpr[21] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[18] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_08868FEC;
      }
      goto L_08868FE0;
    }
L_08868FE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 2u, 0x08869004u>(ctx, &aot_mem); return;
      }
      goto L_08868FEC;
    }
L_08868FEC:
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 3u, 0x08869008u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 1u, 0x08869000u>(ctx, &aot_mem); return;
}

void recomp_unit_0100(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0100_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_100(Runtime &runtime) {
    runtime.register_generated_unit(100u, 0x08868000u, 4096u, &recomp_unit_0100, &recomp_unit_0100_entry);
    runtime.register_function(0x08868004u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868014u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868030u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868038u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886804Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886805Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868064u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868080u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868088u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868090u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868094u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886809Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088680B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088680C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088680C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088680D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088680E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088680ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868108u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868110u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868118u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886811Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868124u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868140u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868148u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868150u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868154u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886815Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868170u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886818Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868194u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886819Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088681B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868214u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886821Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868230u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868234u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868240u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868278u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886828Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868294u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088682B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088682B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088682D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088682D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088682F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868304u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868318u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868320u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868340u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868344u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868360u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868364u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886837Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886838Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868390u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088683D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088683E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088683F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868458u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868460u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868470u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868480u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868490u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088684A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088684B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088684C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088684CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088684E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088684FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868514u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868518u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886852Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868538u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868540u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868548u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868550u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868558u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868570u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886859Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088685ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088685C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088685E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088685F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886860Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868618u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886861Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868624u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868638u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868640u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868648u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088686B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088686C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088686DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088686F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868704u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886870Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868710u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868718u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886878Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088687FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868808u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868810u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868814u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868824u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868838u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868860u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886886Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868874u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886887Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868890u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088688A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088688B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868920u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868934u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868948u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0886894Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088689B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088689C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088689D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x088689DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868A8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868AB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868ABCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868AD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868AE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868AECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868AFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868B98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868BACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868BC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868C28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868C3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868C50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868C54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868CB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868CC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868CD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868CE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868D88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868DF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868E9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868EBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868EC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868ECCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868ED0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868ED8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868EDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868EE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868EFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868F8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868FB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868FE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08868FECu, &recomp_unit_0100, "recomp_unit_0100");
}
} // namespace psprecomp
