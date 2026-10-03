#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0430[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139,
};
void recomp_unit_0430_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B2004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0430[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B2004;
    case 2u: goto L_089B2024;
    case 3u: goto L_089B2040;
    case 4u: goto L_089B205C;
    case 5u: goto L_089B2078;
    case 6u: goto L_089B2098;
    case 7u: goto L_089B20B4;
    case 8u: goto L_089B20D4;
    case 9u: goto L_089B20F4;
    case 10u: goto L_089B2110;
    case 11u: goto L_089B2130;
    case 12u: goto L_089B214C;
    case 13u: goto L_089B216C;
    case 14u: goto L_089B2188;
    case 15u: goto L_089B21A8;
    case 16u: goto L_089B21C4;
    case 17u: goto L_089B21E4;
    case 18u: goto L_089B2200;
    case 19u: goto L_089B2220;
    case 20u: goto L_089B223C;
    case 21u: goto L_089B225C;
    case 22u: goto L_089B2278;
    case 23u: goto L_089B2298;
    case 24u: goto L_089B22BC;
    case 25u: goto L_089B22D4;
    case 26u: goto L_089B22F4;
    case 27u: goto L_089B230C;
    case 28u: goto L_089B2328;
    case 29u: goto L_089B2344;
    case 30u: goto L_089B2364;
    case 31u: goto L_089B2380;
    case 32u: goto L_089B23A0;
    case 33u: goto L_089B23BC;
    case 34u: goto L_089B23DC;
    case 35u: goto L_089B23F8;
    case 36u: goto L_089B2418;
    case 37u: goto L_089B2434;
    case 38u: goto L_089B2454;
    case 39u: goto L_089B2470;
    case 40u: goto L_089B248C;
    case 41u: goto L_089B24AC;
    case 42u: goto L_089B24C8;
    case 43u: goto L_089B24E4;
    case 44u: goto L_089B2504;
    case 45u: goto L_089B251C;
    case 46u: goto L_089B2538;
    case 47u: goto L_089B2554;
    case 48u: goto L_089B2574;
    case 49u: goto L_089B2590;
    case 50u: goto L_089B25B0;
    case 51u: goto L_089B25CC;
    case 52u: goto L_089B25EC;
    case 53u: goto L_089B2608;
    case 54u: goto L_089B2628;
    case 55u: goto L_089B2644;
    case 56u: goto L_089B2664;
    case 57u: goto L_089B2680;
    case 58u: goto L_089B26A0;
    case 59u: goto L_089B26BC;
    case 60u: goto L_089B26DC;
    case 61u: goto L_089B26F8;
    case 62u: goto L_089B2718;
    case 63u: goto L_089B2734;
    case 64u: goto L_089B2754;
    case 65u: goto L_089B2770;
    case 66u: goto L_089B2790;
    case 67u: goto L_089B27AC;
    case 68u: goto L_089B27CC;
    case 69u: goto L_089B27E8;
    case 70u: goto L_089B2804;
    case 71u: goto L_089B2820;
    case 72u: goto L_089B283C;
    case 73u: goto L_089B2858;
    case 74u: goto L_089B2874;
    case 75u: goto L_089B2890;
    case 76u: goto L_089B28B0;
    case 77u: goto L_089B28D0;
    case 78u: goto L_089B28F0;
    case 79u: goto L_089B290C;
    case 80u: goto L_089B292C;
    case 81u: goto L_089B294C;
    case 82u: goto L_089B2968;
    case 83u: goto L_089B2984;
    case 84u: goto L_089B29A0;
    case 85u: goto L_089B29C0;
    case 86u: goto L_089B29DC;
    case 87u: goto L_089B29F8;
    case 88u: goto L_089B2A18;
    case 89u: goto L_089B2A34;
    case 90u: goto L_089B2A50;
    case 91u: goto L_089B2A70;
    case 92u: goto L_089B2A90;
    case 93u: goto L_089B2AB0;
    case 94u: goto L_089B2ACC;
    case 95u: goto L_089B2AEC;
    case 96u: goto L_089B2B08;
    case 97u: goto L_089B2B24;
    case 98u: goto L_089B2B40;
    case 99u: goto L_089B2B60;
    case 100u: goto L_089B2B80;
    case 101u: goto L_089B2B9C;
    case 102u: goto L_089B2BBC;
    case 103u: goto L_089B2BD8;
    case 104u: goto L_089B2BF4;
    case 105u: goto L_089B2C10;
    case 106u: goto L_089B2C30;
    case 107u: goto L_089B2C4C;
    case 108u: goto L_089B2C6C;
    case 109u: goto L_089B2C88;
    case 110u: goto L_089B2CA8;
    case 111u: goto L_089B2CC4;
    case 112u: goto L_089B2CE0;
    case 113u: goto L_089B2CFC;
    case 114u: goto L_089B2D18;
    case 115u: goto L_089B2D34;
    case 116u: goto L_089B2D54;
    case 117u: goto L_089B2D70;
    case 118u: goto L_089B2D90;
    case 119u: goto L_089B2DAC;
    case 120u: goto L_089B2DC8;
    case 121u: goto L_089B2DE8;
    case 122u: goto L_089B2E08;
    case 123u: goto L_089B2E24;
    case 124u: goto L_089B2E44;
    case 125u: goto L_089B2E60;
    case 126u: goto L_089B2E80;
    case 127u: goto L_089B2E98;
    case 128u: goto L_089B2EB4;
    case 129u: goto L_089B2ED4;
    case 130u: goto L_089B2EF0;
    case 131u: goto L_089B2F0C;
    case 132u: goto L_089B2F28;
    case 133u: goto L_089B2F44;
    case 134u: goto L_089B2F64;
    case 135u: goto L_089B2F80;
    case 136u: goto L_089B2F9C;
    case 137u: goto L_089B2FB8;
    case 138u: goto L_089B2FD8;
    case 139u: goto L_089B2FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B2004:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28172));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1896));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(162));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2024u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2024u) goto L_089B2024;
    return;
L_089B2024:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6216));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(123));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2040u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2040u) goto L_089B2040;
    return;
L_089B2040:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28116));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(164));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B205Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B205Cu) goto L_089B205C;
    return;
L_089B205C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3352));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(165));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2078u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2078u) goto L_089B2078;
    return;
L_089B2078:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27276));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3248));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(166));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2098u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2098u) goto L_089B2098;
    return;
L_089B2098:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3144));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(167));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B20B4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B20B4u) goto L_089B20B4;
    return;
L_089B20B4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27220));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-68));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(168));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B20D4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B20D4u) goto L_089B20D4;
    return;
L_089B20D4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27212));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-180));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(169));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B20F4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B20F4u) goto L_089B20F4;
    return;
L_089B20F4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3064));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(170));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2110u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2110u) goto L_089B2110;
    return;
L_089B2110:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26512));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2960));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(171));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2130u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2130u) goto L_089B2130;
    return;
L_089B2130:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2880));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B214Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B214Cu) goto L_089B214C;
    return;
L_089B214C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26456));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(72));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(173));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B216Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B216Cu) goto L_089B216C;
    return;
L_089B216C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2800));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(174));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2188u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2188u) goto L_089B2188;
    return;
L_089B2188:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26392));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(212));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(175));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B21A8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B21A8u) goto L_089B21A8;
    return;
L_089B21A8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2720));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B21C4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B21C4u) goto L_089B21C4;
    return;
L_089B21C4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26328));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(352));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(177));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B21E4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B21E4u) goto L_089B21E4;
    return;
L_089B21E4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(428));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(178));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2200u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2200u) goto L_089B2200;
    return;
L_089B2200:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26276));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3460));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(179));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2220u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2220u) goto L_089B2220;
    return;
L_089B2220:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(568));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B223Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B223Cu) goto L_089B223C;
    return;
L_089B223C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26220));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3576));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(69));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B225Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B225Cu) goto L_089B225C;
    return;
L_089B225C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2628));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(180));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2278u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2278u) goto L_089B2278;
    return;
L_089B2278:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26164));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2524));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(181));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2298u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2298u) goto L_089B2298;
    return;
L_089B2298:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26108));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2392));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(183));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B22BCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B22BCu) goto L_089B22BC;
    return;
L_089B22BC:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(2284));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B22D4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B22D4u) goto L_089B22D4;
    return;
L_089B22D4:
    aot_gpr[17] = (2204u << 16u);
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(2180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-26052));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(185));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B22F4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B22F4u) goto L_089B22F4;
    return;
L_089B22F4:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(2284));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(70));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B230Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B230Cu) goto L_089B230C;
    return;
L_089B230C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(2180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25996));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(71));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2328u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2328u) goto L_089B2328;
    return;
L_089B2328:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2072));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(186));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2344u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2344u) goto L_089B2344;
    return;
L_089B2344:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25940));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1928));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(187));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2364u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2364u) goto L_089B2364;
    return;
L_089B2364:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1848));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(190));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2380u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2380u) goto L_089B2380;
    return;
L_089B2380:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25884));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4268));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(191));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B23A0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B23A0u) goto L_089B23A0;
    return;
L_089B23A0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14940));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B23BCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B23BCu) goto L_089B23BC;
    return;
L_089B23BC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30976));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-14872));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(193));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B23DCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B23DCu) goto L_089B23DC;
    return;
L_089B23DC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20488));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(194));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B23F8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B23F8u) goto L_089B23F8;
    return;
L_089B23F8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30920));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20396));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(195));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2418u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2418u) goto L_089B2418;
    return;
L_089B2418:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8340));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(196));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2434u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2434u) goto L_089B2434;
    return;
L_089B2434:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30864));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-8248));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(197));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2454u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2454u) goto L_089B2454;
    return;
L_089B2454:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6088));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(198));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2470u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2470u) goto L_089B2470;
    return;
L_089B2470:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28060));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(199));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B248Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B248Cu) goto L_089B248C;
    return;
L_089B248C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25832));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4780));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(201));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B24ACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B24ACu) goto L_089B24AC;
    return;
L_089B24AC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25776));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(202));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B24C8u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B24C8u) goto L_089B24C8;
    return;
L_089B24C8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9444));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(204));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B24E4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B24E4u) goto L_089B24E4;
    return;
L_089B24E4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28656));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1384));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(205));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2504u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2504u) goto L_089B2504;
    return;
L_089B2504:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(206));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B251Cu);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B251Cu) goto L_089B251C;
    return;
L_089B251C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27500));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(207));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2538u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2538u) goto L_089B2538;
    return;
L_089B2538:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3216));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(210));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2554u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2554u) goto L_089B2554;
    return;
L_089B2554:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28004));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3104));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(211));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2574u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2574u) goto L_089B2574;
    return;
L_089B2574:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19048));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(212));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2590u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2590u) goto L_089B2590;
    return;
L_089B2590:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27948));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2964));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(213));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B25B0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B25B0u) goto L_089B25B0;
    return;
L_089B25B0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15320));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(214));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B25CCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B25CCu) goto L_089B25CC;
    return;
L_089B25CC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27892));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15308));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(215));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B25ECu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B25ECu) goto L_089B25EC;
    return;
L_089B25EC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10912));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2608u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2608u) goto L_089B2608;
    return;
L_089B2608:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27836));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1984));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(217));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2628u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2628u) goto L_089B2628;
    return;
L_089B2628:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-13920));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(218));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2644u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2644u) goto L_089B2644;
    return;
L_089B2644:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27724));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2668));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(219));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2664u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2664u) goto L_089B2664;
    return;
L_089B2664:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12692));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(220));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2680u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2680u) goto L_089B2680;
    return;
L_089B2680:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27780));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12616));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(221));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B26A0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B26A0u) goto L_089B26A0;
    return;
L_089B26A0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1108));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(55));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B26BCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B26BCu) goto L_089B26BC;
    return;
L_089B26BC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27668));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1196));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B26DCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B26DCu) goto L_089B26DC;
    return;
L_089B26DC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(772));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(31));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B26F8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B26F8u) goto L_089B26F8;
    return;
L_089B26F8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27612));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(860));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(237));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2718u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2718u) goto L_089B2718;
    return;
L_089B2718:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1796));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(15));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2734u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2734u) goto L_089B2734;
    return;
L_089B2734:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27556));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1684));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(240));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2754u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2754u) goto L_089B2754;
    return;
L_089B2754:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-9544));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(241));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2770u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2770u) goto L_089B2770;
    return;
L_089B2770:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27332));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1484));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(242));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2790u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2790u) goto L_089B2790;
    return;
L_089B2790:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4052));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(245));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B27ACu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B27ACu) goto L_089B27AC;
    return;
L_089B27AC:
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-3480));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25228));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(246));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B27CCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B27CCu) goto L_089B27CC;
    return;
L_089B27CC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3824));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(247));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B27E8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B27E8u) goto L_089B27E8;
    return;
L_089B27E8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-3480));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25172));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(248));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2804u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2804u) goto L_089B2804;
    return;
L_089B2804:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3392));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(249));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2820u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2820u) goto L_089B2820;
    return;
L_089B2820:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25116));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(250));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B283Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B283Cu) goto L_089B283C;
    return;
L_089B283C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3304));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(251));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2858u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2858u) goto L_089B2858;
    return;
L_089B2858:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25060));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(252));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2874u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2874u) goto L_089B2874;
    return;
L_089B2874:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21288));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2890u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2890u) goto L_089B2890;
    return;
L_089B2890:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25284));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(696));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B28B0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B28B0u) goto L_089B28B0;
    return;
L_089B28B0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31244));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20888));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B28D0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B28D0u) goto L_089B28D0;
    return;
L_089B28D0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31096));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-20784));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B28F0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B28F0u) goto L_089B28F0;
    return;
L_089B28F0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15472));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B290Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B290Cu) goto L_089B290C;
    return;
L_089B290C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24824));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15460));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B292Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B292Cu) goto L_089B292C;
    return;
L_089B292C:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30940));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-17600));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B294Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B294Cu) goto L_089B294C;
    return;
L_089B294C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5616));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2968u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2968u) goto L_089B2968;
    return;
L_089B2968:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27444));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2984u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2984u) goto L_089B2984;
    return;
L_089B2984:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12924));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B29A0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B29A0u) goto L_089B29A0;
    return;
L_089B29A0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27388));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12836));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(14));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B29C0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B29C0u) goto L_089B29C0;
    return;
L_089B29C0:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25004));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B29DCu);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B29DCu) goto L_089B29DC;
    return;
L_089B29DC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B29F8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B29F8u) goto L_089B29F8;
    return;
L_089B29F8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25624));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-776));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2A18u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2A18u) goto L_089B2A18;
    return;
L_089B2A18:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1208));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(18));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2A34u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2A34u) goto L_089B2A34;
    return;
L_089B2A34:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1072));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(134));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2A50u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2A50u) goto L_089B2A50;
    return;
L_089B2A50:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24768));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-924));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(19));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2A70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2A70u) goto L_089B2A70;
    return;
L_089B2A70:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31772));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28464));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(91));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2A90u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2A90u) goto L_089B2A90;
    return;
L_089B2A90:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31764));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28604));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(92));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2AB0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2AB0u) goto L_089B2AB0;
    return;
L_089B2AB0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4664));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2ACCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2ACCu) goto L_089B2ACC;
    return;
L_089B2ACC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24552));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4596));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2AECu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2AECu) goto L_089B2AEC;
    return;
L_089B2AEC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5484));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(26));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2B08u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B08u) goto L_089B2B08;
    return;
L_089B2B08:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24472));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(27));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2B24u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B24u) goto L_089B2B24;
    return;
L_089B2B24:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-25768));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(30));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2B40u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B40u) goto L_089B2B40;
    return;
L_089B2B40:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31928));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(29612));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(115));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2B60u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B60u) goto L_089B2B60;
    return;
L_089B2B60:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-31920));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26724));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(116));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2B80u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B80u) goto L_089B2B80;
    return;
L_089B2B80:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19552));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(37));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2B9Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B9Cu) goto L_089B2B9C;
    return;
L_089B2B9C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28600));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19452));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(38));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2BBCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2BBCu) goto L_089B2BBC;
    return;
L_089B2BBC:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-424));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2BD8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2BD8u) goto L_089B2BD8;
    return;
L_089B2BD8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24416));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(41));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2BF4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2BF4u) goto L_089B2BF4;
    return;
L_089B2BF4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11208));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(42));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2C10u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2C10u) goto L_089B2C10;
    return;
L_089B2C10:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24360));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11196));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(43));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2C30u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2C30u) goto L_089B2C30;
    return;
L_089B2C30:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-12992));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(82));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2C4Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2C4Cu) goto L_089B2C4C;
    return;
L_089B2C4C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30560));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2320));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(50));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2C6Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2C6Cu) goto L_089B2C6C;
    return;
L_089B2C6C:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6404));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(51));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2C88u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2C88u) goto L_089B2C88;
    return;
L_089B2C88:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-30680));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1296));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(52));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2CA8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2CA8u) goto L_089B2CA8;
    return;
L_089B2CA8:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-7080));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(45));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2CC4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2CC4u) goto L_089B2CC4;
    return;
L_089B2CC4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24304));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(46));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2CE0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2CE0u) goto L_089B2CE0;
    return;
L_089B2CE0:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21776));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(57));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2CFCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2CFCu) goto L_089B2CFC;
    return;
L_089B2CFC:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24248));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(58));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2D18u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2D18u) goto L_089B2D18;
    return;
L_089B2D18:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21484));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(59));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2D34u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2D34u) goto L_089B2D34;
    return;
L_089B2D34:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24192));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21364));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(60));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2D54u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2D54u) goto L_089B2D54;
    return;
L_089B2D54:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21276));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2D70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2D70u) goto L_089B2D70;
    return;
L_089B2D70:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24136));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-21184));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(73));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2D90u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2D90u) goto L_089B2D90;
    return;
L_089B2D90:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24152));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(61));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2DACu);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2DACu) goto L_089B2DAC;
    return;
L_089B2DAC:
    aot_gpr[6] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24528));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(62));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B2DC8u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2DC8u) goto L_089B2DC8;
    return;
L_089B2DC8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24080));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28728));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(63));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2DE8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2DE8u) goto L_089B2DE8;
    return;
L_089B2DE8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23916));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23628));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2E08u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E08u) goto L_089B2E08;
    return;
L_089B2E08:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-15896));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(65));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2E24u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E24u) goto L_089B2E24;
    return;
L_089B2E24:
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-15884));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23776));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(66));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2E44u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E44u) goto L_089B2E44;
    return;
L_089B2E44:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-15884));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23664));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(67));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2E60u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E60u) goto L_089B2E60;
    return;
L_089B2E60:
    aot_gpr[16] = (2204u << 16u);
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-4192));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23516));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(98));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2E80u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E80u) goto L_089B2E80;
    return;
L_089B2E80:
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(-4192));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(97));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2E98u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E98u) goto L_089B2E98;
    return;
L_089B2E98:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26568));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(107));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2EB4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2EB4u) goto L_089B2EB4;
    return;
L_089B2EB4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23720));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26648));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(108));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2ED4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2ED4u) goto L_089B2ED4;
    return;
L_089B2ED4:
    aot_gpr[8] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4420));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2EF0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2EF0u) goto L_089B2EF0;
    return;
L_089B2EF0:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26860));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(109));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2F0Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F0Cu) goto L_089B2F0C;
    return;
L_089B2F0C:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23460));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(110));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2F28u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F28u) goto L_089B2F28;
    return;
L_089B2F28:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(26944));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(111));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2F44u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F44u) goto L_089B2F44;
    return;
L_089B2F44:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23404));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27344));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2F64u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F64u) goto L_089B2F64;
    return;
L_089B2F64:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27756));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(124));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2F80u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F80u) goto L_089B2F80;
    return;
L_089B2F80:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(23180));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29160));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(125));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2F9Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F9Cu) goto L_089B2F9C;
    return;
L_089B2F9C:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27852));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(126));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2FB8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2FB8u) goto L_089B2FB8;
    return;
L_089B2FB8:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23348));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(27968));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(127));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089B2FD8u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2FD8u) goto L_089B2FD8;
    return;
L_089B2FD8:
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(28044));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x089B2FF4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem) && ctx.pc == 0x089B2FF4u) goto L_089B2FF4;
    return;
L_089B2FF4:
    aot_gpr[6] = (2204u << 16u);
    aot_gpr[8] = (2203u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-23292));
    ctx.pc = 0x089B3000u; return;
}

void recomp_unit_0430(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0430_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_430(Runtime &runtime) {
    runtime.register_generated_unit(430u, 0x089B2000u, 4096u, &recomp_unit_0430, &recomp_unit_0430_entry);
    runtime.register_function(0x089B2004u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2024u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2040u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B205Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2078u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2098u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B20B4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B20D4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B20F4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2110u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2130u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B214Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B216Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2188u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B21A8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B21C4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B21E4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2200u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2220u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B223Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B225Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2278u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2298u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B22BCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B22D4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B22F4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B230Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2328u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2344u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2364u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2380u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B23A0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B23BCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B23DCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B23F8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2418u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2434u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2454u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2470u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B248Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B24ACu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B24C8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B24E4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2504u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B251Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2538u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2554u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2574u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2590u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B25B0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B25CCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B25ECu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2608u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2628u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2644u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2664u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2680u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B26A0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B26BCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B26DCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B26F8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2718u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2734u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2754u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2770u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2790u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B27ACu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B27CCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B27E8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2804u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2820u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B283Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2858u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2874u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2890u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B28B0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B28D0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B28F0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B290Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B292Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B294Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2968u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2984u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B29A0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B29C0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B29DCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B29F8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2A18u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2A34u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2A50u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2A70u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2A90u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2AB0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2ACCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2AECu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2B08u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2B24u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2B40u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2B60u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2B80u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2B9Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2BBCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2BD8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2BF4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2C10u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2C30u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2C4Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2C6Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2C88u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2CA8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2CC4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2CE0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2CFCu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2D18u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2D34u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2D54u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2D70u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2D90u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2DACu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2DC8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2DE8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2E08u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2E24u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2E44u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2E60u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2E80u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2E98u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2EB4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2ED4u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2EF0u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2F0Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2F28u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2F44u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2F64u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2F80u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2F9Cu, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2FB8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2FD8u, &recomp_unit_0430, "recomp_unit_0430");
    runtime.register_function(0x089B2FF4u, &recomp_unit_0430, "recomp_unit_0430");
}
} // namespace psprecomp
