#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0523[1020] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10,
    0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19,
    0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76,
    0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0,
    0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0,
    95, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0,
    138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146,
    0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153,
    0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 189, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 253, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259,
};
void recomp_unit_0523_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A0F000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0523[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0F000;
    case 2u: goto L_08A0F008;
    case 3u: goto L_08A0F014;
    case 4u: goto L_08A0F030;
    case 5u: goto L_08A0F038;
    case 6u: goto L_08A0F044;
    case 7u: goto L_08A0F04C;
    case 8u: goto L_08A0F058;
    case 9u: goto L_08A0F074;
    case 10u: goto L_08A0F07C;
    case 11u: goto L_08A0F088;
    case 12u: goto L_08A0F090;
    case 13u: goto L_08A0F09C;
    case 14u: goto L_08A0F0B8;
    case 15u: goto L_08A0F0C0;
    case 16u: goto L_08A0F0CC;
    case 17u: goto L_08A0F0D4;
    case 18u: goto L_08A0F0E0;
    case 19u: goto L_08A0F0FC;
    case 20u: goto L_08A0F104;
    case 21u: goto L_08A0F110;
    case 22u: goto L_08A0F118;
    case 23u: goto L_08A0F124;
    case 24u: goto L_08A0F140;
    case 25u: goto L_08A0F148;
    case 26u: goto L_08A0F154;
    case 27u: goto L_08A0F15C;
    case 28u: goto L_08A0F168;
    case 29u: goto L_08A0F184;
    case 30u: goto L_08A0F18C;
    case 31u: goto L_08A0F198;
    case 32u: goto L_08A0F1A0;
    case 33u: goto L_08A0F1AC;
    case 34u: goto L_08A0F1C8;
    case 35u: goto L_08A0F1D0;
    case 36u: goto L_08A0F1DC;
    case 37u: goto L_08A0F1E4;
    case 38u: goto L_08A0F1F0;
    case 39u: goto L_08A0F20C;
    case 40u: goto L_08A0F214;
    case 41u: goto L_08A0F220;
    case 42u: goto L_08A0F228;
    case 43u: goto L_08A0F234;
    case 44u: goto L_08A0F250;
    case 45u: goto L_08A0F258;
    case 46u: goto L_08A0F264;
    case 47u: goto L_08A0F26C;
    case 48u: goto L_08A0F278;
    case 49u: goto L_08A0F294;
    case 50u: goto L_08A0F29C;
    case 51u: goto L_08A0F2A8;
    case 52u: goto L_08A0F2B0;
    case 53u: goto L_08A0F2BC;
    case 54u: goto L_08A0F2D8;
    case 55u: goto L_08A0F2E0;
    case 56u: goto L_08A0F2EC;
    case 57u: goto L_08A0F2F4;
    case 58u: goto L_08A0F300;
    case 59u: goto L_08A0F31C;
    case 60u: goto L_08A0F324;
    case 61u: goto L_08A0F330;
    case 62u: goto L_08A0F338;
    case 63u: goto L_08A0F344;
    case 64u: goto L_08A0F360;
    case 65u: goto L_08A0F368;
    case 66u: goto L_08A0F374;
    case 67u: goto L_08A0F37C;
    case 68u: goto L_08A0F388;
    case 69u: goto L_08A0F3A4;
    case 70u: goto L_08A0F3AC;
    case 71u: goto L_08A0F3B8;
    case 72u: goto L_08A0F3C0;
    case 73u: goto L_08A0F3CC;
    case 74u: goto L_08A0F3E8;
    case 75u: goto L_08A0F3F0;
    case 76u: goto L_08A0F3FC;
    case 77u: goto L_08A0F404;
    case 78u: goto L_08A0F410;
    case 79u: goto L_08A0F42C;
    case 80u: goto L_08A0F434;
    case 81u: goto L_08A0F440;
    case 82u: goto L_08A0F448;
    case 83u: goto L_08A0F454;
    case 84u: goto L_08A0F470;
    case 85u: goto L_08A0F478;
    case 86u: goto L_08A0F484;
    case 87u: goto L_08A0F48C;
    case 88u: goto L_08A0F498;
    case 89u: goto L_08A0F4B4;
    case 90u: goto L_08A0F4BC;
    case 91u: goto L_08A0F4C8;
    case 92u: goto L_08A0F4D0;
    case 93u: goto L_08A0F4DC;
    case 94u: goto L_08A0F4F8;
    case 95u: goto L_08A0F500;
    case 96u: goto L_08A0F50C;
    case 97u: goto L_08A0F514;
    case 98u: goto L_08A0F520;
    case 99u: goto L_08A0F53C;
    case 100u: goto L_08A0F544;
    case 101u: goto L_08A0F550;
    case 102u: goto L_08A0F558;
    case 103u: goto L_08A0F564;
    case 104u: goto L_08A0F580;
    case 105u: goto L_08A0F588;
    case 106u: goto L_08A0F594;
    case 107u: goto L_08A0F59C;
    case 108u: goto L_08A0F5A8;
    case 109u: goto L_08A0F5C4;
    case 110u: goto L_08A0F5CC;
    case 111u: goto L_08A0F5D8;
    case 112u: goto L_08A0F5E0;
    case 113u: goto L_08A0F5EC;
    case 114u: goto L_08A0F608;
    case 115u: goto L_08A0F610;
    case 116u: goto L_08A0F61C;
    case 117u: goto L_08A0F624;
    case 118u: goto L_08A0F630;
    case 119u: goto L_08A0F64C;
    case 120u: goto L_08A0F654;
    case 121u: goto L_08A0F660;
    case 122u: goto L_08A0F668;
    case 123u: goto L_08A0F674;
    case 124u: goto L_08A0F690;
    case 125u: goto L_08A0F698;
    case 126u: goto L_08A0F6A4;
    case 127u: goto L_08A0F6AC;
    case 128u: goto L_08A0F6B8;
    case 129u: goto L_08A0F6D4;
    case 130u: goto L_08A0F6E4;
    case 131u: goto L_08A0F700;
    case 132u: goto L_08A0F720;
    case 133u: goto L_08A0F72C;
    case 134u: goto L_08A0F734;
    case 135u: goto L_08A0F748;
    case 136u: goto L_08A0F76C;
    case 137u: goto L_08A0F774;
    case 138u: goto L_08A0F780;
    case 139u: goto L_08A0F788;
    case 140u: goto L_08A0F790;
    case 141u: goto L_08A0F7AC;
    case 142u: goto L_08A0F7B4;
    case 143u: goto L_08A0F7C8;
    case 144u: goto L_08A0F7D0;
    case 145u: goto L_08A0F7EC;
    case 146u: goto L_08A0F7FC;
    case 147u: goto L_08A0F810;
    case 148u: goto L_08A0F818;
    case 149u: goto L_08A0F824;
    case 150u: goto L_08A0F834;
    case 151u: goto L_08A0F848;
    case 152u: goto L_08A0F868;
    case 153u: goto L_08A0F87C;
    case 154u: goto L_08A0F888;
    case 155u: goto L_08A0F898;
    case 156u: goto L_08A0F8AC;
    case 157u: goto L_08A0F8D8;
    case 158u: goto L_08A0F8E4;
    case 159u: goto L_08A0F8EC;
    case 160u: goto L_08A0F8F0;
    case 161u: goto L_08A0F910;
    case 162u: goto L_08A0F92C;
    case 163u: goto L_08A0F94C;
    case 164u: goto L_08A0F958;
    case 165u: goto L_08A0F960;
    case 166u: goto L_08A0F974;
    case 167u: goto L_08A0F998;
    case 168u: goto L_08A0F9A0;
    case 169u: goto L_08A0F9AC;
    case 170u: goto L_08A0F9B4;
    case 171u: goto L_08A0F9BC;
    case 172u: goto L_08A0F9D8;
    case 173u: goto L_08A0F9E0;
    case 174u: goto L_08A0F9F4;
    case 175u: goto L_08A0F9FC;
    case 176u: goto L_08A0FA18;
    case 177u: goto L_08A0FA28;
    case 178u: goto L_08A0FA3C;
    case 179u: goto L_08A0FA44;
    case 180u: goto L_08A0FA50;
    case 181u: goto L_08A0FA60;
    case 182u: goto L_08A0FA74;
    case 183u: goto L_08A0FA94;
    case 184u: goto L_08A0FAA8;
    case 185u: goto L_08A0FAB4;
    case 186u: goto L_08A0FAC4;
    case 187u: goto L_08A0FAD8;
    case 188u: goto L_08A0FB04;
    case 189u: goto L_08A0FB10;
    case 190u: goto L_08A0FB18;
    case 191u: goto L_08A0FB1C;
    case 192u: goto L_08A0FB3C;
    case 193u: goto L_08A0FB58;
    case 194u: goto L_08A0FB78;
    case 195u: goto L_08A0FB84;
    case 196u: goto L_08A0FB8C;
    case 197u: goto L_08A0FBA0;
    case 198u: goto L_08A0FBC4;
    case 199u: goto L_08A0FBCC;
    case 200u: goto L_08A0FBD8;
    case 201u: goto L_08A0FBE0;
    case 202u: goto L_08A0FBE8;
    case 203u: goto L_08A0FC04;
    case 204u: goto L_08A0FC0C;
    case 205u: goto L_08A0FC20;
    case 206u: goto L_08A0FC28;
    case 207u: goto L_08A0FC44;
    case 208u: goto L_08A0FC54;
    case 209u: goto L_08A0FC68;
    case 210u: goto L_08A0FC70;
    case 211u: goto L_08A0FC7C;
    case 212u: goto L_08A0FC8C;
    case 213u: goto L_08A0FCA0;
    case 214u: goto L_08A0FCC0;
    case 215u: goto L_08A0FCD4;
    case 216u: goto L_08A0FCE0;
    case 217u: goto L_08A0FCF0;
    case 218u: goto L_08A0FD04;
    case 219u: goto L_08A0FD30;
    case 220u: goto L_08A0FD3C;
    case 221u: goto L_08A0FD44;
    case 222u: goto L_08A0FD48;
    case 223u: goto L_08A0FD68;
    case 224u: goto L_08A0FD84;
    case 225u: goto L_08A0FDA4;
    case 226u: goto L_08A0FDB0;
    case 227u: goto L_08A0FDB8;
    case 228u: goto L_08A0FDCC;
    case 229u: goto L_08A0FDF0;
    case 230u: goto L_08A0FDF8;
    case 231u: goto L_08A0FE04;
    case 232u: goto L_08A0FE0C;
    case 233u: goto L_08A0FE14;
    case 234u: goto L_08A0FE30;
    case 235u: goto L_08A0FE38;
    case 236u: goto L_08A0FE4C;
    case 237u: goto L_08A0FE54;
    case 238u: goto L_08A0FE70;
    case 239u: goto L_08A0FE80;
    case 240u: goto L_08A0FE94;
    case 241u: goto L_08A0FE9C;
    case 242u: goto L_08A0FEA8;
    case 243u: goto L_08A0FEB8;
    case 244u: goto L_08A0FECC;
    case 245u: goto L_08A0FEEC;
    case 246u: goto L_08A0FF00;
    case 247u: goto L_08A0FF0C;
    case 248u: goto L_08A0FF1C;
    case 249u: goto L_08A0FF30;
    case 250u: goto L_08A0FF5C;
    case 251u: goto L_08A0FF68;
    case 252u: goto L_08A0FF70;
    case 253u: goto L_08A0FF74;
    case 254u: goto L_08A0FF94;
    case 255u: goto L_08A0FF9C;
    case 256u: goto L_08A0FFB8;
    case 257u: goto L_08A0FFD8;
    case 258u: goto L_08A0FFE4;
    case 259u: goto L_08A0FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0F000:
    aot_gpr[31] = (0x08A0F008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 177u, 0x08A17C90u>(ctx, &aot_mem) && ctx.pc == 0x08A0F008u) goto L_08A0F008;
    return;
L_08A0F008:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F030;
      }
      goto L_08A0F014;
    }
L_08A0F014:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F030u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F030u) goto L_08A0F030;
    return;
L_08A0F030:
    aot_gpr[31] = (0x08A0F038u);
    // nop
    goto L_08A0F974;
L_08A0F038:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F044u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F044u) goto L_08A0F044;
    return;
L_08A0F044:
    aot_gpr[31] = (0x08A0F04Cu);
    // nop
    goto L_08A0F974;
L_08A0F04C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F074;
      }
      goto L_08A0F058;
    }
L_08A0F058:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F074u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F074u) goto L_08A0F074;
    return;
L_08A0F074:
    aot_gpr[31] = (0x08A0F07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 95u, 0x08A12684u>(ctx, &aot_mem) && ctx.pc == 0x08A0F07Cu) goto L_08A0F07C;
    return;
L_08A0F07C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F088u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F088u) goto L_08A0F088;
    return;
L_08A0F088:
    aot_gpr[31] = (0x08A0F090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 95u, 0x08A12684u>(ctx, &aot_mem) && ctx.pc == 0x08A0F090u) goto L_08A0F090;
    return;
L_08A0F090:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F0B8;
      }
      goto L_08A0F09C;
    }
L_08A0F09C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F0B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F0B8u) goto L_08A0F0B8;
    return;
L_08A0F0B8:
    aot_gpr[31] = (0x08A0F0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 132u, 0x08A12914u>(ctx, &aot_mem) && ctx.pc == 0x08A0F0C0u) goto L_08A0F0C0;
    return;
L_08A0F0C0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F0CCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F0CCu) goto L_08A0F0CC;
    return;
L_08A0F0CC:
    aot_gpr[31] = (0x08A0F0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 132u, 0x08A12914u>(ctx, &aot_mem) && ctx.pc == 0x08A0F0D4u) goto L_08A0F0D4;
    return;
L_08A0F0D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F0FC;
      }
      goto L_08A0F0E0;
    }
L_08A0F0E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F0FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F0FCu) goto L_08A0F0FC;
    return;
L_08A0F0FC:
    aot_gpr[31] = (0x08A0F104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 70u, 0x08A174D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F104u) goto L_08A0F104;
    return;
L_08A0F104:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F110u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F110u) goto L_08A0F110;
    return;
L_08A0F110:
    aot_gpr[31] = (0x08A0F118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 70u, 0x08A174D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F118u) goto L_08A0F118;
    return;
L_08A0F118:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F140;
      }
      goto L_08A0F124;
    }
L_08A0F124:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F140u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F140u) goto L_08A0F140;
    return;
L_08A0F140:
    aot_gpr[31] = (0x08A0F148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 76u, 0x08A16648u>(ctx, &aot_mem) && ctx.pc == 0x08A0F148u) goto L_08A0F148;
    return;
L_08A0F148:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F154u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F154u) goto L_08A0F154;
    return;
L_08A0F154:
    aot_gpr[31] = (0x08A0F15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 76u, 0x08A16648u>(ctx, &aot_mem) && ctx.pc == 0x08A0F15Cu) goto L_08A0F15C;
    return;
L_08A0F15C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F184;
      }
      goto L_08A0F168;
    }
L_08A0F168:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F184u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F184u) goto L_08A0F184;
    return;
L_08A0F184:
    aot_gpr[31] = (0x08A0F18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 138u, 0x08A16AA0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F18Cu) goto L_08A0F18C;
    return;
L_08A0F18C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F198u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F198u) goto L_08A0F198;
    return;
L_08A0F198:
    aot_gpr[31] = (0x08A0F1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 138u, 0x08A16AA0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F1A0u) goto L_08A0F1A0;
    return;
L_08A0F1A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F1C8;
      }
      goto L_08A0F1AC;
    }
L_08A0F1AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F1C8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F1C8u) goto L_08A0F1C8;
    return;
L_08A0F1C8:
    aot_gpr[31] = (0x08A0F1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 114u, 0x08A1083Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F1D0u) goto L_08A0F1D0;
    return;
L_08A0F1D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F1DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F1DCu) goto L_08A0F1DC;
    return;
L_08A0F1DC:
    aot_gpr[31] = (0x08A0F1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 114u, 0x08A1083Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F1E4u) goto L_08A0F1E4;
    return;
L_08A0F1E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F20C;
      }
      goto L_08A0F1F0;
    }
L_08A0F1F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F20Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F20Cu) goto L_08A0F20C;
    return;
L_08A0F20C:
    aot_gpr[31] = (0x08A0F214u);
    // nop
    goto L_08A0FBA0;
L_08A0F214:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F220u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F220u) goto L_08A0F220;
    return;
L_08A0F220:
    aot_gpr[31] = (0x08A0F228u);
    // nop
    goto L_08A0FBA0;
L_08A0F228:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F250;
      }
      goto L_08A0F234;
    }
L_08A0F234:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F250u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F250u) goto L_08A0F250;
    return;
L_08A0F250:
    aot_gpr[31] = (0x08A0F258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 206u, 0x08A16F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F258u) goto L_08A0F258;
    return;
L_08A0F258:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F264u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F264u) goto L_08A0F264;
    return;
L_08A0F264:
    aot_gpr[31] = (0x08A0F26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 206u, 0x08A16F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F26Cu) goto L_08A0F26C;
    return;
L_08A0F26C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F294;
      }
      goto L_08A0F278;
    }
L_08A0F278:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F294u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F294u) goto L_08A0F294;
    return;
L_08A0F294:
    aot_gpr[31] = (0x08A0F29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 224u, 0x08A12F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F29Cu) goto L_08A0F29C;
    return;
L_08A0F29C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F2A8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F2A8u) goto L_08A0F2A8;
    return;
L_08A0F2A8:
    aot_gpr[31] = (0x08A0F2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 224u, 0x08A12F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F2B0u) goto L_08A0F2B0;
    return;
L_08A0F2B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F2D8;
      }
      goto L_08A0F2BC;
    }
L_08A0F2BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F2D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F2D8u) goto L_08A0F2D8;
    return;
L_08A0F2D8:
    aot_gpr[31] = (0x08A0F2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 22u, 0x08A17188u>(ctx, &aot_mem) && ctx.pc == 0x08A0F2E0u) goto L_08A0F2E0;
    return;
L_08A0F2E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F2ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F2ECu) goto L_08A0F2EC;
    return;
L_08A0F2EC:
    aot_gpr[31] = (0x08A0F2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 22u, 0x08A17188u>(ctx, &aot_mem) && ctx.pc == 0x08A0F2F4u) goto L_08A0F2F4;
    return;
L_08A0F2F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F31C;
      }
      goto L_08A0F300;
    }
L_08A0F300:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F31Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F31Cu) goto L_08A0F31C;
    return;
L_08A0F31C:
    aot_gpr[31] = (0x08A0F324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 21u, 0x08A12164u>(ctx, &aot_mem) && ctx.pc == 0x08A0F324u) goto L_08A0F324;
    return;
L_08A0F324:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F330u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F330u) goto L_08A0F330;
    return;
L_08A0F330:
    aot_gpr[31] = (0x08A0F338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 21u, 0x08A12164u>(ctx, &aot_mem) && ctx.pc == 0x08A0F338u) goto L_08A0F338;
    return;
L_08A0F338:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F360;
      }
      goto L_08A0F344;
    }
L_08A0F344:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F360u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F360u) goto L_08A0F360;
    return;
L_08A0F360:
    aot_gpr[31] = (0x08A0F368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 107u, 0x08A16874u>(ctx, &aot_mem) && ctx.pc == 0x08A0F368u) goto L_08A0F368;
    return;
L_08A0F368:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F374u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F374u) goto L_08A0F374;
    return;
L_08A0F374:
    aot_gpr[31] = (0x08A0F37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 107u, 0x08A16874u>(ctx, &aot_mem) && ctx.pc == 0x08A0F37Cu) goto L_08A0F37C;
    return;
L_08A0F37C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F3A4;
      }
      goto L_08A0F388;
    }
L_08A0F388:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F3A4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F3A4u) goto L_08A0F3A4;
    return;
L_08A0F3A4:
    aot_gpr[31] = (0x08A0F3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 47u, 0x08A103ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0F3ACu) goto L_08A0F3AC;
    return;
L_08A0F3AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F3B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3B8u) goto L_08A0F3B8;
    return;
L_08A0F3B8:
    aot_gpr[31] = (0x08A0F3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 47u, 0x08A103ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0F3C0u) goto L_08A0F3C0;
    return;
L_08A0F3C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F3E8;
      }
      goto L_08A0F3CC;
    }
L_08A0F3CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F3E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F3E8u) goto L_08A0F3E8;
    return;
L_08A0F3E8:
    aot_gpr[31] = (0x08A0F3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 58u, 0x08A123F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3F0u) goto L_08A0F3F0;
    return;
L_08A0F3F0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F3FCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3FCu) goto L_08A0F3FC;
    return;
L_08A0F3FC:
    aot_gpr[31] = (0x08A0F404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 58u, 0x08A123F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0F404u) goto L_08A0F404;
    return;
L_08A0F404:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F42C;
      }
      goto L_08A0F410;
    }
L_08A0F410:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F42Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F42Cu) goto L_08A0F42C;
    return;
L_08A0F42C:
    aot_gpr[31] = (0x08A0F434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 1u, 0x08A10000u>(ctx, &aot_mem) && ctx.pc == 0x08A0F434u) goto L_08A0F434;
    return;
L_08A0F434:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F440u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F440u) goto L_08A0F440;
    return;
L_08A0F440:
    aot_gpr[31] = (0x08A0F448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 1u, 0x08A10000u>(ctx, &aot_mem) && ctx.pc == 0x08A0F448u) goto L_08A0F448;
    return;
L_08A0F448:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F470;
      }
      goto L_08A0F454;
    }
L_08A0F454:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F470u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F470u) goto L_08A0F470;
    return;
L_08A0F470:
    aot_gpr[31] = (0x08A0F478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 175u, 0x08A16D30u>(ctx, &aot_mem) && ctx.pc == 0x08A0F478u) goto L_08A0F478;
    return;
L_08A0F478:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F484u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F484u) goto L_08A0F484;
    return;
L_08A0F484:
    aot_gpr[31] = (0x08A0F48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 175u, 0x08A16D30u>(ctx, &aot_mem) && ctx.pc == 0x08A0F48Cu) goto L_08A0F48C;
    return;
L_08A0F48C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F4B4;
      }
      goto L_08A0F498;
    }
L_08A0F498:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F4B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F4B4u) goto L_08A0F4B4;
    return;
L_08A0F4B4:
    aot_gpr[31] = (0x08A0F4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 78u, 0x08A105D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4BCu) goto L_08A0F4BC;
    return;
L_08A0F4BC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F4C8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4C8u) goto L_08A0F4C8;
    return;
L_08A0F4C8:
    aot_gpr[31] = (0x08A0F4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 78u, 0x08A105D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4D0u) goto L_08A0F4D0;
    return;
L_08A0F4D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F4F8;
      }
      goto L_08A0F4DC;
    }
L_08A0F4DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F4F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F4F8u) goto L_08A0F4F8;
    return;
L_08A0F4F8:
    aot_gpr[31] = (0x08A0F500u);
    // nop
    goto L_08A0FDCC;
L_08A0F500:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F50Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F50Cu) goto L_08A0F50C;
    return;
L_08A0F50C:
    aot_gpr[31] = (0x08A0F514u);
    // nop
    goto L_08A0FDCC;
L_08A0F514:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F53C;
      }
      goto L_08A0F520;
    }
L_08A0F520:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F53Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F53Cu) goto L_08A0F53C;
    return;
L_08A0F53C:
    aot_gpr[31] = (0x08A0F544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 66u, 0x08A11580u>(ctx, &aot_mem) && ctx.pc == 0x08A0F544u) goto L_08A0F544;
    return;
L_08A0F544:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F550u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F550u) goto L_08A0F550;
    return;
L_08A0F550:
    aot_gpr[31] = (0x08A0F558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 66u, 0x08A11580u>(ctx, &aot_mem) && ctx.pc == 0x08A0F558u) goto L_08A0F558;
    return;
L_08A0F558:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F580;
      }
      goto L_08A0F564;
    }
L_08A0F564:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F580u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F580u) goto L_08A0F580;
    return;
L_08A0F580:
    aot_gpr[31] = (0x08A0F588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 187u, 0x08A12C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F588u) goto L_08A0F588;
    return;
L_08A0F588:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F594u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F594u) goto L_08A0F594;
    return;
L_08A0F594:
    aot_gpr[31] = (0x08A0F59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 187u, 0x08A12C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F59Cu) goto L_08A0F59C;
    return;
L_08A0F59C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F5C4;
      }
      goto L_08A0F5A8;
    }
L_08A0F5A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F5C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F5C4u) goto L_08A0F5C4;
    return;
L_08A0F5C4:
    aot_gpr[31] = (0x08A0F5CCu);
    // nop
    goto L_08A0F748;
L_08A0F5CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F5D8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F5D8u) goto L_08A0F5D8;
    return;
L_08A0F5D8:
    aot_gpr[31] = (0x08A0F5E0u);
    // nop
    goto L_08A0F748;
L_08A0F5E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F608;
      }
      goto L_08A0F5EC;
    }
L_08A0F5EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F608u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F608u) goto L_08A0F608;
    return;
L_08A0F608:
    aot_gpr[31] = (0x08A0F610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 162u, 0x08A11C94u>(ctx, &aot_mem) && ctx.pc == 0x08A0F610u) goto L_08A0F610;
    return;
L_08A0F610:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F61Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F61Cu) goto L_08A0F61C;
    return;
L_08A0F61C:
    aot_gpr[31] = (0x08A0F624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 162u, 0x08A11C94u>(ctx, &aot_mem) && ctx.pc == 0x08A0F624u) goto L_08A0F624;
    return;
L_08A0F624:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F64C;
      }
      goto L_08A0F630;
    }
L_08A0F630:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F64Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F64Cu) goto L_08A0F64C;
    return;
L_08A0F64C:
    aot_gpr[31] = (0x08A0F654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 193u, 0x08A11ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F654u) goto L_08A0F654;
    return;
L_08A0F654:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F660u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F660u) goto L_08A0F660;
    return;
L_08A0F660:
    aot_gpr[31] = (0x08A0F668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0525_entry, 525u, 193u, 0x08A11ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F668u) goto L_08A0F668;
    return;
L_08A0F668:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F690;
      }
      goto L_08A0F674;
    }
L_08A0F674:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0F690u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F690u) goto L_08A0F690;
    return;
L_08A0F690:
    aot_gpr[31] = (0x08A0F698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 101u, 0x08A17704u>(ctx, &aot_mem) && ctx.pc == 0x08A0F698u) goto L_08A0F698;
    return;
L_08A0F698:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0F6A4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x08A0F6A4u) goto L_08A0F6A4;
    return;
L_08A0F6A4:
    aot_gpr[31] = (0x08A0F6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 101u, 0x08A17704u>(ctx, &aot_mem) && ctx.pc == 0x08A0F6ACu) goto L_08A0F6AC;
    return;
L_08A0F6AC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F6D4;
      }
      goto L_08A0F6B8;
    }
L_08A0F6B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0F6D4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F6D4u) goto L_08A0F6D4;
    return;
L_08A0F6D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F6E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0F734;
      }
      goto L_08A0F700;
    }
L_08A0F700:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13200));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18216), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0F720u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F720u) goto L_08A0F720;
    return;
L_08A0F720:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F734;
      }
      goto L_08A0F72C;
    }
L_08A0F72C:
    aot_gpr[31] = (0x08A0F734u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0F7FC;
L_08A0F734:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18216)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0F790;
      }
      goto L_08A0F76C;
    }
L_08A0F76C:
    aot_gpr[31] = (0x08A0F774u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A0F7B4;
L_08A0F774:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18216), aot_gpr[17]);
        goto L_08A0F790;
    }
    goto L_08A0F780;
L_08A0F780:
    aot_gpr[31] = (0x08A0F788u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0F834;
L_08A0F788:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18216), aot_gpr[17]);
    goto L_08A0F790;
L_08A0F790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18216)));
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
L_08A0F7AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F7B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0F7C8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F7C8u) goto L_08A0F7C8;
    return;
L_08A0F7C8:
    aot_gpr[31] = (0x08A0F7D0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F7D0u) goto L_08A0F7D0;
    return;
L_08A0F7D0:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A0F7ECu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3816));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F7ECu) goto L_08A0F7EC;
    return;
L_08A0F7EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F7FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0F810u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F810u) goto L_08A0F810;
    return;
L_08A0F810:
    aot_gpr[31] = (0x08A0F818u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F818u) goto L_08A0F818;
    return;
L_08A0F818:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0F824u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0F824u) goto L_08A0F824;
    return;
L_08A0F824:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F834:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0F848u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A0F848u) goto L_08A0F848;
    return;
L_08A0F848:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13200));
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
L_08A0F868:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0F87Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F87Cu) goto L_08A0F87C;
    return;
L_08A0F87C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0F888u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0F888u) goto L_08A0F888;
    return;
L_08A0F888:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0F898u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3784));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F898u) goto L_08A0F898;
    return;
L_08A0F898:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F8AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0F8D8u);
    aot_gpr[4] = (0u | 472u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F8D8u) goto L_08A0F8D8;
    return;
L_08A0F8D8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0F8F0;
      }
      goto L_08A0F8E4;
    }
L_08A0F8E4:
    aot_gpr[31] = (0x08A0F8ECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0535_entry, 535u, 191u, 0x08A1BBF4u>(ctx, &aot_mem) && ctx.pc == 0x08A0F8ECu) goto L_08A0F8EC;
    return;
L_08A0F8EC:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A0F8F0;
L_08A0F8F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A0F910:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0F960;
      }
      goto L_08A0F92C;
    }
L_08A0F92C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13264));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18208), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0F94Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F94Cu) goto L_08A0F94C;
    return;
L_08A0F94C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F960;
      }
      goto L_08A0F958;
    }
L_08A0F958:
    aot_gpr[31] = (0x08A0F960u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0FA28;
L_08A0F960:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0F9BC;
      }
      goto L_08A0F998;
    }
L_08A0F998:
    aot_gpr[31] = (0x08A0F9A0u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A0F9E0;
L_08A0F9A0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18208), aot_gpr[17]);
        goto L_08A0F9BC;
    }
    goto L_08A0F9AC;
L_08A0F9AC:
    aot_gpr[31] = (0x08A0F9B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0FA60;
L_08A0F9B4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18208), aot_gpr[17]);
    goto L_08A0F9BC;
L_08A0F9BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18208)));
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
L_08A0F9D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F9E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0F9F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F9F4u) goto L_08A0F9F4;
    return;
L_08A0F9F4:
    aot_gpr[31] = (0x08A0F9FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F9FCu) goto L_08A0F9FC;
    return;
L_08A0F9FC:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 18u);
    aot_gpr[31] = (0x08A0FA18u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3776));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0FA18u) goto L_08A0FA18;
    return;
L_08A0FA18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FA28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FA3Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA3Cu) goto L_08A0FA3C;
    return;
L_08A0FA3C:
    aot_gpr[31] = (0x08A0FA44u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA44u) goto L_08A0FA44;
    return;
L_08A0FA44:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0FA50u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0FA50u) goto L_08A0FA50;
    return;
L_08A0FA50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FA60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FA74u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A0FA74u) goto L_08A0FA74;
    return;
L_08A0FA74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13264));
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
L_08A0FA94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FAA8u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FAA8u) goto L_08A0FAA8;
    return;
L_08A0FAA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0FAB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0FAB4u) goto L_08A0FAB4;
    return;
L_08A0FAB4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0FAC4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3740));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FAC4u) goto L_08A0FAC4;
    return;
L_08A0FAC4:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FAD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FB04u);
    aot_gpr[4] = (0u | 480u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB04u) goto L_08A0FB04;
    return;
L_08A0FB04:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0FB1C;
      }
      goto L_08A0FB10;
    }
L_08A0FB10:
    aot_gpr[31] = (0x08A0FB18u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 18u, 0x08A1C14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB18u) goto L_08A0FB18;
    return;
L_08A0FB18:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A0FB1C;
L_08A0FB1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A0FB3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0FB8C;
      }
      goto L_08A0FB58;
    }
L_08A0FB58:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13336));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18200), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0FB78u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB78u) goto L_08A0FB78;
    return;
L_08A0FB78:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FB8C;
      }
      goto L_08A0FB84;
    }
L_08A0FB84:
    aot_gpr[31] = (0x08A0FB8Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0FC54;
L_08A0FB8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FBA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0FBE8;
      }
      goto L_08A0FBC4;
    }
L_08A0FBC4:
    aot_gpr[31] = (0x08A0FBCCu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A0FC0C;
L_08A0FBCC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18200), aot_gpr[17]);
        goto L_08A0FBE8;
    }
    goto L_08A0FBD8;
L_08A0FBD8:
    aot_gpr[31] = (0x08A0FBE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0FC8C;
L_08A0FBE0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18200), aot_gpr[17]);
    goto L_08A0FBE8;
L_08A0FBE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18200)));
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
L_08A0FC04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FC0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FC20u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC20u) goto L_08A0FC20;
    return;
L_08A0FC20:
    aot_gpr[31] = (0x08A0FC28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC28u) goto L_08A0FC28;
    return;
L_08A0FC28:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A0FC44u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3728));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0FC44u) goto L_08A0FC44;
    return;
L_08A0FC44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FC54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FC68u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC68u) goto L_08A0FC68;
    return;
L_08A0FC68:
    aot_gpr[31] = (0x08A0FC70u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC70u) goto L_08A0FC70;
    return;
L_08A0FC70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0FC7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0FC7Cu) goto L_08A0FC7C;
    return;
L_08A0FC7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FC8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FCA0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A0FCA0u) goto L_08A0FCA0;
    return;
L_08A0FCA0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13336));
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
L_08A0FCC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FCD4u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FCD4u) goto L_08A0FCD4;
    return;
L_08A0FCD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0FCE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0FCE0u) goto L_08A0FCE0;
    return;
L_08A0FCE0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0FCF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3696));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FCF0u) goto L_08A0FCF0;
    return;
L_08A0FCF0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FD04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FD30u);
    aot_gpr[4] = (0u | 332u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FD30u) goto L_08A0FD30;
    return;
L_08A0FD30:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0FD48;
      }
      goto L_08A0FD3C;
    }
L_08A0FD3C:
    aot_gpr[31] = (0x08A0FD44u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 27u, 0x08A101C8u>(ctx, &aot_mem) && ctx.pc == 0x08A0FD44u) goto L_08A0FD44;
    return;
L_08A0FD44:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A0FD48;
L_08A0FD48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A0FD68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0FDB8;
      }
      goto L_08A0FD84;
    }
L_08A0FD84:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13400));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18192), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0FDA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FDA4u) goto L_08A0FDA4;
    return;
L_08A0FDA4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FDB8;
      }
      goto L_08A0FDB0;
    }
L_08A0FDB0:
    aot_gpr[31] = (0x08A0FDB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0FE80;
L_08A0FDB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FDCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0FE14;
      }
      goto L_08A0FDF0;
    }
L_08A0FDF0:
    aot_gpr[31] = (0x08A0FDF8u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A0FE38;
L_08A0FDF8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18192), aot_gpr[17]);
        goto L_08A0FE14;
    }
    goto L_08A0FE04;
L_08A0FE04:
    aot_gpr[31] = (0x08A0FE0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0FEB8;
L_08A0FE0C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18192), aot_gpr[17]);
    goto L_08A0FE14;
L_08A0FE14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18192)));
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
L_08A0FE30:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FE38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FE4Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FE4Cu) goto L_08A0FE4C;
    return;
L_08A0FE4C:
    aot_gpr[31] = (0x08A0FE54u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FE54u) goto L_08A0FE54;
    return;
L_08A0FE54:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 18u);
    aot_gpr[31] = (0x08A0FE70u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3688));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0FE70u) goto L_08A0FE70;
    return;
L_08A0FE70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FE80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FE94u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FE94u) goto L_08A0FE94;
    return;
L_08A0FE94:
    aot_gpr[31] = (0x08A0FE9Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FE9Cu) goto L_08A0FE9C;
    return;
L_08A0FE9C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0FEA8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0FEA8u) goto L_08A0FEA8;
    return;
L_08A0FEA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FEB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FECCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A0FECCu) goto L_08A0FECC;
    return;
L_08A0FECC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13400));
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
L_08A0FEEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FF00u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF00u) goto L_08A0FF00;
    return;
L_08A0FF00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0FF0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0FF0Cu) goto L_08A0FF0C;
    return;
L_08A0FF0C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0FF1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3648));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FF1Cu) goto L_08A0FF1C;
    return;
L_08A0FF1C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FF30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A0FF5Cu);
    aot_gpr[4] = (0u | 312u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FF5Cu) goto L_08A0FF5C;
    return;
L_08A0FF5C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0FF74;
      }
      goto L_08A0FF68;
    }
L_08A0FF68:
    aot_gpr[31] = (0x08A0FF70u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 128u, 0x08A1C960u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF70u) goto L_08A0FF70;
    return;
L_08A0FF70:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A0FF74;
L_08A0FF74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A0FF94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FF9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0FFEC;
      }
      goto L_08A0FFB8;
    }
L_08A0FFB8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13464));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18184), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0FFD8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FFD8u) goto L_08A0FFD8;
    return;
L_08A0FFD8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FFEC;
      }
      goto L_08A0FFE4;
    }
L_08A0FFE4:
    aot_gpr[31] = (0x08A0FFECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 12u, 0x08A100B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0FFECu) goto L_08A0FFEC;
    return;
L_08A0FFEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0523(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0523_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_523(Runtime &runtime) {
    runtime.register_generated_unit(523u, 0x08A0F000u, 4096u, &recomp_unit_0523, &recomp_unit_0523_entry);
    runtime.register_function(0x08A0F000u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F008u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F014u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F030u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F038u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F044u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F04Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F058u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F074u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F07Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F088u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F090u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F09Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F0B8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F0C0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F0CCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F0D4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F0E0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F0FCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F104u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F110u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F118u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F124u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F140u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F148u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F154u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F15Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F168u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F184u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F18Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F198u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1A0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1ACu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1C8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1D0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1DCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1E4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F1F0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F20Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F214u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F220u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F228u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F234u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F250u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F258u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F264u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F26Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F278u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F294u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F29Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2A8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2B0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2BCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2D8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2E0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2ECu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F2F4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F300u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F31Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F324u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F330u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F338u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F344u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F360u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F368u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F374u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F37Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F388u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3A4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3ACu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3B8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3C0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3CCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3E8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3F0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F3FCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F404u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F410u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F42Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F434u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F440u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F448u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F454u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F470u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F478u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F484u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F48Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F498u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F4B4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F4BCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F4C8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F4D0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F4DCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F4F8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F500u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F50Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F514u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F520u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F53Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F544u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F550u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F558u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F564u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F580u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F588u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F594u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F59Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F5A8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F5C4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F5CCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F5D8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F5E0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F5ECu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F608u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F610u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F61Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F624u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F630u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F64Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F654u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F660u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F668u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F674u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F690u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F698u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F6A4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F6ACu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F6B8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F6D4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F6E4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F700u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F720u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F72Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F734u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F748u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F76Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F774u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F780u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F788u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F790u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F7ACu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F7B4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F7C8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F7D0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F7ECu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F7FCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F810u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F818u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F824u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F834u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F848u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F868u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F87Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F888u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F898u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F8ACu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F8D8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F8E4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F8ECu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F8F0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F910u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F92Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F94Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F958u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F960u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F974u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F998u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9A0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9ACu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9B4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9BCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9D8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9E0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9F4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0F9FCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA18u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA28u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA3Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA44u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA50u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA60u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA74u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FA94u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FAA8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FAB4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FAC4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FAD8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB04u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB10u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB18u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB1Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB3Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB58u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB78u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB84u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FB8Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FBA0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FBC4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FBCCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FBD8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FBE0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FBE8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC04u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC0Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC20u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC28u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC44u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC54u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC68u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC70u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC7Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FC8Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FCA0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FCC0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FCD4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FCE0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FCF0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD04u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD30u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD3Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD44u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD48u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD68u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FD84u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FDA4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FDB0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FDB8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FDCCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FDF0u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FDF8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE04u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE0Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE14u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE30u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE38u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE4Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE54u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE70u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE80u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE94u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FE9Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FEA8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FEB8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FECCu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FEECu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF00u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF0Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF1Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF30u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF5Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF68u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF70u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF74u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF94u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FF9Cu, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FFB8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FFD8u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FFE4u, &recomp_unit_0523, "recomp_unit_0523");
    runtime.register_function(0x08A0FFECu, &recomp_unit_0523, "recomp_unit_0523");
}
} // namespace psprecomp
