#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0067[1019] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20,
    0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 34, 0, 0,
    0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50,
    0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0,
    0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0,
    0, 0, 76, 0, 0, 0, 77, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83,
    0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 117,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172,
    0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 196, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 214, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0,
    225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 245,
};
void recomp_unit_0067_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08847000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0067[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08847000;
    case 2u: goto L_08847008;
    case 3u: goto L_08847028;
    case 4u: goto L_08847044;
    case 5u: goto L_08847054;
    case 6u: goto L_0884705C;
    case 7u: goto L_08847064;
    case 8u: goto L_0884706C;
    case 9u: goto L_0884707C;
    case 10u: goto L_0884709C;
    case 11u: goto L_088470B8;
    case 12u: goto L_088470C8;
    case 13u: goto L_088470D8;
    case 14u: goto L_088470F8;
    case 15u: goto L_08847114;
    case 16u: goto L_08847124;
    case 17u: goto L_08847134;
    case 18u: goto L_08847154;
    case 19u: goto L_08847170;
    case 20u: goto L_0884717C;
    case 21u: goto L_08847188;
    case 22u: goto L_08847198;
    case 23u: goto L_088471B0;
    case 24u: goto L_088471BC;
    case 25u: goto L_088471D0;
    case 26u: goto L_088471EC;
    case 27u: goto L_088471F8;
    case 28u: goto L_0884720C;
    case 29u: goto L_08847228;
    case 30u: goto L_08847234;
    case 31u: goto L_08847248;
    case 32u: goto L_08847264;
    case 33u: goto L_08847270;
    case 34u: goto L_08847274;
    case 35u: goto L_08847284;
    case 36u: goto L_08847294;
    case 37u: goto L_088472A8;
    case 38u: goto L_088472CC;
    case 39u: goto L_088472D4;
    case 40u: goto L_088472E4;
    case 41u: goto L_088472F4;
    case 42u: goto L_08847300;
    case 43u: goto L_0884730C;
    case 44u: goto L_08847314;
    case 45u: goto L_0884732C;
    case 46u: goto L_0884733C;
    case 47u: goto L_08847348;
    case 48u: goto L_08847358;
    case 49u: goto L_0884736C;
    case 50u: goto L_0884737C;
    case 51u: goto L_08847384;
    case 52u: goto L_08847398;
    case 53u: goto L_088473AC;
    case 54u: goto L_088473B8;
    case 55u: goto L_088473CC;
    case 56u: goto L_088473D8;
    case 57u: goto L_088473EC;
    case 58u: goto L_088473F8;
    case 59u: goto L_0884740C;
    case 60u: goto L_08847418;
    case 61u: goto L_0884742C;
    case 62u: goto L_08847438;
    case 63u: goto L_08847440;
    case 64u: goto L_08847458;
    case 65u: goto L_08847460;
    case 66u: goto L_08847478;
    case 67u: goto L_08847484;
    case 68u: goto L_08847494;
    case 69u: goto L_088474A4;
    case 70u: goto L_088474B4;
    case 71u: goto L_088474C4;
    case 72u: goto L_088474CC;
    case 73u: goto L_088474D8;
    case 74u: goto L_088474E8;
    case 75u: goto L_088474F8;
    case 76u: goto L_08847508;
    case 77u: goto L_08847518;
    case 78u: goto L_0884751C;
    case 79u: goto L_0884752C;
    case 80u: goto L_0884753C;
    case 81u: goto L_08847550;
    case 82u: goto L_08847574;
    case 83u: goto L_0884757C;
    case 84u: goto L_0884758C;
    case 85u: goto L_0884759C;
    case 86u: goto L_088475A8;
    case 87u: goto L_088475B8;
    case 88u: goto L_088475CC;
    case 89u: goto L_088475DC;
    case 90u: goto L_088475E4;
    case 91u: goto L_08847610;
    case 92u: goto L_08847630;
    case 93u: goto L_08847698;
    case 94u: goto L_088476A4;
    case 95u: goto L_088476B8;
    case 96u: goto L_088476C8;
    case 97u: goto L_088476D4;
    case 98u: goto L_088476E4;
    case 99u: goto L_088476F8;
    case 100u: goto L_08847704;
    case 101u: goto L_08847718;
    case 102u: goto L_08847728;
    case 103u: goto L_08847734;
    case 104u: goto L_08847744;
    case 105u: goto L_08847758;
    case 106u: goto L_08847768;
    case 107u: goto L_08847778;
    case 108u: goto L_0884778C;
    case 109u: goto L_08847798;
    case 110u: goto L_088477AC;
    case 111u: goto L_088477B8;
    case 112u: goto L_088477C4;
    case 113u: goto L_088477CC;
    case 114u: goto L_088477D8;
    case 115u: goto L_088477E4;
    case 116u: goto L_088477F4;
    case 117u: goto L_088477FC;
    case 118u: goto L_08847808;
    case 119u: goto L_08847818;
    case 120u: goto L_08847828;
    case 121u: goto L_08847834;
    case 122u: goto L_0884784C;
    case 123u: goto L_08847868;
    case 124u: goto L_08847880;
    case 125u: goto L_08847888;
    case 126u: goto L_08847894;
    case 127u: goto L_088478AC;
    case 128u: goto L_088478C8;
    case 129u: goto L_088478E0;
    case 130u: goto L_088478E8;
    case 131u: goto L_088478F4;
    case 132u: goto L_08847908;
    case 133u: goto L_08847914;
    case 134u: goto L_08847928;
    case 135u: goto L_08847948;
    case 136u: goto L_08847968;
    case 137u: goto L_08847988;
    case 138u: goto L_08847994;
    case 139u: goto L_088479B0;
    case 140u: goto L_088479B8;
    case 141u: goto L_088479C0;
    case 142u: goto L_088479C8;
    case 143u: goto L_088479CC;
    case 144u: goto L_088479DC;
    case 145u: goto L_088479E8;
    case 146u: goto L_08847A18;
    case 147u: goto L_08847A34;
    case 148u: goto L_08847A3C;
    case 149u: goto L_08847A4C;
    case 150u: goto L_08847A54;
    case 151u: goto L_08847A60;
    case 152u: goto L_08847AA0;
    case 153u: goto L_08847AAC;
    case 154u: goto L_08847AB4;
    case 155u: goto L_08847ABC;
    case 156u: goto L_08847AC4;
    case 157u: goto L_08847ACC;
    case 158u: goto L_08847AD4;
    case 159u: goto L_08847AE4;
    case 160u: goto L_08847AFC;
    case 161u: goto L_08847B04;
    case 162u: goto L_08847B10;
    case 163u: goto L_08847B1C;
    case 164u: goto L_08847B24;
    case 165u: goto L_08847B40;
    case 166u: goto L_08847B68;
    case 167u: goto L_08847B7C;
    case 168u: goto L_08847B98;
    case 169u: goto L_08847BBC;
    case 170u: goto L_08847BD0;
    case 171u: goto L_08847BEC;
    case 172u: goto L_08847BFC;
    case 173u: goto L_08847C08;
    case 174u: goto L_08847C10;
    case 175u: goto L_08847C24;
    case 176u: goto L_08847C34;
    case 177u: goto L_08847C4C;
    case 178u: goto L_08847C6C;
    case 179u: goto L_08847C74;
    case 180u: goto L_08847C88;
    case 181u: goto L_08847C94;
    case 182u: goto L_08847C9C;
    case 183u: goto L_08847CA4;
    case 184u: goto L_08847CB4;
    case 185u: goto L_08847CC8;
    case 186u: goto L_08847CE0;
    case 187u: goto L_08847CE8;
    case 188u: goto L_08847CF4;
    case 189u: goto L_08847D08;
    case 190u: goto L_08847D18;
    case 191u: goto L_08847D38;
    case 192u: goto L_08847D40;
    case 193u: goto L_08847D50;
    case 194u: goto L_08847D5C;
    case 195u: goto L_08847D80;
    case 196u: goto L_08847D88;
    case 197u: goto L_08847D8C;
    case 198u: goto L_08847D9C;
    case 199u: goto L_08847DC4;
    case 200u: goto L_08847DD4;
    case 201u: goto L_08847DE0;
    case 202u: goto L_08847DE8;
    case 203u: goto L_08847DF8;
    case 204u: goto L_08847E0C;
    case 205u: goto L_08847E1C;
    case 206u: goto L_08847E28;
    case 207u: goto L_08847E30;
    case 208u: goto L_08847E38;
    case 209u: goto L_08847E40;
    case 210u: goto L_08847E48;
    case 211u: goto L_08847E50;
    case 212u: goto L_08847E58;
    case 213u: goto L_08847E60;
    case 214u: goto L_08847E64;
    case 215u: goto L_08847E6C;
    case 216u: goto L_08847E80;
    case 217u: goto L_08847E8C;
    case 218u: goto L_08847E98;
    case 219u: goto L_08847EAC;
    case 220u: goto L_08847EB4;
    case 221u: goto L_08847EC0;
    case 222u: goto L_08847ED4;
    case 223u: goto L_08847EE8;
    case 224u: goto L_08847EF0;
    case 225u: goto L_08847F00;
    case 226u: goto L_08847F08;
    case 227u: goto L_08847F10;
    case 228u: goto L_08847F18;
    case 229u: goto L_08847F20;
    case 230u: goto L_08847F30;
    case 231u: goto L_08847F38;
    case 232u: goto L_08847F40;
    case 233u: goto L_08847F48;
    case 234u: goto L_08847F50;
    case 235u: goto L_08847F68;
    case 236u: goto L_08847F98;
    case 237u: goto L_08847FA0;
    case 238u: goto L_08847FA8;
    case 239u: goto L_08847FB0;
    case 240u: goto L_08847FB8;
    case 241u: goto L_08847FC0;
    case 242u: goto L_08847FCC;
    case 243u: goto L_08847FD4;
    case 244u: goto L_08847FDC;
    case 245u: goto L_08847FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08847000:
    aot_gpr[31] = (0x08847008u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3452));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847008u) goto L_08847008;
    return;
L_08847008:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08847028u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3424));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847028u) goto L_08847028;
    return;
L_08847028:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08847044u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3396));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847044u) goto L_08847044;
    return;
L_08847044:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0884717C;
      }
      goto L_08847054;
    }
L_08847054:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088470C8;
      }
      goto L_0884705C;
    }
L_0884705C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847124;
      }
      goto L_08847064;
    }
L_08847064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884717C;
      }
      goto L_0884706C;
    }
L_0884706C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884707Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3480));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884707Cu) goto L_0884707C;
    return;
L_0884707C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884709Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3424));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884709Cu) goto L_0884709C;
    return;
L_0884709C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x088470B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3396));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088470B8u) goto L_088470B8;
    return;
L_088470B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0884717C;
      }
      goto L_088470C8;
    }
L_088470C8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088470D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3480));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088470D8u) goto L_088470D8;
    return;
L_088470D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088470F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3452));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088470F8u) goto L_088470F8;
    return;
L_088470F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08847114u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3396));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847114u) goto L_08847114;
    return;
L_08847114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0884717C;
      }
      goto L_08847124;
    }
L_08847124:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08847134u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3480));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847134u) goto L_08847134;
    return;
L_08847134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08847154u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3452));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847154u) goto L_08847154;
    return;
L_08847154:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08847170u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3424));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847170u) goto L_08847170;
    return;
L_08847170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0884717C;
L_0884717C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08847188u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25316)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 16u, 0x0881C13Cu>(ctx, &aot_mem) && ctx.pc == 0x08847188u) goto L_08847188;
    return;
L_08847188:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08847198u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2176)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08847198u) goto L_08847198;
    return;
L_08847198:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2192)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_088471B0;
    }
    goto L_088471B0;
L_088471B0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088471BCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088471BCu) goto L_088471BC;
    return;
L_088471BC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2176));
    aot_gpr[31] = (0x088471D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088471D0u) goto L_088471D0;
    return;
L_088471D0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_088471EC;
    }
    goto L_088471EC;
L_088471EC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088471F8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088471F8u) goto L_088471F8;
    return;
L_088471F8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2176));
    aot_gpr[31] = (0x0884720Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x0884720Cu) goto L_0884720C;
    return;
L_0884720C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08847228;
    }
    goto L_08847228;
L_08847228:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08847234u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08847234u) goto L_08847234;
    return;
L_08847234:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2176));
    aot_gpr[31] = (0x08847248u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08847248u) goto L_08847248;
    return;
L_08847248:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08847264;
    }
    goto L_08847264;
L_08847264:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08847270u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08847270u) goto L_08847270;
    return;
L_08847270:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_08847274;
L_08847274:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08847284u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3180));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847284u) goto L_08847284;
    return;
L_08847284:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847294u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08847294u) goto L_08847294;
    return;
L_08847294:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088472D4;
      }
      goto L_088472A8;
    }
L_088472A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088472CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088472CCu) goto L_088472CC;
    return;
L_088472CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088472E4;
      }
      goto L_088472D4;
    }
L_088472D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088472E4;
L_088472E4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088472F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3852));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088472F4u) goto L_088472F4;
    return;
L_088472F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08847300u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 132u, 0x088457F8u>(ctx, &aot_mem) && ctx.pc == 0x08847300u) goto L_08847300;
    return;
L_08847300:
    aot_gpr[4] = (0u | 368u);
    aot_gpr[31] = (0x0884730Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884730Cu) goto L_0884730C;
    return;
L_0884730C:
    aot_gpr[31] = (0x08847314u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08847314u) goto L_08847314;
    return;
L_08847314:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2696)));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884732Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884732Cu) goto L_0884732C;
    return;
L_0884732C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884733Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3168));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884733Cu) goto L_0884733C;
    return;
L_0884733C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847348u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08847348u) goto L_08847348;
    return;
L_08847348:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08847358u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3824));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08847358u) goto L_08847358;
    return;
L_08847358:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884736Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3816));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884736Cu) goto L_0884736C;
    return;
L_0884736C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884737Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 186u, 0x08845AF0u>(ctx, &aot_mem) && ctx.pc == 0x0884737Cu) goto L_0884737C;
    return;
L_0884737C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 73u, 0x08846858u>(ctx, &aot_mem); return;
      }
      goto L_08847384;
    }
L_08847384:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08847398u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4652));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08847398u) goto L_08847398;
    return;
L_08847398:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088473ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3836));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088473ACu) goto L_088473AC;
    return;
L_088473AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088473B8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088473B8u) goto L_088473B8;
    return;
L_088473B8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088473CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3156));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088473CCu) goto L_088473CC;
    return;
L_088473CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088473D8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088473D8u) goto L_088473D8;
    return;
L_088473D8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088473ECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3136));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088473ECu) goto L_088473EC;
    return;
L_088473EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088473F8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088473F8u) goto L_088473F8;
    return;
L_088473F8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884740Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3116));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884740Cu) goto L_0884740C;
    return;
L_0884740C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847418u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08847418u) goto L_08847418;
    return;
L_08847418:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884742Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3868));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884742Cu) goto L_0884742C;
    return;
L_0884742C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847438u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08847438u) goto L_08847438;
    return;
L_08847438:
    aot_gpr[31] = (0x08847440u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08847440u) goto L_08847440;
    return;
L_08847440:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2176));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08847458u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08847458u) goto L_08847458;
    return;
L_08847458:
    aot_gpr[31] = (0x08847460u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08847460u) goto L_08847460;
    return;
L_08847460:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088474CC;
      }
      goto L_08847478;
    }
L_08847478:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08847484u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08847484u) goto L_08847484;
    return;
L_08847484:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08847494u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08847494u) goto L_08847494;
    return;
L_08847494:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088474A4u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088474A4u) goto L_088474A4;
    return;
L_088474A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088474B4u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088474B4u) goto L_088474B4;
    return;
L_088474B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088474C4u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088474C4u) goto L_088474C4;
    return;
L_088474C4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_0884751C;
      }
      goto L_088474CC;
    }
L_088474CC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088474D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088474D8u) goto L_088474D8;
    return;
L_088474D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088474E8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088474E8u) goto L_088474E8;
    return;
L_088474E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088474F8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088474F8u) goto L_088474F8;
    return;
L_088474F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08847508u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08847508u) goto L_08847508;
    return;
L_08847508:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08847518u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08847518u) goto L_08847518;
    return;
L_08847518:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_0884751C;
L_0884751C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884752Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3180));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884752Cu) goto L_0884752C;
    return;
L_0884752C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884753Cu);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884753Cu) goto L_0884753C;
    return;
L_0884753C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884757C;
      }
      goto L_08847550;
    }
L_08847550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847574u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08847574u) goto L_08847574;
    return;
L_08847574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884758C;
      }
      goto L_0884757C;
    }
L_0884757C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0884758C;
L_0884758C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884759Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3852));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884759Cu) goto L_0884759C;
    return;
L_0884759C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088475A8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 132u, 0x088457F8u>(ctx, &aot_mem) && ctx.pc == 0x088475A8u) goto L_088475A8;
    return;
L_088475A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088475B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3824));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088475B8u) goto L_088475B8;
    return;
L_088475B8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088475CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3816));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088475CCu) goto L_088475CC;
    return;
L_088475CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088475DCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 186u, 0x08845AF0u>(ctx, &aot_mem) && ctx.pc == 0x088475DCu) goto L_088475DC;
    return;
L_088475DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 73u, 0x08846858u>(ctx, &aot_mem); return;
      }
      goto L_088475E4;
    }
L_088475E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847610:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[21]);
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[21] = (57344u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-3032));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-3004));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[22] = (8192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (2218u << 16u);
      if (branch_taken) {
          goto L_088476F8;
      }
      goto L_08847698;
    }
L_08847698:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847758;
      }
      goto L_088476A4;
    }
L_088476A4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088476B8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3020));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088476B8u) goto L_088476B8;
    return;
L_088476B8:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 51u);
    aot_gpr[31] = (0x088476C8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088476C8u) goto L_088476C8;
    return;
L_088476C8:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088476D4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x088476D4u) goto L_088476D4;
    return;
L_088476D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088476E4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088476E4u) goto L_088476E4;
    return;
L_088476E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1904)));
      if (branch_taken) {
          goto L_08847778;
      }
      goto L_088476F8;
    }
L_088476F8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847758;
      }
      goto L_08847704;
    }
L_08847704:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847718u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3020));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847718u) goto L_08847718;
    return;
L_08847718:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x08847728u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08847728u) goto L_08847728;
    return;
L_08847728:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08847734u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08847734u) goto L_08847734;
    return;
L_08847734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847744u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847744u) goto L_08847744;
    return;
L_08847744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1904)));
      if (branch_taken) {
          goto L_08847778;
      }
      goto L_08847758;
    }
L_08847758:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847768u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847768u) goto L_08847768;
    return;
L_08847768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(1904)));
    goto L_08847778;
L_08847778:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884778Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2984));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884778Cu) goto L_0884778C;
    return;
L_0884778C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847798u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08847798u) goto L_08847798;
    return;
L_08847798:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2168)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[23] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088477CC;
      }
      goto L_088477AC;
    }
L_088477AC:
    aot_gpr[4] = (0u | 374u);
    aot_gpr[31] = (0x088477B8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088477B8u) goto L_088477B8;
    return;
L_088477B8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088477C4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088477C4u) goto L_088477C4;
    return;
L_088477C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847818;
      }
      goto L_088477CC;
    }
L_088477CC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088477FC;
      }
      goto L_088477D8;
    }
L_088477D8:
    aot_gpr[4] = (0u | 391u);
    aot_gpr[31] = (0x088477E4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088477E4u) goto L_088477E4;
    return;
L_088477E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088477F4u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088477F4u) goto L_088477F4;
    return;
L_088477F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847818;
      }
      goto L_088477FC;
    }
L_088477FC:
    aot_gpr[4] = (0u | 369u);
    aot_gpr[31] = (0x08847808u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08847808u) goto L_08847808;
    return;
L_08847808:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847818u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08847818u) goto L_08847818;
    return;
L_08847818:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847828u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847828u) goto L_08847828;
    return;
L_08847828:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847834u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08847834u) goto L_08847834;
    return;
L_08847834:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2964));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884784Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884784Cu) goto L_0884784C;
    return;
L_0884784C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847868u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847868u) goto L_08847868;
    return;
L_08847868:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847880u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2952));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847880u) goto L_08847880;
    return;
L_08847880:
    aot_gpr[31] = (0x08847888u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08847888u) goto L_08847888;
    return;
L_08847888:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08847894u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08847894u) goto L_08847894;
    return;
L_08847894:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2932));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088478ACu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088478ACu) goto L_088478AC;
    return;
L_088478AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088478C8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088478C8u) goto L_088478C8;
    return;
L_088478C8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088478E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2924));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088478E0u) goto L_088478E0;
    return;
L_088478E0:
    aot_gpr[31] = (0x088478E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088478E8u) goto L_088478E8;
    return;
L_088478E8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088478F4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x088478F4u) goto L_088478F4;
    return;
L_088478F4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847908u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847908u) goto L_08847908;
    return;
L_08847908:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847914u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08847914u) goto L_08847914;
    return;
L_08847914:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847928u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2892));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847928u) goto L_08847928;
    return;
L_08847928:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847948u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2884));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847948u) goto L_08847948;
    return;
L_08847948:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847968u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2856));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847968u) goto L_08847968;
    return;
L_08847968:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08847988u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847988u) goto L_08847988;
    return;
L_08847988:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08847994u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08847994u) goto L_08847994;
    return;
L_08847994:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25340)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2172)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088479C0;
      }
      goto L_088479B0;
    }
L_088479B0:
    aot_gpr[31] = (0x088479B8u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088479B8u) goto L_088479B8;
    return;
L_088479B8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_088479CC;
      }
      goto L_088479C0;
    }
L_088479C0:
    aot_gpr[31] = (0x088479C8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x088479C8u) goto L_088479C8;
    return;
L_088479C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_088479CC;
L_088479CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[31] = (0x088479DCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 67u, 0x0889B4ACu>(ctx, &aot_mem) && ctx.pc == 0x088479DCu) goto L_088479DC;
    return;
L_088479DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x088479E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 181u, 0x0888CB3Cu>(ctx, &aot_mem) && ctx.pc == 0x088479E8u) goto L_088479E8;
    return;
L_088479E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847A18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08847A34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 200u, 0x08893D68u>(ctx, &aot_mem) && ctx.pc == 0x08847A34u) goto L_08847A34;
    return;
L_08847A34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847A54;
      }
      goto L_08847A3C;
    }
L_08847A3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847A54;
      }
      goto L_08847A4C;
    }
L_08847A4C:
    aot_gpr[31] = (0x08847A54u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 238u, 0x0889AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08847A54u) goto L_08847A54;
    return;
L_08847A54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08847AB4;
      }
      goto L_08847AA0;
    }
L_08847AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08847ABC;
    }
    goto L_08847AAC;
L_08847AAC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08847B04;
      }
      goto L_08847AB4;
    }
L_08847AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 48u, 0x08848384u>(ctx, &aot_mem); return;
      }
      goto L_08847ABC;
    }
L_08847ABC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847AB4;
      }
      goto L_08847AC4;
    }
L_08847AC4:
    aot_gpr[31] = (0x08847ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 11u, 0x0889A0BCu>(ctx, &aot_mem) && ctx.pc == 0x08847ACCu) goto L_08847ACC;
    return;
L_08847ACC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847AFC;
      }
      goto L_08847AD4;
    }
L_08847AD4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08847AE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2808));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08847AE4u) goto L_08847AE4;
    return;
L_08847AE4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08847AFC;
L_08847AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847AB4;
      }
      goto L_08847B04;
    }
L_08847B04:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[31] = (0x08847B10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 214u, 0x088A2E74u>(ctx, &aot_mem) && ctx.pc == 0x08847B10u) goto L_08847B10;
    return;
L_08847B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x08847B1Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 225u, 0x088A2F10u>(ctx, &aot_mem) && ctx.pc == 0x08847B1Cu) goto L_08847B1C;
    return;
L_08847B1C:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08847B7C;
      }
      goto L_08847B24;
    }
L_08847B24:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847B40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2884));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847B40u) goto L_08847B40;
    return;
L_08847B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847B68u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2856));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847B68u) goto L_08847B68;
    return;
L_08847B68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08847BD0;
      }
      goto L_08847B7C;
    }
L_08847B7C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847B98u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2884));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847B98u) goto L_08847B98;
    return;
L_08847B98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847BBCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2856));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847BBCu) goto L_08847BBC;
    return;
L_08847BBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08847BD0;
L_08847BD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3032));
    aot_gpr[31] = (0x08847BECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847BECu) goto L_08847BEC;
    return;
L_08847BEC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08847BFCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 67u, 0x0889B4ACu>(ctx, &aot_mem) && ctx.pc == 0x08847BFCu) goto L_08847BFC;
    return;
L_08847BFC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847EE8;
      }
      goto L_08847C08;
    }
L_08847C08:
    aot_gpr[31] = (0x08847C10u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08847C10u) goto L_08847C10;
    return;
L_08847C10:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847CB4;
      }
      goto L_08847C24;
    }
L_08847C24:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08847C34u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08847C34u) goto L_08847C34;
    return;
L_08847C34:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08847C88;
      }
      goto L_08847C4C;
    }
L_08847C4C:
    aot_gpr[7] = (aot_gpr[6] << 4u);
    aot_gpr[8] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[19] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08847C74;
      }
      goto L_08847C6C;
    }
L_08847C6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08847C88;
      }
      goto L_08847C74;
    }
L_08847C74:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847C4C;
      }
      goto L_08847C88;
    }
L_08847C88:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08847CA4;
      }
      goto L_08847C94;
    }
L_08847C94:
    aot_gpr[31] = (0x08847C9Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08847C9Cu) goto L_08847C9C;
    return;
L_08847C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847CB4;
      }
      goto L_08847CA4;
    }
L_08847CA4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847C24;
      }
      goto L_08847CB4;
    }
L_08847CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847EE8;
      }
      goto L_08847CC8;
    }
L_08847CC8:
    aot_gpr[4] = (aot_gpr[20] << 4u);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[31] = (0x08847CE0u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08847CE0u) goto L_08847CE0;
    return;
L_08847CE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847ED4;
      }
      goto L_08847CE8;
    }
L_08847CE8:
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08847CF4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08847CF4u) goto L_08847CF4;
    return;
L_08847CF4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847D50;
      }
      goto L_08847D08;
    }
L_08847D08:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08847D18u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 193u, 0x0888CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08847D18u) goto L_08847D18;
    return;
L_08847D18:
    aot_gpr[4] = (aot_gpr[20] << 4u);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08847D40;
      }
      goto L_08847D38;
    }
L_08847D38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08847D50;
      }
      goto L_08847D40;
    }
L_08847D40:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847D08;
      }
      goto L_08847D50;
    }
L_08847D50:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[21] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08847D8C;
      }
      goto L_08847D5C;
    }
L_08847D5C:
    aot_gpr[4] = (aot_gpr[20] << 4u);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08847D80u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08847D80u) goto L_08847D80;
    return;
L_08847D80:
    aot_gpr[31] = (0x08847D88u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08847D88u) goto L_08847D88;
    return;
L_08847D88:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08847D8C;
L_08847D8C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[31] = (0x08847D9Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 189u, 0x088A0C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08847D9Cu) goto L_08847D9C;
    return;
L_08847D9C:
    aot_gpr[4] = (aot_gpr[20] << 4u);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[19] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08847DC4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08847DC4u) goto L_08847DC4;
    return;
L_08847DC4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(240))))));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08847DF8;
      }
      goto L_08847DD4;
    }
L_08847DD4:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08847DE8;
      }
      goto L_08847DE0;
    }
L_08847DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847DF8;
      }
      goto L_08847DE8;
    }
L_08847DE8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847DD4;
      }
      goto L_08847DF8;
    }
L_08847DF8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08847E0Cu);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 183u, 0x0888CB68u>(ctx, &aot_mem) && ctx.pc == 0x08847E0Cu) goto L_08847E0C;
    return;
L_08847E0C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(234))))));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 115u);
      if (branch_taken) {
          goto L_08847E64;
      }
      goto L_08847E1C;
    }
L_08847E1C:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08847E48;
      }
      goto L_08847E28;
    }
L_08847E28:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08847E50;
      }
      goto L_08847E30;
    }
L_08847E30:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08847E58;
      }
      goto L_08847E38;
    }
L_08847E38:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08847E60;
      }
      goto L_08847E40;
    }
L_08847E40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 116u);
      if (branch_taken) {
          goto L_08847E64;
      }
      goto L_08847E48;
    }
L_08847E48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 112u);
      if (branch_taken) {
          goto L_08847E64;
      }
      goto L_08847E50;
    }
L_08847E50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 113u);
      if (branch_taken) {
          goto L_08847E64;
      }
      goto L_08847E58;
    }
L_08847E58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 114u);
      if (branch_taken) {
          goto L_08847E64;
      }
      goto L_08847E60;
    }
L_08847E60:
    aot_gpr[4] = (0u | 115u);
    goto L_08847E64;
L_08847E64:
    aot_gpr[31] = (0x08847E6Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08847E6Cu) goto L_08847E6C;
    return;
L_08847E6C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08847E80u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08847E80u) goto L_08847E80;
    return;
L_08847E80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847EB4;
      }
      goto L_08847E8C;
    }
L_08847E8C:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x08847E98u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08847E98u) goto L_08847E98;
    return;
L_08847E98:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x08847EACu);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08847EACu) goto L_08847EAC;
    return;
L_08847EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847ED4;
      }
      goto L_08847EB4;
    }
L_08847EB4:
    aot_gpr[4] = (0u | 48u);
    aot_gpr[31] = (0x08847EC0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08847EC0u) goto L_08847EC0;
    return;
L_08847EC0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 5u);
    aot_gpr[31] = (0x08847ED4u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 185u, 0x0888CBDCu>(ctx, &aot_mem) && ctx.pc == 0x08847ED4u) goto L_08847ED4;
    return;
L_08847ED4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847CC8;
      }
      goto L_08847EE8;
    }
L_08847EE8:
    aot_gpr[31] = (0x08847EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08847EF0u) goto L_08847EF0;
    return;
L_08847EF0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 67u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 66u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 45u, 0x0884836Cu>(ctx, &aot_mem); return;
      }
      goto L_08847F00;
    }
L_08847F00:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08847F18;
      }
      goto L_08847F08;
    }
L_08847F08:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 46u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 45u, 0x0884836Cu>(ctx, &aot_mem); return;
      }
      goto L_08847F10;
    }
L_08847F10:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 47u, 0x0884837Cu>(ctx, &aot_mem); return;
      }
      goto L_08847F18;
    }
L_08847F18:
    aot_gpr[31] = (0x08847F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 183u, 0x0889AB08u>(ctx, &aot_mem) && ctx.pc == 0x08847F20u) goto L_08847F20;
    return;
L_08847F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08847F40;
      }
      goto L_08847F30;
    }
L_08847F30:
    aot_gpr[31] = (0x08847F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 215u, 0x0889ACA0u>(ctx, &aot_mem) && ctx.pc == 0x08847F38u) goto L_08847F38;
    return;
L_08847F38:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08847F40;
L_08847F40:
    aot_gpr[31] = (0x08847F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 245u, 0x0889AE04u>(ctx, &aot_mem) && ctx.pc == 0x08847F48u) goto L_08847F48;
    return;
L_08847F48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847FA8;
      }
      goto L_08847F50;
    }
L_08847F50:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3032));
    aot_gpr[31] = (0x08847F68u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2932));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08847F68u) goto L_08847F68;
    return;
L_08847F68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26500)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 31u, 0x0884824Cu>(ctx, &aot_mem); return;
      }
      goto L_08847F98;
    }
L_08847F98:
    aot_gpr[31] = (0x08847FA0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 238u, 0x0889AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08847FA0u) goto L_08847FA0;
    return;
L_08847FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 31u, 0x0884824Cu>(ctx, &aot_mem); return;
      }
      goto L_08847FA8;
    }
L_08847FA8:
    aot_gpr[31] = (0x08847FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x08847FB0u) goto L_08847FB0;
    return;
L_08847FB0:
    aot_gpr[31] = (0x08847FB8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x08847FB8u) goto L_08847FB8;
    return;
L_08847FB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 21u, 0x08848180u>(ctx, &aot_mem); return;
      }
      goto L_08847FC0;
    }
L_08847FC0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08847FCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 19u, 0x088A2134u>(ctx, &aot_mem) && ctx.pc == 0x08847FCCu) goto L_08847FCC;
    return;
L_08847FCC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08847FE8;
      }
      goto L_08847FD4;
    }
L_08847FD4:
    aot_gpr[31] = (0x08847FDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 214u, 0x088A2E74u>(ctx, &aot_mem) && ctx.pc == 0x08847FDCu) goto L_08847FDC;
    return;
L_08847FDC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 7u, 0x0884805Cu>(ctx, &aot_mem); return;
      }
      goto L_08847FE8;
    }
L_08847FE8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3032));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2964));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = 0x08848000u; return;
}

void recomp_unit_0067(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0067_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_67(Runtime &runtime) {
    runtime.register_generated_unit(67u, 0x08847000u, 4096u, &recomp_unit_0067, &recomp_unit_0067_entry);
    runtime.register_function(0x08847000u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847008u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847028u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847044u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847054u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884705Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847064u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884706Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884707Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884709Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088470B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088470C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088470D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088470F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847114u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847124u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847134u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847154u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847170u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884717Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847188u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847198u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088471B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088471BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088471D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088471ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088471F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884720Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847228u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847234u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847248u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847264u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847270u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847274u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847284u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847294u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088472A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088472CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088472D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088472E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088472F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847300u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884730Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847314u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884732Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884733Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847358u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884736Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884737Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847384u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847398u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088473ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088473B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088473CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088473D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088473ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088473F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884740Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847418u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884742Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847438u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847440u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847458u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847460u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847478u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847484u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847494u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088474F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847508u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847518u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884751Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884752Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884753Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847550u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847574u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884757Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884758Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884759Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088475A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088475B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088475CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088475DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088475E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847610u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847630u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847698u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088476A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088476B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088476C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088476D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088476E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088476F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847704u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847718u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847728u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847734u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847744u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847758u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847768u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847778u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884778Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847798u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088477FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847808u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847818u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847828u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847834u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0884784Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847868u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847880u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847888u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847894u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088478ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088478C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088478E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088478E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088478F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847908u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847914u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847928u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847948u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847968u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847988u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847994u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x088479E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847A18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847A34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847A3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847A4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847A54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847A60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847ABCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847ACCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847AFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847B98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847BBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847BD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847BECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847BFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847C9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847CA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847CB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847CC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847CE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847CE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847CF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847D9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847DC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847DD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847DE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847DE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847DF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E28u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847E98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847EACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847EB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847EC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847ED4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847EE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847EF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847F98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08847FE8u, &recomp_unit_0067, "recomp_unit_0067");
}
} // namespace psprecomp
