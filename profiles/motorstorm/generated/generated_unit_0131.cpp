#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0131[1024] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 65, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80,
    0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    90, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0,
    0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162,
};
void recomp_unit_0131_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08887000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0131[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08887000;
    case 2u: goto L_0888700C;
    case 3u: goto L_08887014;
    case 4u: goto L_08887024;
    case 5u: goto L_088870C4;
    case 6u: goto L_088871A4;
    case 7u: goto L_088871B0;
    case 8u: goto L_088871C4;
    case 9u: goto L_08887204;
    case 10u: goto L_08887214;
    case 11u: goto L_08887258;
    case 12u: goto L_08887274;
    case 13u: goto L_0888728C;
    case 14u: goto L_088872C8;
    case 15u: goto L_088872FC;
    case 16u: goto L_08887314;
    case 17u: goto L_08887350;
    case 18u: goto L_0888739C;
    case 19u: goto L_088873B4;
    case 20u: goto L_088873F0;
    case 21u: goto L_08887418;
    case 22u: goto L_08887424;
    case 23u: goto L_08887430;
    case 24u: goto L_08887440;
    case 25u: goto L_08887494;
    case 26u: goto L_0888758C;
    case 27u: goto L_088875C8;
    case 28u: goto L_088875E4;
    case 29u: goto L_088875FC;
    case 30u: goto L_08887638;
    case 31u: goto L_0888766C;
    case 32u: goto L_08887684;
    case 33u: goto L_088876C0;
    case 34u: goto L_0888770C;
    case 35u: goto L_08887724;
    case 36u: goto L_08887760;
    case 37u: goto L_08887788;
    case 38u: goto L_08887794;
    case 39u: goto L_088877A4;
    case 40u: goto L_088877B4;
    case 41u: goto L_0888782C;
    case 42u: goto L_08887868;
    case 43u: goto L_08887888;
    case 44u: goto L_088878C8;
    case 45u: goto L_088878F4;
    case 46u: goto L_08887910;
    case 47u: goto L_08887920;
    case 48u: goto L_08887938;
    case 49u: goto L_08887948;
    case 50u: goto L_08887958;
    case 51u: goto L_08887974;
    case 52u: goto L_08887980;
    case 53u: goto L_08887990;
    case 54u: goto L_088879B8;
    case 55u: goto L_088879C4;
    case 56u: goto L_088879D4;
    case 57u: goto L_088879FC;
    case 58u: goto L_08887A10;
    case 59u: goto L_08887A1C;
    case 60u: goto L_08887A30;
    case 61u: goto L_08887A3C;
    case 62u: goto L_08887A50;
    case 63u: goto L_08887A58;
    case 64u: goto L_08887A70;
    case 65u: goto L_08887A74;
    case 66u: goto L_08887A78;
    case 67u: goto L_08887A9C;
    case 68u: goto L_08887AB8;
    case 69u: goto L_08887AC4;
    case 70u: goto L_08887AD4;
    case 71u: goto L_08887AE0;
    case 72u: goto L_08887B04;
    case 73u: goto L_08887B14;
    case 74u: goto L_08887B34;
    case 75u: goto L_08887B40;
    case 76u: goto L_08887B48;
    case 77u: goto L_08887B60;
    case 78u: goto L_08887B68;
    case 79u: goto L_08887B74;
    case 80u: goto L_08887B7C;
    case 81u: goto L_08887B88;
    case 82u: goto L_08887B94;
    case 83u: goto L_08887B9C;
    case 84u: goto L_08887BA8;
    case 85u: goto L_08887BB4;
    case 86u: goto L_08887BC0;
    case 87u: goto L_08887BCC;
    case 88u: goto L_08887BD8;
    case 89u: goto L_08887BE4;
    case 90u: goto L_08887C00;
    case 91u: goto L_08887C04;
    case 92u: goto L_08887C0C;
    case 93u: goto L_08887C14;
    case 94u: goto L_08887C24;
    case 95u: goto L_08887C30;
    case 96u: goto L_08887C58;
    case 97u: goto L_08887C68;
    case 98u: goto L_08887C90;
    case 99u: goto L_08887CA0;
    case 100u: goto L_08887CB4;
    case 101u: goto L_08887CC0;
    case 102u: goto L_08887CDC;
    case 103u: goto L_08887CE8;
    case 104u: goto L_08887CF8;
    case 105u: goto L_08887D0C;
    case 106u: goto L_08887D1C;
    case 107u: goto L_08887D24;
    case 108u: goto L_08887D44;
    case 109u: goto L_08887D4C;
    case 110u: goto L_08887D6C;
    case 111u: goto L_08887D8C;
    case 112u: goto L_08887DA4;
    case 113u: goto L_08887DAC;
    case 114u: goto L_08887DCC;
    case 115u: goto L_08887E00;
    case 116u: goto L_08887E0C;
    case 117u: goto L_08887E14;
    case 118u: goto L_08887E24;
    case 119u: goto L_08887E30;
    case 120u: goto L_08887E3C;
    case 121u: goto L_08887E44;
    case 122u: goto L_08887E4C;
    case 123u: goto L_08887E60;
    case 124u: goto L_08887E7C;
    case 125u: goto L_08887E84;
    case 126u: goto L_08887E8C;
    case 127u: goto L_08887E94;
    case 128u: goto L_08887E9C;
    case 129u: goto L_08887EA4;
    case 130u: goto L_08887EAC;
    case 131u: goto L_08887EB4;
    case 132u: goto L_08887EBC;
    case 133u: goto L_08887EC4;
    case 134u: goto L_08887ECC;
    case 135u: goto L_08887EDC;
    case 136u: goto L_08887EEC;
    case 137u: goto L_08887EF4;
    case 138u: goto L_08887F14;
    case 139u: goto L_08887F20;
    case 140u: goto L_08887F28;
    case 141u: goto L_08887F30;
    case 142u: goto L_08887F38;
    case 143u: goto L_08887F40;
    case 144u: goto L_08887F48;
    case 145u: goto L_08887F54;
    case 146u: goto L_08887F68;
    case 147u: goto L_08887F70;
    case 148u: goto L_08887F78;
    case 149u: goto L_08887F80;
    case 150u: goto L_08887F88;
    case 151u: goto L_08887F90;
    case 152u: goto L_08887F98;
    case 153u: goto L_08887FA0;
    case 154u: goto L_08887FA8;
    case 155u: goto L_08887FB0;
    case 156u: goto L_08887FB8;
    case 157u: goto L_08887FC0;
    case 158u: goto L_08887FC8;
    case 159u: goto L_08887FD0;
    case 160u: goto L_08887FD8;
    case 161u: goto L_08887FE0;
    case 162u: goto L_08887FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08887000:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0888700C;
L_0888700C:
    aot_gpr[31] = (0x08887014u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08887014u) goto L_08887014;
    return;
L_08887014:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08887024u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 67u, 0x0892F6E8u>(ctx, &aot_mem) && ctx.pc == 0x08887024u) goto L_08887024;
    return;
L_08887024:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[7] = (0u | 20u);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[22]));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (0u | 255u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[23]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x088870C4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088870C4u) goto L_088870C4;
    return;
L_088870C4:
    aot_gpr[4] = (15523u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u - aot_gpr[6]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u - aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[15];
    aot_gpr[31] = (0x088871A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088871A4u) goto L_088871A4;
    return;
L_088871A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088871B0u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088871B0u) goto L_088871B0;
    return;
L_088871B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[6] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_088871C4;
L_088871C4:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[17] = aot_fpr[17] - aot_fpr[18];
    aot_fpr[15] = aot_fpr[15] + aot_fpr[16];
    aot_fpr[17] = aot_fpr[17] + aot_fpr[12];
    aot_fpr[15] = aot_fpr[15] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088871C4;
      }
      goto L_08887204;
    }
L_08887204:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08887214u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x08887214u) goto L_08887214;
    return;
L_08887214:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08887274;
      }
      goto L_08887258;
    }
L_08887258:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888728C;
      }
      goto L_08887274;
    }
L_08887274:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    goto L_0888728C;
L_0888728C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088872FC;
      }
      goto L_088872C8;
    }
L_088872C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08887314;
      }
      goto L_088872FC;
    }
L_088872FC:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08887314;
L_08887314:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0888739C;
      }
      goto L_08887350;
    }
L_08887350:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088873B4;
      }
      goto L_0888739C;
    }
L_0888739C:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    goto L_088873B4;
L_088873B4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08887418;
      }
      goto L_088873F0;
    }
L_088873F0:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08887424;
      }
      goto L_08887418;
    }
L_08887418:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08887424;
L_08887424:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08887430u);
    aot_gpr[22] = (2215u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08887430u) goto L_08887430;
    return;
L_08887430:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08887440u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 67u, 0x0892F6E8u>(ctx, &aot_mem) && ctx.pc == 0x08887440u) goto L_08887440;
    return;
L_08887440:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_gpr[4] = (16040u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[18] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[18] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[24] = aot_fpr[16] - aot_fpr[18];
    aot_gpr[31] = (0x08887494u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 148u, 0x08A2F9E0u>(ctx, &aot_mem) && ctx.pc == 0x08887494u) goto L_08887494;
    return;
L_08887494:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[12] = aot_fpr[0] / aot_fpr[12];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_gpr[6] = (0u - aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[15] = aot_fpr[15] + aot_fpr[13];
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u - aot_gpr[6]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[16] = aot_fpr[16] + aot_fpr[12];
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_fpr[16] = aot_fpr[16] + aot_fpr[12];
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[5] = (0u - aot_gpr[5]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_gpr[6] = (0u | 1u);
    aot_fpr[12] = aot_fpr[16] + aot_fpr[12];
    aot_fpr[13] = aot_fpr[17] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0888758Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 19u, 0x08A4C160u>(ctx, &aot_mem) && ctx.pc == 0x0888758Cu) goto L_0888758C;
    return;
L_0888758C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088875E4;
      }
      goto L_088875C8;
    }
L_088875C8:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088875FC;
      }
      goto L_088875E4;
    }
L_088875E4:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    goto L_088875FC;
L_088875FC:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888766C;
      }
      goto L_08887638;
    }
L_08887638:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08887684;
      }
      goto L_0888766C;
    }
L_0888766C:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08887684;
L_08887684:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0888770C;
      }
      goto L_088876C0;
    }
L_088876C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[20];
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08887724;
      }
      goto L_0888770C;
    }
L_0888770C:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08887724;
L_08887724:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08887788;
      }
      goto L_08887760;
    }
L_08887760:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08887794;
      }
      goto L_08887788;
    }
L_08887788:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08887794;
L_08887794:
    aot_gpr[18] = (0u | 255u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088877A4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088877A4u) goto L_088877A4;
    return;
L_088877A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088877B4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 67u, 0x0892F6E8u>(ctx, &aot_mem) && ctx.pc == 0x088877B4u) goto L_088877B4;
    return;
L_088877B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[23]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0888782Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0888782Cu) goto L_0888782C;
    return;
L_0888782C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887868:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25936), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887888:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_08887C14;
      }
      goto L_088878C8;
    }
L_088878C8:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8460)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] ^ 4u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08887938;
      }
      goto L_088878F4;
    }
L_088878F4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887938;
      }
      goto L_08887910;
    }
L_08887910:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08887920u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11728));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08887920u) goto L_08887920;
    return;
L_08887920:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08887C0C;
      }
      goto L_08887938;
    }
L_08887938:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887974;
      }
      goto L_08887948;
    }
L_08887948:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08887958u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11752));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08887958u) goto L_08887958;
    return;
L_08887958:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), 0u);
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_08887C0C;
      }
      goto L_08887974;
    }
L_08887974:
    aot_gpr[6] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088879B8;
      }
      goto L_08887980;
    }
L_08887980:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08887990u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08887990u) goto L_08887990;
    return;
L_08887990:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(3100), 0u);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_08887C0C;
      }
      goto L_088879B8;
    }
L_088879B8:
    aot_gpr[4] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088879FC;
      }
      goto L_088879C4;
    }
L_088879C4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088879D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088879D4u) goto L_088879D4;
    return;
L_088879D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_08887C0C;
      }
      goto L_088879FC;
    }
L_088879FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3304)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08887A1C;
      }
      goto L_08887A10;
    }
L_08887A10:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08887A1C;
L_08887A1C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5944)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08887A3C;
      }
      goto L_08887A30;
    }
L_08887A30:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    goto L_08887A3C;
L_08887A3C:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08887A58;
      }
      goto L_08887A50;
    }
L_08887A50:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08887A74;
      }
      goto L_08887A58;
    }
L_08887A58:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_08887A78;
      }
      goto L_08887A70;
    }
L_08887A70:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08887A74;
L_08887A74:
    aot_gpr[4] = (16672u << 16u);
    goto L_08887A78;
L_08887A78:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17056u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_fpr[20] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[31] = (0x08887A9Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08887A9Cu) goto L_08887A9C;
    return;
L_08887A9C:
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08887AD4;
      }
      goto L_08887AB8;
    }
L_08887AB8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08887AC4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11788));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08887AC4u) goto L_08887AC4;
    return;
L_08887AC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887C04;
      }
      goto L_08887AD4;
    }
L_08887AD4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08887AE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08887AE0u) goto L_08887AE0;
    return;
L_08887AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (0u | 9u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B04;
    }
L_08887B04:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08887B14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08887B14u) goto L_08887B14;
    return;
L_08887B14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(512)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (aot_gpr[16] << (aot_gpr[4] & 31u));
    aot_gpr[16] = (aot_gpr[16] & 65535u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 33 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08887B74;
      }
      goto L_08887B34;
    }
L_08887B34:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08887B60;
      }
      goto L_08887B40;
    }
L_08887B40:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B48;
    }
L_08887B48:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(11840)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887B60:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B68;
    }
L_08887B68:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B74;
    }
L_08887B74:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 128u);
      if (branch_taken) {
          goto L_08887B94;
      }
      goto L_08887B7C;
    }
L_08887B7C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B88;
    }
L_08887B88:
    aot_gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B94;
    }
L_08887B94:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887B9C;
    }
L_08887B9C:
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887BA8;
    }
L_08887BA8:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887BB4;
    }
L_08887BB4:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887BC0;
    }
L_08887BC0:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887BCC;
    }
L_08887BCC:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887BD8;
    }
L_08887BD8:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3100), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887BE4;
      }
      goto L_08887BE4;
    }
L_08887BE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887C04;
      }
      goto L_08887C00;
    }
L_08887C00:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08887C04;
L_08887C04:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08887C0C;
L_08887C0C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8460), aot_gpr[4]);
      if (branch_taken) {
          goto L_08887C30;
      }
      goto L_08887C14;
    }
L_08887C14:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08887C24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11816));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08887C24u) goto L_08887C24;
    return;
L_08887C24:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(7928), aot_gpr[2]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(3096), aot_gpr[4]);
    goto L_08887C30;
L_08887C30:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08887C68u);
    // nop
    goto L_08887888;
L_08887C68:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7928)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08887CA0u);
    // nop
    goto L_08887888;
L_08887CA0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[31] = (0x08887CB4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7928)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x08887CB4u) goto L_08887CB4;
    return;
L_08887CB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08887CDCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7928)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 88u, 0x088936C4u>(ctx, &aot_mem) && ctx.pc == 0x08887CDCu) goto L_08887CDC;
    return;
L_08887CDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08887CE8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 228u, 0x08889DD0u>(ctx, &aot_mem) && ctx.pc == 0x08887CE8u) goto L_08887CE8;
    return;
L_08887CE8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887CF8:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5292)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08887D8C;
      }
      goto L_08887D0C;
    }
L_08887D0C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(3096)));
    if (static_cast<std::int32_t>(aot_gpr[6]) > 0) {
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 2 ? 1u : 0u);
        goto L_08887D44;
    }
    goto L_08887D1C;
L_08887D1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08887D6C;
      }
      goto L_08887D24;
    }
L_08887D24:
    aot_gpr[6] = (17341u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (17213u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08887DA4;
      }
      goto L_08887D44;
    }
L_08887D44:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887D24;
      }
      goto L_08887D4C;
    }
L_08887D4C:
    aot_gpr[6] = (17356u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (17222u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08887DA4;
      }
      goto L_08887D6C;
    }
L_08887D6C:
    aot_gpr[6] = (17356u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (17192u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08887DA4;
      }
      goto L_08887D8C;
    }
L_08887D8C:
    aot_gpr[6] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (17128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08887DA4;
L_08887DA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887DAC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25944), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887DCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (334u << 16u);
    aot_gpr[6] = (4u << 16u);
    aot_gpr[31] = (0x08887E00u);
    aot_gpr[7] = (27u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 35u, 0x089431E4u>(ctx, &aot_mem) && ctx.pc == 0x08887E00u) goto L_08887E00;
    return;
L_08887E00:
    aot_gpr[4] = (0u | 333u);
    aot_gpr[31] = (0x08887E0Cu);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x08887E0Cu) goto L_08887E0C;
    return;
L_08887E0C:
    aot_gpr[31] = (0x08887E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 88u, 0x08810644u>(ctx, &aot_mem) && ctx.pc == 0x08887E14u) goto L_08887E14;
    return;
L_08887E14:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08887E24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11908));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 172u, 0x088C0E08u>(ctx, &aot_mem) && ctx.pc == 0x08887E24u) goto L_08887E24;
    return;
L_08887E24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08887E30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 35u, 0x08811248u>(ctx, &aot_mem) && ctx.pc == 0x08887E30u) goto L_08887E30;
    return;
L_08887E30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08887E3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 36u, 0x08811250u>(ctx, &aot_mem) && ctx.pc == 0x08887E3Cu) goto L_08887E3C;
    return;
L_08887E3C:
    aot_gpr[31] = (0x08887E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 27u, 0x0893C180u>(ctx, &aot_mem) && ctx.pc == 0x08887E44u) goto L_08887E44;
    return;
L_08887E44:
    aot_gpr[31] = (0x08887E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 119u, 0x08928B14u>(ctx, &aot_mem) && ctx.pc == 0x08887E4Cu) goto L_08887E4C;
    return;
L_08887E4C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08887E60u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11940));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x088111ECu>(ctx, &aot_mem) && ctx.pc == 0x08887E60u) goto L_08887E60;
    return;
L_08887E60:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x08887E7Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11948));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x08887E7Cu) goto L_08887E7C;
    return;
L_08887E7C:
    aot_gpr[31] = (0x08887E84u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 105u, 0x08861880u>(ctx, &aot_mem) && ctx.pc == 0x08887E84u) goto L_08887E84;
    return;
L_08887E84:
    aot_gpr[31] = (0x08887E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 36u, 0x08882314u>(ctx, &aot_mem) && ctx.pc == 0x08887E8Cu) goto L_08887E8C;
    return;
L_08887E8C:
    aot_gpr[31] = (0x08887E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 54u, 0x088824A8u>(ctx, &aot_mem) && ctx.pc == 0x08887E94u) goto L_08887E94;
    return;
L_08887E94:
    aot_gpr[31] = (0x08887E9Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 89u, 0x08882808u>(ctx, &aot_mem) && ctx.pc == 0x08887E9Cu) goto L_08887E9C;
    return;
L_08887E9C:
    aot_gpr[31] = (0x08887EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 116u, 0x0882FA84u>(ctx, &aot_mem) && ctx.pc == 0x08887EA4u) goto L_08887EA4;
    return;
L_08887EA4:
    aot_gpr[31] = (0x08887EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 36u, 0x08828460u>(ctx, &aot_mem) && ctx.pc == 0x08887EACu) goto L_08887EAC;
    return;
L_08887EAC:
    aot_gpr[31] = (0x08887EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 73u, 0x08894614u>(ctx, &aot_mem) && ctx.pc == 0x08887EB4u) goto L_08887EB4;
    return;
L_08887EB4:
    aot_gpr[31] = (0x08887EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 27u, 0x08888368u>(ctx, &aot_mem) && ctx.pc == 0x08887EBCu) goto L_08887EBC;
    return;
L_08887EBC:
    aot_gpr[31] = (0x08887EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 156u, 0x088BFCB4u>(ctx, &aot_mem) && ctx.pc == 0x08887EC4u) goto L_08887EC4;
    return;
L_08887EC4:
    aot_gpr[31] = (0x08887ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 190u, 0x0886CD48u>(ctx, &aot_mem) && ctx.pc == 0x08887ECCu) goto L_08887ECC;
    return;
L_08887ECC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08887EDCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11984));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 67u, 0x08863480u>(ctx, &aot_mem) && ctx.pc == 0x08887EDCu) goto L_08887EDC;
    return;
L_08887EDC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24760)));
    aot_gpr[31] = (0x08887EECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 104u, 0x088C5690u>(ctx, &aot_mem) && ctx.pc == 0x08887EECu) goto L_08887EEC;
    return;
L_08887EEC:
    aot_gpr[31] = (0x08887EF4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 86u, 0x089288D0u>(ctx, &aot_mem) && ctx.pc == 0x08887EF4u) goto L_08887EF4;
    return;
L_08887EF4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08887F14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11996));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08887F14u) goto L_08887F14;
    return;
L_08887F14:
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x08887F20u);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x08887F20u) goto L_08887F20;
    return;
L_08887F20:
    aot_gpr[31] = (0x08887F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 107u, 0x088C56C0u>(ctx, &aot_mem) && ctx.pc == 0x08887F28u) goto L_08887F28;
    return;
L_08887F28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887F40;
      }
      goto L_08887F30;
    }
L_08887F30:
    aot_gpr[31] = (0x08887F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 151u, 0x08943AB0u>(ctx, &aot_mem) && ctx.pc == 0x08887F38u) goto L_08887F38;
    return;
L_08887F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08887F20;
      }
      goto L_08887F40;
    }
L_08887F40:
    aot_gpr[31] = (0x08887F48u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08811228u>(ctx, &aot_mem) && ctx.pc == 0x08887F48u) goto L_08887F48;
    return;
L_08887F48:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08887F54u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 206u, 0x088C5E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08887F54u) goto L_08887F54;
    return;
L_08887F54:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08887F68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12028));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08887F68u) goto L_08887F68;
    return;
L_08887F68:
    aot_gpr[31] = (0x08887F70u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 9u, 0x088630DCu>(ctx, &aot_mem) && ctx.pc == 0x08887F70u) goto L_08887F70;
    return;
L_08887F70:
    aot_gpr[31] = (0x08887F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 205u, 0x08865F38u>(ctx, &aot_mem) && ctx.pc == 0x08887F78u) goto L_08887F78;
    return;
L_08887F78:
    aot_gpr[31] = (0x08887F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 204u, 0x0886CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x08887F80u) goto L_08887F80;
    return;
L_08887F80:
    aot_gpr[31] = (0x08887F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 167u, 0x088BFF70u>(ctx, &aot_mem) && ctx.pc == 0x08887F88u) goto L_08887F88;
    return;
L_08887F88:
    aot_gpr[31] = (0x08887F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 48u, 0x08888618u>(ctx, &aot_mem) && ctx.pc == 0x08887F90u) goto L_08887F90;
    return;
L_08887F90:
    aot_gpr[31] = (0x08887F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 75u, 0x08894630u>(ctx, &aot_mem) && ctx.pc == 0x08887F98u) goto L_08887F98;
    return;
L_08887F98:
    aot_gpr[31] = (0x08887FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 41u, 0x08828590u>(ctx, &aot_mem) && ctx.pc == 0x08887FA0u) goto L_08887FA0;
    return;
L_08887FA0:
    aot_gpr[31] = (0x08887FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 11u, 0x08830080u>(ctx, &aot_mem) && ctx.pc == 0x08887FA8u) goto L_08887FA8;
    return;
L_08887FA8:
    aot_gpr[31] = (0x08887FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 53u, 0x088824A0u>(ctx, &aot_mem) && ctx.pc == 0x08887FB0u) goto L_08887FB0;
    return;
L_08887FB0:
    aot_gpr[31] = (0x08887FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 109u, 0x08862694u>(ctx, &aot_mem) && ctx.pc == 0x08887FB8u) goto L_08887FB8;
    return;
L_08887FB8:
    aot_gpr[31] = (0x08887FC0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08887FC0u) goto L_08887FC0;
    return;
L_08887FC0:
    aot_gpr[31] = (0x08887FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 120u, 0x08928B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08887FC8u) goto L_08887FC8;
    return;
L_08887FC8:
    aot_gpr[31] = (0x08887FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 32u, 0x0893C1E4u>(ctx, &aot_mem) && ctx.pc == 0x08887FD0u) goto L_08887FD0;
    return;
L_08887FD0:
    aot_gpr[31] = (0x08887FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 169u, 0x08810B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08887FD8u) goto L_08887FD8;
    return;
L_08887FD8:
    aot_gpr[31] = (0x08887FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 65u, 0x089434E0u>(ctx, &aot_mem) && ctx.pc == 0x08887FE0u) goto L_08887FE0;
    return;
L_08887FE0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887FFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08888000u; return;
}

void recomp_unit_0131(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0131_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_131(Runtime &runtime) {
    runtime.register_generated_unit(131u, 0x08887000u, 4096u, &recomp_unit_0131, &recomp_unit_0131_entry);
    runtime.register_function(0x08887000u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888700Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887014u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887024u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088870C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088871A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088871B0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088871C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887204u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887214u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887258u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887274u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888728Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088872C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088872FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887314u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887350u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888739Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088873B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088873F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887418u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887424u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887430u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887440u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887494u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888758Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088875C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088875E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088875FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887638u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888766Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887684u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088876C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888770Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887724u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887760u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887788u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887794u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088877A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088877B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x0888782Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887868u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887888u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088878C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088878F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887910u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887920u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887938u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887948u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887958u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887974u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887980u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887990u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088879B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088879C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088879D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x088879FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A10u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A50u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A58u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887A9Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887AB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887AC4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887AD4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887AE0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B34u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B40u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B48u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B68u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B7Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B94u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887B9Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887BA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887BB4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887BC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887BCCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887BD8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887BE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C00u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C58u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C68u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887C90u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887CA0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887CB4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887CC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887CDCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887CE8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887CF8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D44u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D4Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D6Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887D8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887DA4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887DACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887DCCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E00u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E44u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E4Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E7Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E84u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E94u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887E9Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EA4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EB4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EBCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EC4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887ECCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EDCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887EF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F20u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F38u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F40u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F48u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F68u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F90u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887F98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FA0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FB0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FC8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FD0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FD8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FE0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08887FFCu, &recomp_unit_0131, "recomp_unit_0131");
}
} // namespace psprecomp
