#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0595[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35,
    36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0,
    40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0,
    54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76,
    0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87,
    0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101,
    0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0,
    118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0,
    0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192,
};
void recomp_unit_0595_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A57000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0595[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A57000;
    case 2u: goto L_08A5702C;
    case 3u: goto L_08A57048;
    case 4u: goto L_08A57058;
    case 5u: goto L_08A57064;
    case 6u: goto L_08A57070;
    case 7u: goto L_08A570A8;
    case 8u: goto L_08A570B8;
    case 9u: goto L_08A570D4;
    case 10u: goto L_08A570DC;
    case 11u: goto L_08A570E8;
    case 12u: goto L_08A570FC;
    case 13u: goto L_08A5711C;
    case 14u: goto L_08A5713C;
    case 15u: goto L_08A57148;
    case 16u: goto L_08A57160;
    case 17u: goto L_08A57170;
    case 18u: goto L_08A57184;
    case 19u: goto L_08A57198;
    case 20u: goto L_08A571A8;
    case 21u: goto L_08A571B0;
    case 22u: goto L_08A571C4;
    case 23u: goto L_08A571DC;
    case 24u: goto L_08A571E4;
    case 25u: goto L_08A571EC;
    case 26u: goto L_08A571F8;
    case 27u: goto L_08A57204;
    case 28u: goto L_08A57224;
    case 29u: goto L_08A5723C;
    case 30u: goto L_08A57244;
    case 31u: goto L_08A57250;
    case 32u: goto L_08A57260;
    case 33u: goto L_08A5726C;
    case 34u: goto L_08A57274;
    case 35u: goto L_08A5727C;
    case 36u: goto L_08A57280;
    case 37u: goto L_08A57298;
    case 38u: goto L_08A572E4;
    case 39u: goto L_08A572F8;
    case 40u: goto L_08A57300;
    case 41u: goto L_08A57304;
    case 42u: goto L_08A57334;
    case 43u: goto L_08A5733C;
    case 44u: goto L_08A57358;
    case 45u: goto L_08A57380;
    case 46u: goto L_08A57388;
    case 47u: goto L_08A57398;
    case 48u: goto L_08A573A0;
    case 49u: goto L_08A573D0;
    case 50u: goto L_08A573FC;
    case 51u: goto L_08A5743C;
    case 52u: goto L_08A57460;
    case 53u: goto L_08A57478;
    case 54u: goto L_08A57480;
    case 55u: goto L_08A5748C;
    case 56u: goto L_08A574AC;
    case 57u: goto L_08A574E8;
    case 58u: goto L_08A574F4;
    case 59u: goto L_08A57534;
    case 60u: goto L_08A57544;
    case 61u: goto L_08A57554;
    case 62u: goto L_08A57560;
    case 63u: goto L_08A57568;
    case 64u: goto L_08A57588;
    case 65u: goto L_08A57598;
    case 66u: goto L_08A575B8;
    case 67u: goto L_08A575BC;
    case 68u: goto L_08A575CC;
    case 69u: goto L_08A575EC;
    case 70u: goto L_08A57610;
    case 71u: goto L_08A57624;
    case 72u: goto L_08A57630;
    case 73u: goto L_08A57660;
    case 74u: goto L_08A57668;
    case 75u: goto L_08A57670;
    case 76u: goto L_08A5767C;
    case 77u: goto L_08A57684;
    case 78u: goto L_08A57690;
    case 79u: goto L_08A57698;
    case 80u: goto L_08A576A8;
    case 81u: goto L_08A576B4;
    case 82u: goto L_08A576D4;
    case 83u: goto L_08A576F8;
    case 84u: goto L_08A57744;
    case 85u: goto L_08A5774C;
    case 86u: goto L_08A57774;
    case 87u: goto L_08A5777C;
    case 88u: goto L_08A57784;
    case 89u: goto L_08A57798;
    case 90u: goto L_08A577A0;
    case 91u: goto L_08A577AC;
    case 92u: goto L_08A577B4;
    case 93u: goto L_08A577BC;
    case 94u: goto L_08A577C4;
    case 95u: goto L_08A577CC;
    case 96u: goto L_08A577D4;
    case 97u: goto L_08A577DC;
    case 98u: goto L_08A577E4;
    case 99u: goto L_08A577EC;
    case 100u: goto L_08A577F4;
    case 101u: goto L_08A577FC;
    case 102u: goto L_08A57804;
    case 103u: goto L_08A5780C;
    case 104u: goto L_08A57820;
    case 105u: goto L_08A5783C;
    case 106u: goto L_08A57860;
    case 107u: goto L_08A57884;
    case 108u: goto L_08A578B8;
    case 109u: goto L_08A578C4;
    case 110u: goto L_08A578CC;
    case 111u: goto L_08A578E8;
    case 112u: goto L_08A5790C;
    case 113u: goto L_08A57948;
    case 114u: goto L_08A57950;
    case 115u: goto L_08A5795C;
    case 116u: goto L_08A57968;
    case 117u: goto L_08A57978;
    case 118u: goto L_08A57980;
    case 119u: goto L_08A57994;
    case 120u: goto L_08A579A4;
    case 121u: goto L_08A579B4;
    case 122u: goto L_08A579BC;
    case 123u: goto L_08A579CC;
    case 124u: goto L_08A579D8;
    case 125u: goto L_08A579E4;
    case 126u: goto L_08A57A14;
    case 127u: goto L_08A57A3C;
    case 128u: goto L_08A57A4C;
    case 129u: goto L_08A57A58;
    case 130u: goto L_08A57A70;
    case 131u: goto L_08A57AA8;
    case 132u: goto L_08A57AB8;
    case 133u: goto L_08A57ACC;
    case 134u: goto L_08A57AD4;
    case 135u: goto L_08A57AE0;
    case 136u: goto L_08A57AF8;
    case 137u: goto L_08A57B1C;
    case 138u: goto L_08A57B3C;
    case 139u: goto L_08A57B48;
    case 140u: goto L_08A57B60;
    case 141u: goto L_08A57B70;
    case 142u: goto L_08A57B88;
    case 143u: goto L_08A57B9C;
    case 144u: goto L_08A57BAC;
    case 145u: goto L_08A57BB4;
    case 146u: goto L_08A57BC8;
    case 147u: goto L_08A57BE0;
    case 148u: goto L_08A57BE8;
    case 149u: goto L_08A57BF0;
    case 150u: goto L_08A57BFC;
    case 151u: goto L_08A57C04;
    case 152u: goto L_08A57C50;
    case 153u: goto L_08A57C64;
    case 154u: goto L_08A57C6C;
    case 155u: goto L_08A57C70;
    case 156u: goto L_08A57CA0;
    case 157u: goto L_08A57CA8;
    case 158u: goto L_08A57CC4;
    case 159u: goto L_08A57CEC;
    case 160u: goto L_08A57CF4;
    case 161u: goto L_08A57D04;
    case 162u: goto L_08A57D0C;
    case 163u: goto L_08A57D3C;
    case 164u: goto L_08A57D68;
    case 165u: goto L_08A57DA8;
    case 166u: goto L_08A57DCC;
    case 167u: goto L_08A57DE4;
    case 168u: goto L_08A57DEC;
    case 169u: goto L_08A57DF8;
    case 170u: goto L_08A57E18;
    case 171u: goto L_08A57E54;
    case 172u: goto L_08A57E60;
    case 173u: goto L_08A57EA0;
    case 174u: goto L_08A57EB0;
    case 175u: goto L_08A57EC0;
    case 176u: goto L_08A57ECC;
    case 177u: goto L_08A57ED4;
    case 178u: goto L_08A57EF4;
    case 179u: goto L_08A57F04;
    case 180u: goto L_08A57F24;
    case 181u: goto L_08A57F28;
    case 182u: goto L_08A57F38;
    case 183u: goto L_08A57F58;
    case 184u: goto L_08A57F7C;
    case 185u: goto L_08A57F90;
    case 186u: goto L_08A57F9C;
    case 187u: goto L_08A57FCC;
    case 188u: goto L_08A57FD4;
    case 189u: goto L_08A57FDC;
    case 190u: goto L_08A57FE8;
    case 191u: goto L_08A57FF0;
    case 192u: goto L_08A57FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A57000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5702C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[7]);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[11] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[11] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A57064;
      }
      goto L_08A57048;
    }
L_08A57048:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_gpr[31] = (0x08A57058u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 186u, 0x08A56EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A57058u) goto L_08A57058;
    return;
L_08A57058:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A57048;
      }
      goto L_08A57064;
    }
L_08A57064:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] >> 30u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08A570DC;
      }
      goto L_08A570A8;
    }
L_08A570A8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x08A570B8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 192u, 0x08A56F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A570B8u) goto L_08A570B8;
    return;
L_08A570B8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A570D4u);
    aot_gpr[6] = (0u | 0u);
    goto L_08A5702C;
L_08A570D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A570E8;
      }
      goto L_08A570DC;
    }
L_08A570DC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A570E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 192u, 0x08A56F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A570E8u) goto L_08A570E8;
    return;
L_08A570E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A570FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A57170;
      }
      goto L_08A5711C;
    }
L_08A5711C:
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57148;
      }
      goto L_08A5713C;
    }
L_08A5713C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A5713C;
      }
      goto L_08A57148;
    }
L_08A57148:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A57160u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 155u, 0x08A56CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A57160u) goto L_08A57160;
    return;
L_08A57160:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A57170u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A57070;
L_08A57170:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57184:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57198:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A571EC;
      }
      goto L_08A571A8;
    }
L_08A571A8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A571EC;
      }
      goto L_08A571B0;
    }
L_08A571B0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A571E4;
      }
      goto L_08A571C4;
    }
L_08A571C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A571DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A571DCu) goto L_08A571DC;
    return;
L_08A571DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A571EC;
      }
      goto L_08A571E4;
    }
L_08A571E4:
    aot_gpr[31] = (0x08A571ECu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A571ECu) goto L_08A571EC;
    return;
L_08A571EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A571F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57224;
      }
      goto L_08A57204;
    }
L_08A57204:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A5723C;
      }
      goto L_08A57224;
    }
L_08A57224:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A5723C;
L_08A5723C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57244:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57260;
      }
      goto L_08A57250;
    }
L_08A57250:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5726C;
      }
      goto L_08A57260;
    }
L_08A57260:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A5726C;
L_08A5726C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5727C;
      }
      goto L_08A57274;
    }
L_08A57274:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A57280;
      }
      goto L_08A5727C;
    }
L_08A5727C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A57280;
L_08A57280:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57298:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A57334;
      }
      goto L_08A572E4;
    }
L_08A572E4:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A572F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A572F8u) goto L_08A572F8;
    return;
L_08A572F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57304;
      }
      goto L_08A57300;
    }
L_08A57300:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A57304;
L_08A57304:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A572E4;
      }
      goto L_08A57334;
    }
L_08A57334:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A57358;
      }
      goto L_08A5733C;
    }
L_08A5733C:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A57358;
L_08A57358:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A57380;
L_08A57380:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A573D0;
      }
      goto L_08A57388;
    }
L_08A57388:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A57398u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57398u) goto L_08A57398;
    return;
L_08A57398:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A573D0;
      }
      goto L_08A573A0;
    }
L_08A573A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A57380;
      }
      goto L_08A573D0;
    }
L_08A573D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A573FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A5748C;
      }
      goto L_08A5743C;
    }
L_08A5743C:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A57460;
L_08A57460:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A57478u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A57298;
L_08A57478:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A5748C;
      }
      goto L_08A57480;
    }
L_08A57480:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57460;
      }
      goto L_08A5748C;
    }
L_08A5748C:
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
L_08A574AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A574E8u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A57298;
L_08A574E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A574F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A57534u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A573FC;
L_08A57534:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A57598;
      }
      goto L_08A57544;
    }
L_08A57544:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A57554;
L_08A57554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A57560u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57560u) goto L_08A57560;
    return;
L_08A57560:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57588;
      }
      goto L_08A57568;
    }
L_08A57568:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A57588u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A57298;
L_08A57588:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57554;
      }
      goto L_08A57598;
    }
L_08A57598:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A575EC;
      }
      goto L_08A575B8;
    }
L_08A575B8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A575BC;
L_08A575BC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A575CCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A574AC;
L_08A575CC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A575BC;
      }
      goto L_08A575EC;
    }
L_08A575EC:
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
L_08A57610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A57624u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A574F4;
L_08A57624:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A57660;
L_08A57660:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A57668u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57668u) goto L_08A57668;
    return;
L_08A57668:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5767C;
      }
      goto L_08A57670;
    }
L_08A57670:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57660;
      }
      goto L_08A5767C;
    }
L_08A5767C:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A57684;
L_08A57684:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A57690u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57690u) goto L_08A57690;
    return;
L_08A57690:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576A8;
      }
      goto L_08A57698;
    }
L_08A57698:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57684;
      }
      goto L_08A576A8;
    }
L_08A576A8:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576D4;
      }
      goto L_08A576B4;
    }
L_08A576B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A57660;
      }
      goto L_08A576D4;
    }
L_08A576D4:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A576F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A57860;
      }
      goto L_08A57744;
    }
L_08A57744:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A57784;
      }
      goto L_08A5774C;
    }
L_08A5774C:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A57774u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57774u) goto L_08A57774;
    return;
L_08A57774:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A577A0;
      }
      goto L_08A5777C;
    }
L_08A5777C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A577DC;
      }
      goto L_08A57784;
    }
L_08A57784:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A57798u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A57610;
L_08A57798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57860;
      }
      goto L_08A577A0;
    }
L_08A577A0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A577ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A577ACu) goto L_08A577AC;
    return;
L_08A577AC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A577BC;
    }
    goto L_08A577B4;
L_08A577B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5780C;
      }
      goto L_08A577BC;
    }
L_08A577BC:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A577C4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A577C4u) goto L_08A577C4;
    return;
L_08A577C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A577D4;
      }
      goto L_08A577CC;
    }
L_08A577CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5780C;
      }
      goto L_08A577D4;
    }
L_08A577D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5780C;
      }
      goto L_08A577DC;
    }
L_08A577DC:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A577E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A577E4u) goto L_08A577E4;
    return;
L_08A577E4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A577F4;
    }
    goto L_08A577EC;
L_08A577EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5780C;
      }
      goto L_08A577F4;
    }
L_08A577F4:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A577FCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A577FCu) goto L_08A577FC;
    return;
L_08A577FC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A5780C;
    }
    goto L_08A57804;
L_08A57804:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5780C;
      }
      goto L_08A5780C;
    }
L_08A5780C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A57820u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A57630;
L_08A57820:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A5783Cu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A576F8;
L_08A5783C:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57744;
      }
      goto L_08A57860;
    }
L_08A57860:
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
L_08A57884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A578B8;
L_08A578B8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A578C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A578C4u) goto L_08A578C4;
    return;
L_08A578C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A578E8;
      }
      goto L_08A578CC;
    }
L_08A578CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A578B8;
      }
      goto L_08A578E8;
    }
L_08A578E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A5790C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A57950;
      }
      goto L_08A57948;
    }
L_08A57948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A579E4;
      }
      goto L_08A57950;
    }
L_08A57950:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A579E4;
      }
      goto L_08A5795C;
    }
L_08A5795C:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A57968;
L_08A57968:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A57978u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57978u) goto L_08A57978;
    return;
L_08A57978:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A579BC;
      }
      goto L_08A57980;
    }
L_08A57980:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A57994u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 20u, 0x089281D0u>(ctx, &aot_mem) && ctx.pc == 0x08A57994u) goto L_08A57994;
    return;
L_08A57994:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A579B4;
      }
      goto L_08A579A4;
    }
L_08A579A4:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A579B4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A579B4u) goto L_08A579B4;
    return;
L_08A579B4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A579CC;
      }
      goto L_08A579BC;
    }
L_08A579BC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A579CCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A57884;
L_08A579CC:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A57968;
      }
      goto L_08A579D8;
    }
L_08A579D8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A579E4;
L_08A579E4:
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
L_08A57A14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A57A58;
      }
      goto L_08A57A3C;
    }
L_08A57A3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A57A4Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A57884;
L_08A57A4C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A57A3C;
      }
      goto L_08A57A58;
    }
L_08A57A58:
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
L_08A57A70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A57AD4;
      }
      goto L_08A57AA8;
    }
L_08A57AA8:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A57AB8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A5790C;
L_08A57AB8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A57ACCu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A57A14;
L_08A57ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AE0;
      }
      goto L_08A57AD4;
    }
L_08A57AD4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A57AE0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A5790C;
L_08A57AE0:
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
L_08A57AF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A57B70;
      }
      goto L_08A57B1C;
    }
L_08A57B1C:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57B48;
      }
      goto L_08A57B3C;
    }
L_08A57B3C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A57B3C;
      }
      goto L_08A57B48;
    }
L_08A57B48:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A57B60u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A576F8;
L_08A57B60:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A57B70u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A57A70;
L_08A57B70:
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
L_08A57B88:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57B9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A57BF0;
      }
      goto L_08A57BAC;
    }
L_08A57BAC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57BF0;
      }
      goto L_08A57BB4;
    }
L_08A57BB4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57BE8;
      }
      goto L_08A57BC8;
    }
L_08A57BC8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A57BE0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57BE0u) goto L_08A57BE0;
    return;
L_08A57BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57BF0;
      }
      goto L_08A57BE8;
    }
L_08A57BE8:
    aot_gpr[31] = (0x08A57BF0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A57BF0u) goto L_08A57BF0;
    return;
L_08A57BF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BFC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57C04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A57CA0;
      }
      goto L_08A57C50;
    }
L_08A57C50:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A57C64u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57C64u) goto L_08A57C64;
    return;
L_08A57C64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C70;
      }
      goto L_08A57C6C;
    }
L_08A57C6C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A57C70;
L_08A57C70:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C50;
      }
      goto L_08A57CA0;
    }
L_08A57CA0:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A57CC4;
      }
      goto L_08A57CA8;
    }
L_08A57CA8:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A57CC4;
L_08A57CC4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A57CEC;
L_08A57CEC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A57D3C;
      }
      goto L_08A57CF4;
    }
L_08A57CF4:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A57D04u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57D04u) goto L_08A57D04;
    return;
L_08A57D04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A57D3C;
      }
      goto L_08A57D0C;
    }
L_08A57D0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A57CEC;
      }
      goto L_08A57D3C;
    }
L_08A57D3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A57D68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A57DF8;
      }
      goto L_08A57DA8;
    }
L_08A57DA8:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A57DCC;
L_08A57DCC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A57DE4u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A57C04;
L_08A57DE4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A57DF8;
      }
      goto L_08A57DEC;
    }
L_08A57DEC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57DCC;
      }
      goto L_08A57DF8;
    }
L_08A57DF8:
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
L_08A57E18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A57E54u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A57C04;
L_08A57E54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57E60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A57EA0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A57D68;
L_08A57EA0:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A57F04;
      }
      goto L_08A57EB0;
    }
L_08A57EB0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A57EC0;
L_08A57EC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A57ECCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57ECCu) goto L_08A57ECC;
    return;
L_08A57ECC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57EF4;
      }
      goto L_08A57ED4;
    }
L_08A57ED4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A57EF4u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A57C04;
L_08A57EF4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57EC0;
      }
      goto L_08A57F04;
    }
L_08A57F04:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F58;
      }
      goto L_08A57F24;
    }
L_08A57F24:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A57F28;
L_08A57F28:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A57F38u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A57E18;
L_08A57F38:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A57F28;
      }
      goto L_08A57F58;
    }
L_08A57F58:
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
L_08A57F7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A57F90u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A57E60;
L_08A57F90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57F9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A57FCC;
L_08A57FCC:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A57FD4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57FD4u) goto L_08A57FD4;
    return;
L_08A57FD4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57FE8;
      }
      goto L_08A57FDC;
    }
L_08A57FDC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57FCC;
      }
      goto L_08A57FE8;
    }
L_08A57FE8:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A57FF0;
L_08A57FF0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A57FFCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A57FFCu) goto L_08A57FFC;
    return;
L_08A57FFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 2u, 0x08A58014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 1u, 0x08A58004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0595(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0595_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_595(Runtime &runtime) {
    runtime.register_generated_unit(595u, 0x08A57000u, 4096u, &recomp_unit_0595, &recomp_unit_0595_entry);
    runtime.register_function(0x08A57000u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5702Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57048u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57058u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57064u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57070u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A570A8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A570B8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A570D4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A570DCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A570E8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A570FCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5711Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5713Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57148u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57160u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57170u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57184u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57198u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571A8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571B0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571C4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571DCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571E4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571ECu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A571F8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57204u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57224u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5723Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57244u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57250u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57260u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5726Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57274u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5727Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57280u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57298u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A572E4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A572F8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57300u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57304u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57334u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5733Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57358u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57380u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57388u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57398u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A573A0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A573D0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A573FCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5743Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57460u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57478u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57480u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5748Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A574ACu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A574E8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A574F4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57534u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57544u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57554u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57560u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57568u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57588u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57598u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A575B8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A575BCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A575CCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A575ECu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57610u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57624u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57630u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57660u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57668u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57670u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5767Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57684u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57690u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57698u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A576A8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A576B4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A576D4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A576F8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57744u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5774Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57774u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5777Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57784u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57798u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577A0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577ACu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577B4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577BCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577C4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577CCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577D4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577DCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577E4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577ECu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577F4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A577FCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57804u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5780Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57820u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5783Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57860u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57884u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A578B8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A578C4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A578CCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A578E8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5790Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57948u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57950u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A5795Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57968u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57978u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57980u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57994u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A579A4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A579B4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A579BCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A579CCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A579D8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A579E4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57A14u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57A3Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57A4Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57A58u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57A70u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57AA8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57AB8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57ACCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57AD4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57AE0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57AF8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B1Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B3Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B48u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B60u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B70u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B88u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57B9Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BACu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BB4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BC8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BE0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BE8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BF0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57BFCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57C04u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57C50u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57C64u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57C6Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57C70u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57CA0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57CA8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57CC4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57CECu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57CF4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57D04u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57D0Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57D3Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57D68u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57DA8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57DCCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57DE4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57DECu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57DF8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57E18u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57E54u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57E60u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57EA0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57EB0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57EC0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57ECCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57ED4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57EF4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F04u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F24u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F28u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F38u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F58u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F7Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F90u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57F9Cu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57FCCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57FD4u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57FDCu, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57FE8u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57FF0u, &recomp_unit_0595, "recomp_unit_0595");
    runtime.register_function(0x08A57FFCu, &recomp_unit_0595, "recomp_unit_0595");
}
} // namespace psprecomp
