#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0368[1021] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 5, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0,
    20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0,
    43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 52, 53, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 98, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111,
    0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 126, 127, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0,
    0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0,
    0, 0, 186, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0,
    0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0,
    238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 242, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 256,
};
void recomp_unit_0368_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08974000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0368[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08974000;
    case 2u: goto L_0897400C;
    case 3u: goto L_08974014;
    case 4u: goto L_0897401C;
    case 5u: goto L_08974024;
    case 6u: goto L_08974028;
    case 7u: goto L_08974038;
    case 8u: goto L_08974040;
    case 9u: goto L_08974048;
    case 10u: goto L_08974060;
    case 11u: goto L_08974068;
    case 12u: goto L_08974070;
    case 13u: goto L_08974078;
    case 14u: goto L_08974094;
    case 15u: goto L_089740B8;
    case 16u: goto L_089740D0;
    case 17u: goto L_089740E4;
    case 18u: goto L_089740EC;
    case 19u: goto L_089740F4;
    case 20u: goto L_08974100;
    case 21u: goto L_08974110;
    case 22u: goto L_08974118;
    case 23u: goto L_08974120;
    case 24u: goto L_08974138;
    case 25u: goto L_08974140;
    case 26u: goto L_08974148;
    case 27u: goto L_08974150;
    case 28u: goto L_0897416C;
    case 29u: goto L_08974190;
    case 30u: goto L_089741A8;
    case 31u: goto L_089741BC;
    case 32u: goto L_089741C4;
    case 33u: goto L_089741CC;
    case 34u: goto L_089741D8;
    case 35u: goto L_089741DC;
    case 36u: goto L_089741FC;
    case 37u: goto L_0897421C;
    case 38u: goto L_08974230;
    case 39u: goto L_0897423C;
    case 40u: goto L_08974254;
    case 41u: goto L_0897426C;
    case 42u: goto L_08974278;
    case 43u: goto L_08974280;
    case 44u: goto L_08974288;
    case 45u: goto L_089742A8;
    case 46u: goto L_089742B0;
    case 47u: goto L_089742B8;
    case 48u: goto L_089742C0;
    case 49u: goto L_089742C8;
    case 50u: goto L_089742D0;
    case 51u: goto L_089742D8;
    case 52u: goto L_089742DC;
    case 53u: goto L_089742E0;
    case 54u: goto L_089742F4;
    case 55u: goto L_08974308;
    case 56u: goto L_08974314;
    case 57u: goto L_0897431C;
    case 58u: goto L_08974334;
    case 59u: goto L_08974340;
    case 60u: goto L_08974364;
    case 61u: goto L_08974370;
    case 62u: goto L_08974378;
    case 63u: goto L_08974398;
    case 64u: goto L_089743AC;
    case 65u: goto L_089743D0;
    case 66u: goto L_089743DC;
    case 67u: goto L_089743E4;
    case 68u: goto L_08974404;
    case 69u: goto L_08974418;
    case 70u: goto L_08974434;
    case 71u: goto L_08974440;
    case 72u: goto L_08974448;
    case 73u: goto L_08974450;
    case 74u: goto L_08974460;
    case 75u: goto L_0897447C;
    case 76u: goto L_08974488;
    case 77u: goto L_08974490;
    case 78u: goto L_08974498;
    case 79u: goto L_089744A8;
    case 80u: goto L_089744C4;
    case 81u: goto L_089744D0;
    case 82u: goto L_089744D8;
    case 83u: goto L_089744E0;
    case 84u: goto L_089744F0;
    case 85u: goto L_08974514;
    case 86u: goto L_0897451C;
    case 87u: goto L_08974530;
    case 88u: goto L_0897453C;
    case 89u: goto L_08974548;
    case 90u: goto L_08974550;
    case 91u: goto L_08974558;
    case 92u: goto L_08974560;
    case 93u: goto L_0897456C;
    case 94u: goto L_08974574;
    case 95u: goto L_08974590;
    case 96u: goto L_089745A0;
    case 97u: goto L_089745AC;
    case 98u: goto L_089745B4;
    case 99u: goto L_089745B8;
    case 100u: goto L_089745C8;
    case 101u: goto L_089745D0;
    case 102u: goto L_089745D8;
    case 103u: goto L_08974614;
    case 104u: goto L_0897461C;
    case 105u: goto L_08974624;
    case 106u: goto L_08974638;
    case 107u: goto L_08974644;
    case 108u: goto L_0897465C;
    case 109u: goto L_08974668;
    case 110u: goto L_08974674;
    case 111u: goto L_0897467C;
    case 112u: goto L_08974688;
    case 113u: goto L_08974690;
    case 114u: goto L_08974698;
    case 115u: goto L_089746A4;
    case 116u: goto L_089746B8;
    case 117u: goto L_089746DC;
    case 118u: goto L_08974700;
    case 119u: goto L_0897470C;
    case 120u: goto L_08974718;
    case 121u: goto L_08974728;
    case 122u: goto L_08974730;
    case 123u: goto L_0897474C;
    case 124u: goto L_0897475C;
    case 125u: goto L_08974764;
    case 126u: goto L_08974770;
    case 127u: goto L_08974774;
    case 128u: goto L_08974784;
    case 129u: goto L_089747A0;
    case 130u: goto L_089747B0;
    case 131u: goto L_089747BC;
    case 132u: goto L_089747D0;
    case 133u: goto L_089747F4;
    case 134u: goto L_08974804;
    case 135u: goto L_08974814;
    case 136u: goto L_0897481C;
    case 137u: goto L_08974828;
    case 138u: goto L_08974830;
    case 139u: goto L_0897483C;
    case 140u: goto L_08974848;
    case 141u: goto L_08974850;
    case 142u: goto L_08974860;
    case 143u: goto L_08974864;
    case 144u: goto L_08974888;
    case 145u: goto L_0897489C;
    case 146u: goto L_089748E4;
    case 147u: goto L_089748F4;
    case 148u: goto L_08974910;
    case 149u: goto L_08974940;
    case 150u: goto L_08974950;
    case 151u: goto L_08974958;
    case 152u: goto L_08974960;
    case 153u: goto L_08974974;
    case 154u: goto L_0897497C;
    case 155u: goto L_08974994;
    case 156u: goto L_089749A4;
    case 157u: goto L_089749B8;
    case 158u: goto L_089749C4;
    case 159u: goto L_089749CC;
    case 160u: goto L_089749D0;
    case 161u: goto L_089749E8;
    case 162u: goto L_089749F8;
    case 163u: goto L_08974A00;
    case 164u: goto L_08974A20;
    case 165u: goto L_08974A34;
    case 166u: goto L_08974A3C;
    case 167u: goto L_08974A48;
    case 168u: goto L_08974A68;
    case 169u: goto L_08974A74;
    case 170u: goto L_08974A88;
    case 171u: goto L_08974A90;
    case 172u: goto L_08974A9C;
    case 173u: goto L_08974ABC;
    case 174u: goto L_08974AC8;
    case 175u: goto L_08974AD4;
    case 176u: goto L_08974AD8;
    case 177u: goto L_08974AF4;
    case 178u: goto L_08974B10;
    case 179u: goto L_08974B1C;
    case 180u: goto L_08974B34;
    case 181u: goto L_08974B3C;
    case 182u: goto L_08974B44;
    case 183u: goto L_08974B50;
    case 184u: goto L_08974B64;
    case 185u: goto L_08974B68;
    case 186u: goto L_08974B88;
    case 187u: goto L_08974B8C;
    case 188u: goto L_08974B9C;
    case 189u: goto L_08974BAC;
    case 190u: goto L_08974BC0;
    case 191u: goto L_08974BD4;
    case 192u: goto L_08974BDC;
    case 193u: goto L_08974BE8;
    case 194u: goto L_08974BF4;
    case 195u: goto L_08974C00;
    case 196u: goto L_08974C24;
    case 197u: goto L_08974C30;
    case 198u: goto L_08974C34;
    case 199u: goto L_08974C44;
    case 200u: goto L_08974C98;
    case 201u: goto L_08974CBC;
    case 202u: goto L_08974CD0;
    case 203u: goto L_08974CD8;
    case 204u: goto L_08974CEC;
    case 205u: goto L_08974CF4;
    case 206u: goto L_08974D08;
    case 207u: goto L_08974D1C;
    case 208u: goto L_08974D3C;
    case 209u: goto L_08974D50;
    case 210u: goto L_08974D5C;
    case 211u: goto L_08974D74;
    case 212u: goto L_08974D98;
    case 213u: goto L_08974DA4;
    case 214u: goto L_08974DAC;
    case 215u: goto L_08974DC4;
    case 216u: goto L_08974DD4;
    case 217u: goto L_08974DE8;
    case 218u: goto L_08974E0C;
    case 219u: goto L_08974E20;
    case 220u: goto L_08974E2C;
    case 221u: goto L_08974E48;
    case 222u: goto L_08974E50;
    case 223u: goto L_08974E68;
    case 224u: goto L_08974E70;
    case 225u: goto L_08974E78;
    case 226u: goto L_08974E84;
    case 227u: goto L_08974E8C;
    case 228u: goto L_08974E94;
    case 229u: goto L_08974E9C;
    case 230u: goto L_08974EA4;
    case 231u: goto L_08974EAC;
    case 232u: goto L_08974EB8;
    case 233u: goto L_08974EC0;
    case 234u: goto L_08974ECC;
    case 235u: goto L_08974ED4;
    case 236u: goto L_08974EE8;
    case 237u: goto L_08974EF4;
    case 238u: goto L_08974F00;
    case 239u: goto L_08974F08;
    case 240u: goto L_08974F24;
    case 241u: goto L_08974F34;
    case 242u: goto L_08974F38;
    case 243u: goto L_08974F44;
    case 244u: goto L_08974F4C;
    case 245u: goto L_08974F58;
    case 246u: goto L_08974F74;
    case 247u: goto L_08974F80;
    case 248u: goto L_08974F90;
    case 249u: goto L_08974FA0;
    case 250u: goto L_08974FB4;
    case 251u: goto L_08974FC0;
    case 252u: goto L_08974FCC;
    case 253u: goto L_08974FD4;
    case 254u: goto L_08974FDC;
    case 255u: goto L_08974FE4;
    case 256u: goto L_08974FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08974000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897401C;
      }
      goto L_0897400C;
    }
L_0897400C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974028;
      }
      goto L_08974014;
    }
L_08974014:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_089741DC;
      }
      goto L_0897401C;
    }
L_0897401C:
    aot_gpr[31] = (0x08974024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 93u, 0x089754F4u>(ctx, &aot_mem) && ctx.pc == 0x08974024u) goto L_08974024;
    return;
L_08974024:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08974028;
L_08974028:
    aot_gpr[6] = (0u < aot_gpr[19] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08974038u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08974038u) goto L_08974038;
    return;
L_08974038:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089740EC;
      }
      goto L_08974040;
    }
L_08974040:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974070;
      }
      goto L_08974048;
    }
L_08974048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974060u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974060u) goto L_08974060;
    return;
L_08974060:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08974078;
      }
      goto L_08974068;
    }
L_08974068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974100;
      }
      goto L_08974070;
    }
L_08974070:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          goto L_089741DC;
      }
      goto L_08974078;
    }
L_08974078:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(152));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08974094u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974094u) goto L_08974094;
    return;
L_08974094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(644), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(504)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089740B8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089740B8u) goto L_089740B8;
    return;
L_089740B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(168));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x089740D0u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 10u, 0x08979080u>(ctx, &aot_mem) && ctx.pc == 0x089740D0u) goto L_089740D0;
    return;
L_089740D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089740E4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089740E4u) goto L_089740E4;
    return;
L_089740E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974100;
      }
      goto L_089740EC;
    }
L_089740EC:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[18] = (0u < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08974100;
      }
      goto L_089740F4;
    }
L_089740F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08974100u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 243u, 0x08973DE4u>(ctx, &aot_mem) && ctx.pc == 0x08974100u) goto L_08974100;
    return;
L_08974100:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08974110u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08974110u) goto L_08974110;
    return;
L_08974110:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089741C4;
      }
      goto L_08974118;
    }
L_08974118:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974148;
      }
      goto L_08974120;
    }
L_08974120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974138u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974138u) goto L_08974138;
    return;
L_08974138:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974150;
      }
      goto L_08974140;
    }
L_08974140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089741D8;
      }
      goto L_08974148;
    }
L_08974148:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_089741DC;
      }
      goto L_08974150;
    }
L_08974150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(152));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897416Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897416Cu) goto L_0897416C;
    return;
L_0897416C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(644), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(504)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08974190u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974190u) goto L_08974190;
    return;
L_08974190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(168));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x089741A8u);
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 10u, 0x08979080u>(ctx, &aot_mem) && ctx.pc == 0x089741A8u) goto L_089741A8;
    return;
L_089741A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089741BCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089741BCu) goto L_089741BC;
    return;
L_089741BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089741D8;
      }
      goto L_089741C4;
    }
L_089741C4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089741D8;
      }
      goto L_089741CC;
    }
L_089741CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089741D8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 256u, 0x08973ED0u>(ctx, &aot_mem) && ctx.pc == 0x089741D8u) goto L_089741D8;
    return;
L_089741D8:
    aot_gpr[2] = (0u | 0u);
    goto L_089741DC;
L_089741DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089741FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0897421Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x0897421Cu) goto L_0897421C;
    return;
L_0897421C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08974230;
    }
    goto L_08974230;
L_08974230:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897423Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897423Cu) goto L_0897423C;
    return;
L_0897423C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0897426Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 157u, 0x0897392Cu>(ctx, &aot_mem) && ctx.pc == 0x0897426Cu) goto L_0897426C;
    return;
L_0897426C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089742C0;
      }
      goto L_08974278;
    }
L_08974278:
    aot_gpr[31] = (0x08974280u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 210u, 0x08976D24u>(ctx, &aot_mem) && ctx.pc == 0x08974280u) goto L_08974280;
    return;
L_08974280:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089742B8;
      }
      goto L_08974288;
    }
L_08974288:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089742A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089742A8u) goto L_089742A8;
    return;
L_089742A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089742C8;
      }
      goto L_089742B0;
    }
L_089742B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089742DC;
      }
      goto L_089742B8;
    }
L_089742B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089742E0;
      }
      goto L_089742C0;
    }
L_089742C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089742E0;
      }
      goto L_089742C8;
    }
L_089742C8:
    aot_gpr[31] = (0x089742D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089741FC;
L_089742D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089742DC;
      }
      goto L_089742D8;
    }
L_089742D8:
    aot_gpr[17] = (0u | 1u);
    goto L_089742DC;
L_089742DC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_089742E0;
L_089742E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089742F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08974308u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08974308u) goto L_08974308;
    return;
L_08974308:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897431C;
      }
      goto L_08974314;
    }
L_08974314:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08974334;
      }
      goto L_0897431C;
    }
L_0897431C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(224));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08974334u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974334u) goto L_08974334;
    return;
L_08974334:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974340:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08974364u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08974364u) goto L_08974364;
    return;
L_08974364:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974378;
      }
      goto L_08974370;
    }
L_08974370:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_08974398;
      }
      goto L_08974378;
    }
L_08974378:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(216));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08974398u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974398u) goto L_08974398;
    return;
L_08974398:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089743AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089743D0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089743D0u) goto L_089743D0;
    return;
L_089743D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089743E4;
      }
      goto L_089743DC;
    }
L_089743DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_08974404;
      }
      goto L_089743E4;
    }
L_089743E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(224));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08974404u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974404u) goto L_08974404;
    return;
L_08974404:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974418:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08974434u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08974434u) goto L_08974434;
    return;
L_08974434:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974448;
      }
      goto L_08974440;
    }
L_08974440:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          goto L_08974450;
      }
      goto L_08974448;
    }
L_08974448:
    aot_gpr[31] = (0x08974450u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 161u, 0x0897FA60u>(ctx, &aot_mem) && ctx.pc == 0x08974450u) goto L_08974450;
    return;
L_08974450:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974460:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897447Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x0897447Cu) goto L_0897447C;
    return;
L_0897447C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974490;
      }
      goto L_08974488;
    }
L_08974488:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          goto L_08974498;
      }
      goto L_08974490;
    }
L_08974490:
    aot_gpr[31] = (0x08974498u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 169u, 0x0897FBA8u>(ctx, &aot_mem) && ctx.pc == 0x08974498u) goto L_08974498;
    return;
L_08974498:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089744A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089744C4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089744C4u) goto L_089744C4;
    return;
L_089744C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089744D8;
      }
      goto L_089744D0;
    }
L_089744D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          goto L_089744E0;
      }
      goto L_089744D8;
    }
L_089744D8:
    aot_gpr[31] = (0x089744E0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 174u, 0x0897FBE8u>(ctx, &aot_mem) && ctx.pc == 0x089744E0u) goto L_089744E0;
    return;
L_089744E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089744F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08974560;
      }
      goto L_08974514;
    }
L_08974514:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974558;
      }
      goto L_0897451C;
    }
L_0897451C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08974530u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08974530u) goto L_08974530;
    return;
L_08974530:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974550;
      }
      goto L_0897453C;
    }
L_0897453C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08974548u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 116u, 0x0897F718u>(ctx, &aot_mem) && ctx.pc == 0x08974548u) goto L_08974548;
    return;
L_08974548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089745B8;
      }
      goto L_08974550;
    }
L_08974550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 72u);
      if (branch_taken) {
          goto L_089745B8;
      }
      goto L_08974558;
    }
L_08974558:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 38u);
      if (branch_taken) {
          goto L_089745B8;
      }
      goto L_08974560;
    }
L_08974560:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08974590;
      }
      goto L_0897456C;
    }
L_0897456C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974558;
      }
      goto L_08974574;
    }
L_08974574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089745B8;
      }
      goto L_08974590;
    }
L_08974590:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089745A0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089745A0u) goto L_089745A0;
    return;
L_089745A0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089745B4;
      }
      goto L_089745AC;
    }
L_089745AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897453C;
      }
      goto L_089745B4;
    }
L_089745B4:
    aot_gpr[2] = (0u | 72u);
    goto L_089745B8;
L_089745B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089745C8:
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089745D8;
    }
    goto L_089745D0;
L_089745D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 40u);
      if (branch_taken) {
          goto L_08974614;
      }
      goto L_089745D8;
    }
L_089745D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(240));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    goto L_08974614;
L_08974614:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897461C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08974638u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 157u, 0x0897392Cu>(ctx, &aot_mem) && ctx.pc == 0x08974638u) goto L_08974638;
    return;
L_08974638:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974690;
      }
      goto L_08974644;
    }
L_08974644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(152));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897465Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897465Cu) goto L_0897465C;
    return;
L_0897465C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08974668u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x08974668u) goto L_08974668;
    return;
L_08974668:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897467C;
      }
      goto L_08974674;
    }
L_08974674:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08974698;
      }
      goto L_0897467C;
    }
L_0897467C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974688u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974688u) goto L_08974688;
    return;
L_08974688:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08974774;
      }
      goto L_08974690;
    }
L_08974690:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08974774;
      }
      goto L_08974698;
    }
L_08974698:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089746DC;
    }
    goto L_089746A4;
L_089746A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089746DC;
    }
    goto L_089746B8;
L_089746B8:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08974698;
      }
      goto L_089746DC;
    }
L_089746DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974700u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974700u) goto L_08974700;
    return;
L_08974700:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x0897470Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 157u, 0x0897392Cu>(ctx, &aot_mem) && ctx.pc == 0x0897470Cu) goto L_0897470C;
    return;
L_0897470C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974764;
      }
      goto L_08974718;
    }
L_08974718:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974728u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974728u) goto L_08974728;
    return;
L_08974728:
    aot_gpr[31] = (0x08974730u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 226u, 0x0897AD90u>(ctx, &aot_mem) && ctx.pc == 0x08974730u) goto L_08974730;
    return;
L_08974730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897474Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897474Cu) goto L_0897474C;
    return;
L_0897474C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897475Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x0897475Cu) goto L_0897475C;
    return;
L_0897475C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08974774;
      }
      goto L_08974764;
    }
L_08974764:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974770u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974770u) goto L_08974770;
    return;
L_08974770:
    aot_gpr[2] = (0u | 1024u);
    goto L_08974774;
L_08974774:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974784:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089747A0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x089747A0u) goto L_089747A0;
    return;
L_089747A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
        goto L_089747B0;
    }
    goto L_089747B0;
L_089747B0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089747BCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x089747BCu) goto L_089747BC;
    return;
L_089747BC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089747D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089747F4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x089747F4u) goto L_089747F4;
    return;
L_089747F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897481C;
      }
      goto L_08974804;
    }
L_08974804:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08974830;
      }
      goto L_08974814;
    }
L_08974814:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08974864;
      }
      goto L_0897481C;
    }
L_0897481C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974828u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974828u) goto L_08974828;
    return;
L_08974828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974888;
      }
      goto L_08974830;
    }
L_08974830:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08974850;
      }
      goto L_0897483C;
    }
L_0897483C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974848u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974848u) goto L_08974848;
    return;
L_08974848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974888;
      }
      goto L_08974850;
    }
L_08974850:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974830;
      }
      goto L_08974860;
    }
L_08974860:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    goto L_08974864;
L_08974864:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[31] = (0x08974888u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974888u) goto L_08974888;
    return;
L_08974888:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897489C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(428), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x089748E4u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089748E4u) goto L_089748E4;
    return;
L_089748E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089748F4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089747D0;
L_089748F4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08974910:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08974940u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x08974940u) goto L_08974940;
    return;
L_08974940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897497C;
      }
      goto L_08974950;
    }
L_08974950:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974960;
      }
      goto L_08974958;
    }
L_08974958:
    aot_gpr[4] = (0u | 81u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08974960;
L_08974960:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08974974u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-21272)));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974974u) goto L_08974974;
    return;
L_08974974:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08974AD8;
      }
      goto L_0897497C;
    }
L_0897497C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974994u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974994u) goto L_08974994;
    return;
L_08974994:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089749A4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089749A4u) goto L_089749A4;
    return;
L_089749A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x089749B8u);
    aot_gpr[4] = (0u | 1432u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x089749B8u) goto L_089749B8;
    return;
L_089749B8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089749D0;
      }
      goto L_089749C4;
    }
L_089749C4:
    aot_gpr[31] = (0x089749CCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0371_entry, 371u, 139u, 0x08977914u>(ctx, &aot_mem) && ctx.pc == 0x089749CCu) goto L_089749CC;
    return;
L_089749CC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089749D0;
L_089749D0:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(428), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
        goto L_089749E8;
    }
    goto L_089749E8;
L_089749E8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089749F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0371_entry, 371u, 68u, 0x08977490u>(ctx, &aot_mem) && ctx.pc == 0x089749F8u) goto L_089749F8;
    return;
L_089749F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08974A3C;
      }
      goto L_08974A00;
    }
L_08974A00:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21260)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21264)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08974A20u);
    aot_gpr[7] = (0u | 0u);
    goto L_0897489C;
L_08974A20:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21272)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08974A90;
      }
      goto L_08974A34;
    }
L_08974A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974AC8;
      }
      goto L_08974A3C;
    }
L_08974A3C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974A48u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974A48u) goto L_08974A48;
    return;
L_08974A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974A68u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974A68u) goto L_08974A68;
    return;
L_08974A68:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08974A74u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08974A74u) goto L_08974A74;
    return;
L_08974A74:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x08974A88u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-21272)));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974A88u) goto L_08974A88;
    return;
L_08974A88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08974AD8;
      }
      goto L_08974A90;
    }
L_08974A90:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974A9Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974A9Cu) goto L_08974A9C;
    return;
L_08974A9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974ABCu);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974ABCu) goto L_08974ABC;
    return;
L_08974ABC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08974AC8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08974AC8u) goto L_08974AC8;
    return;
L_08974AC8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974AD4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974AD4u) goto L_08974AD4;
    return;
L_08974AD4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08974AD8;
L_08974AD8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974AF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08974B3C;
      }
      goto L_08974B10;
    }
L_08974B10:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08974B1Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x08974B1Cu) goto L_08974B1C;
    return;
L_08974B1C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[10] | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08974B44;
      }
      goto L_08974B34;
    }
L_08974B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974B9C;
      }
      goto L_08974B3C;
    }
L_08974B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974BAC;
      }
      goto L_08974B44;
    }
L_08974B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08974B8C;
      }
      goto L_08974B50;
    }
L_08974B50:
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[8] << 2u);
      if (branch_taken) {
          goto L_08974B88;
      }
      goto L_08974B64;
    }
L_08974B64:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    goto L_08974B68;
L_08974B68:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[6] << 2u);
    aot_gpr[11] = (aot_gpr[17] + aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974B68;
      }
      goto L_08974B88;
    }
L_08974B88:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08974B8C;
L_08974B8C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974B44;
      }
      goto L_08974B9C;
    }
L_08974B9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974BACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974BACu) goto L_08974BAC;
    return;
L_08974BAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974BC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974BDC;
      }
      goto L_08974BD4;
    }
L_08974BD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08974C34;
      }
      goto L_08974BDC;
    }
L_08974BDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x08974BE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 161u, 0x08973980u>(ctx, &aot_mem) && ctx.pc == 0x08974BE8u) goto L_08974BE8;
    return;
L_08974BE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08974BF4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08974AF4;
L_08974BF4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974C00u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974C00u) goto L_08974C00;
    return;
L_08974C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974C24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974C24u) goto L_08974C24;
    return;
L_08974C24:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08974C30u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08974C30u) goto L_08974C30;
    return;
L_08974C30:
    aot_gpr[2] = (0u | 0u);
    goto L_08974C34;
L_08974C34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974C44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6464));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08974C98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21256));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 115u, 0x08979768u>(ctx, &aot_mem) && ctx.pc == 0x08974C98u) goto L_08974C98;
    return;
L_08974C98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(240), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(244), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(248), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(252), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(256), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(264), 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08974CBC;
L_08974CBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974CBC;
      }
      goto L_08974CD0;
    }
L_08974CD0:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08974CD8;
L_08974CD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974CD8;
      }
      goto L_08974CEC;
    }
L_08974CEC:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08974CF4;
L_08974CF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974CF4;
      }
      goto L_08974D08;
    }
L_08974D08:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974D1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08974D3Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 133u, 0x08979900u>(ctx, &aot_mem) && ctx.pc == 0x08974D3Cu) goto L_08974D3C;
    return;
L_08974D3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08974DC4;
      }
      goto L_08974D50;
    }
L_08974D50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974DAC;
      }
      goto L_08974D5C;
    }
L_08974D5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974D74u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974D74u) goto L_08974D74;
    return;
L_08974D74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974D98u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974D98u) goto L_08974D98;
    return;
L_08974D98:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08974DA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08974DA4u) goto L_08974DA4;
    return;
L_08974DA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08974DAC;
L_08974DAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974D50;
      }
      goto L_08974DC4;
    }
L_08974DC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08974DD4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 139u, 0x08979974u>(ctx, &aot_mem) && ctx.pc == 0x08974DD4u) goto L_08974DD4;
    return;
L_08974DD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974DE8:
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
          goto L_08974F08;
      }
      goto L_08974E0C;
    }
L_08974E0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6464));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(268), aot_gpr[4]);
    aot_gpr[31] = (0x08974E20u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 157u, 0x0897392Cu>(ctx, &aot_mem) && ctx.pc == 0x08974E20u) goto L_08974E20;
    return;
L_08974E20:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E68;
      }
      goto L_08974E2C;
    }
L_08974E2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08974E48u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974E48u) goto L_08974E48;
    return;
L_08974E48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974E68;
      }
      goto L_08974E50;
    }
L_08974E50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(152));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08974E68u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974E68u) goto L_08974E68;
    return;
L_08974E68:
    aot_gpr[31] = (0x08974E70u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08974D1C;
L_08974E70:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08974E78;
L_08974E78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974ED4;
      }
      goto L_08974E84;
    }
L_08974E84:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08974E9C;
      }
      goto L_08974E8C;
    }
L_08974E8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08974ED4;
      }
      goto L_08974E94;
    }
L_08974E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974EAC;
      }
      goto L_08974E9C;
    }
L_08974E9C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974EC0;
      }
      goto L_08974EA4;
    }
L_08974EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974ED4;
      }
      goto L_08974EAC;
    }
L_08974EAC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08974EB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 243u, 0x08973DE4u>(ctx, &aot_mem) && ctx.pc == 0x08974EB8u) goto L_08974EB8;
    return;
L_08974EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974ED4;
      }
      goto L_08974EC0;
    }
L_08974EC0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08974ECCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 256u, 0x08973ED0u>(ctx, &aot_mem) && ctx.pc == 0x08974ECCu) goto L_08974ECC;
    return;
L_08974ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974ED4;
      }
      goto L_08974ED4;
    }
L_08974ED4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08974E78;
      }
      goto L_08974EE8;
    }
L_08974EE8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08974EF4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 117u, 0x089797B0u>(ctx, &aot_mem) && ctx.pc == 0x08974EF4u) goto L_08974EF4;
    return;
L_08974EF4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974F08;
      }
      goto L_08974F00;
    }
L_08974F00:
    aot_gpr[31] = (0x08974F08u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08974F08u) goto L_08974F08;
    return;
L_08974F08:
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
L_08974F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974F38;
      }
      goto L_08974F34;
    }
L_08974F34:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08974F38;
L_08974F38:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974F44u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974F44u) goto L_08974F44;
    return;
L_08974F44:
    aot_gpr[31] = (0x08974F4Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 244u, 0x0897AEB0u>(ctx, &aot_mem) && ctx.pc == 0x08974F4Cu) goto L_08974F4C;
    return;
L_08974F4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974F58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08974F74u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974F74u) goto L_08974F74;
    return;
L_08974F74:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08974F80u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 22u, 0x0897B180u>(ctx, &aot_mem) && ctx.pc == 0x08974F80u) goto L_08974F80;
    return;
L_08974F80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974F90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974FD4;
      }
      goto L_08974FA0;
    }
L_08974FA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08974FB4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08974FB4u) goto L_08974FB4;
    return;
L_08974FB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08974FC0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 243u, 0x0897AEA8u>(ctx, &aot_mem) && ctx.pc == 0x08974FC0u) goto L_08974FC0;
    return;
L_08974FC0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08974FDC;
      }
      goto L_08974FCC;
    }
L_08974FCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08974FE4;
      }
      goto L_08974FD4;
    }
L_08974FD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08974FE4;
      }
      goto L_08974FDC;
    }
L_08974FDC:
    aot_gpr[31] = (0x08974FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 193u, 0x08973B78u>(ctx, &aot_mem) && ctx.pc == 0x08974FE4u) goto L_08974FE4;
    return;
L_08974FE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974FF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 2u, 0x08975008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 1u, 0x08975000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0368(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0368_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_368(Runtime &runtime) {
    runtime.register_generated_unit(368u, 0x08974000u, 4096u, &recomp_unit_0368, &recomp_unit_0368_entry);
    runtime.register_function(0x08974000u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897400Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974014u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897401Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974024u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974028u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974038u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974040u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974048u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974060u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974068u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974070u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974078u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974094u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089740B8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089740D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089740E4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089740ECu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089740F4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974100u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974110u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974118u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974120u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974138u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974140u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974148u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974150u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897416Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974190u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741A8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741BCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741C4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741CCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741D8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741DCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089741FCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897421Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974230u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897423Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974254u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897426Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974278u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974280u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974288u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742A8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742B0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742B8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742C0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742C8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742D8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742DCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742E0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089742F4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974308u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974314u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897431Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974334u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974340u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974364u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974370u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974378u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974398u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089743ACu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089743D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089743DCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089743E4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974404u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974418u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974434u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974440u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974448u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974450u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974460u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897447Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974488u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974490u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974498u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089744A8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089744C4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089744D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089744D8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089744E0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089744F0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974514u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897451Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974530u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897453Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974548u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974550u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974558u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974560u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897456Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974574u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974590u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745A0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745ACu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745B4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745B8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745C8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089745D8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974614u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897461Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974624u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974638u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974644u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897465Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974668u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974674u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897467Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974688u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974690u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974698u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089746A4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089746B8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089746DCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974700u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897470Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974718u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974728u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974730u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897474Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897475Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974764u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974770u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974774u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974784u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089747A0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089747B0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089747BCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089747D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089747F4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974804u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974814u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897481Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974828u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974830u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897483Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974848u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974850u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974860u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974864u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974888u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897489Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089748E4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089748F4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974910u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974940u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974950u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974958u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974960u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974974u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x0897497Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974994u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749A4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749B8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749C4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749CCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749D0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749E8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x089749F8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A00u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A20u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A34u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A3Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A48u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A68u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A74u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A88u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A90u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974A9Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974ABCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974AC8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974AD4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974AD8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974AF4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B10u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B1Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B34u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B3Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B44u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B50u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B64u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B68u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B88u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B8Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974B9Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974BACu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974BC0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974BD4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974BDCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974BE8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974BF4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974C00u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974C24u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974C30u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974C34u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974C44u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974C98u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974CBCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974CD0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974CD8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974CECu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974CF4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D08u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D1Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D3Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D50u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D5Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D74u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974D98u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974DA4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974DACu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974DC4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974DD4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974DE8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E0Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E20u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E2Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E48u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E50u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E68u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E70u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E78u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E84u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E8Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E94u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974E9Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974EA4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974EACu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974EB8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974EC0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974ECCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974ED4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974EE8u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974EF4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F00u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F08u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F24u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F34u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F38u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F44u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F4Cu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F58u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F74u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F80u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974F90u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FA0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FB4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FC0u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FCCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FD4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FDCu, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FE4u, &recomp_unit_0368, "recomp_unit_0368");
    runtime.register_function(0x08974FF0u, &recomp_unit_0368, "recomp_unit_0368");
}
} // namespace psprecomp
