#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0423[1021] = {
    1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 9, 0, 0,
    0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 36, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 93, 94, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0,
    124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 168, 0, 169, 0, 0,
    170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178,
};
void recomp_unit_0423_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089AB004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0423[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AB004;
    case 2u: goto L_089AB008;
    case 3u: goto L_089AB018;
    case 4u: goto L_089AB01C;
    case 5u: goto L_089AB048;
    case 6u: goto L_089AB060;
    case 7u: goto L_089AB068;
    case 8u: goto L_089AB074;
    case 9u: goto L_089AB078;
    case 10u: goto L_089AB090;
    case 11u: goto L_089AB098;
    case 12u: goto L_089AB0A0;
    case 13u: goto L_089AB0A8;
    case 14u: goto L_089AB0B8;
    case 15u: goto L_089AB0C4;
    case 16u: goto L_089AB0E0;
    case 17u: goto L_089AB0E8;
    case 18u: goto L_089AB0F0;
    case 19u: goto L_089AB128;
    case 20u: goto L_089AB134;
    case 21u: goto L_089AB16C;
    case 22u: goto L_089AB178;
    case 23u: goto L_089AB1B0;
    case 24u: goto L_089AB1BC;
    case 25u: goto L_089AB1F0;
    case 26u: goto L_089AB200;
    case 27u: goto L_089AB204;
    case 28u: goto L_089AB228;
    case 29u: goto L_089AB22C;
    case 30u: goto L_089AB234;
    case 31u: goto L_089AB240;
    case 32u: goto L_089AB248;
    case 33u: goto L_089AB25C;
    case 34u: goto L_089AB264;
    case 35u: goto L_089AB26C;
    case 36u: goto L_089AB270;
    case 37u: goto L_089AB27C;
    case 38u: goto L_089AB2A0;
    case 39u: goto L_089AB2D8;
    case 40u: goto L_089AB2FC;
    case 41u: goto L_089AB324;
    case 42u: goto L_089AB328;
    case 43u: goto L_089AB344;
    case 44u: goto L_089AB37C;
    case 45u: goto L_089AB3A0;
    case 46u: goto L_089AB3C8;
    case 47u: goto L_089AB3CC;
    case 48u: goto L_089AB3E8;
    case 49u: goto L_089AB408;
    case 50u: goto L_089AB434;
    case 51u: goto L_089AB444;
    case 52u: goto L_089AB448;
    case 53u: goto L_089AB460;
    case 54u: goto L_089AB484;
    case 55u: goto L_089AB4B0;
    case 56u: goto L_089AB4C0;
    case 57u: goto L_089AB4C4;
    case 58u: goto L_089AB4DC;
    case 59u: goto L_089AB500;
    case 60u: goto L_089AB510;
    case 61u: goto L_089AB518;
    case 62u: goto L_089AB528;
    case 63u: goto L_089AB530;
    case 64u: goto L_089AB558;
    case 65u: goto L_089AB568;
    case 66u: goto L_089AB570;
    case 67u: goto L_089AB5A8;
    case 68u: goto L_089AB5B4;
    case 69u: goto L_089AB5EC;
    case 70u: goto L_089AB5F8;
    case 71u: goto L_089AB630;
    case 72u: goto L_089AB63C;
    case 73u: goto L_089AB678;
    case 74u: goto L_089AB680;
    case 75u: goto L_089AB68C;
    case 76u: goto L_089AB6B8;
    case 77u: goto L_089AB6D0;
    case 78u: goto L_089AB6D8;
    case 79u: goto L_089AB6EC;
    case 80u: goto L_089AB704;
    case 81u: goto L_089AB71C;
    case 82u: goto L_089AB72C;
    case 83u: goto L_089AB764;
    case 84u: goto L_089AB784;
    case 85u: goto L_089AB798;
    case 86u: goto L_089AB7A8;
    case 87u: goto L_089AB7E0;
    case 88u: goto L_089AB818;
    case 89u: goto L_089AB824;
    case 90u: goto L_089AB840;
    case 91u: goto L_089AB868;
    case 92u: goto L_089AB870;
    case 93u: goto L_089AB874;
    case 94u: goto L_089AB878;
    case 95u: goto L_089AB88C;
    case 96u: goto L_089AB8A0;
    case 97u: goto L_089AB8A8;
    case 98u: goto L_089AB8B0;
    case 99u: goto L_089AB8E0;
    case 100u: goto L_089AB8E8;
    case 101u: goto L_089AB920;
    case 102u: goto L_089AB92C;
    case 103u: goto L_089AB964;
    case 104u: goto L_089AB970;
    case 105u: goto L_089AB99C;
    case 106u: goto L_089AB9A8;
    case 107u: goto L_089AB9B0;
    case 108u: goto L_089AB9D0;
    case 109u: goto L_089AB9D8;
    case 110u: goto L_089AB9EC;
    case 111u: goto L_089ABA18;
    case 112u: goto L_089ABA50;
    case 113u: goto L_089ABA6C;
    case 114u: goto L_089ABAA4;
    case 115u: goto L_089ABAB0;
    case 116u: goto L_089ABAE8;
    case 117u: goto L_089ABB0C;
    case 118u: goto L_089ABB34;
    case 119u: goto L_089ABB38;
    case 120u: goto L_089ABB54;
    case 121u: goto L_089ABB5C;
    case 122u: goto L_089ABB64;
    case 123u: goto L_089ABB78;
    case 124u: goto L_089ABB84;
    case 125u: goto L_089ABB8C;
    case 126u: goto L_089ABB94;
    case 127u: goto L_089ABBC4;
    case 128u: goto L_089ABBE0;
    case 129u: goto L_089ABBF8;
    case 130u: goto L_089ABC08;
    case 131u: goto L_089ABC10;
    case 132u: goto L_089ABC18;
    case 133u: goto L_089ABC2C;
    case 134u: goto L_089ABC30;
    case 135u: goto L_089ABC44;
    case 136u: goto L_089ABC4C;
    case 137u: goto L_089ABC54;
    case 138u: goto L_089ABC60;
    case 139u: goto L_089ABC68;
    case 140u: goto L_089ABC74;
    case 141u: goto L_089ABCCC;
    case 142u: goto L_089ABCD8;
    case 143u: goto L_089ABD0C;
    case 144u: goto L_089ABD24;
    case 145u: goto L_089ABD48;
    case 146u: goto L_089ABD54;
    case 147u: goto L_089ABD64;
    case 148u: goto L_089ABD78;
    case 149u: goto L_089ABDA4;
    case 150u: goto L_089ABDC0;
    case 151u: goto L_089ABDD0;
    case 152u: goto L_089ABDD8;
    case 153u: goto L_089ABDE0;
    case 154u: goto L_089ABDE8;
    case 155u: goto L_089ABDF0;
    case 156u: goto L_089ABE04;
    case 157u: goto L_089ABE10;
    case 158u: goto L_089ABE28;
    case 159u: goto L_089ABE30;
    case 160u: goto L_089ABE78;
    case 161u: goto L_089ABEB4;
    case 162u: goto L_089ABED8;
    case 163u: goto L_089ABF2C;
    case 164u: goto L_089ABF30;
    case 165u: goto L_089ABF34;
    case 166u: goto L_089ABF64;
    case 167u: goto L_089ABF6C;
    case 168u: goto L_089ABF70;
    case 169u: goto L_089ABF78;
    case 170u: goto L_089ABF84;
    case 171u: goto L_089ABF98;
    case 172u: goto L_089ABFA8;
    case 173u: goto L_089ABFBC;
    case 174u: goto L_089ABFC4;
    case 175u: goto L_089ABFCC;
    case 176u: goto L_089ABFD4;
    case 177u: goto L_089ABFDC;
    case 178u: goto L_089ABFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AB004:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_089AB008;
L_089AB008:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB0A0;
      }
      goto L_089AB018;
    }
L_089AB018:
    aot_gpr[3] = (2215u << 16u);
    goto L_089AB01C;
L_089AB01C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(243));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(196));
    aot_gpr[9] = (aot_gpr[16] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB048u);
    aot_gpr[11] = (aot_gpr[16] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB048u) goto L_089AB048;
    return;
L_089AB048:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB060:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
        goto L_089AB090;
    }
    goto L_089AB068;
L_089AB068:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_089AB008;
    }
    goto L_089AB074;
L_089AB074:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AB078;
L_089AB078:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB090:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_089AB008;
    }
    goto L_089AB098;
L_089AB098:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AB078;
L_089AB0A0:
    aot_gpr[31] = (0x089AB0A8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 23u, 0x089AD1D0u>(ctx, &aot_mem) && ctx.pc == 0x089AB0A8u) goto L_089AB0A8;
    return;
L_089AB0A8:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(148));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-27));
      if (branch_taken) {
          goto L_089AB048;
      }
      goto L_089AB0B8;
    }
L_089AB0B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089AB0E0;
      }
      goto L_089AB0C4;
    }
L_089AB0C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089AB018;
L_089AB0E0:
    aot_gpr[31] = (0x089AB0E8u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 283u, 0x08985ED4u>(ctx, &aot_mem) && ctx.pc == 0x089AB0E8u) goto L_089AB0E8;
    return;
L_089AB0E8:
    aot_gpr[3] = (2215u << 16u);
    goto L_089AB01C;
L_089AB0F0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(113));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB128u);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB128u) goto L_089AB128;
    return;
L_089AB128:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB134:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(49));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB16Cu);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB16Cu) goto L_089AB16C;
    return;
L_089AB16C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB178:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(53));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB1B0u);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB1B0u) goto L_089AB1B0;
    return;
L_089AB1B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB1BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089AB26C;
      }
      goto L_089AB1F0;
    }
L_089AB1F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089AB240;
      }
      goto L_089AB200;
    }
L_089AB200:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089AB204;
L_089AB204:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB228:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089AB22C;
L_089AB22C:
    if (aot_gpr[19] == aot_gpr[16]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_089AB270;
    }
    goto L_089AB234;
L_089AB234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AB200;
      }
      goto L_089AB240;
    }
L_089AB240:
    aot_gpr[31] = (0x089AB248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089AB248u) goto L_089AB248;
    return;
L_089AB248:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[3]);
        goto L_089AB228;
    }
    goto L_089AB25C;
L_089AB25C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089AB22C;
      }
      goto L_089AB264;
    }
L_089AB264:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089AB204;
L_089AB26C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089AB270;
L_089AB270:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089AB200;
      }
      goto L_089AB27C;
    }
L_089AB27C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB2A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089AB2D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_089AB1BC;
L_089AB2D8:
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[9] = (aot_gpr[17] + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AB328;
      }
      goto L_089AB2FC;
    }
L_089AB2FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(5));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[7] = (ctx.lo);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB324u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB324u) goto L_089AB324;
    return;
L_089AB324:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089AB328;
L_089AB328:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB344:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089AB37Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_089AB1BC;
L_089AB37C:
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(86));
    aot_gpr[9] = (aot_gpr[17] + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AB3CC;
      }
      goto L_089AB3A0;
    }
L_089AB3A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(5));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[7] = (ctx.lo);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB3C8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB3C8u) goto L_089AB3C8;
    return;
L_089AB3C8:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089AB3CC;
L_089AB3CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB3E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089AB408u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AB408u) goto L_089AB408;
    return;
L_089AB408:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(280));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AB448;
      }
      goto L_089AB434;
    }
L_089AB434:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB444u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB444u) goto L_089AB444;
    return;
L_089AB444:
    aot_gpr[12] = (aot_gpr[2] + 0u);
    goto L_089AB448;
L_089AB448:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB460:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089AB484u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AB484u) goto L_089AB484;
    return;
L_089AB484:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(384));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[12] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AB4C4;
      }
      goto L_089AB4B0;
    }
L_089AB4B0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB4C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB4C0u) goto L_089AB4C0;
    return;
L_089AB4C0:
    aot_gpr[12] = (aot_gpr[2] + 0u);
    goto L_089AB4C4;
L_089AB4C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB4DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089AB500u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AB500u) goto L_089AB500;
    return;
L_089AB500:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089AB528;
      }
      goto L_089AB510;
    }
L_089AB510:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089AB518;
L_089AB518:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB528:
    aot_gpr[31] = (0x089AB530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x089AB530u) goto L_089AB530;
    return;
L_089AB530:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(124));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[11] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089AB510;
      }
      goto L_089AB558;
    }
L_089AB558:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB568u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB568u) goto L_089AB568;
    return;
L_089AB568:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089AB518;
L_089AB570:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(51));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB5A8u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB5A8u) goto L_089AB5A8;
    return;
L_089AB5A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB5B4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(49));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB5ECu);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB5ECu) goto L_089AB5EC;
    return;
L_089AB5EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB5F8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(38));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(140));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB630u);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB630u) goto L_089AB630;
    return;
L_089AB630:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB63C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(296));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[16]);
    aot_gpr[31] = (0x089AB678u);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB678u) goto L_089AB678;
    return;
L_089AB678:
    aot_gpr[31] = (0x089AB680u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 162u, 0x08988AB4u>(ctx, &aot_mem) && ctx.pc == 0x089AB680u) goto L_089AB680;
    return;
L_089AB680:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(228));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(340));
    goto L_089AB68C;
L_089AB68C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089AB68C;
      }
      goto L_089AB6B8;
    }
L_089AB6B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[16]);
      if (branch_taken) {
          goto L_089AB764;
      }
      goto L_089AB6D0;
    }
L_089AB6D0:
    aot_gpr[31] = (0x089AB6D8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089AB6D8u) goto L_089AB6D8;
    return;
L_089AB6D8:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089AB6ECu);
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089AB6ECu) goto L_089AB6EC;
    return;
L_089AB6EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089AB704u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB704u) goto L_089AB704;
    return;
L_089AB704:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089AB71Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089AB71Cu) goto L_089AB71C;
    return;
L_089AB71C:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089AB72Cu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089AB72Cu) goto L_089AB72C;
    return;
L_089AB72C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB764:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089AB784u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB784u) goto L_089AB784;
    return;
L_089AB784:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089AB798u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089AB798u) goto L_089AB798;
    return;
L_089AB798:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089AB7A8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089AB7A8u) goto L_089AB7A8;
    return;
L_089AB7A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB7E0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(123));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB818u);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB818u) goto L_089AB818;
    return;
L_089AB818:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB824:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(324));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089AB868u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 76u, 0x089AD6F4u>(ctx, &aot_mem) && ctx.pc == 0x089AB868u) goto L_089AB868;
    return;
L_089AB868:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AB88C;
      }
      goto L_089AB870;
    }
L_089AB870:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089AB874;
L_089AB874:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089AB878;
L_089AB878:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB88C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[2] & 1u);
    aot_gpr[2] = (aot_gpr[2] & 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089AB874;
      }
      goto L_089AB8A0;
    }
L_089AB8A0:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3000));
      if (branch_taken) {
          goto L_089AB874;
      }
      goto L_089AB8A8;
    }
L_089AB8A8:
    aot_gpr[31] = (0x089AB8B0u);
    // nop
    goto L_089AB824;
L_089AB8B0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[8] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(36));
    aot_gpr[9] = (aot_gpr[17] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB8E0u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB8E0u) goto L_089AB8E0;
    return;
L_089AB8E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089AB878;
L_089AB8E8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(26));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(55));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB920u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB920u) goto L_089AB920;
    return;
L_089AB920:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB92C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(26));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(31));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089AB964u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AB964u) goto L_089AB964;
    return;
L_089AB964:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089AB99Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 76u, 0x089AD6F4u>(ctx, &aot_mem) && ctx.pc == 0x089AB99Cu) goto L_089AB99C;
    return;
L_089AB99C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089AB9A8u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 23u, 0x089AD1D0u>(ctx, &aot_mem) && ctx.pc == 0x089AB9A8u) goto L_089AB9A8;
    return;
L_089AB9A8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089AB9D0;
      }
      goto L_089AB9B0;
    }
L_089AB9B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB9D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[3] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089AB9B0;
      }
      goto L_089AB9D8;
    }
L_089AB9D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(48));
    goto L_089AB9EC;
L_089AB9EC:
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
          goto L_089AB9EC;
      }
      goto L_089ABA18;
    }
L_089ABA18:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-15684)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(134));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(52));
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABA50u);
    aot_gpr[11] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABA50u) goto L_089ABA50;
    return;
L_089ABA50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089ABA6C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(74));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(109));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[8] + 0u);
    aot_gpr[10] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABAA4u);
    aot_gpr[11] = (aot_gpr[8] + static_cast<std::uint32_t>(21));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABAA4u) goto L_089ABAA4;
    return;
L_089ABAA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABAB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x089ABAE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    goto L_089AB1BC;
L_089ABAE8:
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(111));
    aot_gpr[9] = (aot_gpr[17] + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[11] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089ABB38;
      }
      goto L_089ABB0C;
    }
L_089ABB0C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(5));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-15684)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[7] = (ctx.lo);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABB34u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABB34u) goto L_089ABB34;
    return;
L_089ABB34:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089ABB38;
L_089ABB38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABB54:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089ABB64;
      }
      goto L_089ABB5C;
    }
L_089ABB5C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16304), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABB64:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-15748));
    aot_gpr[3] = (2217u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16304), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABB78:
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089ABB8C;
      }
      goto L_089ABB84;
    }
L_089ABB84:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem); return;
L_089ABB8C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABB94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16308)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABBC4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABBC4u) goto L_089ABBC4;
    return;
L_089ABBC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x089ABBE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABBE0u) goto L_089ABBE0;
    return;
L_089ABBE0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-10));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABBF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089ABC10;
      }
      goto L_089ABC08;
    }
L_089ABC08:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089ABC10;
L_089ABC10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABC18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089ABC44;
      }
      goto L_089ABC2C;
    }
L_089ABC2C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089ABC30;
L_089ABC30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABC44:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089ABC2C;
      }
      goto L_089ABC4C;
    }
L_089ABC4C:
    aot_gpr[31] = (0x089ABC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0425_entry, 425u, 26u, 0x089AD218u>(ctx, &aot_mem) && ctx.pc == 0x089ABC54u) goto L_089ABC54;
    return;
L_089ABC54:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089ABC30;
      }
      goto L_089ABC60;
    }
L_089ABC60:
    aot_gpr[31] = (0x089ABC68u);
    // nop
    goto L_089ABBF8;
L_089ABC68:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089ABC30;
L_089ABC74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABCCCu);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABCCCu) goto L_089ABCCC;
    return;
L_089ABCCC:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-11));
      if (branch_taken) {
          goto L_089ABD0C;
      }
      goto L_089ABCD8;
    }
L_089ABCD8:
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
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABD0C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-14868));
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABD24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABD24u) goto L_089ABD24;
    return;
L_089ABD24:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16308)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089ABD48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABD48u) goto L_089ABD48;
    return;
L_089ABD48:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-23));
      if (branch_taken) {
          goto L_089ABCD8;
      }
      goto L_089ABD54;
    }
L_089ABD54:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ABD64u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABD64u) goto L_089ABD64;
    return;
L_089ABD64:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    goto L_089ABD78;
L_089ABD78:
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
          goto L_089ABD78;
      }
      goto L_089ABDA4;
    }
L_089ABDA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[22]);
      if (branch_taken) {
          goto L_089ABE04;
      }
      goto L_089ABDC0;
    }
L_089ABDC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABDD0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABDD0u) goto L_089ABDD0;
    return;
L_089ABDD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089ABE10;
      }
      goto L_089ABDD8;
    }
L_089ABDD8:
    if (aot_gpr[23] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089ABDF0;
    }
    goto L_089ABDE0;
L_089ABDE0:
    aot_gpr[31] = (0x089ABDE8u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(112));
    goto L_089ABBF8;
L_089ABDE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089ABDF0;
L_089ABDF0:
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089ABCD8;
L_089ABE04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089ABDC0;
L_089ABE10:
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-14868));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16308)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089ABE28u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABE28u) goto L_089ABE28;
    return;
L_089ABE28:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-10));
    goto L_089ABCD8;
L_089ABE30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    aot_gpr[31] = (0x089ABE78u);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABE78u) goto L_089ABE78;
    return;
L_089ABE78:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[31] = (0x089ABEB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABEB4u) goto L_089ABEB4;
    return;
L_089ABEB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABED8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_089ABF64;
      }
      goto L_089ABF2C;
    }
L_089ABF2C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089ABF30;
L_089ABF30:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089ABF34;
L_089ABF34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABF64:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABFCC;
      }
      goto L_089ABF6C;
    }
L_089ABF6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089ABF70;
L_089ABF70:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089ABF98;
      }
      goto L_089ABF78;
    }
L_089ABF78:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089ABF30;
      }
      goto L_089ABF84;
    }
L_089ABF84:
    aot_gpr[2] = (54u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 61056u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089ABF30;
      }
      goto L_089ABF98;
    }
L_089ABF98:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16320)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-15));
      if (branch_taken) {
          goto L_089ABF30;
      }
      goto L_089ABFA8;
    }
L_089ABFA8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16304)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABFBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABFBCu) goto L_089ABFBC;
    return;
L_089ABFBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089ABFDC;
      }
      goto L_089ABFC4;
    }
L_089ABFC4:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-11));
    goto L_089ABF30;
L_089ABFCC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089ABF30;
      }
      goto L_089ABFD4;
    }
L_089ABFD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089ABF70;
L_089ABFDC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16304)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089ABFF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[11]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ABFF4u) goto L_089ABFF4;
    return;
L_089ABFF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 2u, 0x089AC008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0424_entry, 424u, 1u, 0x089AC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0423(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0423_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_423(Runtime &runtime) {
    runtime.register_generated_unit(423u, 0x089AB000u, 4096u, &recomp_unit_0423, &recomp_unit_0423_entry);
    runtime.register_function(0x089AB004u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB008u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB018u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB01Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB048u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB060u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB068u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB074u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB078u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB090u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB098u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0A0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0A8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0B8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0C4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0E0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0E8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB0F0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB128u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB134u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB16Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB178u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB1B0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB1BCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB1F0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB200u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB204u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB228u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB22Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB234u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB240u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB248u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB25Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB264u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB26Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB270u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB27Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB2A0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB2D8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB2FCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB324u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB328u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB344u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB37Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB3A0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB3C8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB3CCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB3E8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB408u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB434u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB444u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB448u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB460u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB484u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB4B0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB4C0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB4C4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB4DCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB500u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB510u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB518u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB528u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB530u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB558u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB568u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB570u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB5A8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB5B4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB5ECu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB5F8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB630u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB63Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB678u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB680u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB68Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB6B8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB6D0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB6D8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB6ECu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB704u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB71Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB72Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB764u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB784u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB798u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB7A8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB7E0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB818u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB824u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB840u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB868u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB870u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB874u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB878u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB88Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB8A0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB8A8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB8B0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB8E0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB8E8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB920u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB92Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB964u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB970u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB99Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB9A8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB9B0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB9D0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB9D8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089AB9ECu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABA18u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABA50u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABA6Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABAA4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABAB0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABAE8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB0Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB34u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB38u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB54u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB5Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB64u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB78u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB84u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB8Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABB94u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABBC4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABBE0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABBF8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC08u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC10u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC18u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC2Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC30u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC44u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC4Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC54u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC60u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC68u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABC74u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABCCCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABCD8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABD0Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABD24u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABD48u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABD54u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABD64u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABD78u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDA4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDC0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDD0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDD8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDE0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDE8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABDF0u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABE04u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABE10u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABE28u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABE30u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABE78u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABEB4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABED8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF2Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF30u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF34u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF64u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF6Cu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF70u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF78u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF84u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABF98u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFA8u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFBCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFC4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFCCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFD4u, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFDCu, &recomp_unit_0423, "recomp_unit_0423");
    runtime.register_function(0x089ABFF4u, &recomp_unit_0423, "recomp_unit_0423");
}
} // namespace psprecomp
