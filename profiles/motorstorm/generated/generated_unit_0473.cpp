#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0473[1022] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17,
    0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    23, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0,
    0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0,
    44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 97, 98, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0,
    0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0,
    123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 132, 133, 134, 0, 0,
    0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0,
    178, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 193,
    0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 199, 0, 0, 200, 0, 201, 0, 0, 202, 203, 0, 0, 204, 0, 205, 206, 0, 0, 207, 0,
    208, 209, 0, 210, 0, 211, 212, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 220,
    0, 0, 221, 0, 222, 0, 0, 223, 224, 0, 0, 225, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 232,
};
void recomp_unit_0473_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089DD000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0473[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DD000;
    case 2u: goto L_089DD008;
    case 3u: goto L_089DD018;
    case 4u: goto L_089DD030;
    case 5u: goto L_089DD03C;
    case 6u: goto L_089DD048;
    case 7u: goto L_089DD054;
    case 8u: goto L_089DD05C;
    case 9u: goto L_089DD064;
    case 10u: goto L_089DD07C;
    case 11u: goto L_089DD090;
    case 12u: goto L_089DD0A0;
    case 13u: goto L_089DD0AC;
    case 14u: goto L_089DD0C8;
    case 15u: goto L_089DD0D4;
    case 16u: goto L_089DD0F4;
    case 17u: goto L_089DD0FC;
    case 18u: goto L_089DD104;
    case 19u: goto L_089DD110;
    case 20u: goto L_089DD118;
    case 21u: goto L_089DD170;
    case 22u: goto L_089DD178;
    case 23u: goto L_089DD180;
    case 24u: goto L_089DD188;
    case 25u: goto L_089DD194;
    case 26u: goto L_089DD1A4;
    case 27u: goto L_089DD1AC;
    case 28u: goto L_089DD1C8;
    case 29u: goto L_089DD1D0;
    case 30u: goto L_089DD1FC;
    case 31u: goto L_089DD220;
    case 32u: goto L_089DD22C;
    case 33u: goto L_089DD23C;
    case 34u: goto L_089DD26C;
    case 35u: goto L_089DD274;
    case 36u: goto L_089DD290;
    case 37u: goto L_089DD294;
    case 38u: goto L_089DD29C;
    case 39u: goto L_089DD2A8;
    case 40u: goto L_089DD2B4;
    case 41u: goto L_089DD2C8;
    case 42u: goto L_089DD2EC;
    case 43u: goto L_089DD2F4;
    case 44u: goto L_089DD300;
    case 45u: goto L_089DD308;
    case 46u: goto L_089DD310;
    case 47u: goto L_089DD324;
    case 48u: goto L_089DD358;
    case 49u: goto L_089DD368;
    case 50u: goto L_089DD374;
    case 51u: goto L_089DD38C;
    case 52u: goto L_089DD39C;
    case 53u: goto L_089DD3C0;
    case 54u: goto L_089DD3F0;
    case 55u: goto L_089DD3F8;
    case 56u: goto L_089DD404;
    case 57u: goto L_089DD424;
    case 58u: goto L_089DD430;
    case 59u: goto L_089DD438;
    case 60u: goto L_089DD440;
    case 61u: goto L_089DD450;
    case 62u: goto L_089DD45C;
    case 63u: goto L_089DD4A4;
    case 64u: goto L_089DD4B0;
    case 65u: goto L_089DD4B8;
    case 66u: goto L_089DD4C0;
    case 67u: goto L_089DD4C8;
    case 68u: goto L_089DD4D4;
    case 69u: goto L_089DD4E4;
    case 70u: goto L_089DD4E8;
    case 71u: goto L_089DD504;
    case 72u: goto L_089DD528;
    case 73u: goto L_089DD538;
    case 74u: goto L_089DD544;
    case 75u: goto L_089DD550;
    case 76u: goto L_089DD55C;
    case 77u: goto L_089DD568;
    case 78u: goto L_089DD594;
    case 79u: goto L_089DD5A0;
    case 80u: goto L_089DD5AC;
    case 81u: goto L_089DD5B8;
    case 82u: goto L_089DD5C8;
    case 83u: goto L_089DD5F8;
    case 84u: goto L_089DD600;
    case 85u: goto L_089DD60C;
    case 86u: goto L_089DD624;
    case 87u: goto L_089DD644;
    case 88u: goto L_089DD64C;
    case 89u: goto L_089DD654;
    case 90u: goto L_089DD65C;
    case 91u: goto L_089DD6AC;
    case 92u: goto L_089DD6B8;
    case 93u: goto L_089DD6C0;
    case 94u: goto L_089DD6C8;
    case 95u: goto L_089DD6D0;
    case 96u: goto L_089DD6DC;
    case 97u: goto L_089DD6EC;
    case 98u: goto L_089DD6F0;
    case 99u: goto L_089DD710;
    case 100u: goto L_089DD73C;
    case 101u: goto L_089DD74C;
    case 102u: goto L_089DD758;
    case 103u: goto L_089DD76C;
    case 104u: goto L_089DD778;
    case 105u: goto L_089DD784;
    case 106u: goto L_089DD79C;
    case 107u: goto L_089DD7C8;
    case 108u: goto L_089DD7D4;
    case 109u: goto L_089DD7E0;
    case 110u: goto L_089DD7EC;
    case 111u: goto L_089DD7FC;
    case 112u: goto L_089DD82C;
    case 113u: goto L_089DD834;
    case 114u: goto L_089DD840;
    case 115u: goto L_089DD858;
    case 116u: goto L_089DD87C;
    case 117u: goto L_089DD884;
    case 118u: goto L_089DD88C;
    case 119u: goto L_089DD894;
    case 120u: goto L_089DD8DC;
    case 121u: goto L_089DD8E4;
    case 122u: goto L_089DD8F0;
    case 123u: goto L_089DD900;
    case 124u: goto L_089DD908;
    case 125u: goto L_089DD914;
    case 126u: goto L_089DD920;
    case 127u: goto L_089DD92C;
    case 128u: goto L_089DD938;
    case 129u: goto L_089DD944;
    case 130u: goto L_089DD950;
    case 131u: goto L_089DD968;
    case 132u: goto L_089DD96C;
    case 133u: goto L_089DD970;
    case 134u: goto L_089DD974;
    case 135u: goto L_089DD984;
    case 136u: goto L_089DD990;
    case 137u: goto L_089DD9A0;
    case 138u: goto L_089DD9C0;
    case 139u: goto L_089DD9EC;
    case 140u: goto L_089DDA20;
    case 141u: goto L_089DDA2C;
    case 142u: goto L_089DDA34;
    case 143u: goto L_089DDA88;
    case 144u: goto L_089DDAB4;
    case 145u: goto L_089DDABC;
    case 146u: goto L_089DDACC;
    case 147u: goto L_089DDAD8;
    case 148u: goto L_089DDAF4;
    case 149u: goto L_089DDB00;
    case 150u: goto L_089DDB20;
    case 151u: goto L_089DDB28;
    case 152u: goto L_089DDB2C;
    case 153u: goto L_089DDB60;
    case 154u: goto L_089DDB64;
    case 155u: goto L_089DDB98;
    case 156u: goto L_089DDBA0;
    case 157u: goto L_089DDBA8;
    case 158u: goto L_089DDBB0;
    case 159u: goto L_089DDBC8;
    case 160u: goto L_089DDBD0;
    case 161u: goto L_089DDBE0;
    case 162u: goto L_089DDBF4;
    case 163u: goto L_089DDC00;
    case 164u: goto L_089DDC08;
    case 165u: goto L_089DDC28;
    case 166u: goto L_089DDC38;
    case 167u: goto L_089DDC40;
    case 168u: goto L_089DDC50;
    case 169u: goto L_089DDC60;
    case 170u: goto L_089DDC6C;
    case 171u: goto L_089DDC80;
    case 172u: goto L_089DDCB8;
    case 173u: goto L_089DDCC4;
    case 174u: goto L_089DDCD0;
    case 175u: goto L_089DDCE0;
    case 176u: goto L_089DDCF0;
    case 177u: goto L_089DDCF8;
    case 178u: goto L_089DDD00;
    case 179u: goto L_089DDD04;
    case 180u: goto L_089DDD14;
    case 181u: goto L_089DDD28;
    case 182u: goto L_089DDD30;
    case 183u: goto L_089DDD44;
    case 184u: goto L_089DDD6C;
    case 185u: goto L_089DDD94;
    case 186u: goto L_089DDDA0;
    case 187u: goto L_089DDDB0;
    case 188u: goto L_089DDE08;
    case 189u: goto L_089DDE34;
    case 190u: goto L_089DDE60;
    case 191u: goto L_089DDE6C;
    case 192u: goto L_089DDE74;
    case 193u: goto L_089DDE7C;
    case 194u: goto L_089DDE84;
    case 195u: goto L_089DDE8C;
    case 196u: goto L_089DDE98;
    case 197u: goto L_089DDEA0;
    case 198u: goto L_089DDEAC;
    case 199u: goto L_089DDEB0;
    case 200u: goto L_089DDEBC;
    case 201u: goto L_089DDEC4;
    case 202u: goto L_089DDED0;
    case 203u: goto L_089DDED4;
    case 204u: goto L_089DDEE0;
    case 205u: goto L_089DDEE8;
    case 206u: goto L_089DDEEC;
    case 207u: goto L_089DDEF8;
    case 208u: goto L_089DDF00;
    case 209u: goto L_089DDF04;
    case 210u: goto L_089DDF0C;
    case 211u: goto L_089DDF14;
    case 212u: goto L_089DDF18;
    case 213u: goto L_089DDF24;
    case 214u: goto L_089DDF2C;
    case 215u: goto L_089DDF3C;
    case 216u: goto L_089DDF44;
    case 217u: goto L_089DDF4C;
    case 218u: goto L_089DDF50;
    case 219u: goto L_089DDF78;
    case 220u: goto L_089DDF7C;
    case 221u: goto L_089DDF88;
    case 222u: goto L_089DDF90;
    case 223u: goto L_089DDF9C;
    case 224u: goto L_089DDFA0;
    case 225u: goto L_089DDFAC;
    case 226u: goto L_089DDFB0;
    case 227u: goto L_089DDFB8;
    case 228u: goto L_089DDFC8;
    case 229u: goto L_089DDFDC;
    case 230u: goto L_089DDFE8;
    case 231u: goto L_089DDFF0;
    case 232u: goto L_089DDFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DD000:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(88));
    goto L_089DD008;
L_089DD008:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089DD018u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DD018u) goto L_089DD018;
    return;
L_089DD018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[2] & 4096u);
    aot_gpr[2] = (aot_gpr[4] & 63488u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DD03C;
      }
      goto L_089DD030;
    }
L_089DD030:
    aot_gpr[2] = (aot_gpr[4] & 4096u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
        (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 207u, 0x089DCE38u>(ctx, &aot_mem); return;
    }
    goto L_089DD03C;
L_089DD03C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD048u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 208u, 0x089DFC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD048u) goto L_089DD048;
    return;
L_089DD048:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DD05C;
      }
      goto L_089DD054;
    }
L_089DD054:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 207u, 0x089DCE38u>(ctx, &aot_mem); return;
L_089DD05C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
        (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 207u, 0x089DCE38u>(ctx, &aot_mem); return;
    }
    goto L_089DD064;
L_089DD064:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[3] ^ aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] & 57344u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
        (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 207u, 0x089DCE38u>(ctx, &aot_mem); return;
    }
    goto L_089DD07C;
L_089DD07C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[9] + 0u);
    aot_gpr[31] = (0x089DD090u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 122u, 0x089DF6D4u>(ctx, &aot_mem) && ctx.pc == 0x089DD090u) goto L_089DD090;
    return;
L_089DD090:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 8192u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089DD110;
      }
      goto L_089DD0A0;
    }
L_089DD0A0:
    aot_gpr[2] = (aot_gpr[3] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DD110;
      }
      goto L_089DD0AC;
    }
L_089DD0AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
        (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 208u, 0x089DCE3Cu>(ctx, &aot_mem); return;
    }
    goto L_089DD0C8;
L_089DD0C8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1451) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
        (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 208u, 0x089DCE3Cu>(ctx, &aot_mem); return;
    }
    goto L_089DD0D4;
L_089DD0D4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089DD0F4u);
    aot_gpr[10] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 200u, 0x089DBB24u>(ctx, &aot_mem) && ctx.pc == 0x089DD0F4u) goto L_089DD0F4;
    return;
L_089DD0F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 219u, 0x089DCF28u>(ctx, &aot_mem); return;
      }
      goto L_089DD0FC;
    }
L_089DD0FC:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[2] = (aot_gpr[22] & 4096u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 216u, 0x089DCF0Cu>(ctx, &aot_mem); return;
      }
      goto L_089DD104;
    }
L_089DD104:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 215u, 0x089DCF08u>(ctx, &aot_mem); return;
L_089DD110:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
    goto L_089DD0AC;
L_089DD118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (0u | 54002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[11]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[8]);
      if (branch_taken) {
          goto L_089DD324;
      }
      goto L_089DD170;
    }
L_089DD170:
    if (aot_gpr[5] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_089DD324;
    }
    goto L_089DD178;
L_089DD178:
    if (aot_gpr[6] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_089DD324;
    }
    goto L_089DD180;
L_089DD180:
    if (aot_gpr[10] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_089DD324;
    }
    goto L_089DD188;
L_089DD188:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_089DD324;
    }
    goto L_089DD194;
L_089DD194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
        goto L_089DD324;
    }
    goto L_089DD1A4;
L_089DD1A4:
    if (aot_gpr[11] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), 0u);
        goto L_089DD1AC;
    }
    goto L_089DD1AC;
L_089DD1AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] & 32767u);
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    if (aot_gpr[2] != 0u) aot_gpr[21] = (aot_gpr[4]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[21]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[6] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089DD358;
      }
      goto L_089DD1C8;
    }
L_089DD1C8:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    goto L_089DD1D0;
L_089DD1D0:
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
          goto L_089DD1D0;
      }
      goto L_089DD1FC;
    }
L_089DD1FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[21] & 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DD3F0;
      }
      goto L_089DD220;
    }
L_089DD220:
    aot_gpr[2] = (aot_gpr[21] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DD3F0;
      }
      goto L_089DD22C;
    }
L_089DD22C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089DD26C;
      }
      goto L_089DD23C;
    }
L_089DD23C:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    goto L_089DD26C;
L_089DD26C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) <= 0;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089DD324;
      }
      goto L_089DD274;
    }
L_089DD274:
    aot_gpr[16] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[21] & 16384u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(27));
    aot_gpr[30] = (aot_gpr[21] & 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    goto L_089DD29C;
L_089DD290:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089DD294;
L_089DD294:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[23];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DD324;
      }
      goto L_089DD29C;
    }
L_089DD29C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089DD294;
    }
    goto L_089DD2A8;
L_089DD2A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[20]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089DD294;
    }
    goto L_089DD2B4;
L_089DD2B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DD2C8u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089DD2C8u) goto L_089DD2C8;
    return;
L_089DD2C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089DD2ECu);
    aot_gpr[7] = (0u | 32768u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089DD2ECu) goto L_089DD2EC;
    return;
L_089DD2EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DD3F8;
      }
      goto L_089DD2F4;
    }
L_089DD2F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD308;
      }
      goto L_089DD300;
    }
L_089DD300:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DD308;
L_089DD308:
    if (aot_gpr[30] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089DD294;
    }
    goto L_089DD310;
L_089DD310:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    goto L_089DD290;
L_089DD324:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
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
L_089DD358:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089DD39C;
      }
      goto L_089DD368;
    }
L_089DD368:
    aot_gpr[16] = (aot_gpr[22] + aot_gpr[2]);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[17] = (0u + 0u);
    goto L_089DD374;
L_089DD374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x089DD38Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089DD38Cu) goto L_089DD38C;
    return;
L_089DD38C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[17];
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089DD374;
      }
      goto L_089DD39C;
    }
L_089DD39C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(140)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DD3C0u);
    aot_gpr[5] = (0u | 65534u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD3C0u) goto L_089DD3C0;
    return;
L_089DD3C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[21] & 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DD220;
      }
      goto L_089DD3F0;
    }
L_089DD3F0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    goto L_089DD22C;
L_089DD3F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089DD294;
    }
    goto L_089DD404;
L_089DD404:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(118)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(118)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089DD290;
      }
      goto L_089DD424;
    }
L_089DD424:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089DD290;
L_089DD430:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DD450;
      }
      goto L_089DD438;
    }
L_089DD438:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DD450;
      }
      goto L_089DD440;
    }
L_089DD440:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD450:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD45C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u | 54002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089DD4E4;
      }
      goto L_089DD4A4;
    }
L_089DD4A4:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089DD4B0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089DD4B0u) goto L_089DD4B0;
    return;
L_089DD4B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DD4E4;
      }
      goto L_089DD4B8;
    }
L_089DD4B8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD4E4;
      }
      goto L_089DD4C0;
    }
L_089DD4C0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_089DD4E8;
      }
      goto L_089DD4C8;
    }
L_089DD4C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD4E8;
      }
      goto L_089DD4D4;
    }
L_089DD4D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DD504;
      }
      goto L_089DD4E4;
    }
L_089DD4E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_089DD4E8;
L_089DD4E8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD504:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (0x089DD528u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089DD528u) goto L_089DD528;
    return;
L_089DD528:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(451));
    aot_gpr[31] = (0x089DD538u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 119u, 0x089DF684u>(ctx, &aot_mem) && ctx.pc == 0x089DD538u) goto L_089DD538;
    return;
L_089DD538:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089DD544u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 141u, 0x089DF860u>(ctx, &aot_mem) && ctx.pc == 0x089DD544u) goto L_089DD544;
    return;
L_089DD544:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x089DD550u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 144u, 0x089DF8B4u>(ctx, &aot_mem) && ctx.pc == 0x089DD550u) goto L_089DD550;
    return;
L_089DD550:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD55Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DD55Cu) goto L_089DD55C;
    return;
L_089DD55C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD568u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 147u, 0x089DF908u>(ctx, &aot_mem) && ctx.pc == 0x089DD568u) goto L_089DD568;
    return;
L_089DD568:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DD600;
      }
      goto L_089DD594;
    }
L_089DD594:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[8] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    goto L_089DD5A0;
L_089DD5A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DD5F8;
      }
      goto L_089DD5AC;
    }
L_089DD5AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089DD5F8;
      }
      goto L_089DD5B8;
    }
L_089DD5B8:
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
      if (branch_taken) {
          goto L_089DD5F8;
      }
      goto L_089DD5C8;
    }
L_089DD5C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089DD5F8;
L_089DD5F8:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_089DD5A0;
      }
      goto L_089DD600;
    }
L_089DD600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_089DD644;
    }
    goto L_089DD60C;
L_089DD60C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089DD624u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 132u, 0x0898E970u>(ctx, &aot_mem) && ctx.pc == 0x089DD624u) goto L_089DD624;
    return;
L_089DD624:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD644:
    aot_gpr[31] = (0x089DD64Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    goto L_089DD430;
L_089DD64C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_089DD4E8;
      }
      goto L_089DD654;
    }
L_089DD654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_089DD60C;
L_089DD65C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u | 54002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089DD6EC;
      }
      goto L_089DD6AC;
    }
L_089DD6AC:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089DD6B8u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089DD6B8u) goto L_089DD6B8;
    return;
L_089DD6B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DD6EC;
      }
      goto L_089DD6C0;
    }
L_089DD6C0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD6EC;
      }
      goto L_089DD6C8;
    }
L_089DD6C8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_089DD6F0;
      }
      goto L_089DD6D0;
    }
L_089DD6D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD6F0;
      }
      goto L_089DD6DC;
    }
L_089DD6DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DD710;
      }
      goto L_089DD6EC;
    }
L_089DD6EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_089DD6F0;
L_089DD6F0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD710:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (0x089DD73Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 138u, 0x089DF810u>(ctx, &aot_mem) && ctx.pc == 0x089DD73Cu) goto L_089DD73C;
    return;
L_089DD73C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x089DD74Cu);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 119u, 0x089DF684u>(ctx, &aot_mem) && ctx.pc == 0x089DD74Cu) goto L_089DD74C;
    return;
L_089DD74C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD758u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 141u, 0x089DF860u>(ctx, &aot_mem) && ctx.pc == 0x089DD758u) goto L_089DD758;
    return;
L_089DD758:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089DD76Cu);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 144u, 0x089DF8B4u>(ctx, &aot_mem) && ctx.pc == 0x089DD76Cu) goto L_089DD76C;
    return;
L_089DD76C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD778u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DD778u) goto L_089DD778;
    return;
L_089DD778:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD784u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 147u, 0x089DF908u>(ctx, &aot_mem) && ctx.pc == 0x089DD784u) goto L_089DD784;
    return;
L_089DD784:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[31] = (0x089DD79Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x089DD79Cu) goto L_089DD79C;
    return;
L_089DD79C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DD834;
      }
      goto L_089DD7C8;
    }
L_089DD7C8:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[9] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[6] = (0u + 0u);
    goto L_089DD7D4;
L_089DD7D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DD82C;
      }
      goto L_089DD7E0;
    }
L_089DD7E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089DD82C;
      }
      goto L_089DD7EC;
    }
L_089DD7EC:
    aot_gpr[3] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
      if (branch_taken) {
          goto L_089DD82C;
      }
      goto L_089DD7FC;
    }
L_089DD7FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089DD82C;
L_089DD82C:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_089DD7D4;
      }
      goto L_089DD834;
    }
L_089DD834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[17] + 0u);
        goto L_089DD87C;
    }
    goto L_089DD840;
L_089DD840:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089DD858u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 132u, 0x0898E970u>(ctx, &aot_mem) && ctx.pc == 0x089DD858u) goto L_089DD858;
    return;
L_089DD858:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD87C:
    aot_gpr[31] = (0x089DD884u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    goto L_089DD430;
L_089DD884:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_089DD6F0;
      }
      goto L_089DD88C;
    }
L_089DD88C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_089DD840;
L_089DD894:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (0u | 54002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DD9EC;
      }
      goto L_089DD8DC;
    }
L_089DD8DC:
    if (aot_gpr[8] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089DDB64;
    }
    goto L_089DD8E4;
L_089DD8E4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089DDB64;
    }
    goto L_089DD8F0;
L_089DD8F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[18] & 16384u);
      if (branch_taken) {
          goto L_089DDB60;
      }
      goto L_089DD900;
    }
L_089DD900:
    if (aot_gpr[2] != 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_089DDB64;
    }
    goto L_089DD908;
L_089DD908:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[18] & 32767u);
      if (branch_taken) {
          goto L_089DDB28;
      }
      goto L_089DD914;
    }
L_089DD914:
    aot_gpr[2] = (aot_gpr[18] & 4096u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
        goto L_089DDA20;
    }
    goto L_089DD920;
L_089DD920:
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(76));
    if (aot_gpr[21] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_089DD96C;
    }
    goto L_089DD92C;
L_089DD92C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[16] = (aot_gpr[20] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089DD968;
      }
      goto L_089DD938;
    }
L_089DD938:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD944u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 122u, 0x089DF6D4u>(ctx, &aot_mem) && ctx.pc == 0x089DD944u) goto L_089DD944;
    return;
L_089DD944:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD950u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DD950u) goto L_089DD950;
    return;
L_089DD950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[18] & 8192u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[5] != 0u;
    if (aot_gpr[3] != 0u) aot_gpr[4] = (aot_gpr[2]);
      if (branch_taken) {
          goto L_089DDABC;
      }
      goto L_089DD968;
    }
L_089DD968:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    goto L_089DD96C;
L_089DD96C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089DD970;
L_089DD970:
    aot_gpr[6] = (aot_gpr[22] + 0u);
    goto L_089DD974;
L_089DD974:
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DD984u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089DD984u) goto L_089DD984;
    return;
L_089DD984:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DD990u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DD990u) goto L_089DD990;
    return;
L_089DD990:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089DDA34;
      }
      goto L_089DD9A0;
    }
L_089DD9A0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[9] = (aot_gpr[23] + 0u);
    aot_gpr[10] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089DD9C0u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089DD9C0u) goto L_089DD9C0;
    return;
L_089DD9C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DDB28;
      }
      goto L_089DD9EC;
    }
L_089DD9EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDA20:
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = aot_gpr[21] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DD92C;
      }
      goto L_089DDA2C;
    }
L_089DDA2C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    goto L_089DD96C;
L_089DDA34:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[9] = (aot_gpr[23] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[10] = (aot_gpr[30] + 0u);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[31] = (0x089DDA88u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089DDA88u) goto L_089DDA88;
    return;
L_089DDA88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[5]);
      if (branch_taken) {
          goto L_089DD9EC;
      }
      goto L_089DDAB4;
    }
L_089DDAB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089DDB2C;
L_089DDABC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_089DD96C;
      }
      goto L_089DDACC;
    }
L_089DDACC:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD96C;
      }
      goto L_089DDAD8;
    }
L_089DDAD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DD970;
      }
      goto L_089DDAF4;
    }
L_089DDAF4:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1451) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (aot_gpr[22] + 0u);
        goto L_089DD974;
    }
    goto L_089DDB00;
L_089DDB00:
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    aot_gpr[8] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089DDB20u);
    aot_gpr[10] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 200u, 0x089DBB24u>(ctx, &aot_mem) && ctx.pc == 0x089DDB20u) goto L_089DDB20;
    return;
L_089DDB20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DD9EC;
      }
      goto L_089DDB28;
    }
L_089DDB28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089DDB2C;
L_089DDB2C:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDB60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089DDB64;
L_089DDB64:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDB98:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DDBA8;
      }
      goto L_089DDBA0;
    }
L_089DDBA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089DDBA8;
L_089DDBA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDBB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089DDBE0;
      }
      goto L_089DDBC8;
    }
L_089DDBC8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DDBE0;
      }
      goto L_089DDBD0;
    }
L_089DDBD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (0u | 54004u);
      if (branch_taken) {
          goto L_089DDBF4;
      }
      goto L_089DDBE0;
    }
L_089DDBE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDBF4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[31] = (0x089DDC00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 156u, 0x089E0AF4u>(ctx, &aot_mem) && ctx.pc == 0x089DDC00u) goto L_089DDC00;
    return;
L_089DDC00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089DDBE0;
      }
      goto L_089DDC08;
    }
L_089DDC08:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (0u | 54007u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDC28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DDC50;
      }
      goto L_089DDC38;
    }
L_089DDC38:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DDC50;
      }
      goto L_089DDC40;
    }
L_089DDC40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[7] = (0u | 54004u);
      if (branch_taken) {
          goto L_089DDC60;
      }
      goto L_089DDC50;
    }
L_089DDC50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDC60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089DDC6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 191u, 0x089E0D54u>(ctx, &aot_mem) && ctx.pc == 0x089DDC6Cu) goto L_089DDC6C;
    return;
L_089DDC6C:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDC80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u | 54002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089DDD6C;
      }
      goto L_089DDCB8;
    }
L_089DDCB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089DDD14;
      }
      goto L_089DDCC4;
    }
L_089DDCC4:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(10));
    goto L_089DDCE0;
L_089DDCD0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_089DDD14;
      }
      goto L_089DDCE0;
    }
L_089DDCE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089DDCD0;
      }
      goto L_089DDCF0;
    }
L_089DDCF0:
    aot_gpr[31] = (0x089DDCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDCF8u) goto L_089DDCF8;
    return;
L_089DDCF8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089DDD94;
    }
    goto L_089DDD00;
L_089DDD00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    goto L_089DDD04;
L_089DDD04:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_089DDCE0;
      }
      goto L_089DDD14;
    }
L_089DDD14:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DDD28u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 67u, 0x089DC32Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDD28u) goto L_089DDD28;
    return;
L_089DDD28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DDD6C;
      }
      goto L_089DDD30;
    }
L_089DDD30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_089DDE08;
      }
      goto L_089DDD44;
    }
L_089DDD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (16384u << 16u);
    aot_gpr[2] = ((aot_gpr[2] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(208), 0u);
    goto L_089DDD6C;
L_089DDD6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDD94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
        goto L_089DDD04;
    }
    goto L_089DDDA0;
L_089DDDA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
        goto L_089DDD04;
    }
    goto L_089DDDB0;
L_089DDDB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(284), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089DDBB0;
L_089DDE08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (49152u << 16u);
    aot_gpr[2] = ((aot_gpr[2] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(208), 0u);
    goto L_089DDD6C;
L_089DDE34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[3] = (0u | 54002u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DDF50;
      }
      goto L_089DDE60;
    }
L_089DDE60:
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x089DDE6Cu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089DDE6Cu) goto L_089DDE6C;
    return;
L_089DDE6C:
    aot_gpr[31] = (0x089DDE74u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 90u, 0x089DA5C8u>(ctx, &aot_mem) && ctx.pc == 0x089DDE74u) goto L_089DDE74;
    return;
L_089DDE74:
    aot_gpr[31] = (0x089DDE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089DDE7Cu) goto L_089DDE7C;
    return;
L_089DDE7C:
    aot_gpr[31] = (0x089DDE84u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 204u, 0x089DAC84u>(ctx, &aot_mem) && ctx.pc == 0x089DDE84u) goto L_089DDE84;
    return;
L_089DDE84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DDF50;
      }
      goto L_089DDE8C;
    }
L_089DDE8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089DDED4;
      }
      goto L_089DDE98;
    }
L_089DDE98:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(27));
    goto L_089DDEAC;
L_089DDEA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_089DDED4;
    }
    goto L_089DDEAC;
L_089DDEAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DDEB0;
L_089DDEB0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DDEA0;
      }
      goto L_089DDEBC;
    }
L_089DDEBC:
    aot_gpr[31] = (0x089DDEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 157u, 0x089DA94Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDEC4u) goto L_089DDEC4;
    return;
L_089DDEC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DDEB0;
    }
    goto L_089DDED0;
L_089DDED0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_089DDED4;
L_089DDED4:
    aot_gpr[16] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089DDEE8;
      }
      goto L_089DDEE0;
    }
L_089DDEE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089DDF78;
      }
      goto L_089DDEE8;
    }
L_089DDEE8:
    aot_gpr[18] = (0u + 0u);
    goto L_089DDEEC;
L_089DDEEC:
    aot_gpr[20] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089DDF2C;
      }
      goto L_089DDEF8;
    }
L_089DDEF8:
    aot_gpr[16] = (aot_gpr[3] + 0u);
    goto L_089DDFA0;
L_089DDF00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    goto L_089DDF04;
L_089DDF04:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 2u, 0x089DE01Cu>(ctx, &aot_mem); return;
      }
      goto L_089DDF0C;
    }
L_089DDF0C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDF24;
      }
      goto L_089DDF14;
    }
L_089DDF14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_089DDF18;
L_089DDF18:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DDFAC;
      }
      goto L_089DDF24;
    }
L_089DDF24:
    if (aot_gpr[16] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_089DDFB0;
    }
    goto L_089DDF2C;
L_089DDF2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DDF00;
      }
      goto L_089DDF3C;
    }
L_089DDF3C:
    aot_gpr[31] = (0x089DDF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 124u, 0x089D9ADCu>(ctx, &aot_mem) && ctx.pc == 0x089DDF44u) goto L_089DDF44;
    return;
L_089DDF44:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
        goto L_089DDF04;
    }
    goto L_089DDF4C;
L_089DDF4C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089DDF50;
L_089DDF50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDF78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    goto L_089DDF7C;
L_089DDF7C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DDEEC;
      }
      goto L_089DDF88;
    }
L_089DDF88:
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
        goto L_089DDF7C;
    }
    goto L_089DDF90;
L_089DDF90:
    aot_gpr[20] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089DDF2C;
      }
      goto L_089DDF9C;
    }
L_089DDF9C:
    aot_gpr[16] = (aot_gpr[3] + 0u);
    goto L_089DDFA0;
L_089DDFA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DDF2C;
      }
      goto L_089DDFAC;
    }
L_089DDFAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_089DDFB0;
L_089DDFB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[20]);
      if (branch_taken) {
          goto L_089DDFE8;
      }
      goto L_089DDFB8;
    }
L_089DDFB8:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x089DDFC8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 173u, 0x08992B24u>(ctx, &aot_mem) && ctx.pc == 0x089DDFC8u) goto L_089DDFC8;
    return;
L_089DDFC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 5u, 0x089DE03Cu>(ctx, &aot_mem); return;
      }
      goto L_089DDFDC;
    }
L_089DDFDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0474_entry, 474u, 5u, 0x089DE03Cu>(ctx, &aot_mem); return;
      }
      goto L_089DDFE8;
    }
L_089DDFE8:
    aot_gpr[31] = (0x089DDFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x089DDFF0u) goto L_089DDFF0;
    return;
L_089DDFF0:
    aot_gpr[3] = (0u + 0u);
    goto L_089DDFF4;
L_089DDFF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.pc = 0x089DE000u; return;
}

void recomp_unit_0473(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0473_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_473(Runtime &runtime) {
    runtime.register_generated_unit(473u, 0x089DD000u, 4096u, &recomp_unit_0473, &recomp_unit_0473_entry);
    runtime.register_function(0x089DD000u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD008u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD018u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD030u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD03Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD048u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD054u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD05Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD064u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD07Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD090u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD0A0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD0ACu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD0C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD0D4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD0F4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD0FCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD104u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD110u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD118u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD170u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD178u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD180u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD188u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD194u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD1A4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD1ACu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD1C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD1D0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD1FCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD220u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD22Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD23Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD26Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD274u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD290u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD294u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD29Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD2A8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD2B4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD2C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD2ECu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD2F4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD300u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD308u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD310u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD324u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD358u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD368u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD374u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD38Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD39Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD3C0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD3F0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD3F8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD404u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD424u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD430u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD438u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD440u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD450u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD45Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4A4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4B0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4B8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4C0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4D4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4E4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD4E8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD504u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD528u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD538u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD544u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD550u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD55Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD568u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD594u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD5A0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD5ACu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD5B8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD5C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD5F8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD600u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD60Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD624u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD644u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD64Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD654u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD65Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6ACu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6B8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6C0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6D0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6DCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6ECu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD6F0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD710u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD73Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD74Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD758u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD76Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD778u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD784u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD79Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD7C8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD7D4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD7E0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD7ECu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD7FCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD82Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD834u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD840u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD858u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD87Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD884u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD88Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD894u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD8DCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD8E4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD8F0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD900u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD908u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD914u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD920u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD92Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD938u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD944u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD950u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD968u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD96Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD970u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD974u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD984u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD990u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD9A0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD9C0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DD9ECu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDA20u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDA2Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDA34u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDA88u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDAB4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDABCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDACCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDAD8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDAF4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB00u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB20u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB28u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB2Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB60u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB64u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDB98u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBA0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBA8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBB0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBC8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBD0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBE0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDBF4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC00u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC08u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC28u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC38u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC40u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC50u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC60u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC6Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDC80u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDCB8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDCC4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDCD0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDCE0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDCF0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDCF8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD00u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD04u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD14u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD28u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD30u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD44u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD6Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDD94u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDDA0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDDB0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE08u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE34u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE60u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE6Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE74u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE7Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE84u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE8Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDE98u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEA0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEACu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEB0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEBCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEC4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDED0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDED4u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEE0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEE8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEECu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDEF8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF00u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF04u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF0Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF14u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF18u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF24u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF2Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF3Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF44u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF4Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF50u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF78u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF7Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF88u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF90u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDF9Cu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFA0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFACu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFB0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFB8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFC8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFDCu, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFE8u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFF0u, &recomp_unit_0473, "recomp_unit_0473");
    runtime.register_function(0x089DDFF4u, &recomp_unit_0473, "recomp_unit_0473");
}
} // namespace psprecomp
