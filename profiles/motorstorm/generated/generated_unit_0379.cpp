#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0379[985] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0,
    11, 0, 12, 0, 13, 0, 14, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20,
    0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0,
    29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0,
    39, 0, 40, 0, 41, 0, 42, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62,
    0, 63, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0,
    96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0,
    0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0,
    114, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0,
    0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184,
    0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0,
    0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0,
    221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233,
};
void recomp_unit_0379_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0897F004u;
        entry_id = (entry_delta < 3940u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0379[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897F004;
    case 2u: goto L_0897F020;
    case 3u: goto L_0897F02C;
    case 4u: goto L_0897F034;
    case 5u: goto L_0897F040;
    case 6u: goto L_0897F05C;
    case 7u: goto L_0897F064;
    case 8u: goto L_0897F06C;
    case 9u: goto L_0897F074;
    case 10u: goto L_0897F07C;
    case 11u: goto L_0897F084;
    case 12u: goto L_0897F08C;
    case 13u: goto L_0897F094;
    case 14u: goto L_0897F09C;
    case 15u: goto L_0897F0A0;
    case 16u: goto L_0897F0B4;
    case 17u: goto L_0897F0D0;
    case 18u: goto L_0897F0DC;
    case 19u: goto L_0897F0F8;
    case 20u: goto L_0897F100;
    case 21u: goto L_0897F11C;
    case 22u: goto L_0897F124;
    case 23u: goto L_0897F140;
    case 24u: goto L_0897F148;
    case 25u: goto L_0897F164;
    case 26u: goto L_0897F16C;
    case 27u: goto L_0897F174;
    case 28u: goto L_0897F17C;
    case 29u: goto L_0897F184;
    case 30u: goto L_0897F190;
    case 31u: goto L_0897F198;
    case 32u: goto L_0897F1B0;
    case 33u: goto L_0897F1BC;
    case 34u: goto L_0897F1C8;
    case 35u: goto L_0897F1D0;
    case 36u: goto L_0897F1D8;
    case 37u: goto L_0897F1E4;
    case 38u: goto L_0897F1EC;
    case 39u: goto L_0897F204;
    case 40u: goto L_0897F20C;
    case 41u: goto L_0897F214;
    case 42u: goto L_0897F21C;
    case 43u: goto L_0897F220;
    case 44u: goto L_0897F234;
    case 45u: goto L_0897F240;
    case 46u: goto L_0897F25C;
    case 47u: goto L_0897F264;
    case 48u: goto L_0897F280;
    case 49u: goto L_0897F290;
    case 50u: goto L_0897F2B0;
    case 51u: goto L_0897F2C0;
    case 52u: goto L_0897F2D8;
    case 53u: goto L_0897F2E4;
    case 54u: goto L_0897F2EC;
    case 55u: goto L_0897F30C;
    case 56u: goto L_0897F318;
    case 57u: goto L_0897F330;
    case 58u: goto L_0897F33C;
    case 59u: goto L_0897F348;
    case 60u: goto L_0897F360;
    case 61u: goto L_0897F368;
    case 62u: goto L_0897F380;
    case 63u: goto L_0897F388;
    case 64u: goto L_0897F38C;
    case 65u: goto L_0897F39C;
    case 66u: goto L_0897F3B8;
    case 67u: goto L_0897F3DC;
    case 68u: goto L_0897F400;
    case 69u: goto L_0897F418;
    case 70u: goto L_0897F424;
    case 71u: goto L_0897F448;
    case 72u: goto L_0897F454;
    case 73u: goto L_0897F464;
    case 74u: goto L_0897F470;
    case 75u: goto L_0897F478;
    case 76u: goto L_0897F494;
    case 77u: goto L_0897F49C;
    case 78u: goto L_0897F4C0;
    case 79u: goto L_0897F4CC;
    case 80u: goto L_0897F4F0;
    case 81u: goto L_0897F4FC;
    case 82u: goto L_0897F504;
    case 83u: goto L_0897F534;
    case 84u: goto L_0897F53C;
    case 85u: goto L_0897F544;
    case 86u: goto L_0897F560;
    case 87u: goto L_0897F564;
    case 88u: goto L_0897F578;
    case 89u: goto L_0897F588;
    case 90u: goto L_0897F594;
    case 91u: goto L_0897F5BC;
    case 92u: goto L_0897F5C8;
    case 93u: goto L_0897F5D4;
    case 94u: goto L_0897F5F4;
    case 95u: goto L_0897F5FC;
    case 96u: goto L_0897F604;
    case 97u: goto L_0897F614;
    case 98u: goto L_0897F61C;
    case 99u: goto L_0897F624;
    case 100u: goto L_0897F640;
    case 101u: goto L_0897F658;
    case 102u: goto L_0897F674;
    case 103u: goto L_0897F67C;
    case 104u: goto L_0897F688;
    case 105u: goto L_0897F690;
    case 106u: goto L_0897F6A0;
    case 107u: goto L_0897F6B0;
    case 108u: goto L_0897F6CC;
    case 109u: goto L_0897F6D8;
    case 110u: goto L_0897F6E0;
    case 111u: goto L_0897F6E8;
    case 112u: goto L_0897F6F4;
    case 113u: goto L_0897F6FC;
    case 114u: goto L_0897F704;
    case 115u: goto L_0897F708;
    case 116u: goto L_0897F718;
    case 117u: goto L_0897F720;
    case 118u: goto L_0897F728;
    case 119u: goto L_0897F740;
    case 120u: goto L_0897F748;
    case 121u: goto L_0897F750;
    case 122u: goto L_0897F75C;
    case 123u: goto L_0897F768;
    case 124u: goto L_0897F778;
    case 125u: goto L_0897F78C;
    case 126u: goto L_0897F7A4;
    case 127u: goto L_0897F7B4;
    case 128u: goto L_0897F7CC;
    case 129u: goto L_0897F7D8;
    case 130u: goto L_0897F7E8;
    case 131u: goto L_0897F7F4;
    case 132u: goto L_0897F808;
    case 133u: goto L_0897F864;
    case 134u: goto L_0897F878;
    case 135u: goto L_0897F88C;
    case 136u: goto L_0897F8A0;
    case 137u: goto L_0897F8B4;
    case 138u: goto L_0897F8D0;
    case 139u: goto L_0897F8E8;
    case 140u: goto L_0897F8F0;
    case 141u: goto L_0897F8FC;
    case 142u: goto L_0897F908;
    case 143u: goto L_0897F914;
    case 144u: goto L_0897F934;
    case 145u: goto L_0897F940;
    case 146u: goto L_0897F94C;
    case 147u: goto L_0897F954;
    case 148u: goto L_0897F968;
    case 149u: goto L_0897F974;
    case 150u: goto L_0897F97C;
    case 151u: goto L_0897F9AC;
    case 152u: goto L_0897F9B4;
    case 153u: goto L_0897F9BC;
    case 154u: goto L_0897F9C4;
    case 155u: goto L_0897F9D8;
    case 156u: goto L_0897F9E0;
    case 157u: goto L_0897F9F8;
    case 158u: goto L_0897FA1C;
    case 159u: goto L_0897FA34;
    case 160u: goto L_0897FA58;
    case 161u: goto L_0897FA60;
    case 162u: goto L_0897FA74;
    case 163u: goto L_0897FAE8;
    case 164u: goto L_0897FB60;
    case 165u: goto L_0897FB6C;
    case 166u: goto L_0897FB74;
    case 167u: goto L_0897FB98;
    case 168u: goto L_0897FB9C;
    case 169u: goto L_0897FBA8;
    case 170u: goto L_0897FBB4;
    case 171u: goto L_0897FBC0;
    case 172u: goto L_0897FBD0;
    case 173u: goto L_0897FBE0;
    case 174u: goto L_0897FBE8;
    case 175u: goto L_0897FBFC;
    case 176u: goto L_0897FC08;
    case 177u: goto L_0897FC14;
    case 178u: goto L_0897FC24;
    case 179u: goto L_0897FC2C;
    case 180u: goto L_0897FC3C;
    case 181u: goto L_0897FC58;
    case 182u: goto L_0897FC70;
    case 183u: goto L_0897FC78;
    case 184u: goto L_0897FC80;
    case 185u: goto L_0897FC88;
    case 186u: goto L_0897FC94;
    case 187u: goto L_0897FCA8;
    case 188u: goto L_0897FCB8;
    case 189u: goto L_0897FCC4;
    case 190u: goto L_0897FD0C;
    case 191u: goto L_0897FD14;
    case 192u: goto L_0897FD20;
    case 193u: goto L_0897FD3C;
    case 194u: goto L_0897FD44;
    case 195u: goto L_0897FD58;
    case 196u: goto L_0897FD80;
    case 197u: goto L_0897FD88;
    case 198u: goto L_0897FD90;
    case 199u: goto L_0897FD98;
    case 200u: goto L_0897FDA0;
    case 201u: goto L_0897FDA8;
    case 202u: goto L_0897FDB0;
    case 203u: goto L_0897FDB8;
    case 204u: goto L_0897FDC0;
    case 205u: goto L_0897FDC8;
    case 206u: goto L_0897FDD0;
    case 207u: goto L_0897FDD8;
    case 208u: goto L_0897FDE0;
    case 209u: goto L_0897FDE8;
    case 210u: goto L_0897FDF0;
    case 211u: goto L_0897FDFC;
    case 212u: goto L_0897FE08;
    case 213u: goto L_0897FE1C;
    case 214u: goto L_0897FE2C;
    case 215u: goto L_0897FE40;
    case 216u: goto L_0897FE48;
    case 217u: goto L_0897FE50;
    case 218u: goto L_0897FE5C;
    case 219u: goto L_0897FE70;
    case 220u: goto L_0897FE78;
    case 221u: goto L_0897FE84;
    case 222u: goto L_0897FE90;
    case 223u: goto L_0897FE98;
    case 224u: goto L_0897FEA0;
    case 225u: goto L_0897FEAC;
    case 226u: goto L_0897FEB0;
    case 227u: goto L_0897FEB8;
    case 228u: goto L_0897FF04;
    case 229u: goto L_0897FF1C;
    case 230u: goto L_0897FF30;
    case 231u: goto L_0897FF38;
    case 232u: goto L_0897FF50;
    case 233u: goto L_0897FF64;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897F004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F07C;
      }
      goto L_0897F020;
    }
L_0897F020:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F074;
      }
      goto L_0897F02C;
    }
L_0897F02C:
    aot_gpr[31] = (0x0897F034u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 141u, 0x08975784u>(ctx, &aot_mem) && ctx.pc == 0x0897F034u) goto L_0897F034;
    return;
L_0897F034:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F06C;
      }
      goto L_0897F040;
    }
L_0897F040:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897F05Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F05Cu) goto L_0897F05C;
    return;
L_0897F05C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F084;
      }
      goto L_0897F064;
    }
L_0897F064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F09C;
      }
      goto L_0897F06C;
    }
L_0897F06C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897F0A0;
      }
      goto L_0897F074;
    }
L_0897F074:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 56u);
      if (branch_taken) {
          goto L_0897F0A0;
      }
      goto L_0897F07C;
    }
L_0897F07C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 56u);
      if (branch_taken) {
          goto L_0897F0A0;
      }
      goto L_0897F084;
    }
L_0897F084:
    aot_gpr[31] = (0x0897F08Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 210u, 0x08976D24u>(ctx, &aot_mem) && ctx.pc == 0x0897F08Cu) goto L_0897F08C;
    return;
L_0897F08C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F09C;
      }
      goto L_0897F094;
    }
L_0897F094:
    aot_gpr[31] = (0x0897F09Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 181u, 0x08981BDCu>(ctx, &aot_mem) && ctx.pc == 0x0897F09Cu) goto L_0897F09C;
    return;
L_0897F09C:
    aot_gpr[2] = (0u | 0u);
    goto L_0897F0A0;
L_0897F0A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F0B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897F184;
      }
      goto L_0897F0D0;
    }
L_0897F0D0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F174;
      }
      goto L_0897F0DC;
    }
L_0897F0DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897F0F8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F0F8u) goto L_0897F0F8;
    return;
L_0897F0F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F174;
      }
      goto L_0897F100;
    }
L_0897F100:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897F11Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F11Cu) goto L_0897F11C;
    return;
L_0897F11C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F174;
      }
      goto L_0897F124;
    }
L_0897F124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 512u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897F140u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F140u) goto L_0897F140;
    return;
L_0897F140:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F174;
      }
      goto L_0897F148;
    }
L_0897F148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2048u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897F164u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F164u) goto L_0897F164;
    return;
L_0897F164:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
        goto L_0897F198;
    }
    goto L_0897F16C;
L_0897F16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F21C;
      }
      goto L_0897F174;
    }
L_0897F174:
    aot_gpr[31] = (0x0897F17Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897F17C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F220;
      }
      goto L_0897F184;
    }
L_0897F184:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0897F190u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19688));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0897F190u) goto L_0897F190;
    return;
L_0897F190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 153u);
      if (branch_taken) {
          goto L_0897F220;
      }
      goto L_0897F198;
    }
L_0897F198:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897F1B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F1B0u) goto L_0897F1B0;
    return;
L_0897F1B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F214;
      }
      goto L_0897F1BC;
    }
L_0897F1BC:
    aot_gpr[4] = (0u | 1025u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897F1D8;
      }
      goto L_0897F1C8;
    }
L_0897F1C8:
    aot_gpr[31] = (0x0897F1D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0371_entry, 371u, 43u, 0x08977328u>(ctx, &aot_mem) && ctx.pc == 0x0897F1D0u) goto L_0897F1D0;
    return;
L_0897F1D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F214;
      }
      goto L_0897F1D8;
    }
L_0897F1D8:
    aot_gpr[4] = (0u | 512u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897F1EC;
      }
      goto L_0897F1E4;
    }
L_0897F1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F214;
      }
      goto L_0897F1EC;
    }
L_0897F1EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F204u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F204u) goto L_0897F204;
    return;
L_0897F204:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F214;
      }
      goto L_0897F20C;
    }
L_0897F20C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F220;
      }
      goto L_0897F214;
    }
L_0897F214:
    aot_gpr[31] = (0x0897F21Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897F21C:
    aot_gpr[2] = (0u | 0u);
    goto L_0897F220;
L_0897F220:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F234:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F240:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F264;
      }
      goto L_0897F25C;
    }
L_0897F25C:
    aot_gpr[31] = (0x0897F264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 212u, 0x0897EFE8u>(ctx, &aot_mem) && ctx.pc == 0x0897F264u) goto L_0897F264;
    return;
L_0897F264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F280u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F280u) goto L_0897F280;
    return;
L_0897F280:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(168));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897F2B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F2B0u) goto L_0897F2B0;
    return;
L_0897F2B0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F2C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0897F2EC;
      }
      goto L_0897F2D8;
    }
L_0897F2D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0897F2E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19688));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0897F2E4u) goto L_0897F2E4;
    return;
L_0897F2E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 153u);
      if (branch_taken) {
          goto L_0897F30C;
      }
      goto L_0897F2EC;
    }
L_0897F2EC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0897F30Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F30Cu) goto L_0897F30C;
    return;
L_0897F30C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
        goto L_0897F368;
    }
    goto L_0897F330;
L_0897F330:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F388;
      }
      goto L_0897F33C;
    }
L_0897F33C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x0897F348u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 212u, 0x08976D38u>(ctx, &aot_mem) && ctx.pc == 0x0897F348u) goto L_0897F348;
    return;
L_0897F348:
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0897F360u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 4u, 0x0897604Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F360u) goto L_0897F360;
    return;
L_0897F360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F38C;
      }
      goto L_0897F368;
    }
L_0897F368:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(168));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897F380u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F380u) goto L_0897F380;
    return;
L_0897F380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F38C;
      }
      goto L_0897F388;
    }
L_0897F388:
    aot_gpr[2] = (0u | 33u);
    goto L_0897F38C;
L_0897F38C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F39C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897F3B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19656));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 223u, 0x08979FCCu>(ctx, &aot_mem) && ctx.pc == 0x0897F3B8u) goto L_0897F3B8;
    return;
L_0897F3B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8672));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F3DC:
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
          goto L_0897F478;
      }
      goto L_0897F400;
    }
L_0897F400:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8672));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F454;
      }
      goto L_0897F418;
    }
L_0897F418:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897F424u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897F424u) goto L_0897F424;
    return;
L_0897F424:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897F448u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F448u) goto L_0897F448;
    return;
L_0897F448:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0897F454u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F454u) goto L_0897F454;
    return;
L_0897F454:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(364), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897F464u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 8u, 0x0897A074u>(ctx, &aot_mem) && ctx.pc == 0x0897F464u) goto L_0897F464;
    return;
L_0897F464:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F478;
      }
      goto L_0897F470;
    }
L_0897F470:
    aot_gpr[31] = (0x0897F478u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897F478u) goto L_0897F478;
    return;
L_0897F478:
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
L_0897F494:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F49C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F4C0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F4C0u) goto L_0897F4C0;
    return;
L_0897F4C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F4CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F4F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F4F0u) goto L_0897F4F0;
    return;
L_0897F4F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F4FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F504:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F534u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F534u) goto L_0897F534;
    return;
L_0897F534:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F544;
      }
      goto L_0897F53C;
    }
L_0897F53C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0897F564;
      }
      goto L_0897F544;
    }
L_0897F544:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(640), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(636), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[31] = (0x0897F560u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 115u, 0x0897E8D4u>(ctx, &aot_mem) && ctx.pc == 0x0897F560u) goto L_0897F560;
    return;
L_0897F560:
    aot_gpr[2] = (0u | 0u);
    goto L_0897F564;
L_0897F564:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897F588u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(852));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x0897F588u) goto L_0897F588;
    return;
L_0897F588:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F5BCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F5BCu) goto L_0897F5BC;
    return;
L_0897F5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(644)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F604;
      }
      goto L_0897F5C8;
    }
L_0897F5C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F604;
      }
      goto L_0897F5D4;
    }
L_0897F5D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    aot_gpr[5] = (0u | 32u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F5F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F5F4u) goto L_0897F5F4;
    return;
L_0897F5F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F604;
      }
      goto L_0897F5FC;
    }
L_0897F5FC:
    aot_gpr[31] = (0x0897F604u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897F578;
L_0897F604:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(843), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0897F614u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1220));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x0897F614u) goto L_0897F614;
    return;
L_0897F614:
    aot_gpr[31] = (0x0897F61Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F61Cu) goto L_0897F61C;
    return;
L_0897F61C:
    aot_gpr[31] = (0x0897F624u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 116u, 0x0897E8E4u>(ctx, &aot_mem) && ctx.pc == 0x0897F624u) goto L_0897F624;
    return;
L_0897F624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F640u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F640u) goto L_0897F640;
    return;
L_0897F640:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(640), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(636), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F658:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(644)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_0897F688;
    }
    goto L_0897F674;
L_0897F674:
    aot_gpr[31] = (0x0897F67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 10u, 0x08979080u>(ctx, &aot_mem) && ctx.pc == 0x0897F67Cu) goto L_0897F67C;
    return;
L_0897F67C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897F690;
      }
      goto L_0897F688;
    }
L_0897F688:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19644)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19648)));
    goto L_0897F690;
L_0897F690:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(660), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(656), aot_gpr[4]);
    aot_gpr[31] = (0x0897F6A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 122u, 0x0897E948u>(ctx, &aot_mem) && ctx.pc == 0x0897F6A0u) goto L_0897F6A0;
    return;
L_0897F6A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F6B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(644)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6E0;
      }
      goto L_0897F6CC;
    }
L_0897F6CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6E8;
      }
      goto L_0897F6D8;
    }
L_0897F6D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_0897F708;
      }
      goto L_0897F6E0;
    }
L_0897F6E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_0897F708;
      }
      goto L_0897F6E8;
    }
L_0897F6E8:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897F6F4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 210u, 0x08978B68u>(ctx, &aot_mem) && ctx.pc == 0x0897F6F4u) goto L_0897F6F4;
    return;
L_0897F6F4:
    aot_gpr[31] = (0x0897F6FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897F578;
L_0897F6FC:
    aot_gpr[31] = (0x0897F704u);
    aot_gpr[4] = (0u | 50000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897F704:
    aot_gpr[2] = (0u | 0u);
    goto L_0897F708;
L_0897F708:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F718:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F728;
      }
      goto L_0897F720;
    }
L_0897F720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 37u);
      if (branch_taken) {
          goto L_0897F740;
      }
      goto L_0897F728;
    }
L_0897F728:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(664));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897F740;
L_0897F740:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F748:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(664));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F750:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(660), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(656), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F75C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(660)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(656)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897F778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 190u, 0x0897EE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F778u) goto L_0897F778;
    return;
L_0897F778:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F78C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(852));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897F7A4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x0897F7A4u) goto L_0897F7A4;
    return;
L_0897F7A4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1036));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897F7CCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x0897F7CCu) goto L_0897F7CC;
    return;
L_0897F7CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897F7E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1036));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x0897F7E8u) goto L_0897F7E8;
    return;
L_0897F7E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897F808u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 88u, 0x0897E6D8u>(ctx, &aot_mem) && ctx.pc == 0x0897F808u) goto L_0897F808;
    return;
L_0897F808:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8848));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(636), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19572)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19576)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(640), 0u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-19644)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-19648)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(652), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(648), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(660), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(656), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(664), 0u);
    aot_gpr[7] = (2200u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(668), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(672));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 56u);
    aot_gpr[31] = (0x0897F864u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-11116));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0897F864u) goto L_0897F864;
    return;
L_0897F864:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(852));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0897F878u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19640));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 130u, 0x089798A8u>(ctx, &aot_mem) && ctx.pc == 0x0897F878u) goto L_0897F878;
    return;
L_0897F878:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1036));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0897F88Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19616));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 130u, 0x089798A8u>(ctx, &aot_mem) && ctx.pc == 0x0897F88Cu) goto L_0897F88C;
    return;
L_0897F88C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1220));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0897F8A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19596));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 130u, 0x089798A8u>(ctx, &aot_mem) && ctx.pc == 0x0897F8A0u) goto L_0897F8A0;
    return;
L_0897F8A0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F8B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897F954;
      }
      goto L_0897F8D0;
    }
L_0897F8D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8848));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F8F0;
      }
      goto L_0897F8E8;
    }
L_0897F8E8:
    aot_gpr[31] = (0x0897F8F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897F594;
L_0897F8F0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1220));
    aot_gpr[31] = (0x0897F8FCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x0897F8FCu) goto L_0897F8FC;
    return;
L_0897F8FC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1036));
    aot_gpr[31] = (0x0897F908u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x0897F908u) goto L_0897F908;
    return;
L_0897F908:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(852));
    aot_gpr[31] = (0x0897F914u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x0897F914u) goto L_0897F914;
    return;
L_0897F914:
    aot_gpr[7] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(672));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 56u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x0897F934u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-10940));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F934u) goto L_0897F934;
    return;
L_0897F934:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897F940u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 104u, 0x0897E828u>(ctx, &aot_mem) && ctx.pc == 0x0897F940u) goto L_0897F940;
    return;
L_0897F940:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F954;
      }
      goto L_0897F94C;
    }
L_0897F94C:
    aot_gpr[31] = (0x0897F954u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897F954u) goto L_0897F954;
    return;
L_0897F954:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F968:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1448), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F974:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1448)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F97C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897F9ACu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F9ACu) goto L_0897F9AC;
    return;
L_0897F9AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F9BC;
      }
      goto L_0897F9B4;
    }
L_0897F9B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 256u);
      if (branch_taken) {
          goto L_0897F9C4;
      }
      goto L_0897F9BC;
    }
L_0897F9BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1408), aot_gpr[16]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897F9C4;
L_0897F9C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F9D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1408)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F9E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1600), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1604), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1608), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1612), aot_gpr[8]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F9F8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1600)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1604)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1608)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1612)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FA1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1616), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1620), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1624), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1628), aot_gpr[8]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FA34:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1616)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1620)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1624)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1628)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FA58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FA60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1464)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897FB60;
      }
      goto L_0897FA74;
    }
L_0897FA74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1412)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1416)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1440)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-19516)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-19520)));
    aot_gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-19508)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-19512)));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[2] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[12] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[4] = (0u | 6u);
    aot_gpr[2] = (aot_gpr[12] + aot_gpr[3]);
    aot_gpr[9] = (aot_gpr[2] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[10]);
    aot_gpr[31] = (0x0897FAE8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0897F75C;
L_0897FAE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1464)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1412)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1416)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1412)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1416)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1444)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1440)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1424)));
    aot_gpr[7] = (aot_gpr[8] | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(1456));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (0u | 17u);
    aot_gpr[8] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[8]);
      if (branch_taken) {
          goto L_0897FB74;
      }
      goto L_0897FB60;
    }
L_0897FB60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0897FB6Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19568));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0897FB6Cu) goto L_0897FB6C;
    return;
L_0897FB6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 53u);
      if (branch_taken) {
          goto L_0897FB9C;
      }
      goto L_0897FB74;
    }
L_0897FB74:
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0897FB74;
      }
      goto L_0897FB98;
    }
L_0897FB98:
    aot_gpr[2] = (0u | 0u);
    goto L_0897FB9C;
L_0897FB9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FBA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(672));
    goto L_0897FBB4;
L_0897FBB4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0897FBD0;
      }
      goto L_0897FBC0;
    }
L_0897FBC0:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_0897FBE0;
      }
      goto L_0897FBD0;
    }
L_0897FBD0:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_0897FBB4;
      }
      goto L_0897FBE0;
    }
L_0897FBE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FBE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(672));
    goto L_0897FBFC;
L_0897FBFC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0897FC14;
      }
      goto L_0897FC08;
    }
L_0897FC08:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(840), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897FC24;
      }
      goto L_0897FC14;
    }
L_0897FC14:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_0897FBFC;
      }
      goto L_0897FC24;
    }
L_0897FC24:
    aot_gpr[31] = (0x0897FC2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1220));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x0897FC2Cu) goto L_0897FC2C;
    return;
L_0897FC2C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FC3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897FC80;
      }
      goto L_0897FC58;
    }
L_0897FC58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897FC70u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897FC70u) goto L_0897FC70;
    return;
L_0897FC70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC88;
      }
      goto L_0897FC78;
    }
L_0897FC78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897FC94;
      }
      goto L_0897FC80;
    }
L_0897FC80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897FC94;
      }
      goto L_0897FC88;
    }
L_0897FC88:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897FC94u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0897F504;
L_0897FC94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FCA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897FCB8u);
    // nop
    goto L_0897F658;
L_0897FCB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FCC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897FD0Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897FD0Cu) goto L_0897FD0C;
    return;
L_0897FD0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDA0;
      }
      goto L_0897FD14;
    }
L_0897FD14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD20;
    }
L_0897FD20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897FD3Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897FD3Cu) goto L_0897FD3C;
    return;
L_0897FD3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD44;
    }
L_0897FD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(636)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0897FD58u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x0897FD58u) goto L_0897FD58;
    return;
L_0897FD58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(640)));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897FD80u);
    aot_gpr[5] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897FD80u) goto L_0897FD80;
    return;
L_0897FD80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDA8;
      }
      goto L_0897FD88;
    }
L_0897FD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDE8;
      }
      goto L_0897FD90;
    }
L_0897FD90:
    aot_gpr[31] = (0x0897FD98u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897FD98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 21u, 0x0898013Cu>(ctx, &aot_mem); return;
      }
      goto L_0897FDA0;
    }
L_0897FDA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 21u, 0x0898013Cu>(ctx, &aot_mem); return;
      }
      goto L_0897FDA8;
    }
L_0897FDA8:
    aot_gpr[31] = (0x0897FDB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 190u, 0x0897EE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FDB0u) goto L_0897FDB0;
    return;
L_0897FDB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDE8;
      }
      goto L_0897FDB8;
    }
L_0897FDB8:
    aot_gpr[31] = (0x0897FDC0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(640)));
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 210u, 0x08976D24u>(ctx, &aot_mem) && ctx.pc == 0x0897FDC0u) goto L_0897FDC0;
    return;
L_0897FDC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDD8;
      }
      goto L_0897FDC8;
    }
L_0897FDC8:
    aot_gpr[31] = (0x0897FDD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(640)));
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 258u, 0x08976F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FDD0u) goto L_0897FDD0;
    return;
L_0897FDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDE0;
      }
      goto L_0897FDD8;
    }
L_0897FDD8:
    aot_gpr[31] = (0x0897FDE0u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897FDE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 21u, 0x0898013Cu>(ctx, &aot_mem); return;
      }
      goto L_0897FDE8;
    }
L_0897FDE8:
    aot_gpr[31] = (0x0897FDF0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 162u, 0x0897EC14u>(ctx, &aot_mem) && ctx.pc == 0x0897FDF0u) goto L_0897FDF0;
    return;
L_0897FDF0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE48;
      }
      goto L_0897FDFC;
    }
L_0897FDFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(640)));
    aot_gpr[31] = (0x0897FE08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 53u, 0x08975314u>(ctx, &aot_mem) && ctx.pc == 0x0897FE08u) goto L_0897FE08;
    return;
L_0897FE08:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897FE1Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 10u, 0x08979080u>(ctx, &aot_mem) && ctx.pc == 0x0897FE1Cu) goto L_0897FE1C;
    return;
L_0897FE1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x0897FE2Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 12u, 0x08979098u>(ctx, &aot_mem) && ctx.pc == 0x0897FE2Cu) goto L_0897FE2C;
    return;
L_0897FE2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(660), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(656), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[30] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897FE50;
      }
      goto L_0897FE40;
    }
L_0897FE40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 7u, 0x08980040u>(ctx, &aot_mem); return;
      }
      goto L_0897FE48;
    }
L_0897FE48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 21u, 0x0898013Cu>(ctx, &aot_mem); return;
      }
      goto L_0897FE50;
    }
L_0897FE50:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[31] = (0x0897FE5Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(640)));
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 93u, 0x089754F4u>(ctx, &aot_mem) && ctx.pc == 0x0897FE5Cu) goto L_0897FE5C;
    return;
L_0897FE5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19500)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19504)));
      if (branch_taken) {
          goto L_0897FE84;
      }
      goto L_0897FE70;
    }
L_0897FE70:
    aot_gpr[31] = (0x0897FE78u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 10u, 0x08979080u>(ctx, &aot_mem) && ctx.pc == 0x0897FE78u) goto L_0897FE78;
    return;
L_0897FE78:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897FE90;
      }
      goto L_0897FE84;
    }
L_0897FE84:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19644)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19648)));
    goto L_0897FE90;
L_0897FE90:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[7] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_0897FEAC;
      }
      goto L_0897FE98;
    }
L_0897FE98:
    aot_gpr[31] = (0x0897FEA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 12u, 0x08979098u>(ctx, &aot_mem) && ctx.pc == 0x0897FEA0u) goto L_0897FEA0;
    return;
L_0897FEA0:
    aot_gpr[7] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897FEB0;
      }
      goto L_0897FEAC;
    }
L_0897FEAC:
    aot_gpr[6] = (aot_gpr[22] | 0u);
    goto L_0897FEB0;
L_0897FEB0:
    aot_gpr[31] = (0x0897FEB8u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_0897F75C;
L_0897FEB8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (aot_gpr[11] ^ aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[9] = (aot_gpr[11] < aot_gpr[19] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[5] ^ aot_gpr[21]);
    aot_gpr[30] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[21] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[30] = (aot_gpr[30] ^ 1u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[8] = (aot_gpr[8] ^ 1u);
      if (branch_taken) {
          goto L_0897FF1C;
      }
      goto L_0897FF04;
    }
L_0897FF04:
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[18] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[11] - aot_gpr[19]);
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[18]);
    aot_gpr[11] = (aot_gpr[2] - aot_gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_0897FF30;
      }
      goto L_0897FF1C;
    }
L_0897FF1C:
    aot_gpr[9] = (aot_gpr[18] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[19] - aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[18] - aot_gpr[10]);
    aot_gpr[11] = (aot_gpr[2] - aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[10] | 0u);
    goto L_0897FF30;
L_0897FF30:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0897FF50;
      }
      goto L_0897FF38;
    }
L_0897FF38:
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[20] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[5] - aot_gpr[21]);
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[4] - aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_0897FF64;
      }
      goto L_0897FF50;
    }
L_0897FF50:
    aot_gpr[10] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[21] - aot_gpr[5]);
    aot_gpr[11] = (aot_gpr[11] - aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[10] = (aot_gpr[10] | 0u);
    goto L_0897FF64;
L_0897FF64:
    aot_gpr[3] = (aot_gpr[7] ^ aot_gpr[23]);
    aot_gpr[2] = (aot_gpr[6] ^ aot_gpr[22]);
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[13] = (aot_gpr[5] ^ aot_gpr[23]);
    aot_gpr[12] = (aot_gpr[4] ^ aot_gpr[22]);
    aot_gpr[3] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[11] = (aot_gpr[13] | aot_gpr[12]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[12] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[3] & aot_gpr[4]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[12]);
    aot_gpr[5] = (aot_gpr[2] & aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[3] = (aot_gpr[15] ^ aot_gpr[23]);
    aot_gpr[2] = (aot_gpr[14] ^ aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[21] ^ aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[20] ^ aot_gpr[22]);
    aot_gpr[3] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[21] ^ aot_gpr[15]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[14] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[21] < aot_gpr[15] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[11]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(652)));
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(648)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    ctx.pc = 0x08980000u; return;
}

void recomp_unit_0379(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0379_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_379(Runtime &runtime) {
    runtime.register_generated_unit(379u, 0x0897F000u, 4096u, &recomp_unit_0379, &recomp_unit_0379_entry);
    runtime.register_function(0x0897F004u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F020u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F02Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F034u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F040u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F05Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F064u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F06Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F074u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F07Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F084u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F08Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F094u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F09Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F0A0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F0B4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F0D0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F0DCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F0F8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F100u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F11Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F124u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F140u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F148u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F164u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F16Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F174u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F17Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F184u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F190u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F198u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1B0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1BCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1C8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1D0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1D8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1E4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F1ECu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F204u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F20Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F214u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F21Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F220u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F234u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F240u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F25Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F264u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F280u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F290u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F2B0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F2C0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F2D8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F2E4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F2ECu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F30Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F318u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F330u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F33Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F348u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F360u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F368u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F380u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F388u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F38Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F39Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F3B8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F3DCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F400u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F418u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F424u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F448u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F454u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F464u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F470u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F478u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F494u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F49Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F4C0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F4CCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F4F0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F4FCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F504u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F534u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F53Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F544u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F560u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F564u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F578u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F588u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F594u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F5BCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F5C8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F5D4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F5F4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F5FCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F604u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F614u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F61Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F624u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F640u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F658u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F674u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F67Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F688u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F690u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6A0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6B0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6CCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6D8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6E0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6E8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6F4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F6FCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F704u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F708u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F718u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F720u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F728u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F740u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F748u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F750u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F75Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F768u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F778u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F78Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F7A4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F7B4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F7CCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F7D8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F7E8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F7F4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F808u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F864u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F878u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F88Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F8A0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F8B4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F8D0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F8E8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F8F0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F8FCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F908u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F914u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F934u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F940u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F94Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F954u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F968u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F974u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F97Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9ACu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9B4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9BCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9C4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9D8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9E0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897F9F8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FA1Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FA34u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FA58u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FA60u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FA74u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FAE8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FB60u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FB6Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FB74u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FB98u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FB9Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBA8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBB4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBC0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBD0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBE0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBE8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FBFCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC08u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC14u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC24u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC2Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC3Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC58u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC70u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC78u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC80u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC88u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FC94u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FCA8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FCB8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FCC4u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD0Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD14u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD20u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD3Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD44u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD58u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD80u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD88u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD90u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FD98u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDA0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDA8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDB0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDB8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDC0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDC8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDD0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDD8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDE0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDE8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDF0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FDFCu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE08u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE1Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE2Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE40u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE48u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE50u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE5Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE70u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE78u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE84u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE90u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FE98u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FEA0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FEACu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FEB0u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FEB8u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FF04u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FF1Cu, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FF30u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FF38u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FF50u, &recomp_unit_0379, "recomp_unit_0379");
    runtime.register_function(0x0897FF64u, &recomp_unit_0379, "recomp_unit_0379");
}
} // namespace psprecomp
