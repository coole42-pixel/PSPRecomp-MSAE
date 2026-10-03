#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0429[1019] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138,
};
void recomp_unit_0429_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B1000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0429[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B1000;
    case 2u: goto L_089B1008;
    case 3u: goto L_089B1028;
    case 4u: goto L_089B1044;
    case 5u: goto L_089B1064;
    case 6u: goto L_089B1080;
    case 7u: goto L_089B10A0;
    case 8u: goto L_089B10BC;
    case 9u: goto L_089B10DC;
    case 10u: goto L_089B10F8;
    case 11u: goto L_089B1118;
    case 12u: goto L_089B1134;
    case 13u: goto L_089B1154;
    case 14u: goto L_089B1170;
    case 15u: goto L_089B118C;
    case 16u: goto L_089B11A8;
    case 17u: goto L_089B11C8;
    case 18u: goto L_089B11E4;
    case 19u: goto L_089B1204;
    case 20u: goto L_089B1220;
    case 21u: goto L_089B1240;
    case 22u: goto L_089B125C;
    case 23u: goto L_089B127C;
    case 24u: goto L_089B1298;
    case 25u: goto L_089B12BC;
    case 26u: goto L_089B12D4;
    case 27u: goto L_089B12F4;
    case 28u: goto L_089B130C;
    case 29u: goto L_089B132C;
    case 30u: goto L_089B1348;
    case 31u: goto L_089B1368;
    case 32u: goto L_089B1384;
    case 33u: goto L_089B13A4;
    case 34u: goto L_089B13C0;
    case 35u: goto L_089B13E0;
    case 36u: goto L_089B13FC;
    case 37u: goto L_089B141C;
    case 38u: goto L_089B1438;
    case 39u: goto L_089B1458;
    case 40u: goto L_089B1474;
    case 41u: goto L_089B1494;
    case 42u: goto L_089B14B0;
    case 43u: goto L_089B14D0;
    case 44u: goto L_089B14EC;
    case 45u: goto L_089B150C;
    case 46u: goto L_089B1528;
    case 47u: goto L_089B1548;
    case 48u: goto L_089B1564;
    case 49u: goto L_089B1584;
    case 50u: goto L_089B15A0;
    case 51u: goto L_089B15C4;
    case 52u: goto L_089B15DC;
    case 53u: goto L_089B15F4;
    case 54u: goto L_089B1614;
    case 55u: goto L_089B1634;
    case 56u: goto L_089B164C;
    case 57u: goto L_089B166C;
    case 58u: goto L_089B1684;
    case 59u: goto L_089B16A4;
    case 60u: goto L_089B16C0;
    case 61u: goto L_089B16E0;
    case 62u: goto L_089B1700;
    case 63u: goto L_089B171C;
    case 64u: goto L_089B1738;
    case 65u: goto L_089B1758;
    case 66u: goto L_089B1774;
    case 67u: goto L_089B1794;
    case 68u: goto L_089B17B0;
    case 69u: goto L_089B17D0;
    case 70u: goto L_089B17F0;
    case 71u: goto L_089B180C;
    case 72u: goto L_089B182C;
    case 73u: goto L_089B1848;
    case 74u: goto L_089B1868;
    case 75u: goto L_089B1884;
    case 76u: goto L_089B18A4;
    case 77u: goto L_089B18C0;
    case 78u: goto L_089B18E0;
    case 79u: goto L_089B18FC;
    case 80u: goto L_089B191C;
    case 81u: goto L_089B1938;
    case 82u: goto L_089B1958;
    case 83u: goto L_089B1974;
    case 84u: goto L_089B1994;
    case 85u: goto L_089B19B0;
    case 86u: goto L_089B19CC;
    case 87u: goto L_089B19EC;
    case 88u: goto L_089B1A08;
    case 89u: goto L_089B1A28;
    case 90u: goto L_089B1A44;
    case 91u: goto L_089B1A64;
    case 92u: goto L_089B1A80;
    case 93u: goto L_089B1AA0;
    case 94u: goto L_089B1ABC;
    case 95u: goto L_089B1ADC;
    case 96u: goto L_089B1AF8;
    case 97u: goto L_089B1B18;
    case 98u: goto L_089B1B34;
    case 99u: goto L_089B1B54;
    case 100u: goto L_089B1B70;
    case 101u: goto L_089B1B90;
    case 102u: goto L_089B1BAC;
    case 103u: goto L_089B1BCC;
    case 104u: goto L_089B1BE8;
    case 105u: goto L_089B1C08;
    case 106u: goto L_089B1C24;
    case 107u: goto L_089B1C44;
    case 108u: goto L_089B1C60;
    case 109u: goto L_089B1C80;
    case 110u: goto L_089B1C9C;
    case 111u: goto L_089B1CBC;
    case 112u: goto L_089B1CD8;
    case 113u: goto L_089B1CF8;
    case 114u: goto L_089B1D14;
    case 115u: goto L_089B1D34;
    case 116u: goto L_089B1D50;
    case 117u: goto L_089B1D70;
    case 118u: goto L_089B1D8C;
    case 119u: goto L_089B1DAC;
    case 120u: goto L_089B1DC8;
    case 121u: goto L_089B1DE8;
    case 122u: goto L_089B1E04;
    case 123u: goto L_089B1E24;
    case 124u: goto L_089B1E40;
    case 125u: goto L_089B1E60;
    case 126u: goto L_089B1E7C;
    case 127u: goto L_089B1E9C;
    case 128u: goto L_089B1EB8;
    case 129u: goto L_089B1ED8;
    case 130u: goto L_089B1EF4;
    case 131u: goto L_089B1F14;
    case 132u: goto L_089B1F34;
    case 133u: goto L_089B1F50;
    case 134u: goto L_089B1F70;
    case 135u: goto L_089B1F8C;
    case 136u: goto L_089B1FAC;
    case 137u: goto L_089B1FC8;
    case 138u: goto L_089B1FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B1000:
    aot_gpr[31] = (0x089B1008u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1008u) goto L_089B1008;
    return;
L_089B1008:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29104));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11520));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1028u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1028u) goto L_089B1028;
    return;
L_089B1028:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18344));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(47));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1044u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1044u) goto L_089B1044;
    return;
L_089B1044:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32480));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18024));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(30));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1064u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1064u) goto L_089B1064;
    return;
L_089B1064:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(25748));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(101));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1080u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1080u) goto L_089B1080;
    return;
L_089B1080:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32536));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26004));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(102));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B10A0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B10A0u) goto L_089B10A0;
    return;
L_089B10A0:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26092));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(103));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B10BCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B10BCu) goto L_089B10BC;
    return;
L_089B10BC:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32592));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26284));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B10DCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B10DCu) goto L_089B10DC;
    return;
L_089B10DC:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23780));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(93));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B10F8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B10F8u) goto L_089B10F8;
    return;
L_089B10F8:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32648));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(29056));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(94));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B1118u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1118u) goto L_089B1118;
    return;
L_089B1118:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23848));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1134u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1134u) goto L_089B1134;
    return;
L_089B1134:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32704));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24920));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B1154u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1154u) goto L_089B1154;
    return;
L_089B1154:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(25668));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(121));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1170u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1170u) goto L_089B1170;
    return;
L_089B1170:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32760));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(122));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B118Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B118Cu) goto L_089B118C;
    return;
L_089B118C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2864));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B11A8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B11A8u) goto L_089B11A8;
    return;
L_089B11A8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32720));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18628));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(34));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B11C8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B11C8u) goto L_089B11C8;
    return;
L_089B11C8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9868));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(243));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B11E4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B11E4u) goto L_089B11E4;
    return;
L_089B11E4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32664));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9664));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(36));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1204u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1204u) goto L_089B1204;
    return;
L_089B1204:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10084));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(37));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1220u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1220u) goto L_089B1220;
    return;
L_089B1220:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32608));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9976));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(38));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1240u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1240u) goto L_089B1240;
    return;
L_089B1240:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27452));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(113));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B125Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B125Cu) goto L_089B125C;
    return;
L_089B125C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32552));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27532));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(114));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B127Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B127Cu) goto L_089B127C;
    return;
L_089B127C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10260));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(39));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1298u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1298u) goto L_089B1298;
    return;
L_089B1298:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32496));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10192));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B12BCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B12BCu) goto L_089B12BC;
    return;
L_089B12BC:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(1556));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(41));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B12D4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B12D4u) goto L_089B12D4;
    return;
L_089B12D4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32488));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-16308));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(42));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B12F4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B12F4u) goto L_089B12F4;
    return;
L_089B12F4:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(1556));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(105));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B130Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B130Cu) goto L_089B130C;
    return;
L_089B130C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32432));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26404));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(106));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B132Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B132Cu) goto L_089B132C;
    return;
L_089B132C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19808));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(43));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1348u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1348u) goto L_089B1348;
    return;
L_089B1348:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32376));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19704));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1368u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1368u) goto L_089B1368;
    return;
L_089B1368:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9340));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(45));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1384u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1384u) goto L_089B1384;
    return;
L_089B1384:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32320));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9248));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(46));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B13A4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B13A4u) goto L_089B13A4;
    return;
L_089B13A4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-16144));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(47));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B13C0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B13C0u) goto L_089B13C0;
    return;
L_089B13C0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32264));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-16052));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B13E0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B13E0u) goto L_089B13E0;
    return;
L_089B13E0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8896));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(49));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B13FCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B13FCu) goto L_089B13FC;
    return;
L_089B13FC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32208));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8804));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(50));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B141Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B141Cu) goto L_089B141C;
    return;
L_089B141C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-16712));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(53));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1438u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1438u) goto L_089B1438;
    return;
L_089B1438:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32152));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-16620));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(54));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B1458u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1458u) goto L_089B1458;
    return;
L_089B1458:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20016));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(53));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1474u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1474u) goto L_089B1474;
    return;
L_089B1474:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32096));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19924));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(54));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1494u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1494u) goto L_089B1494;
    return;
L_089B1494:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17024));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(55));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B14B0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B14B0u) goto L_089B14B0;
    return;
L_089B14B0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32040));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-16916));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B14D0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B14D0u) goto L_089B14D0;
    return;
L_089B14D0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17336));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(57));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B14ECu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B14ECu) goto L_089B14EC;
    return;
L_089B14EC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31984));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17216));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(58));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B150Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B150Cu) goto L_089B150C;
    return;
L_089B150C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15148));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1528u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1528u) goto L_089B1528;
    return;
L_089B1528:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31616));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15080));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(62));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1548u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1548u) goto L_089B1548;
    return;
L_089B1548:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20656));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(63));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1564u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1564u) goto L_089B1564;
    return;
L_089B1564:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31560));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20564));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1584u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1584u) goto L_089B1584;
    return;
L_089B1584:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8508));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(65));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B15A0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B15A0u) goto L_089B15A0;
    return;
L_089B15A0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31504));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8416));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(66));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B15C4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B15C4u) goto L_089B15C4;
    return;
L_089B15C4:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-21096));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B15DCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B15DCu) goto L_089B15DC;
    return;
L_089B15DC:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-21096));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(99));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B15F4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B15F4u) goto L_089B15F4;
    return;
L_089B15F4:
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-20992));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31448));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1614u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1614u) goto L_089B1614;
    return;
L_089B1614:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-20992));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31300));
    aot_gpr[16] = (2203u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B1634u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1634u) goto L_089B1634;
    return;
L_089B1634:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(30028));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B164Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B164Cu) goto L_089B164C;
    return;
L_089B164C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31088));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23256));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(85));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B166Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B166Cu) goto L_089B166C;
    return;
L_089B166C:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(30028));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(86));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1684u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1684u) goto L_089B1684;
    return;
L_089B1684:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31032));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23320));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(87));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B16A4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B16A4u) goto L_089B16A4;
    return;
L_089B16A4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11428));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(71));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B16C0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B16C0u) goto L_089B16C0;
    return;
L_089B16C0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30808));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11336));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B16E0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B16E0u) goto L_089B16E0;
    return;
L_089B16E0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30752));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5352));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(73));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1700u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1700u) goto L_089B1700;
    return;
L_089B1700:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15704));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(75));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B171Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B171Cu) goto L_089B171C;
    return;
L_089B171C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15796));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(76));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1738u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1738u) goto L_089B1738;
    return;
L_089B1738:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30744));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15612));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(77));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1758u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1758u) goto L_089B1758;
    return;
L_089B1758:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6520));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(78));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1774u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1774u) goto L_089B1774;
    return;
L_089B1774:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30688));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6292));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(79));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1794u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1794u) goto L_089B1794;
    return;
L_089B1794:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18948));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(49));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B17B0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B17B0u) goto L_089B17B0;
    return;
L_089B17B0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30624));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18872));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(81));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B17D0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B17D0u) goto L_089B17D0;
    return;
L_089B17D0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30568));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2456));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(83));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B17F0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B17F0u) goto L_089B17F0;
    return;
L_089B17F0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18540));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B180Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B180Cu) goto L_089B180C;
    return;
L_089B180C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30504));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18432));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(85));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B182Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B182Cu) goto L_089B182C;
    return;
L_089B182C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17768));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(86));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1848u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1848u) goto L_089B1848;
    return;
L_089B1848:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30448));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17676));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(87));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1868u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1868u) goto L_089B1868;
    return;
L_089B1868:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14732));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1884u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1884u) goto L_089B1884;
    return;
L_089B1884:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30392));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14628));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(89));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B18A4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B18A4u) goto L_089B18A4;
    return;
L_089B18A4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14468));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(90));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B18C0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B18C0u) goto L_089B18C0;
    return;
L_089B18C0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30336));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14360));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(91));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B18E0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B18E0u) goto L_089B18E0;
    return;
L_089B18E0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5984));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(92));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B18FCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B18FCu) goto L_089B18FC;
    return;
L_089B18FC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30280));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5876));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(93));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B191Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B191Cu) goto L_089B191C;
    return;
L_089B191C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21668));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(94));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1938u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1938u) goto L_089B1938;
    return;
L_089B1938:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30224));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21560));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(95));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1958u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1958u) goto L_089B1958;
    return;
L_089B1958:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8172));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1974u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1974u) goto L_089B1974;
    return;
L_089B1974:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30168));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8068));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(97));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1994u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1994u) goto L_089B1994;
    return;
L_089B1994:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10444));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(98));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B19B0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B19B0u) goto L_089B19B0;
    return;
L_089B19B0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10528));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(238));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B19CCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B19CCu) goto L_089B19CC;
    return;
L_089B19CC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30112));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10336));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(99));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B19ECu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B19ECu) goto L_089B19EC;
    return;
L_089B19EC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19344));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1A08u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1A08u) goto L_089B1A08;
    return;
L_089B1A08:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30056));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19240));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(101));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1A28u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1A28u) goto L_089B1A28;
    return;
L_089B1A28:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7808));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(102));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1A44u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1A44u) goto L_089B1A44;
    return;
L_089B1A44:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29944));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7688));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(103));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1A64u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1A64u) goto L_089B1A64;
    return;
L_089B1A64:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7416));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1A80u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1A80u) goto L_089B1A80;
    return;
L_089B1A80:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29888));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7324));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(105));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1AA0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1AA0u) goto L_089B1AA0;
    return;
L_089B1AA0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7992));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(106));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1ABCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1ABCu) goto L_089B1ABC;
    return;
L_089B1ABC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29832));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7884));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(107));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1ADCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1ADCu) goto L_089B1ADC;
    return;
L_089B1ADC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12028));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(108));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1AF8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1AF8u) goto L_089B1AF8;
    return;
L_089B1AF8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29776));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27640));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(119));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B1B18u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1B18u) goto L_089B1B18;
    return;
L_089B1B18:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7004));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(110));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1B34u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1B34u) goto L_089B1B34;
    return;
L_089B1B34:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29720));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6920));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(111));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1B54u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1B54u) goto L_089B1B54;
    return;
L_089B1B54:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9080));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1B70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1B70u) goto L_089B1B70;
    return;
L_089B1B70:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29664));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8972));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(113));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1B90u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1B90u) goto L_089B1B90;
    return;
L_089B1B90:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17936));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(114));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1BACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1BACu) goto L_089B1BAC;
    return;
L_089B1BAC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29608));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17844));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(115));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1BCCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1BCCu) goto L_089B1BCC;
    return;
L_089B1BCC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7612));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(116));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1BE8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1BE8u) goto L_089B1BE8;
    return;
L_089B1BE8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29552));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7492));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(117));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1C08u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C08u) goto L_089B1C08;
    return;
L_089B1C08:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7248));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(118));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1C24u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C24u) goto L_089B1C24;
    return;
L_089B1C24:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29496));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7156));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(119));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1C44u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C44u) goto L_089B1C44;
    return;
L_089B1C44:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13600));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1C60u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C60u) goto L_089B1C60;
    return;
L_089B1C60:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29272));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13472));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(121));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1C80u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C80u) goto L_089B1C80;
    return;
L_089B1C80:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14204));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(122));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1C9Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C9Cu) goto L_089B1C9C;
    return;
L_089B1C9C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30000));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14100));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(123));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1CBCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1CBCu) goto L_089B1CBC;
    return;
L_089B1CBC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11912));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(124));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1CD8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1CD8u) goto L_089B1CD8;
    return;
L_089B1CD8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29440));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11808));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(125));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1CF8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1CF8u) goto L_089B1CF8;
    return;
L_089B1CF8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18796));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1D14u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1D14u) goto L_089B1D14;
    return;
L_089B1D14:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29328));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-18704));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(129));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1D34u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1D34u) goto L_089B1D34;
    return;
L_089B1D34:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13348));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(130));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1D50u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1D50u) goto L_089B1D50;
    return;
L_089B1D50:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29384));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13208));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(131));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1D70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1D70u) goto L_089B1D70;
    return;
L_089B1D70:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5800));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(132));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1D8Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1D8Cu) goto L_089B1D8C;
    return;
L_089B1D8C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29216));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5692));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(133));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1DACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1DACu) goto L_089B1DAC;
    return;
L_089B1DAC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5276));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(134));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1DC8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1DC8u) goto L_089B1DC8;
    return;
L_089B1DC8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29048));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5208));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(135));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1DE8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1DE8u) goto L_089B1DE8;
    return;
L_089B1DE8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10744));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1E04u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E04u) goto L_089B1E04;
    return;
L_089B1E04:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28992));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10640));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(137));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1E24u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E24u) goto L_089B1E24;
    return;
L_089B1E24:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20220));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(138));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1E40u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E40u) goto L_089B1E40;
    return;
L_089B1E40:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28936));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20092));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(139));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1E60u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E60u) goto L_089B1E60;
    return;
L_089B1E60:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12236));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(140));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1E7Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E7Cu) goto L_089B1E7C;
    return;
L_089B1E7C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28768));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12168));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(141));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1E9Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E9Cu) goto L_089B1E9C;
    return;
L_089B1E9C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13820));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1EB8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1EB8u) goto L_089B1EB8;
    return;
L_089B1EB8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28712));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13728));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(145));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1ED8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1ED8u) goto L_089B1ED8;
    return;
L_089B1ED8:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(29752));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(117));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1EF4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1EF4u) goto L_089B1EF4;
    return;
L_089B1EF4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28544));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(29880));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(118));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B1F14u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1F14u) goto L_089B1F14;
    return;
L_089B1F14:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28488));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8568));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(154));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1F34u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1F34u) goto L_089B1F34;
    return;
L_089B1F34:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11004));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(155));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1F50u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1F50u) goto L_089B1F50;
    return;
L_089B1F50:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28340));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2072));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(156));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1F70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1F70u) goto L_089B1F70;
    return;
L_089B1F70:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11096));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(157));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1F8Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1F8Cu) goto L_089B1F8C;
    return;
L_089B1F8C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28284));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2160));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(158));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1FACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1FACu) goto L_089B1FAC;
    return;
L_089B1FAC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12456));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(159));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B1FC8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1FC8u) goto L_089B1FC8;
    return;
L_089B1FC8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28228));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12364));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B1FE8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B1FE8u) goto L_089B1FE8;
    return;
L_089B1FE8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10836));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(161));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2004u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0429(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0429_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_429(Runtime &runtime) {
    runtime.register_generated_unit(429u, 0x089B1000u, 4096u, &recomp_unit_0429, &recomp_unit_0429_entry);
    runtime.register_function(0x089B1000u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1008u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1028u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1044u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1064u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1080u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B10A0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B10BCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B10DCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B10F8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1118u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1134u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1154u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1170u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B118Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B11A8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B11C8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B11E4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1204u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1220u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1240u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B125Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B127Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1298u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B12BCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B12D4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B12F4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B130Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B132Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1348u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1368u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1384u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B13A4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B13C0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B13E0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B13FCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B141Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1438u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1458u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1474u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1494u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B14B0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B14D0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B14ECu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B150Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1528u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1548u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1564u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1584u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B15A0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B15C4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B15DCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B15F4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1614u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1634u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B164Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B166Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1684u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B16A4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B16C0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B16E0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1700u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B171Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1738u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1758u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1774u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1794u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B17B0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B17D0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B17F0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B180Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B182Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1848u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1868u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1884u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B18A4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B18C0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B18E0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B18FCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B191Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1938u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1958u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1974u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1994u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B19B0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B19CCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B19ECu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1A08u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1A28u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1A44u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1A64u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1A80u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1AA0u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1ABCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1ADCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1AF8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1B18u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1B34u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1B54u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1B70u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1B90u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1BACu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1BCCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1BE8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1C08u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1C24u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1C44u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1C60u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1C80u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1C9Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1CBCu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1CD8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1CF8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1D14u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1D34u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1D50u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1D70u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1D8Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1DACu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1DC8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1DE8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1E04u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1E24u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1E40u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1E60u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1E7Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1E9Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1EB8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1ED8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1EF4u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1F14u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1F34u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1F50u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1F70u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1F8Cu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1FACu, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1FC8u, &recomp_unit_0429, "recomp_unit_0429");
    runtime.register_function(0x089B1FE8u, &recomp_unit_0429, "recomp_unit_0429");
}
} // namespace psprecomp
