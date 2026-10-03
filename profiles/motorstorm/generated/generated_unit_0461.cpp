#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0461[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67, 0,
    68, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96,
    97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0,
    116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0,
    126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 145, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 164, 165, 0, 166, 0,
    167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 192, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 199, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202,
};
void recomp_unit_0461_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D1000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0461[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D1000;
    case 2u: goto L_089D1010;
    case 3u: goto L_089D1024;
    case 4u: goto L_089D1034;
    case 5u: goto L_089D1040;
    case 6u: goto L_089D104C;
    case 7u: goto L_089D1054;
    case 8u: goto L_089D105C;
    case 9u: goto L_089D1064;
    case 10u: goto L_089D1094;
    case 11u: goto L_089D109C;
    case 12u: goto L_089D10C0;
    case 13u: goto L_089D10E0;
    case 14u: goto L_089D10EC;
    case 15u: goto L_089D1114;
    case 16u: goto L_089D112C;
    case 17u: goto L_089D1134;
    case 18u: goto L_089D1154;
    case 19u: goto L_089D1190;
    case 20u: goto L_089D1198;
    case 21u: goto L_089D11C8;
    case 22u: goto L_089D11CC;
    case 23u: goto L_089D11E8;
    case 24u: goto L_089D120C;
    case 25u: goto L_089D1224;
    case 26u: goto L_089D1248;
    case 27u: goto L_089D1250;
    case 28u: goto L_089D1288;
    case 29u: goto L_089D129C;
    case 30u: goto L_089D12D4;
    case 31u: goto L_089D12DC;
    case 32u: goto L_089D12F0;
    case 33u: goto L_089D132C;
    case 34u: goto L_089D1388;
    case 35u: goto L_089D1390;
    case 36u: goto L_089D1398;
    case 37u: goto L_089D13A8;
    case 38u: goto L_089D13BC;
    case 39u: goto L_089D13E8;
    case 40u: goto L_089D13F8;
    case 41u: goto L_089D1400;
    case 42u: goto L_089D1428;
    case 43u: goto L_089D1448;
    case 44u: goto L_089D146C;
    case 45u: goto L_089D1470;
    case 46u: goto L_089D1488;
    case 47u: goto L_089D14AC;
    case 48u: goto L_089D14B4;
    case 49u: goto L_089D14EC;
    case 50u: goto L_089D154C;
    case 51u: goto L_089D1558;
    case 52u: goto L_089D156C;
    case 53u: goto L_089D15C8;
    case 54u: goto L_089D15CC;
    case 55u: goto L_089D1604;
    case 56u: goto L_089D1620;
    case 57u: goto L_089D1628;
    case 58u: goto L_089D1638;
    case 59u: goto L_089D168C;
    case 60u: goto L_089D1694;
    case 61u: goto L_089D16A0;
    case 62u: goto L_089D16B4;
    case 63u: goto L_089D16C8;
    case 64u: goto L_089D16D8;
    case 65u: goto L_089D16E0;
    case 66u: goto L_089D16E8;
    case 67u: goto L_089D16F8;
    case 68u: goto L_089D1700;
    case 69u: goto L_089D1704;
    case 70u: goto L_089D170C;
    case 71u: goto L_089D1714;
    case 72u: goto L_089D171C;
    case 73u: goto L_089D1744;
    case 74u: goto L_089D1750;
    case 75u: goto L_089D1764;
    case 76u: goto L_089D1790;
    case 77u: goto L_089D17CC;
    case 78u: goto L_089D17D0;
    case 79u: goto L_089D1804;
    case 80u: goto L_089D1830;
    case 81u: goto L_089D1840;
    case 82u: goto L_089D1848;
    case 83u: goto L_089D1850;
    case 84u: goto L_089D1854;
    case 85u: goto L_089D188C;
    case 86u: goto L_089D1890;
    case 87u: goto L_089D18C8;
    case 88u: goto L_089D18E4;
    case 89u: goto L_089D18F0;
    case 90u: goto L_089D1910;
    case 91u: goto L_089D1924;
    case 92u: goto L_089D1940;
    case 93u: goto L_089D1954;
    case 94u: goto L_089D1958;
    case 95u: goto L_089D1964;
    case 96u: goto L_089D197C;
    case 97u: goto L_089D1980;
    case 98u: goto L_089D1994;
    case 99u: goto L_089D199C;
    case 100u: goto L_089D19AC;
    case 101u: goto L_089D19B4;
    case 102u: goto L_089D19C0;
    case 103u: goto L_089D19C8;
    case 104u: goto L_089D19D4;
    case 105u: goto L_089D19DC;
    case 106u: goto L_089D19E4;
    case 107u: goto L_089D1A04;
    case 108u: goto L_089D1A20;
    case 109u: goto L_089D1A40;
    case 110u: goto L_089D1A50;
    case 111u: goto L_089D1A58;
    case 112u: goto L_089D1A60;
    case 113u: goto L_089D1A68;
    case 114u: goto L_089D1A70;
    case 115u: goto L_089D1A78;
    case 116u: goto L_089D1A80;
    case 117u: goto L_089D1A88;
    case 118u: goto L_089D1A90;
    case 119u: goto L_089D1A98;
    case 120u: goto L_089D1AAC;
    case 121u: goto L_089D1AC4;
    case 122u: goto L_089D1ACC;
    case 123u: goto L_089D1AE0;
    case 124u: goto L_089D1AE8;
    case 125u: goto L_089D1AF0;
    case 126u: goto L_089D1B00;
    case 127u: goto L_089D1B08;
    case 128u: goto L_089D1B10;
    case 129u: goto L_089D1B1C;
    case 130u: goto L_089D1B24;
    case 131u: goto L_089D1B2C;
    case 132u: goto L_089D1B34;
    case 133u: goto L_089D1B48;
    case 134u: goto L_089D1B54;
    case 135u: goto L_089D1B78;
    case 136u: goto L_089D1B80;
    case 137u: goto L_089D1B94;
    case 138u: goto L_089D1B9C;
    case 139u: goto L_089D1BAC;
    case 140u: goto L_089D1BFC;
    case 141u: goto L_089D1C14;
    case 142u: goto L_089D1C58;
    case 143u: goto L_089D1C60;
    case 144u: goto L_089D1C80;
    case 145u: goto L_089D1C88;
    case 146u: goto L_089D1C90;
    case 147u: goto L_089D1C98;
    case 148u: goto L_089D1C9C;
    case 149u: goto L_089D1CC4;
    case 150u: goto L_089D1D10;
    case 151u: goto L_089D1D18;
    case 152u: goto L_089D1D3C;
    case 153u: goto L_089D1D50;
    case 154u: goto L_089D1D58;
    case 155u: goto L_089D1D60;
    case 156u: goto L_089D1D64;
    case 157u: goto L_089D1D90;
    case 158u: goto L_089D1DB0;
    case 159u: goto L_089D1DB8;
    case 160u: goto L_089D1DC0;
    case 161u: goto L_089D1DC8;
    case 162u: goto L_089D1DDC;
    case 163u: goto L_089D1DE4;
    case 164u: goto L_089D1DEC;
    case 165u: goto L_089D1DF0;
    case 166u: goto L_089D1DF8;
    case 167u: goto L_089D1E00;
    case 168u: goto L_089D1E14;
    case 169u: goto L_089D1E24;
    case 170u: goto L_089D1E38;
    case 171u: goto L_089D1E40;
    case 172u: goto L_089D1E48;
    case 173u: goto L_089D1E58;
    case 174u: goto L_089D1E60;
    case 175u: goto L_089D1E68;
    case 176u: goto L_089D1E70;
    case 177u: goto L_089D1E84;
    case 178u: goto L_089D1EA8;
    case 179u: goto L_089D1EB0;
    case 180u: goto L_089D1EC0;
    case 181u: goto L_089D1EC8;
    case 182u: goto L_089D1ED0;
    case 183u: goto L_089D1ED8;
    case 184u: goto L_089D1EDC;
    case 185u: goto L_089D1EF4;
    case 186u: goto L_089D1F28;
    case 187u: goto L_089D1F30;
    case 188u: goto L_089D1F48;
    case 189u: goto L_089D1F50;
    case 190u: goto L_089D1F58;
    case 191u: goto L_089D1F60;
    case 192u: goto L_089D1F64;
    case 193u: goto L_089D1F84;
    case 194u: goto L_089D1FA0;
    case 195u: goto L_089D1FA8;
    case 196u: goto L_089D1FB4;
    case 197u: goto L_089D1FBC;
    case 198u: goto L_089D1FC4;
    case 199u: goto L_089D1FCC;
    case 200u: goto L_089D1FD0;
    case 201u: goto L_089D1FE4;
    case 202u: goto L_089D1FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D1000:
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] != aot_gpr[10]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 219u, 0x089D0FE0u>(ctx, &aot_mem); return;
    }
    goto L_089D1010;
L_089D1010:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(464)));
    aot_gpr[2] = (aot_gpr[9] - aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 219u, 0x089D0FE0u>(ctx, &aot_mem); return;
    }
    goto L_089D1024;
L_089D1024:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(aot_gpr[2]));
    (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 218u, 0x089D0FDCu>(ctx, &aot_mem); return;
L_089D1034:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 161u, 0x089D0BB8u>(ctx, &aot_mem); return;
L_089D1040:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 201u, 0x089D0ED8u>(ctx, &aot_mem); return;
L_089D104C:
    aot_gpr[3] = (0u | 54509u);
    (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 179u, 0x089D0D18u>(ctx, &aot_mem); return;
L_089D1054:
    aot_gpr[31] = (0x089D105Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x089D105Cu) goto L_089D105C;
    return;
L_089D105C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 160u, 0x089D0BA8u>(ctx, &aot_mem); return;
L_089D1064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089D10C0;
      }
      goto L_089D1094;
    }
L_089D1094:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089D10C0;
      }
      goto L_089D109C;
    }
L_089D109C:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089D10E0;
      }
      goto L_089D10C0;
    }
L_089D10C0:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D10E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D10ECu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D10ECu) goto L_089D10EC;
    return;
L_089D10EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (0u | 61440u);
    aot_gpr[11] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    aot_gpr[31] = (0x089D1114u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 105u, 0x089D06B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1114u) goto L_089D1114;
    return;
L_089D1114:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D10C0;
      }
      goto L_089D112C;
    }
L_089D112C:
    aot_gpr[31] = (0x089D1134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 134u, 0x089CF9E8u>(ctx, &aot_mem) && ctx.pc == 0x089D1134u) goto L_089D1134;
    return;
L_089D1134:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1154:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D12F0;
      }
      goto L_089D1190;
    }
L_089D1190:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[23] = (0u + 0u);
      if (branch_taken) {
          goto L_089D12F0;
      }
      goto L_089D1198;
    }
L_089D1198:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[29] + 0u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[21] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D1224;
      }
      goto L_089D11C8;
    }
L_089D11C8:
    aot_gpr[16] = (0u + 0u);
    goto L_089D11CC;
L_089D11CC:
    aot_gpr[3] = (aot_gpr[16] << 6u);
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[16];
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089D120C;
      }
      goto L_089D11E8;
    }
L_089D11E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[23] << 1u);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[3] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D12D4;
      }
      goto L_089D120C;
    }
L_089D120C:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D11CC;
      }
      goto L_089D1224;
    }
L_089D1224:
    aot_gpr[11] = (aot_gpr[22] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u | 61440u);
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[8] = (aot_gpr[23] + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[31] = (0x089D1248u);
    aot_gpr[10] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 105u, 0x089D06B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1248u) goto L_089D1248;
    return;
L_089D1248:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D1288;
      }
      goto L_089D1250;
    }
L_089D1250:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1288:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089D129Cu);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 134u, 0x089CF9E8u>(ctx, &aot_mem) && ctx.pc == 0x089D129Cu) goto L_089D129C;
    return;
L_089D129C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D12D4:
    aot_gpr[31] = (0x089D12DCu);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D12DCu) goto L_089D12DC;
    return;
L_089D12DC:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089D120C;
L_089D12F0:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + 0u);
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
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D132C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(36), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[9]);
      if (branch_taken) {
          goto L_089D15C8;
      }
      goto L_089D1388;
    }
L_089D1388:
    if (aot_gpr[7] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089D15CC;
    }
    goto L_089D1390;
L_089D1390:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089D15C8;
      }
      goto L_089D1398;
    }
L_089D1398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089D13A8u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089D13A8u) goto L_089D13A8;
    return;
L_089D13A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089D14EC;
      }
      goto L_089D13BC;
    }
L_089D13BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] & 16384u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[23] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D154C;
      }
      goto L_089D13E8;
    }
L_089D13E8:
    aot_gpr[21] = (aot_gpr[16] - aot_gpr[18]);
    aot_gpr[22] = (aot_gpr[18] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_089D1488;
      }
      goto L_089D13F8;
    }
L_089D13F8:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089D1400;
L_089D1400:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[16] >> 3u);
    aot_gpr[4] = (aot_gpr[16] & 7u);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> (aot_gpr[4] & 31u)));
    aot_gpr[3] = (aot_gpr[3] ^ 1u);
    aot_gpr[3] = (aot_gpr[3] & 1u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
      if (branch_taken) {
          goto L_089D146C;
      }
      goto L_089D1428;
    }
L_089D1428:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_089D146C;
      }
      goto L_089D1448;
    }
L_089D1448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[4] << 1u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[19]);
      if (branch_taken) {
          goto L_089D1604;
      }
      goto L_089D146C;
    }
L_089D146C:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D1470;
L_089D1470:
    aot_gpr[5] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[3] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D1400;
      }
      goto L_089D1488;
    }
L_089D1488:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089D14ACu);
    aot_gpr[11] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 105u, 0x089D06B0u>(ctx, &aot_mem) && ctx.pc == 0x089D14ACu) goto L_089D14AC;
    return;
L_089D14AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D1558;
      }
      goto L_089D14B4;
    }
L_089D14B4:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D14EC:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[4] & 16384u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[23] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D13E8;
      }
      goto L_089D154C;
    }
L_089D154C:
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[29]);
    goto L_089D13E8;
L_089D1558:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D156Cu);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 134u, 0x089CF9E8u>(ctx, &aot_mem) && ctx.pc == 0x089D156Cu) goto L_089D156C;
    return;
L_089D156C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D15C8:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089D15CC;
L_089D15CC:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1604:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D1470;
      }
      goto L_089D1620;
    }
L_089D1620:
    aot_gpr[31] = (0x089D1628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D1628u) goto L_089D1628;
    return;
L_089D1628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089D146C;
L_089D1638:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089D188C;
      }
      goto L_089D168C;
    }
L_089D168C:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[2] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089D188C;
      }
      goto L_089D1694;
    }
L_089D1694:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089D1854;
    }
    goto L_089D16A0;
L_089D16A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089D16B4u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 176u, 0x089C1CE8u>(ctx, &aot_mem) && ctx.pc == 0x089D16B4u) goto L_089D16B4;
    return;
L_089D16B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (aot_gpr[3] << 3u);
        goto L_089D1790;
    }
    goto L_089D16C8;
L_089D16C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u | 65534u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u | 65533u);
      if (branch_taken) {
          goto L_089D1804;
      }
      goto L_089D16D8;
    }
L_089D16D8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u | 65532u);
      if (branch_taken) {
          goto L_089D18C8;
      }
      goto L_089D16E0;
    }
L_089D16E0:
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089D1890;
    }
    goto L_089D16E8;
L_089D16E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[22] & 16384u);
      if (branch_taken) {
          goto L_089D188C;
      }
      goto L_089D16F8;
    }
L_089D16F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[5] << 3u);
      if (branch_taken) {
          goto L_089D1924;
      }
      goto L_089D1700;
    }
L_089D1700:
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    goto L_089D1704;
L_089D1704:
    aot_gpr[12] = (0u + 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D170C;
L_089D170C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (0u | 54502u);
      if (branch_taken) {
          goto L_089D17CC;
      }
      goto L_089D1714;
    }
L_089D1714:
    if (aot_gpr[23] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089D17D0;
    }
    goto L_089D171C;
L_089D171C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[22] + 0u);
    aot_gpr[7] = (aot_gpr[12] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089D1744u);
    aot_gpr[11] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0460_entry, 460u, 105u, 0x089D06B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1744u) goto L_089D1744;
    return;
L_089D1744:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089D17CC;
      }
      goto L_089D1750;
    }
L_089D1750:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[12] + 0u);
    aot_gpr[31] = (0x089D1764u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 134u, 0x089CF9E8u>(ctx, &aot_mem) && ctx.pc == 0x089D1764u) goto L_089D1764;
    return;
L_089D1764:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_089D17CC;
L_089D1790:
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    goto L_089D16C8;
L_089D17CC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089D17D0;
L_089D17D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[22] & 16384u);
    aot_gpr[12] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[19] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089D19C8;
      }
      goto L_089D1830;
    }
L_089D1830:
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[23] = (0u + 0u);
      if (branch_taken) {
          goto L_089D1954;
      }
      goto L_089D1840;
    }
L_089D1840:
    if (aot_gpr[19] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        goto L_089D1854;
    }
    goto L_089D1848;
L_089D1848:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D170C;
      }
      goto L_089D1850;
    }
L_089D1850:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089D1854;
L_089D1854:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D188C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    goto L_089D1890;
L_089D1890:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D18C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 54509u);
    aot_gpr[6] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089D17CC;
      }
      goto L_089D18E4;
    }
L_089D18E4:
    aot_gpr[2] = (aot_gpr[22] & 16384u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
        goto L_089D1704;
    }
    goto L_089D18F0;
L_089D18F0:
    aot_gpr[2] = (aot_gpr[3] << 6u);
    aot_gpr[4] = (aot_gpr[3] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[31] = (0x089D1910u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D1910u) goto L_089D1910;
    return;
L_089D1910:
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr[12] = (aot_gpr[30] + 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089D170C;
L_089D1924:
    aot_gpr[2] = (aot_gpr[5] << 6u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[31] = (0x089D1940u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D1940u) goto L_089D1940;
    return;
L_089D1940:
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(16));
    aot_gpr[12] = (aot_gpr[30] + 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089D170C;
L_089D1954:
    aot_gpr[20] = (0u + 0u);
    goto L_089D1958;
L_089D1958:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D1980;
      }
      goto L_089D1964;
    }
L_089D1964:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[23] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[21]);
      if (branch_taken) {
          goto L_089D199C;
      }
      goto L_089D197C;
    }
L_089D197C:
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D1980;
L_089D1980:
    aot_gpr[20] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[4] & 65535u);
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089D1958;
      }
      goto L_089D1994;
    }
L_089D1994:
    // nop
    goto L_089D1840;
L_089D199C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[12] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[20]));
      if (branch_taken) {
          goto L_089D19C0;
      }
      goto L_089D19AC;
    }
L_089D19AC:
    aot_gpr[31] = (0x089D19B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), aot_gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0459_entry, 459u, 130u, 0x089CF9C4u>(ctx, &aot_mem) && ctx.pc == 0x089D19B4u) goto L_089D19B4;
    return;
L_089D19B4:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (aot_gpr[12] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089D19C0;
L_089D19C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_089D197C;
L_089D19C8:
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[29] + 0u);
    goto L_089D1830;
L_089D19D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 54509u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D19DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 54509u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D19E4:
    aot_gpr[10] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[7] = (0u | 61440u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem); return;
L_089D1A04:
    aot_gpr[9] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (0u | 61440u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 104u, 0x089C367Cu>(ctx, &aot_mem); return;
L_089D1A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] & 65535u);
      if (branch_taken) {
          goto L_089D1A50;
      }
      goto L_089D1A40;
    }
L_089D1A40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A50:
    aot_gpr[31] = (0x089D1A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089D1A58u) goto L_089D1A58;
    return;
L_089D1A58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D1A40;
      }
      goto L_089D1A60;
    }
L_089D1A60:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A68:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 54509u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A80:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089D1AACu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0450_entry, 450u, 11u, 0x089C605Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1AACu) goto L_089D1AAC;
    return;
L_089D1AAC:
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u | 54501u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089D1ACC;
      }
      goto L_089D1AC4;
    }
L_089D1AC4:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089D1ACCu);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1ACCu) goto L_089D1ACC;
    return;
L_089D1ACC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 54501u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1AE0:
    aot_gpr[5] = (0u | 65535u);
    goto L_089D1A98;
L_089D1AE8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089D1B00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1B00u) goto L_089D1B00;
    return;
L_089D1B00:
    aot_gpr[31] = (0x089D1B08u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1B08u) goto L_089D1B08;
    return;
L_089D1B08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D1B1C;
      }
      goto L_089D1B10;
    }
L_089D1B10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1B1C:
    aot_gpr[31] = (0x089D1B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0468_entry, 468u, 140u, 0x089D88B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1B24u) goto L_089D1B24;
    return;
L_089D1B24:
    aot_gpr[31] = (0x089D1B2Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1B2Cu) goto L_089D1B2C;
    return;
L_089D1B2C:
    aot_gpr[31] = (0x089D1B34u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1B34u) goto L_089D1B34;
    return;
L_089D1B34:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1B48:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D1B78;
      }
      goto L_089D1B54;
    }
L_089D1B54:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4096));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089D1B78;
L_089D1B78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1B80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089D1B94u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 35u, 0x089D41A0u>(ctx, &aot_mem) && ctx.pc == 0x089D1B94u) goto L_089D1B94;
    return;
L_089D1B94:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D1BFC;
      }
      goto L_089D1B9C;
    }
L_089D1B9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(129) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089D1BFC;
      }
      goto L_089D1BAC;
    }
L_089D1BAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(248), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(256), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1BFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1C14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089D1C58u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1C58u) goto L_089D1C58;
    return;
L_089D1C58:
    aot_gpr[31] = (0x089D1C60u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1C60u) goto L_089D1C60;
    return;
L_089D1C60:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    aot_gpr[10] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089D1C9C;
      }
      goto L_089D1C80;
    }
L_089D1C80:
    aot_gpr[31] = (0x089D1C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0468_entry, 468u, 145u, 0x089D891Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1C88u) goto L_089D1C88;
    return;
L_089D1C88:
    aot_gpr[31] = (0x089D1C90u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1C90u) goto L_089D1C90;
    return;
L_089D1C90:
    aot_gpr[31] = (0x089D1C98u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1C98u) goto L_089D1C98;
    return;
L_089D1C98:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089D1C9C;
L_089D1C9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[31] = (0x089D1D10u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1D10u) goto L_089D1D10;
    return;
L_089D1D10:
    aot_gpr[31] = (0x089D1D18u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1D18u) goto L_089D1D18;
    return;
L_089D1D18:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    aot_gpr[10] = (aot_gpr[21] + 0u);
    aot_gpr[11] = (aot_gpr[22] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_089D1D64;
      }
      goto L_089D1D3C;
    }
L_089D1D3C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[31] = (0x089D1D50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 135u, 0x089D2864u>(ctx, &aot_mem) && ctx.pc == 0x089D1D50u) goto L_089D1D50;
    return;
L_089D1D50:
    aot_gpr[31] = (0x089D1D58u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1D58u) goto L_089D1D58;
    return;
L_089D1D58:
    aot_gpr[31] = (0x089D1D60u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1D60u) goto L_089D1D60;
    return;
L_089D1D60:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089D1D64;
L_089D1D64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1D90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_089D1DC8;
      }
      goto L_089D1DB0;
    }
L_089D1DB0:
    aot_gpr[31] = (0x089D1DB8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1DB8u) goto L_089D1DB8;
    return;
L_089D1DB8:
    aot_gpr[31] = (0x089D1DC0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1DC0u) goto L_089D1DC0;
    return;
L_089D1DC0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D1DDC;
      }
      goto L_089D1DC8;
    }
L_089D1DC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1DDC:
    aot_gpr[31] = (0x089D1DE4u);
    // nop
    goto L_089D1FF8;
L_089D1DE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D1DF0;
      }
      goto L_089D1DEC;
    }
L_089D1DEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089D1DF0;
L_089D1DF0:
    aot_gpr[31] = (0x089D1DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1DF8u) goto L_089D1DF8;
    return;
L_089D1DF8:
    aot_gpr[31] = (0x089D1E00u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1E00u) goto L_089D1E00;
    return;
L_089D1E00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E14:
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089D1E38u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1E38u) goto L_089D1E38;
    return;
L_089D1E38:
    aot_gpr[31] = (0x089D1E40u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1E40u) goto L_089D1E40;
    return;
L_089D1E40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089D1E58;
      }
      goto L_089D1E48;
    }
L_089D1E48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E58:
    aot_gpr[31] = (0x089D1E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 216u, 0x089D2ECCu>(ctx, &aot_mem) && ctx.pc == 0x089D1E60u) goto L_089D1E60;
    return;
L_089D1E60:
    aot_gpr[31] = (0x089D1E68u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1E68u) goto L_089D1E68;
    return;
L_089D1E68:
    aot_gpr[31] = (0x089D1E70u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1E70u) goto L_089D1E70;
    return;
L_089D1E70:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089D1EA8u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1EA8u) goto L_089D1EA8;
    return;
L_089D1EA8:
    aot_gpr[31] = (0x089D1EB0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1EB0u) goto L_089D1EB0;
    return;
L_089D1EB0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D1EDC;
      }
      goto L_089D1EC0;
    }
L_089D1EC0:
    aot_gpr[31] = (0x089D1EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0468_entry, 468u, 223u, 0x089D8EF0u>(ctx, &aot_mem) && ctx.pc == 0x089D1EC8u) goto L_089D1EC8;
    return;
L_089D1EC8:
    aot_gpr[31] = (0x089D1ED0u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1ED0u) goto L_089D1ED0;
    return;
L_089D1ED0:
    aot_gpr[31] = (0x089D1ED8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1ED8u) goto L_089D1ED8;
    return;
L_089D1ED8:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089D1EDC;
L_089D1EDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089D1F28u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1F28u) goto L_089D1F28;
    return;
L_089D1F28:
    aot_gpr[31] = (0x089D1F30u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1F30u) goto L_089D1F30;
    return;
L_089D1F30:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089D1F64;
      }
      goto L_089D1F48;
    }
L_089D1F48:
    aot_gpr[31] = (0x089D1F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0468_entry, 468u, 238u, 0x089D8FD4u>(ctx, &aot_mem) && ctx.pc == 0x089D1F50u) goto L_089D1F50;
    return;
L_089D1F50:
    aot_gpr[31] = (0x089D1F58u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1F58u) goto L_089D1F58;
    return;
L_089D1F58:
    aot_gpr[31] = (0x089D1F60u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1F60u) goto L_089D1F60;
    return;
L_089D1F60:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089D1F64;
L_089D1F64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089D1FA0u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1FA0u) goto L_089D1FA0;
    return;
L_089D1FA0:
    aot_gpr[31] = (0x089D1FA8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1FA8u) goto L_089D1FA8;
    return;
L_089D1FA8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089D1FD0;
      }
      goto L_089D1FB4;
    }
L_089D1FB4:
    aot_gpr[31] = (0x089D1FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 44u, 0x089D2260u>(ctx, &aot_mem) && ctx.pc == 0x089D1FBCu) goto L_089D1FBC;
    return;
L_089D1FBC:
    aot_gpr[31] = (0x089D1FC4u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089D1FC4u) goto L_089D1FC4;
    return;
L_089D1FC4:
    aot_gpr[31] = (0x089D1FCCu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D1FCCu) goto L_089D1FCC;
    return;
L_089D1FCC:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089D1FD0;
L_089D1FD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1FE4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(292), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1FF8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    ctx.pc = 0x089D2000u; return;
}

void recomp_unit_0461(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0461_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_461(Runtime &runtime) {
    runtime.register_generated_unit(461u, 0x089D1000u, 4096u, &recomp_unit_0461, &recomp_unit_0461_entry);
    runtime.register_function(0x089D1000u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1010u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1024u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1034u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1040u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D104Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1054u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D105Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1064u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1094u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D109Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D10C0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D10E0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D10ECu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1114u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D112Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1134u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1154u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1190u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1198u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D11C8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D11CCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D11E8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D120Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1224u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1248u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1250u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1288u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D129Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D12D4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D12DCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D12F0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D132Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1388u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1390u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1398u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D13A8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D13BCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D13E8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D13F8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1400u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1428u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1448u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D146Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1470u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1488u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D14ACu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D14B4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D14ECu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D154Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1558u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D156Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D15C8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D15CCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1604u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1620u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1628u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1638u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D168Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1694u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16A0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16B4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16C8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16D8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16E0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16E8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D16F8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1700u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1704u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D170Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1714u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D171Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1744u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1750u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1764u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1790u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D17CCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D17D0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1804u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1830u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1840u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1848u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1850u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1854u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D188Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1890u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D18C8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D18E4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D18F0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1910u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1924u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1940u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1954u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1958u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1964u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D197Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1980u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1994u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D199Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19ACu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19B4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19C0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19C8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19D4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19DCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D19E4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A04u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A20u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A40u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A50u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A58u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A60u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A68u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A70u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A78u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A80u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A88u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A90u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1A98u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1AACu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1AC4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1ACCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1AE0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1AE8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1AF0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B00u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B08u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B10u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B1Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B24u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B2Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B34u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B48u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B54u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B78u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B80u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B94u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1B9Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1BACu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1BFCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C14u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C58u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C60u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C80u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C88u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C90u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C98u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1C9Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1CC4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D10u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D18u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D3Cu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D50u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D58u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D60u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D64u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1D90u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DB0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DB8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DC0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DC8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DDCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DE4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DECu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DF0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1DF8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E00u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E14u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E24u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E38u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E40u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E48u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E58u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E60u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E68u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E70u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1E84u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1EA8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1EB0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1EC0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1EC8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1ED0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1ED8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1EDCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1EF4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F28u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F30u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F48u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F50u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F58u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F60u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F64u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1F84u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FA0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FA8u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FB4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FBCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FC4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FCCu, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FD0u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FE4u, &recomp_unit_0461, "recomp_unit_0461");
    runtime.register_function(0x089D1FF8u, &recomp_unit_0461, "recomp_unit_0461");
}
} // namespace psprecomp
