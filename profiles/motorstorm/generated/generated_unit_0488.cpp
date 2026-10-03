#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0488[1011] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 17, 18, 0, 19,
    0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 35, 0, 36, 0, 0, 37, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43,
    0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 62, 0, 63, 64, 0, 65, 66, 0, 67, 0, 0, 68, 0, 0, 69, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 82, 0, 83, 84,
    0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 97, 0,
    0, 0, 0, 98, 0, 0, 99, 100, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0,
    105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 136, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149,
    0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157,
    0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 180, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 191, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 196, 0, 197, 0, 0, 198, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209,
};
void recomp_unit_0488_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089EC004u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0488[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EC004;
    case 2u: goto L_089EC014;
    case 3u: goto L_089EC01C;
    case 4u: goto L_089EC028;
    case 5u: goto L_089EC030;
    case 6u: goto L_089EC04C;
    case 7u: goto L_089EC06C;
    case 8u: goto L_089EC0B8;
    case 9u: goto L_089EC0C4;
    case 10u: goto L_089EC0C8;
    case 11u: goto L_089EC0CC;
    case 12u: goto L_089EC0FC;
    case 13u: goto L_089EC128;
    case 14u: goto L_089EC150;
    case 15u: goto L_089EC160;
    case 16u: goto L_089EC168;
    case 17u: goto L_089EC174;
    case 18u: goto L_089EC178;
    case 19u: goto L_089EC180;
    case 20u: goto L_089EC190;
    case 21u: goto L_089EC198;
    case 22u: goto L_089EC1A4;
    case 23u: goto L_089EC1AC;
    case 24u: goto L_089EC1E4;
    case 25u: goto L_089EC1F0;
    case 26u: goto L_089EC204;
    case 27u: goto L_089EC21C;
    case 28u: goto L_089EC224;
    case 29u: goto L_089EC280;
    case 30u: goto L_089EC290;
    case 31u: goto L_089EC298;
    case 32u: goto L_089EC2A0;
    case 33u: goto L_089EC2AC;
    case 34u: goto L_089EC2BC;
    case 35u: goto L_089EC2C0;
    case 36u: goto L_089EC2C8;
    case 37u: goto L_089EC2D4;
    case 38u: goto L_089EC2D8;
    case 39u: goto L_089EC308;
    case 40u: goto L_089EC338;
    case 41u: goto L_089EC368;
    case 42u: goto L_089EC374;
    case 43u: goto L_089EC380;
    case 44u: goto L_089EC38C;
    case 45u: goto L_089EC394;
    case 46u: goto L_089EC39C;
    case 47u: goto L_089EC3A4;
    case 48u: goto L_089EC3AC;
    case 49u: goto L_089EC3B4;
    case 50u: goto L_089EC3BC;
    case 51u: goto L_089EC3C4;
    case 52u: goto L_089EC3CC;
    case 53u: goto L_089EC3D4;
    case 54u: goto L_089EC3DC;
    case 55u: goto L_089EC3E4;
    case 56u: goto L_089EC400;
    case 57u: goto L_089EC414;
    case 58u: goto L_089EC43C;
    case 59u: goto L_089EC44C;
    case 60u: goto L_089EC470;
    case 61u: goto L_089EC480;
    case 62u: goto L_089EC48C;
    case 63u: goto L_089EC494;
    case 64u: goto L_089EC498;
    case 65u: goto L_089EC4A0;
    case 66u: goto L_089EC4A4;
    case 67u: goto L_089EC4AC;
    case 68u: goto L_089EC4B8;
    case 69u: goto L_089EC4C4;
    case 70u: goto L_089EC4C8;
    case 71u: goto L_089EC4D4;
    case 72u: goto L_089EC508;
    case 73u: goto L_089EC514;
    case 74u: goto L_089EC51C;
    case 75u: goto L_089EC52C;
    case 76u: goto L_089EC534;
    case 77u: goto L_089EC544;
    case 78u: goto L_089EC550;
    case 79u: goto L_089EC558;
    case 80u: goto L_089EC564;
    case 81u: goto L_089EC570;
    case 82u: goto L_089EC574;
    case 83u: goto L_089EC57C;
    case 84u: goto L_089EC580;
    case 85u: goto L_089EC588;
    case 86u: goto L_089EC58C;
    case 87u: goto L_089EC5B0;
    case 88u: goto L_089EC5BC;
    case 89u: goto L_089EC5C4;
    case 90u: goto L_089EC5FC;
    case 91u: goto L_089EC610;
    case 92u: goto L_089EC648;
    case 93u: goto L_089EC658;
    case 94u: goto L_089EC664;
    case 95u: goto L_089EC66C;
    case 96u: goto L_089EC678;
    case 97u: goto L_089EC67C;
    case 98u: goto L_089EC690;
    case 99u: goto L_089EC69C;
    case 100u: goto L_089EC6A0;
    case 101u: goto L_089EC6A8;
    case 102u: goto L_089EC6AC;
    case 103u: goto L_089EC6E0;
    case 104u: goto L_089EC6FC;
    case 105u: goto L_089EC704;
    case 106u: goto L_089EC714;
    case 107u: goto L_089EC71C;
    case 108u: goto L_089EC72C;
    case 109u: goto L_089EC734;
    case 110u: goto L_089EC768;
    case 111u: goto L_089EC76C;
    case 112u: goto L_089EC778;
    case 113u: goto L_089EC790;
    case 114u: goto L_089EC79C;
    case 115u: goto L_089EC7CC;
    case 116u: goto L_089EC7D8;
    case 117u: goto L_089EC7FC;
    case 118u: goto L_089EC804;
    case 119u: goto L_089EC810;
    case 120u: goto L_089EC818;
    case 121u: goto L_089EC828;
    case 122u: goto L_089EC830;
    case 123u: goto L_089EC968;
    case 124u: goto L_089EC974;
    case 125u: goto L_089EC9A0;
    case 126u: goto L_089EC9B4;
    case 127u: goto L_089EC9D8;
    case 128u: goto L_089EC9E8;
    case 129u: goto L_089ECA00;
    case 130u: goto L_089ECA1C;
    case 131u: goto L_089ECA4C;
    case 132u: goto L_089ECA54;
    case 133u: goto L_089ECA5C;
    case 134u: goto L_089ECA68;
    case 135u: goto L_089ECA78;
    case 136u: goto L_089ECA7C;
    case 137u: goto L_089ECA88;
    case 138u: goto L_089ECAAC;
    case 139u: goto L_089ECAB4;
    case 140u: goto L_089ECABC;
    case 141u: goto L_089ECACC;
    case 142u: goto L_089ECAD4;
    case 143u: goto L_089ECADC;
    case 144u: goto L_089ECAE8;
    case 145u: goto L_089ECAF0;
    case 146u: goto L_089ECB18;
    case 147u: goto L_089ECB40;
    case 148u: goto L_089ECB68;
    case 149u: goto L_089ECB80;
    case 150u: goto L_089ECB88;
    case 151u: goto L_089ECB90;
    case 152u: goto L_089ECBA0;
    case 153u: goto L_089ECBB8;
    case 154u: goto L_089ECBD0;
    case 155u: goto L_089ECBEC;
    case 156u: goto L_089ECBF8;
    case 157u: goto L_089ECC00;
    case 158u: goto L_089ECC0C;
    case 159u: goto L_089ECC20;
    case 160u: goto L_089ECC34;
    case 161u: goto L_089ECC4C;
    case 162u: goto L_089ECC5C;
    case 163u: goto L_089ECC68;
    case 164u: goto L_089ECC7C;
    case 165u: goto L_089ECC90;
    case 166u: goto L_089ECCA0;
    case 167u: goto L_089ECCAC;
    case 168u: goto L_089ECCB8;
    case 169u: goto L_089ECCC0;
    case 170u: goto L_089ECCC8;
    case 171u: goto L_089ECCD4;
    case 172u: goto L_089ECCD8;
    case 173u: goto L_089ECCEC;
    case 174u: goto L_089ECCFC;
    case 175u: goto L_089ECD34;
    case 176u: goto L_089ECD3C;
    case 177u: goto L_089ECD78;
    case 178u: goto L_089ECD88;
    case 179u: goto L_089ECD98;
    case 180u: goto L_089ECDA0;
    case 181u: goto L_089ECDA4;
    case 182u: goto L_089ECDAC;
    case 183u: goto L_089ECDBC;
    case 184u: goto L_089ECDC4;
    case 185u: goto L_089ECDD0;
    case 186u: goto L_089ECDD8;
    case 187u: goto L_089ECDF4;
    case 188u: goto L_089ECE14;
    case 189u: goto L_089ECE60;
    case 190u: goto L_089ECE6C;
    case 191u: goto L_089ECE70;
    case 192u: goto L_089ECE74;
    case 193u: goto L_089ECEA4;
    case 194u: goto L_089ECED0;
    case 195u: goto L_089ECEF8;
    case 196u: goto L_089ECF08;
    case 197u: goto L_089ECF10;
    case 198u: goto L_089ECF1C;
    case 199u: goto L_089ECF20;
    case 200u: goto L_089ECF28;
    case 201u: goto L_089ECF38;
    case 202u: goto L_089ECF40;
    case 203u: goto L_089ECF4C;
    case 204u: goto L_089ECF54;
    case 205u: goto L_089ECF8C;
    case 206u: goto L_089ECF98;
    case 207u: goto L_089ECFAC;
    case 208u: goto L_089ECFC4;
    case 209u: goto L_089ECFCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EC004:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089EC014u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC014:
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[17]);
        goto L_089EC04C;
    }
    goto L_089EC01C;
L_089EC01C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089EC030;
      }
      goto L_089EC028;
    }
L_089EC028:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089EC030;
L_089EC030:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC04C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[30]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089EC0C4;
      }
      goto L_089EC0B8;
    }
L_089EC0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
        goto L_089EC0FC;
    }
    goto L_089EC0C4;
L_089EC0C4:
    aot_gpr[16] = (0u + 0u);
    goto L_089EC0C8;
L_089EC0C8:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089EC0CC;
L_089EC0CC:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
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
L_089EC0FC:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[20] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_089EC1E4;
      }
      goto L_089EC128;
    }
L_089EC128:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[31] = (0x089EC150u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089EC150u) goto L_089EC150;
    return;
L_089EC150:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EC160u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089EC160:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089EC0C8;
      }
      goto L_089EC168;
    }
L_089EC168:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089EC178;
      }
      goto L_089EC174;
    }
L_089EC174:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_089EC178;
L_089EC178:
    aot_gpr[31] = (0x089EC180u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089EC180u) goto L_089EC180;
    return;
L_089EC180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089EC190u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC190:
    if (aot_gpr[16] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_089EC1AC;
    }
    goto L_089EC198;
L_089EC198:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089EC0CC;
    }
    goto L_089EC1A4;
L_089EC1A4:
    aot_gpr[16] = (0u + 0u);
    goto L_089EC0C8;
L_089EC1AC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
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
L_089EC1E4:
    aot_gpr[16] = (aot_gpr[19] + 0u);
    aot_gpr[17] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (0u + 0u);
    goto L_089EC1F0;
L_089EC1F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089EC204u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089EC204u) goto L_089EC204;
    return;
L_089EC204:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089EC1F0;
      }
      goto L_089EC21C;
    }
L_089EC21C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_089EC128;
L_089EC224:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089EC280u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089EC280u) goto L_089EC280;
    return;
L_089EC280:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EC290u);
    aot_gpr[20] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089EC290:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089EC308;
      }
      goto L_089EC298;
    }
L_089EC298:
    if (aot_gpr[23] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_089EC2C0;
    }
    goto L_089EC2A0;
L_089EC2A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089EC2BC;
      }
      goto L_089EC2AC;
    }
L_089EC2AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089EC338;
      }
      goto L_089EC2BC;
    }
L_089EC2BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089EC2C0;
L_089EC2C0:
    aot_gpr[31] = (0x089EC2C8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC2C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089EC308;
      }
      goto L_089EC2D4;
    }
L_089EC2D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_089EC2D8;
L_089EC2D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC308:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC338:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(10)));
    aot_gpr[3] = (aot_gpr[30] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[2] = (aot_gpr[30]);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089EC368u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089EC368u) goto L_089EC368;
    return;
L_089EC368:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089EC374u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089EC374u) goto L_089EC374;
    return;
L_089EC374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EC380u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC380:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_089EC2D8;
    }
    goto L_089EC38C;
L_089EC38C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089EC308;
L_089EC394:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC39C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (0x089EC400u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5A9ACu;
    return;
L_089EC400:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 123u, 0x089EB790u>(ctx, &aot_mem); return;
L_089EC414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[31] = (0x089EC43Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089EC43Cu) goto L_089EC43C;
    return;
L_089EC43C:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089EC470;
      }
      goto L_089EC44C;
    }
L_089EC44C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC480u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EC480:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EC4A4;
      }
      goto L_089EC48C;
    }
L_089EC48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089EC5B0;
L_089EC494:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089EC498;
L_089EC498:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089EC580;
    }
    goto L_089EC4A0;
L_089EC4A0:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    goto L_089EC4A4;
L_089EC4A4:
    if (aot_gpr[20] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EC498;
    }
    goto L_089EC4AC;
L_089EC4AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EC498;
    }
    goto L_089EC4B8;
L_089EC4B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EC498;
    }
    goto L_089EC4C4;
L_089EC4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089EC4C8;
L_089EC4C8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC4D4u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC4D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(10)));
      if (branch_taken) {
          goto L_089EC534;
      }
      goto L_089EC508;
    }
L_089EC508:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x089EC514u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5A9B4u;
    return;
L_089EC514:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EC534;
      }
      goto L_089EC51C;
    }
L_089EC51C:
    aot_gpr[2] = (32833u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 1801u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089EC534;
      }
      goto L_089EC52C;
    }
L_089EC52C:
    aot_gpr[2] = (0u | 50000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089EC534;
L_089EC534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC544u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EC544:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089EC494;
      }
      goto L_089EC550;
    }
L_089EC550:
    aot_gpr[31] = (0x089EC558u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089EC558u) goto L_089EC558;
    return;
L_089EC558:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EC574;
    }
    goto L_089EC564;
L_089EC564:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089EC4C8;
    }
    goto L_089EC570;
L_089EC570:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089EC574;
L_089EC574:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EC4A0;
      }
      goto L_089EC57C;
    }
L_089EC57C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089EC580;
L_089EC580:
    aot_gpr[31] = (0x089EC588u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC588:
    aot_gpr[2] = (aot_gpr[21] + 0u);
    goto L_089EC58C;
L_089EC58C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC5B0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC5BCu);
    aot_gpr[21] = (0u + 0u);
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC5BC:
    aot_gpr[2] = (aot_gpr[21] + 0u);
    goto L_089EC58C;
L_089EC5C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    aot_gpr[20] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[31] = (0x089EC5FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089EC5FCu) goto L_089EC5FC;
    return;
L_089EC5FC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2064));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089EC648;
      }
      goto L_089EC610;
    }
L_089EC610:
    aot_gpr[29] = (aot_gpr[22] + 0u);
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC648:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC658u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EC658:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089EC67C;
    }
    goto L_089EC664;
L_089EC664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089EC804;
L_089EC66C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089EC6A0;
    }
    goto L_089EC678;
L_089EC678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089EC67C;
L_089EC67C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EC790;
      }
      goto L_089EC690;
    }
L_089EC690:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089EC67C;
    }
    goto L_089EC69C;
L_089EC69C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089EC6A0;
L_089EC6A0:
    aot_gpr[31] = (0x089EC6A8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC6A8:
    aot_gpr[29] = (aot_gpr[22] + 0u);
    goto L_089EC6AC;
L_089EC6AC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC6E0:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089EC6FCu);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5A9C4u;
    return;
L_089EC6FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EC7CC;
      }
      goto L_089EC704;
    }
L_089EC704:
    aot_gpr[2] = (32833u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 1801u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u | 50000u);
      if (branch_taken) {
          goto L_089EC7FC;
      }
      goto L_089EC714;
    }
L_089EC714:
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    goto L_089EC71C;
L_089EC71C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC72Cu);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EC72C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(26)));
      if (branch_taken) {
          goto L_089EC66C;
      }
      goto L_089EC734;
    }
L_089EC734:
    aot_gpr[2] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(36), aot_gpr[4]);
      if (branch_taken) {
          goto L_089EC76C;
      }
      goto L_089EC768;
    }
L_089EC768:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_089EC76C;
L_089EC76C:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089EC778u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089EC778u) goto L_089EC778;
    return;
L_089EC778:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EC66C;
      }
      goto L_089EC790;
    }
L_089EC790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EC79Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC79C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2048));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089EC6E0;
    }
    goto L_089EC7CC;
L_089EC7CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089EC71C;
      }
      goto L_089EC7D8;
    }
L_089EC7D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089EC71C;
L_089EC7FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    goto L_089EC7CC;
L_089EC804:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EC810u);
    aot_gpr[20] = (0u + 0u);
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EC810:
    aot_gpr[29] = (aot_gpr[22] + 0u);
    goto L_089EC6AC;
L_089EC818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089EC828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 63u, 0x089EB3C0u>(ctx, &aot_mem) && ctx.pc == 0x089EC828u) goto L_089EC828;
    return;
L_089EC828:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EC968;
      }
      goto L_089EC830;
    }
L_089EC830:
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14908));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-17388));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17324));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-17260));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17224));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-17216));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17208));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-17164));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17120));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-17112));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16980));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16556));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-16276));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15836));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15468));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15460));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15452));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15444));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15436));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15428));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15420));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15412));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15404));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15396));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15388));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-15340));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    goto L_089EC968;
L_089EC968:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(18));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089EC9A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = 0x08A5A93Cu;
    return;
L_089EC9A0:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC9B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089EC9D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = 0x08A5A93Cu;
    return;
L_089EC9D8:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC9E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089ECA00u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    ctx.pc = 0x08A5A924u;
    return;
L_089ECA00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECA1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
      if (branch_taken) {
          goto L_089ECB18;
      }
      goto L_089ECA4C;
    }
L_089ECA4C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089ECB18;
      }
      goto L_089ECA54;
    }
L_089ECA54:
    aot_gpr[31] = (0x089ECA5Cu);
    aot_gpr[6] = (aot_gpr[18] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECA5Cu) goto L_089ECA5C;
    return;
L_089ECA5C:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089ECA68;
L_089ECA68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_089ECACC;
      }
      goto L_089ECA78;
    }
L_089ECA78:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089ECA7C;
L_089ECA7C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_089ECAAC;
      }
      goto L_089ECA88;
    }
L_089ECA88:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECAAC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089ECA68;
      }
      goto L_089ECAB4;
    }
L_089ECAB4:
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089ECA7C;
    }
    goto L_089ECABC;
L_089ECABC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089ECA78;
      }
      goto L_089ECACC;
    }
L_089ECACC:
    aot_gpr[31] = (0x089ECAD4u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    ctx.pc = 0x08A5A954u;
    return;
L_089ECAD4:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089ECA7C;
    }
    goto L_089ECADC;
L_089ECADC:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089ECAE8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = 0x08A5A8DCu;
    return;
L_089ECAE8:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089ECA7C;
    }
    goto L_089ECAF0;
L_089ECAF0:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[29] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089ECA78;
L_089ECB18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECB40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1056));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1044), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1024));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1040), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1048), aot_gpr[31]);
    aot_gpr[31] = (0x089ECB68u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = 0x08A5A89Cu;
    return;
L_089ECB68:
    aot_gpr[7] = (76u << 16u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[7] | 19264u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECB80;
    }
L_089ECB80:
    aot_gpr[31] = (0x089ECB88u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5A894u;
    return;
L_089ECB88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089ECBB8;
      }
      goto L_089ECB90;
    }
L_089ECB90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089ECBA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = 0x08A5A8ACu;
    return;
L_089ECBA0:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECBB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    aot_gpr[31] = (0x089ECBECu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08A5A954u;
    return;
L_089ECBEC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089ECC0C;
      }
      goto L_089ECBF8;
    }
L_089ECBF8:
    aot_gpr[31] = (0x089ECC00u);
    // nop
    ctx.pc = 0x08A5A924u;
    return;
L_089ECC00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_089ECC0C;
L_089ECC0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECC20:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    aot_gpr[31] = (0x089ECC4Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x08A5AFCCu;
    return;
L_089ECC4C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089ECC5Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08A5B15Cu;
    return;
L_089ECC5C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089ECC68u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08A5A954u;
    return;
L_089ECC68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (aot_gpr[2] >> 31u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089ECC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ECC90u) goto L_089ECC90;
    return;
L_089ECC90:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089ECCEC;
      }
      goto L_089ECCA0;
    }
L_089ECCA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ECCACu);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089ECCAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089ECCD8;
    }
    goto L_089ECCB8;
L_089ECCB8:
    aot_gpr[31] = (0x089ECCC0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5A914u;
    return;
L_089ECCC0:
    aot_gpr[31] = (0x089ECCC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 123u, 0x089EB790u>(ctx, &aot_mem) && ctx.pc == 0x089ECCC8u) goto L_089ECCC8;
    return;
L_089ECCC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ECCB8;
      }
      goto L_089ECCD4;
    }
L_089ECCD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089ECCD8;
L_089ECCD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08A5B09Cu; return;
L_089ECCEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECCFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089ECDD0;
      }
      goto L_089ECD34;
    }
L_089ECD34:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ECDD0;
      }
      goto L_089ECD3C;
    }
L_089ECD3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[31] = (0x089ECD78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ECD78u) goto L_089ECD78;
    return;
L_089ECD78:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ECD88u);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ECD88:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089ECDD0;
      }
      goto L_089ECD98;
    }
L_089ECD98:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089ECDA4;
      }
      goto L_089ECDA0;
    }
L_089ECDA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089ECDA4;
L_089ECDA4:
    aot_gpr[31] = (0x089ECDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089ECDACu) goto L_089ECDAC;
    return;
L_089ECDAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ECDBCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ECDBC:
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[17]);
        goto L_089ECDF4;
    }
    goto L_089ECDC4;
L_089ECDC4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089ECDD8;
      }
      goto L_089ECDD0;
    }
L_089ECDD0:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089ECDD8;
L_089ECDD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECDF4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECE14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[30]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089ECE6C;
      }
      goto L_089ECE60;
    }
L_089ECE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
        goto L_089ECEA4;
    }
    goto L_089ECE6C;
L_089ECE6C:
    aot_gpr[16] = (0u + 0u);
    goto L_089ECE70;
L_089ECE70:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089ECE74;
L_089ECE74:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
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
L_089ECEA4:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[20] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) > 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_089ECF8C;
      }
      goto L_089ECED0;
    }
L_089ECED0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[31] = (0x089ECEF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ECEF8u) goto L_089ECEF8;
    return;
L_089ECEF8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ECF08u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ECF08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089ECE70;
      }
      goto L_089ECF10;
    }
L_089ECF10:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089ECF20;
      }
      goto L_089ECF1C;
    }
L_089ECF1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_089ECF20;
L_089ECF20:
    aot_gpr[31] = (0x089ECF28u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089ECF28u) goto L_089ECF28;
    return;
L_089ECF28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ECF38u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ECF38:
    if (aot_gpr[16] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_089ECF54;
    }
    goto L_089ECF40;
L_089ECF40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089ECE74;
    }
    goto L_089ECF4C;
L_089ECF4C:
    aot_gpr[16] = (0u + 0u);
    goto L_089ECE70;
L_089ECF54:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
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
L_089ECF8C:
    aot_gpr[16] = (aot_gpr[19] + 0u);
    aot_gpr[17] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (0u + 0u);
    goto L_089ECF98;
L_089ECF98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089ECFACu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089ECFACu) goto L_089ECFAC;
    return;
L_089ECFAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089ECF98;
      }
      goto L_089ECFC4;
    }
L_089ECFC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_089ECED0;
L_089ECFCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    ctx.pc = 0x089ED000u; return;
}

void recomp_unit_0488(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0488_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_488(Runtime &runtime) {
    runtime.register_generated_unit(488u, 0x089EC000u, 4096u, &recomp_unit_0488, &recomp_unit_0488_entry);
    runtime.register_function(0x089EC004u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC014u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC01Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC028u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC030u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC04Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC06Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC0B8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC0C4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC0C8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC0CCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC0FCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC128u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC150u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC160u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC168u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC174u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC178u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC180u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC190u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC198u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC1A4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC1ACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC1E4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC1F0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC204u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC21Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC224u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC280u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC290u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC298u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2A0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2ACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2BCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2C0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2C8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2D4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC2D8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC308u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC338u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC368u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC374u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC380u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC38Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC394u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC39Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3A4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3ACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3B4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3BCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3C4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3CCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3D4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3DCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC3E4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC400u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC414u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC43Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC44Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC470u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC480u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC48Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC494u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC498u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4A0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4A4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4ACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4B8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4C4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4C8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC4D4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC508u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC514u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC51Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC52Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC534u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC544u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC550u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC558u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC564u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC570u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC574u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC57Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC580u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC588u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC58Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC5B0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC5BCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC5C4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC5FCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC610u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC648u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC658u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC664u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC66Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC678u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC67Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC690u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC69Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC6A0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC6A8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC6ACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC6E0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC6FCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC704u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC714u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC71Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC72Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC734u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC768u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC76Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC778u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC790u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC79Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC7CCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC7D8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC7FCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC804u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC810u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC818u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC828u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC830u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC968u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC974u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC9A0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC9B4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC9D8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089EC9E8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA00u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA1Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA4Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA54u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA5Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA68u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA78u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA7Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECA88u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECAACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECAB4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECABCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECACCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECAD4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECADCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECAE8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECAF0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECB18u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECB40u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECB68u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECB80u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECB88u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECB90u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECBA0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECBB8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECBD0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECBECu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECBF8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC00u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC0Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC20u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC34u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC4Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC5Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC68u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC7Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECC90u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCA0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCB8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCC0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCC8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCD4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCD8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCECu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECCFCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECD34u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECD3Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECD78u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECD88u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECD98u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDA0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDA4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDBCu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDC4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDD0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDD8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECDF4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECE14u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECE60u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECE6Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECE70u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECE74u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECEA4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECED0u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECEF8u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF08u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF10u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF1Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF20u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF28u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF38u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF40u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF4Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF54u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF8Cu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECF98u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECFACu, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECFC4u, &recomp_unit_0488, "recomp_unit_0488");
    runtime.register_function(0x089ECFCCu, &recomp_unit_0488, "recomp_unit_0488");
}
} // namespace psprecomp
