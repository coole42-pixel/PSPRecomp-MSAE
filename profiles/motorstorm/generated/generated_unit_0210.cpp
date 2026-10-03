#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0210[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0,
    26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32,
    0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 53, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0,
    0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0,
    101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 129, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137,
    0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 190, 0, 191,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206,
    0, 207, 0, 0, 208, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 221, 0, 0, 0, 0,
    0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228,
};
void recomp_unit_0210_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088D6000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0210[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D6000;
    case 2u: goto L_088D6028;
    case 3u: goto L_088D6058;
    case 4u: goto L_088D6078;
    case 5u: goto L_088D6080;
    case 6u: goto L_088D6094;
    case 7u: goto L_088D60AC;
    case 8u: goto L_088D60B8;
    case 9u: goto L_088D60C4;
    case 10u: goto L_088D60CC;
    case 11u: goto L_088D60D4;
    case 12u: goto L_088D60E0;
    case 13u: goto L_088D60E8;
    case 14u: goto L_088D60F0;
    case 15u: goto L_088D6104;
    case 16u: goto L_088D6124;
    case 17u: goto L_088D6130;
    case 18u: goto L_088D6138;
    case 19u: goto L_088D6144;
    case 20u: goto L_088D614C;
    case 21u: goto L_088D6154;
    case 22u: goto L_088D616C;
    case 23u: goto L_088D61CC;
    case 24u: goto L_088D61E0;
    case 25u: goto L_088D61F8;
    case 26u: goto L_088D6200;
    case 27u: goto L_088D621C;
    case 28u: goto L_088D6254;
    case 29u: goto L_088D625C;
    case 30u: goto L_088D626C;
    case 31u: goto L_088D6274;
    case 32u: goto L_088D627C;
    case 33u: goto L_088D628C;
    case 34u: goto L_088D6294;
    case 35u: goto L_088D629C;
    case 36u: goto L_088D62AC;
    case 37u: goto L_088D62B4;
    case 38u: goto L_088D62BC;
    case 39u: goto L_088D62C4;
    case 40u: goto L_088D62CC;
    case 41u: goto L_088D62D4;
    case 42u: goto L_088D62E0;
    case 43u: goto L_088D62F8;
    case 44u: goto L_088D6308;
    case 45u: goto L_088D6310;
    case 46u: goto L_088D631C;
    case 47u: goto L_088D6334;
    case 48u: goto L_088D6348;
    case 49u: goto L_088D6350;
    case 50u: goto L_088D635C;
    case 51u: goto L_088D6370;
    case 52u: goto L_088D6380;
    case 53u: goto L_088D6384;
    case 54u: goto L_088D638C;
    case 55u: goto L_088D6398;
    case 56u: goto L_088D63A8;
    case 57u: goto L_088D63EC;
    case 58u: goto L_088D63F8;
    case 59u: goto L_088D6420;
    case 60u: goto L_088D6428;
    case 61u: goto L_088D644C;
    case 62u: goto L_088D645C;
    case 63u: goto L_088D646C;
    case 64u: goto L_088D647C;
    case 65u: goto L_088D648C;
    case 66u: goto L_088D6494;
    case 67u: goto L_088D64A4;
    case 68u: goto L_088D64A8;
    case 69u: goto L_088D64BC;
    case 70u: goto L_088D64C8;
    case 71u: goto L_088D64E0;
    case 72u: goto L_088D6510;
    case 73u: goto L_088D651C;
    case 74u: goto L_088D6544;
    case 75u: goto L_088D654C;
    case 76u: goto L_088D6564;
    case 77u: goto L_088D6570;
    case 78u: goto L_088D657C;
    case 79u: goto L_088D6598;
    case 80u: goto L_088D65B8;
    case 81u: goto L_088D65C0;
    case 82u: goto L_088D65D8;
    case 83u: goto L_088D65E8;
    case 84u: goto L_088D65F4;
    case 85u: goto L_088D6610;
    case 86u: goto L_088D661C;
    case 87u: goto L_088D6634;
    case 88u: goto L_088D6644;
    case 89u: goto L_088D6650;
    case 90u: goto L_088D666C;
    case 91u: goto L_088D6678;
    case 92u: goto L_088D6684;
    case 93u: goto L_088D668C;
    case 94u: goto L_088D6694;
    case 95u: goto L_088D66B0;
    case 96u: goto L_088D66B4;
    case 97u: goto L_088D66C4;
    case 98u: goto L_088D66DC;
    case 99u: goto L_088D66E8;
    case 100u: goto L_088D66F4;
    case 101u: goto L_088D6700;
    case 102u: goto L_088D6708;
    case 103u: goto L_088D6710;
    case 104u: goto L_088D672C;
    case 105u: goto L_088D6730;
    case 106u: goto L_088D6740;
    case 107u: goto L_088D6754;
    case 108u: goto L_088D6770;
    case 109u: goto L_088D6784;
    case 110u: goto L_088D678C;
    case 111u: goto L_088D6794;
    case 112u: goto L_088D67A0;
    case 113u: goto L_088D67B4;
    case 114u: goto L_088D67BC;
    case 115u: goto L_088D67C4;
    case 116u: goto L_088D67D0;
    case 117u: goto L_088D67DC;
    case 118u: goto L_088D67E4;
    case 119u: goto L_088D67EC;
    case 120u: goto L_088D67F4;
    case 121u: goto L_088D6804;
    case 122u: goto L_088D6828;
    case 123u: goto L_088D6838;
    case 124u: goto L_088D6848;
    case 125u: goto L_088D6858;
    case 126u: goto L_088D6860;
    case 127u: goto L_088D6868;
    case 128u: goto L_088D6870;
    case 129u: goto L_088D6874;
    case 130u: goto L_088D6888;
    case 131u: goto L_088D689C;
    case 132u: goto L_088D68A4;
    case 133u: goto L_088D68C0;
    case 134u: goto L_088D68D0;
    case 135u: goto L_088D68EC;
    case 136u: goto L_088D68F4;
    case 137u: goto L_088D68FC;
    case 138u: goto L_088D6904;
    case 139u: goto L_088D6914;
    case 140u: goto L_088D6920;
    case 141u: goto L_088D6930;
    case 142u: goto L_088D6938;
    case 143u: goto L_088D6984;
    case 144u: goto L_088D6990;
    case 145u: goto L_088D69A4;
    case 146u: goto L_088D69E4;
    case 147u: goto L_088D69F0;
    case 148u: goto L_088D69FC;
    case 149u: goto L_088D6A00;
    case 150u: goto L_088D6A14;
    case 151u: goto L_088D6A34;
    case 152u: goto L_088D6A38;
    case 153u: goto L_088D6A50;
    case 154u: goto L_088D6A58;
    case 155u: goto L_088D6A70;
    case 156u: goto L_088D6A7C;
    case 157u: goto L_088D6AD0;
    case 158u: goto L_088D6AD8;
    case 159u: goto L_088D6AE4;
    case 160u: goto L_088D6B0C;
    case 161u: goto L_088D6B24;
    case 162u: goto L_088D6B2C;
    case 163u: goto L_088D6B34;
    case 164u: goto L_088D6B54;
    case 165u: goto L_088D6B58;
    case 166u: goto L_088D6B68;
    case 167u: goto L_088D6B88;
    case 168u: goto L_088D6B94;
    case 169u: goto L_088D6BAC;
    case 170u: goto L_088D6BB0;
    case 171u: goto L_088D6BC4;
    case 172u: goto L_088D6BF8;
    case 173u: goto L_088D6C18;
    case 174u: goto L_088D6C20;
    case 175u: goto L_088D6C34;
    case 176u: goto L_088D6C4C;
    case 177u: goto L_088D6C90;
    case 178u: goto L_088D6CA0;
    case 179u: goto L_088D6CAC;
    case 180u: goto L_088D6CB4;
    case 181u: goto L_088D6CC8;
    case 182u: goto L_088D6CDC;
    case 183u: goto L_088D6CF4;
    case 184u: goto L_088D6CFC;
    case 185u: goto L_088D6D34;
    case 186u: goto L_088D6D44;
    case 187u: goto L_088D6D50;
    case 188u: goto L_088D6D5C;
    case 189u: goto L_088D6D70;
    case 190u: goto L_088D6D74;
    case 191u: goto L_088D6D7C;
    case 192u: goto L_088D6D88;
    case 193u: goto L_088D6DA0;
    case 194u: goto L_088D6DA8;
    case 195u: goto L_088D6DB4;
    case 196u: goto L_088D6DC8;
    case 197u: goto L_088D6DDC;
    case 198u: goto L_088D6E04;
    case 199u: goto L_088D6E2C;
    case 200u: goto L_088D6E34;
    case 201u: goto L_088D6E38;
    case 202u: goto L_088D6E40;
    case 203u: goto L_088D6E5C;
    case 204u: goto L_088D6E64;
    case 205u: goto L_088D6E70;
    case 206u: goto L_088D6E7C;
    case 207u: goto L_088D6E84;
    case 208u: goto L_088D6E90;
    case 209u: goto L_088D6E94;
    case 210u: goto L_088D6EC0;
    case 211u: goto L_088D6EC8;
    case 212u: goto L_088D6ED4;
    case 213u: goto L_088D6EE8;
    case 214u: goto L_088D6F04;
    case 215u: goto L_088D6F10;
    case 216u: goto L_088D6F18;
    case 217u: goto L_088D6F24;
    case 218u: goto L_088D6F34;
    case 219u: goto L_088D6F4C;
    case 220u: goto L_088D6F68;
    case 221u: goto L_088D6F6C;
    case 222u: goto L_088D6F84;
    case 223u: goto L_088D6F90;
    case 224u: goto L_088D6F9C;
    case 225u: goto L_088D6FC0;
    case 226u: goto L_088D6FC8;
    case 227u: goto L_088D6FE8;
    case 228u: goto L_088D6FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D6000:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2176), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2176)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2199), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D6028u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2178), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 199u, 0x088D5DA4u>(ctx, &aot_mem) && ctx.pc == 0x088D6028u) goto L_088D6028;
    return;
L_088D6028:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1308), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2224), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088D6078u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 104u, 0x0881C784u>(ctx, &aot_mem) && ctx.pc == 0x088D6078u) goto L_088D6078;
    return;
L_088D6078:
    aot_gpr[31] = (0x088D6080u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088D6080u) goto L_088D6080;
    return;
L_088D6080:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088D6094u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 229u, 0x088B7F30u>(ctx, &aot_mem) && ctx.pc == 0x088D6094u) goto L_088D6094;
    return;
L_088D6094:
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1204)));
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
      if (branch_taken) {
          goto L_088D60E8;
      }
      goto L_088D60AC;
    }
L_088D60AC:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2199))))));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D60E8;
      }
      goto L_088D60B8;
    }
L_088D60B8:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D60D4;
      }
      goto L_088D60C4;
    }
L_088D60C4:
    aot_gpr[31] = (0x088D60CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 153u, 0x088CDC18u>(ctx, &aot_mem) && ctx.pc == 0x088D60CCu) goto L_088D60CC;
    return;
L_088D60CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D60F0;
      }
      goto L_088D60D4;
    }
L_088D60D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1104)));
    aot_gpr[31] = (0x088D60E0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 153u, 0x088CDC18u>(ctx, &aot_mem) && ctx.pc == 0x088D60E0u) goto L_088D60E0;
    return;
L_088D60E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D60F0;
      }
      goto L_088D60E8;
    }
L_088D60E8:
    aot_gpr[31] = (0x088D60F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 153u, 0x088CDC18u>(ctx, &aot_mem) && ctx.pc == 0x088D60F0u) goto L_088D60F0;
    return;
L_088D60F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_088D6124;
L_088D6124:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088D6130u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088D6130u) goto L_088D6130;
    return;
L_088D6130:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6144;
      }
      goto L_088D6138;
    }
L_088D6138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D6154;
      }
      goto L_088D6144;
    }
L_088D6144:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D6124;
      }
      goto L_088D614C;
    }
L_088D614C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D6154;
      }
      goto L_088D6154;
    }
L_088D6154:
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
L_088D616C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[31]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D64E0;
      }
      goto L_088D61CC;
    }
L_088D61CC:
    aot_gpr[10] = (0u | 81u);
    aot_gpr[7] = (0u | 91u);
    aot_gpr[30] = (0u | 1000u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-5144));
    goto L_088D61E0;
L_088D61E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[20] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D64C8;
      }
      goto L_088D61F8;
    }
L_088D61F8:
    aot_gpr[31] = (0x088D6200u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 215u, 0x0881CF4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6200u) goto L_088D6200;
    return;
L_088D6200:
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[4] = (aot_gpr[2] & aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[4] >> 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] & 255u);
    aot_gpr[31] = (0x088D621Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 215u, 0x0881CF4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D621Cu) goto L_088D621C;
    return;
L_088D621C:
    aot_gpr[4] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[2] & aot_gpr[5]);
    aot_gpr[4] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[6] = (0u | 99u);
    aot_gpr[7] = (0u | 91u);
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[10] = (0u | 81u);
      if (branch_taken) {
          goto L_088D62B4;
      }
      goto L_088D6254;
    }
L_088D6254:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088D6274;
      }
      goto L_088D625C;
    }
L_088D625C:
    aot_gpr[18] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D626Cu);
    aot_gpr[6] = (0u | 2u);
    goto L_088D6104;
L_088D626C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D6274;
    }
L_088D6274:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D6294;
      }
      goto L_088D627C;
    }
L_088D627C:
    aot_gpr[18] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D628Cu);
    aot_gpr[6] = (0u | 2u);
    goto L_088D6104;
L_088D628C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D6294;
    }
L_088D6294:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D629C;
    }
L_088D629C:
    aot_gpr[18] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D62ACu);
    aot_gpr[6] = (0u | 3u);
    goto L_088D6104;
L_088D62AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D62B4;
    }
L_088D62B4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_088D62CC;
      }
      goto L_088D62BC;
    }
L_088D62BC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088D62CC;
      }
      goto L_088D62C4;
    }
L_088D62C4:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D62D4;
      }
      goto L_088D62CC;
    }
L_088D62CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D64A8;
      }
      goto L_088D62D4;
    }
L_088D62D4:
    aot_gpr[6] = (0u | 71u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D6310;
      }
      goto L_088D62E0;
    }
L_088D62E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2176)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-100));
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D62F8;
    }
L_088D62F8:
    aot_gpr[18] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D6308u);
    aot_gpr[6] = (0u | 2u);
    goto L_088D6104;
L_088D6308:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D6310;
    }
L_088D6310:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6350;
      }
      goto L_088D631C;
    }
L_088D631C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2176)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-100));
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D6334;
    }
L_088D6334:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[18] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D6348u);
    aot_gpr[6] = (0u | 2u);
    goto L_088D6104;
L_088D6348:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D6350;
    }
L_088D6350:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 99 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D635C;
    }
L_088D635C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2176)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D6384;
      }
      goto L_088D6370;
    }
L_088D6370:
    aot_gpr[18] = (0u | 10u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088D6380u);
    aot_gpr[6] = (0u | 10u);
    goto L_088D6104;
L_088D6380:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_088D6384;
L_088D6384:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D64A4;
      }
      goto L_088D638C;
    }
L_088D638C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D645C;
      }
      goto L_088D6398;
    }
L_088D6398:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D63A8u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088D63A8u) goto L_088D63A8;
    return;
L_088D63A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u < aot_gpr[21] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    aot_gpr[6] = (20563u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20575));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088D63ECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088D63ECu) goto L_088D63EC;
    return;
L_088D63EC:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D6428;
      }
      goto L_088D63F8;
    }
L_088D63F8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088D6420u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D6420u) goto L_088D6420;
    return;
L_088D6420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D644C;
      }
      goto L_088D6428;
    }
L_088D6428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088D644Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D644Cu) goto L_088D644C;
    return;
L_088D644C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[5] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
      if (branch_taken) {
          goto L_088D64A4;
      }
      goto L_088D645C;
    }
L_088D645C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D646Cu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088D646Cu) goto L_088D646C;
    return;
L_088D646C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 10u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[4]);
      if (branch_taken) {
          goto L_088D6494;
      }
      goto L_088D647C;
    }
L_088D647C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[31] = (0x088D648Cu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 85u, 0x088999D0u>(ctx, &aot_mem) && ctx.pc == 0x088D648Cu) goto L_088D648C;
    return;
L_088D648C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D64A4;
      }
      goto L_088D6494;
    }
L_088D6494:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[31] = (0x088D64A4u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 34u, 0x088C626Cu>(ctx, &aot_mem) && ctx.pc == 0x088D64A4u) goto L_088D64A4;
    return;
L_088D64A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_088D64A8;
L_088D64A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088D61F8;
      }
      goto L_088D64BC;
    }
L_088D64BC:
    aot_gpr[7] = (0u | 91u);
    aot_gpr[10] = (0u | 81u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5152)));
    goto L_088D64C8;
L_088D64C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[4]);
      if (branch_taken) {
          goto L_088D61E0;
      }
      goto L_088D64E0;
    }
L_088D64E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D651C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[18] = (2218u << 16u);
    goto L_088D6544;
L_088D6544:
    aot_gpr[31] = (0x088D654Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D6510;
L_088D654C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D657C;
      }
      goto L_088D6564;
    }
L_088D6564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[31] = (0x088D6570u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1524)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x088C61B8u>(ctx, &aot_mem) && ctx.pc == 0x088D6570u) goto L_088D6570;
    return;
L_088D6570:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D6544;
      }
      goto L_088D657C;
    }
L_088D657C:
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
L_088D6598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_088D65B8;
L_088D65B8:
    aot_gpr[31] = (0x088D65C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088D6510;
L_088D65C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(868)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D661C;
      }
      goto L_088D65D8;
    }
L_088D65D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1540)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088D65E8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 200u, 0x08943F24u>(ctx, &aot_mem) && ctx.pc == 0x088D65E8u) goto L_088D65E8;
    return;
L_088D65E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1540)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6610;
      }
      goto L_088D65F4;
    }
L_088D65F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088D6610u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D6610u) goto L_088D6610;
    return;
L_088D6610:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D65B8;
      }
      goto L_088D661C;
    }
L_088D661C:
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
L_088D6634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088D6644u);
    // nop
    goto L_088D6598;
L_088D6644:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6650:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D66B4;
      }
      goto L_088D666C;
    }
L_088D666C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D668C;
      }
      goto L_088D6678;
    }
L_088D6678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088D6684u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x088D6684u) goto L_088D6684;
    return;
L_088D6684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D66B0;
      }
      goto L_088D668C;
    }
L_088D668C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D66B0;
      }
      goto L_088D6694;
    }
L_088D6694:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088D66B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D66B0u) goto L_088D66B0;
    return;
L_088D66B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2120), 0u);
    goto L_088D66B4;
L_088D66B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D66C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088D66DC;
L_088D66DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2124)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6730;
      }
      goto L_088D66E8;
    }
L_088D66E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6708;
      }
      goto L_088D66F4;
    }
L_088D66F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088D6700u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 63u, 0x08927680u>(ctx, &aot_mem) && ctx.pc == 0x088D6700u) goto L_088D6700;
    return;
L_088D6700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D672C;
      }
      goto L_088D6708;
    }
L_088D6708:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D672C;
      }
      goto L_088D6710;
    }
L_088D6710:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088D672Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D672Cu) goto L_088D672C;
    return;
L_088D672C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2124), 0u);
    goto L_088D6730;
L_088D6730:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D66DC;
      }
      goto L_088D6740;
    }
L_088D6740:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6754:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D678C;
      }
      goto L_088D6770;
    }
L_088D6770:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(5112));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088D6794;
      }
      goto L_088D6784;
    }
L_088D6784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6860;
      }
      goto L_088D678C;
    }
L_088D678C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6888;
      }
      goto L_088D6794;
    }
L_088D6794:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2195)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6860;
      }
      goto L_088D67A0;
    }
L_088D67A0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x088D67B4u);
    aot_gpr[7] = (0u | 1u);
    goto L_088D616C;
L_088D67B4:
    aot_gpr[31] = (0x088D67BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088D651C;
L_088D67BC:
    aot_gpr[31] = (0x088D67C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088D6634;
L_088D67C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2168)));
    aot_gpr[31] = (0x088D67D0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2172)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x088D67D0u) goto L_088D67D0;
    return;
L_088D67D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D67E4;
      }
      goto L_088D67DC;
    }
L_088D67DC:
    aot_gpr[31] = (0x088D67E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088D67E4u) goto L_088D67E4;
    return;
L_088D67E4:
    aot_gpr[31] = (0x088D67ECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088D6650;
L_088D67EC:
    aot_gpr[31] = (0x088D67F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088D66C4;
L_088D67F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088D6804u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 73u, 0x088E3610u>(ctx, &aot_mem) && ctx.pc == 0x088D6804u) goto L_088D6804;
    return;
L_088D6804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088D6828u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D6828u) goto L_088D6828;
    return;
L_088D6828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088D6838u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 98u, 0x088E37C0u>(ctx, &aot_mem) && ctx.pc == 0x088D6838u) goto L_088D6838;
    return;
L_088D6838:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x088D6848u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 102u, 0x088E3820u>(ctx, &aot_mem) && ctx.pc == 0x088D6848u) goto L_088D6848;
    return;
L_088D6848:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088D6858u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x088DBFBCu>(ctx, &aot_mem) && ctx.pc == 0x088D6858u) goto L_088D6858;
    return;
L_088D6858:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1100), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088D6860;
L_088D6860:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6874;
      }
      goto L_088D6868;
    }
L_088D6868:
    aot_gpr[31] = (0x088D6870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6870u) goto L_088D6870;
    return;
L_088D6870:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_088D6874;
L_088D6874:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2232)));
    aot_gpr[31] = (0x088D6888u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32700));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 149u, 0x088C5A40u>(ctx, &aot_mem) && ctx.pc == 0x088D6888u) goto L_088D6888;
    return;
L_088D6888:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D689C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D68A4:
    aot_gpr[4] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[9] = (49152u << 16u);
      if (branch_taken) {
          goto L_088D6930;
      }
      goto L_088D68C0;
    }
L_088D68C0:
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (16384u << 16u);
    goto L_088D68D0;
L_088D68D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[13] = (aot_gpr[12] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D68F4;
      }
      goto L_088D68EC;
    }
L_088D68EC:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_088D68FC;
      }
      goto L_088D68F4;
    }
L_088D68F4:
    { const bool branch_taken = aot_gpr[12] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D6920;
      }
      goto L_088D68FC;
    }
L_088D68FC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088D6914;
      }
      goto L_088D6904;
    }
L_088D6904:
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088D6920;
      }
      goto L_088D6914;
    }
L_088D6914:
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    goto L_088D6920;
L_088D6920:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D68D0;
      }
      goto L_088D6930;
    }
L_088D6930:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6938:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 12u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    aot_gpr[31] = (0x088D6984u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 144u, 0x0891FA44u>(ctx, &aot_mem) && ctx.pc == 0x088D6984u) goto L_088D6984;
    return;
L_088D6984:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2184));
    aot_gpr[31] = (0x088D6990u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 224u, 0x0891FFDCu>(ctx, &aot_mem) && ctx.pc == 0x088D6990u) goto L_088D6990;
    return;
L_088D6990:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088D69A4u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D69A4u) goto L_088D69A4;
    return;
L_088D69A4:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088D69E4u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D69E4u) goto L_088D69E4;
    return;
L_088D69E4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088D6A00;
      }
      goto L_088D69F0;
    }
L_088D69F0:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088D69FCu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x088D69FCu) goto L_088D69FC;
    return;
L_088D69FC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_088D6A00;
L_088D6A00:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088D6A38;
      }
      goto L_088D6A14;
    }
L_088D6A14:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D6A34u);
    aot_gpr[7] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 168u, 0x08920B54u>(ctx, &aot_mem) && ctx.pc == 0x088D6A34u) goto L_088D6A34;
    return;
L_088D6A34:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    goto L_088D6A38;
L_088D6A38:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D6A50u);
    aot_gpr[7] = (0u | 0u);
    goto L_088D68A4;
L_088D6A50:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6AD0;
      }
      goto L_088D6A58;
    }
L_088D6A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(11));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088D6A70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A70u) goto L_088D6A70;
    return;
L_088D6A70:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088D6AD0;
      }
      goto L_088D6A7C;
    }
L_088D6A7C:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (0u | 1u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[5]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088D6AD0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6AD0u) goto L_088D6AD0;
    return;
L_088D6AD0:
    aot_gpr[31] = (0x088D6AD8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 103u, 0x0885A688u>(ctx, &aot_mem) && ctx.pc == 0x088D6AD8u) goto L_088D6AD8;
    return;
L_088D6AD8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088D6AE4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 5u, 0x08920054u>(ctx, &aot_mem) && ctx.pc == 0x088D6AE4u) goto L_088D6AE4;
    return;
L_088D6AE4:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6B0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D6B58;
      }
      goto L_088D6B24;
    }
L_088D6B24:
    aot_gpr[31] = (0x088D6B2Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 103u, 0x0885A688u>(ctx, &aot_mem) && ctx.pc == 0x088D6B2Cu) goto L_088D6B2C;
    return;
L_088D6B2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6B58;
      }
      goto L_088D6B34;
    }
L_088D6B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088D6B54u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(176)));
    goto L_088D6938;
L_088D6B54:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2120), aot_gpr[2]);
    goto L_088D6B58;
L_088D6B58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6B68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088D6B88u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088D6B88u) goto L_088D6B88;
    return;
L_088D6B88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6BAC;
      }
      goto L_088D6B94;
    }
L_088D6B94:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(11))))));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088D6BB0;
      }
      goto L_088D6BAC;
    }
L_088D6BAC:
    aot_gpr[2] = (0u | 0u);
    goto L_088D6BB0;
L_088D6BB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6BC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088D6BF8;
L_088D6BF8:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2202), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2060), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2072), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D6BF8;
      }
      goto L_088D6C18;
    }
L_088D6C18:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088D6C20;
L_088D6C20:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2000), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D6C20;
      }
      goto L_088D6C34;
    }
L_088D6C34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1964), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(23)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6DA8;
      }
      goto L_088D6C4C;
    }
L_088D6C4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2096), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1980), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(116)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1988), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1984), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1992), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1944), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1996), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088D6CC8;
      }
      goto L_088D6C90;
    }
L_088D6C90:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(102)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D6CA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D6CA0u) goto L_088D6CA0;
    return;
L_088D6CA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D6CB4;
      }
      goto L_088D6CAC;
    }
L_088D6CAC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1944), aot_gpr[7]);
      if (branch_taken) {
          goto L_088D6CC8;
      }
      goto L_088D6CB4;
    }
L_088D6CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6C90;
      }
      goto L_088D6CC8;
    }
L_088D6CC8:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[21] | 0u);
    aot_gpr[18] = (aot_gpr[16] | 0u);
    goto L_088D6CDC;
L_088D6CDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1948), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088D6CF4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_088D6B68;
L_088D6CF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6D88;
      }
      goto L_088D6CFC;
    }
L_088D6CFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2012), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2048), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2036), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(144))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2060), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(150))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2072), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088D6D70;
      }
      goto L_088D6D34;
    }
L_088D6D34:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088D6D44u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088D6D44u) goto L_088D6D44;
    return;
L_088D6D44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D6D5C;
      }
      goto L_088D6D50;
    }
L_088D6D50:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1948), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2012)));
      if (branch_taken) {
          goto L_088D6D74;
      }
      goto L_088D6D5C;
    }
L_088D6D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6D34;
      }
      goto L_088D6D70;
    }
L_088D6D70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2012)));
    goto L_088D6D74;
L_088D6D74:
    aot_gpr[31] = (0x088D6D7Cu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 193u, 0x0885AC08u>(ctx, &aot_mem) && ctx.pc == 0x088D6D7Cu) goto L_088D6D7C;
    return;
L_088D6D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1948)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_088D6D88;
L_088D6D88:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088D6CDC;
      }
      goto L_088D6DA0;
    }
L_088D6DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6DDC;
      }
      goto L_088D6DA8;
    }
L_088D6DA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1944), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088D6DB4;
L_088D6DB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1948), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D6DB4;
      }
      goto L_088D6DC8;
    }
L_088D6DC8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2096), aot_gpr[4]);
    aot_gpr[4] = (65409u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1980), aot_gpr[4]);
    goto L_088D6DDC;
L_088D6DDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6E04:
    aot_gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (0u | 100u);
    aot_gpr[5] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[2] = (ctx.lo);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E34;
      }
      goto L_088D6E2C;
    }
L_088D6E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E38;
      }
      goto L_088D6E34;
    }
L_088D6E34:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_088D6E38;
L_088D6E38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D6E70;
      }
      goto L_088D6E5C;
    }
L_088D6E5C:
    aot_gpr[31] = (0x088D6E64u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 95u, 0x088FF928u>(ctx, &aot_mem) && ctx.pc == 0x088D6E64u) goto L_088D6E64;
    return;
L_088D6E64:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E5C;
      }
      goto L_088D6E70;
    }
L_088D6E70:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2176)));
        goto L_088D6E94;
    }
    goto L_088D6E7C;
L_088D6E7C:
    aot_gpr[31] = (0x088D6E84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 95u, 0x088FF928u>(ctx, &aot_mem) && ctx.pc == 0x088D6E84u) goto L_088D6E84;
    return;
L_088D6E84:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E7C;
      }
      goto L_088D6E90;
    }
L_088D6E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2176)));
    goto L_088D6E94;
L_088D6E94:
    aot_gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(504));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6ED4;
      }
      goto L_088D6EC0;
    }
L_088D6EC0:
    aot_gpr[31] = (0x088D6EC8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 95u, 0x088FF928u>(ctx, &aot_mem) && ctx.pc == 0x088D6EC8u) goto L_088D6EC8;
    return;
L_088D6EC8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6EC0;
      }
      goto L_088D6ED4;
    }
L_088D6ED4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6EE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    goto L_088D6F04;
L_088D6F04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6F24;
      }
      goto L_088D6F10;
    }
L_088D6F10:
    aot_gpr[31] = (0x088D6F18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 95u, 0x088FF928u>(ctx, &aot_mem) && ctx.pc == 0x088D6F18u) goto L_088D6F18;
    return;
L_088D6F18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6F10;
      }
      goto L_088D6F24;
    }
L_088D6F24:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088D6F04;
      }
      goto L_088D6F34;
    }
L_088D6F34:
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
L_088D6F4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2186)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D6FF0;
      }
      goto L_088D6F68;
    }
L_088D6F68:
    aot_gpr[4] = (0u | 0u);
    goto L_088D6F6C;
L_088D6F6C:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6F6C;
      }
      goto L_088D6F84;
    }
L_088D6F84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6FE8;
      }
      goto L_088D6F90;
    }
L_088D6F90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2176)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6FE8;
      }
      goto L_088D6F9C;
    }
L_088D6F9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2178)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(84));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6FE8;
      }
      goto L_088D6FC0;
    }
L_088D6FC0:
    aot_gpr[31] = (0x088D6FC8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 95u, 0x088FF928u>(ctx, &aot_mem) && ctx.pc == 0x088D6FC8u) goto L_088D6FC8;
    return;
L_088D6FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1424))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6FC0;
      }
      goto L_088D6FE8;
    }
L_088D6FE8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2186), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088D6FF0;
L_088D6FF0:
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

void recomp_unit_0210(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0210_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_210(Runtime &runtime) {
    runtime.register_generated_unit(210u, 0x088D6000u, 4096u, &recomp_unit_0210, &recomp_unit_0210_entry);
    runtime.register_function(0x088D6000u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6028u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6058u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6078u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6080u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6094u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60ACu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60B8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60C4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60CCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60D4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60E0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60E8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D60F0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6104u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6124u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6130u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6138u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6144u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D614Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6154u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D616Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D61CCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D61E0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D61F8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6200u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D621Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6254u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D625Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D626Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6274u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D627Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D628Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6294u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D629Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62ACu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62B4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62BCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62C4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62CCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62D4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62E0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D62F8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6308u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6310u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D631Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6334u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6348u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6350u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D635Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6370u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6380u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6384u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D638Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6398u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D63A8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D63ECu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D63F8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6420u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6428u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D644Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D645Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D646Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D647Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D648Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6494u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D64A4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D64A8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D64BCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D64C8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D64E0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6510u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D651Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6544u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D654Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6564u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6570u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D657Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6598u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D65B8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D65C0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D65D8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D65E8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D65F4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6610u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D661Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6634u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6644u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6650u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D666Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6678u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6684u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D668Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6694u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D66B0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D66B4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D66C4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D66DCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D66E8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D66F4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6700u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6708u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6710u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D672Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6730u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6740u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6754u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6770u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6784u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D678Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6794u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67A0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67B4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67BCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67C4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67D0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67DCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67E4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67ECu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D67F4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6804u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6828u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6838u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6848u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6858u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6860u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6868u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6870u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6874u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6888u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D689Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D68A4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D68C0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D68D0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D68ECu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D68F4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D68FCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6904u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6914u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6920u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6930u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6938u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6984u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6990u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D69A4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D69E4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D69F0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D69FCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A00u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A14u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A34u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A38u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A50u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A58u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A70u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6A7Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6AD0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6AD8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6AE4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B0Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B24u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B2Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B34u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B54u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B58u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B68u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B88u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6B94u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6BACu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6BB0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6BC4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6BF8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6C18u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6C20u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6C34u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6C4Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6C90u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CA0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CACu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CB4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CC8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CDCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CF4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6CFCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D34u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D44u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D50u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D5Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D70u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D74u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D7Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6D88u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6DA0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6DA8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6DB4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6DC8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6DDCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E04u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E2Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E34u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E38u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E40u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E5Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E64u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E70u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E7Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E84u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E90u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6E94u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6EC0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6EC8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6ED4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6EE8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F04u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F10u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F18u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F24u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F34u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F4Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F68u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F6Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F84u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F90u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6F9Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6FC0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6FC8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6FE8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x088D6FF0u, &recomp_unit_0210, "recomp_unit_0210");
}
} // namespace psprecomp
