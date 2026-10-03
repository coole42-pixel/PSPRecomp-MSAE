#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0533[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70,
    0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87,
    0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104,
    0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121,
    0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138,
    0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155,
    0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172,
    0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182,
    0, 183, 0, 0, 184, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198,
    0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227,
};
void recomp_unit_0533_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A19000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0533[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A19000;
    case 2u: goto L_08A1901C;
    case 3u: goto L_08A19044;
    case 4u: goto L_08A19058;
    case 5u: goto L_08A19064;
    case 6u: goto L_08A19098;
    case 7u: goto L_08A190A0;
    case 8u: goto L_08A190B0;
    case 9u: goto L_08A190C8;
    case 10u: goto L_08A190E4;
    case 11u: goto L_08A190F4;
    case 12u: goto L_08A19114;
    case 13u: goto L_08A1911C;
    case 14u: goto L_08A19124;
    case 15u: goto L_08A19148;
    case 16u: goto L_08A1914C;
    case 17u: goto L_08A1915C;
    case 18u: goto L_08A19190;
    case 19u: goto L_08A191A0;
    case 20u: goto L_08A191CC;
    case 21u: goto L_08A191D0;
    case 22u: goto L_08A191E0;
    case 23u: goto L_08A191E4;
    case 24u: goto L_08A19224;
    case 25u: goto L_08A19234;
    case 26u: goto L_08A19260;
    case 27u: goto L_08A19274;
    case 28u: goto L_08A19278;
    case 29u: goto L_08A1929C;
    case 30u: goto L_08A192AC;
    case 31u: goto L_08A192E0;
    case 32u: goto L_08A192F0;
    case 33u: goto L_08A1931C;
    case 34u: goto L_08A19330;
    case 35u: goto L_08A19334;
    case 36u: goto L_08A19358;
    case 37u: goto L_08A19368;
    case 38u: goto L_08A1939C;
    case 39u: goto L_08A193AC;
    case 40u: goto L_08A193D8;
    case 41u: goto L_08A193EC;
    case 42u: goto L_08A193F0;
    case 43u: goto L_08A19414;
    case 44u: goto L_08A19424;
    case 45u: goto L_08A19444;
    case 46u: goto L_08A19454;
    case 47u: goto L_08A19480;
    case 48u: goto L_08A19494;
    case 49u: goto L_08A19498;
    case 50u: goto L_08A194BC;
    case 51u: goto L_08A194CC;
    case 52u: goto L_08A19500;
    case 53u: goto L_08A19510;
    case 54u: goto L_08A1953C;
    case 55u: goto L_08A19550;
    case 56u: goto L_08A19554;
    case 57u: goto L_08A19578;
    case 58u: goto L_08A19588;
    case 59u: goto L_08A195B4;
    case 60u: goto L_08A195E0;
    case 61u: goto L_08A19604;
    case 62u: goto L_08A19628;
    case 63u: goto L_08A19634;
    case 64u: goto L_08A1963C;
    case 65u: goto L_08A19644;
    case 66u: goto L_08A19654;
    case 67u: goto L_08A19664;
    case 68u: goto L_08A1966C;
    case 69u: goto L_08A19674;
    case 70u: goto L_08A1967C;
    case 71u: goto L_08A1968C;
    case 72u: goto L_08A1969C;
    case 73u: goto L_08A196A4;
    case 74u: goto L_08A196B8;
    case 75u: goto L_08A196CC;
    case 76u: goto L_08A196D4;
    case 77u: goto L_08A196DC;
    case 78u: goto L_08A196F4;
    case 79u: goto L_08A1970C;
    case 80u: goto L_08A1971C;
    case 81u: goto L_08A19724;
    case 82u: goto L_08A1972C;
    case 83u: goto L_08A1973C;
    case 84u: goto L_08A1974C;
    case 85u: goto L_08A19754;
    case 86u: goto L_08A19768;
    case 87u: goto L_08A1977C;
    case 88u: goto L_08A19784;
    case 89u: goto L_08A1978C;
    case 90u: goto L_08A197A4;
    case 91u: goto L_08A197BC;
    case 92u: goto L_08A197CC;
    case 93u: goto L_08A197D4;
    case 94u: goto L_08A197DC;
    case 95u: goto L_08A197EC;
    case 96u: goto L_08A197FC;
    case 97u: goto L_08A19804;
    case 98u: goto L_08A19818;
    case 99u: goto L_08A1982C;
    case 100u: goto L_08A19834;
    case 101u: goto L_08A1983C;
    case 102u: goto L_08A19854;
    case 103u: goto L_08A1986C;
    case 104u: goto L_08A1987C;
    case 105u: goto L_08A19884;
    case 106u: goto L_08A1988C;
    case 107u: goto L_08A198A4;
    case 108u: goto L_08A198BC;
    case 109u: goto L_08A198CC;
    case 110u: goto L_08A198D4;
    case 111u: goto L_08A198DC;
    case 112u: goto L_08A198EC;
    case 113u: goto L_08A198FC;
    case 114u: goto L_08A19904;
    case 115u: goto L_08A19918;
    case 116u: goto L_08A1992C;
    case 117u: goto L_08A19934;
    case 118u: goto L_08A1993C;
    case 119u: goto L_08A19954;
    case 120u: goto L_08A1996C;
    case 121u: goto L_08A1997C;
    case 122u: goto L_08A19984;
    case 123u: goto L_08A1998C;
    case 124u: goto L_08A199A4;
    case 125u: goto L_08A199BC;
    case 126u: goto L_08A199CC;
    case 127u: goto L_08A199D4;
    case 128u: goto L_08A199DC;
    case 129u: goto L_08A199EC;
    case 130u: goto L_08A199FC;
    case 131u: goto L_08A19A04;
    case 132u: goto L_08A19A18;
    case 133u: goto L_08A19A2C;
    case 134u: goto L_08A19A34;
    case 135u: goto L_08A19A3C;
    case 136u: goto L_08A19A54;
    case 137u: goto L_08A19A6C;
    case 138u: goto L_08A19A7C;
    case 139u: goto L_08A19A84;
    case 140u: goto L_08A19A8C;
    case 141u: goto L_08A19AA4;
    case 142u: goto L_08A19ABC;
    case 143u: goto L_08A19ACC;
    case 144u: goto L_08A19AD4;
    case 145u: goto L_08A19ADC;
    case 146u: goto L_08A19AEC;
    case 147u: goto L_08A19AFC;
    case 148u: goto L_08A19B04;
    case 149u: goto L_08A19B18;
    case 150u: goto L_08A19B2C;
    case 151u: goto L_08A19B34;
    case 152u: goto L_08A19B3C;
    case 153u: goto L_08A19B54;
    case 154u: goto L_08A19B6C;
    case 155u: goto L_08A19B7C;
    case 156u: goto L_08A19B84;
    case 157u: goto L_08A19B8C;
    case 158u: goto L_08A19BA4;
    case 159u: goto L_08A19BBC;
    case 160u: goto L_08A19BCC;
    case 161u: goto L_08A19BD4;
    case 162u: goto L_08A19BDC;
    case 163u: goto L_08A19BEC;
    case 164u: goto L_08A19BFC;
    case 165u: goto L_08A19C04;
    case 166u: goto L_08A19C18;
    case 167u: goto L_08A19C2C;
    case 168u: goto L_08A19C34;
    case 169u: goto L_08A19C3C;
    case 170u: goto L_08A19C54;
    case 171u: goto L_08A19C6C;
    case 172u: goto L_08A19C7C;
    case 173u: goto L_08A19C84;
    case 174u: goto L_08A19C8C;
    case 175u: goto L_08A19CA4;
    case 176u: goto L_08A19CBC;
    case 177u: goto L_08A19CCC;
    case 178u: goto L_08A19CD4;
    case 179u: goto L_08A19CDC;
    case 180u: goto L_08A19CEC;
    case 181u: goto L_08A19CF4;
    case 182u: goto L_08A19CFC;
    case 183u: goto L_08A19D04;
    case 184u: goto L_08A19D10;
    case 185u: goto L_08A19D14;
    case 186u: goto L_08A19D2C;
    case 187u: goto L_08A19D48;
    case 188u: goto L_08A19D68;
    case 189u: goto L_08A19D74;
    case 190u: goto L_08A19D7C;
    case 191u: goto L_08A19D90;
    case 192u: goto L_08A19DB4;
    case 193u: goto L_08A19DBC;
    case 194u: goto L_08A19DC8;
    case 195u: goto L_08A19DD0;
    case 196u: goto L_08A19DD8;
    case 197u: goto L_08A19DF4;
    case 198u: goto L_08A19DFC;
    case 199u: goto L_08A19E10;
    case 200u: goto L_08A19E18;
    case 201u: goto L_08A19E34;
    case 202u: goto L_08A19E44;
    case 203u: goto L_08A19E58;
    case 204u: goto L_08A19E60;
    case 205u: goto L_08A19E6C;
    case 206u: goto L_08A19E7C;
    case 207u: goto L_08A19E90;
    case 208u: goto L_08A19EB4;
    case 209u: goto L_08A19EC8;
    case 210u: goto L_08A19ED4;
    case 211u: goto L_08A19EE4;
    case 212u: goto L_08A19EF8;
    case 213u: goto L_08A19F00;
    case 214u: goto L_08A19F2C;
    case 215u: goto L_08A19F38;
    case 216u: goto L_08A19F48;
    case 217u: goto L_08A19F50;
    case 218u: goto L_08A19F58;
    case 219u: goto L_08A19F64;
    case 220u: goto L_08A19F74;
    case 221u: goto L_08A19F7C;
    case 222u: goto L_08A19F9C;
    case 223u: goto L_08A19FA4;
    case 224u: goto L_08A19FC0;
    case 225u: goto L_08A19FE0;
    case 226u: goto L_08A19FEC;
    case 227u: goto L_08A19FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A19000:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A1901Cu);
    aot_gpr[7] = (0u | 451u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1901Cu) goto L_08A1901C;
    return;
L_08A1901C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A19044u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19044u) goto L_08A19044;
    return;
L_08A19044:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    goto L_08A19058;
L_08A19058:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A19098u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1332));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A19098u) goto L_08A19098;
    return;
L_08A19098:
    aot_gpr[31] = (0x08A190A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 11u, 0x089FF0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A190A0u) goto L_08A190A0;
    return;
L_08A190A0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 462u);
    aot_gpr[31] = (0x08A190B0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A190B0u) goto L_08A190B0;
    return;
L_08A190B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1911C;
      }
      goto L_08A190C8;
    }
L_08A190C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A190E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A190E4u) goto L_08A190E4;
    return;
L_08A190E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 473u);
    aot_gpr[31] = (0x08A190F4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A190F4u) goto L_08A190F4;
    return;
L_08A190F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19148;
      }
      goto L_08A19114;
    }
L_08A19114:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A191D0;
      }
      goto L_08A1911C;
    }
L_08A1911C:
    aot_gpr[31] = (0x08A19124u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A19604;
L_08A19124:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19148:
    aot_gpr[21] = (0u | 0u);
    goto L_08A1914C;
L_08A1914C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1915Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0532_entry, 532u, 88u, 0x08A185D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1915Cu) goto L_08A1915C;
    return;
L_08A1915C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19190u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19190u) goto L_08A19190;
    return;
L_08A19190:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 479u);
    aot_gpr[31] = (0x08A191A0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A191A0u) goto L_08A191A0;
    return;
L_08A191A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A1914C;
      }
      goto L_08A191CC;
    }
L_08A191CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08A191D0;
L_08A191D0:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19260;
      }
      goto L_08A191E0;
    }
L_08A191E0:
    aot_gpr[21] = (0u | 0u);
    goto L_08A191E4;
L_08A191E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19224u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19224u) goto L_08A19224;
    return;
L_08A19224:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 486u);
    aot_gpr[31] = (0x08A19234u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A19234u) goto L_08A19234;
    return;
L_08A19234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A191E4;
      }
      goto L_08A19260;
    }
L_08A19260:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1931C;
      }
      goto L_08A19274;
    }
L_08A19274:
    aot_gpr[21] = (0u | 0u);
    goto L_08A19278;
L_08A19278:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1929Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1929Cu) goto L_08A1929C;
    return;
L_08A1929C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 492u);
    aot_gpr[31] = (0x08A192ACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A192ACu) goto L_08A192AC;
    return;
L_08A192AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A192E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A192E0u) goto L_08A192E0;
    return;
L_08A192E0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 493u);
    aot_gpr[31] = (0x08A192F0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A192F0u) goto L_08A192F0;
    return;
L_08A192F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A19278;
      }
      goto L_08A1931C;
    }
L_08A1931C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A193D8;
      }
      goto L_08A19330;
    }
L_08A19330:
    aot_gpr[21] = (0u | 0u);
    goto L_08A19334;
L_08A19334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19358u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19358u) goto L_08A19358;
    return;
L_08A19358:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 499u);
    aot_gpr[31] = (0x08A19368u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A19368u) goto L_08A19368;
    return;
L_08A19368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1939Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1939Cu) goto L_08A1939C;
    return;
L_08A1939C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 500u);
    aot_gpr[31] = (0x08A193ACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A193ACu) goto L_08A193AC;
    return;
L_08A193AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A19334;
      }
      goto L_08A193D8;
    }
L_08A193D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19480;
      }
      goto L_08A193EC;
    }
L_08A193EC:
    aot_gpr[21] = (0u | 0u);
    goto L_08A193F0;
L_08A193F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19414u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19414u) goto L_08A19414;
    return;
L_08A19414:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 506u);
    aot_gpr[31] = (0x08A19424u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A19424u) goto L_08A19424;
    return;
L_08A19424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[31] = (0x08A19444u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 117u, 0x08A1D7BCu>(ctx, &aot_mem) && ctx.pc == 0x08A19444u) goto L_08A19444;
    return;
L_08A19444:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 507u);
    aot_gpr[31] = (0x08A19454u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A19454u) goto L_08A19454;
    return;
L_08A19454:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A193F0;
      }
      goto L_08A19480;
    }
L_08A19480:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1953C;
      }
      goto L_08A19494;
    }
L_08A19494:
    aot_gpr[21] = (0u | 0u);
    goto L_08A19498;
L_08A19498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A194BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A194BCu) goto L_08A194BC;
    return;
L_08A194BC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 513u);
    aot_gpr[31] = (0x08A194CCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A194CCu) goto L_08A194CC;
    return;
L_08A194CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19500u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19500u) goto L_08A19500;
    return;
L_08A19500:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 514u);
    aot_gpr[31] = (0x08A19510u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A19510u) goto L_08A19510;
    return;
L_08A19510:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A19498;
      }
      goto L_08A1953C;
    }
L_08A1953C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A195E0;
      }
      goto L_08A19550;
    }
L_08A19550:
    aot_gpr[21] = (0u | 0u);
    goto L_08A19554;
L_08A19554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19578u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19578u) goto L_08A19578;
    return;
L_08A19578:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 520u);
    aot_gpr[31] = (0x08A19588u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A19588u) goto L_08A19588;
    return;
L_08A19588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 521u);
    aot_gpr[31] = (0x08A195B4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A195B4u) goto L_08A195B4;
    return;
L_08A195B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A19554;
      }
      goto L_08A195E0;
    }
L_08A195E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19D14;
      }
      goto L_08A19628;
    }
L_08A19628:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A19664;
    }
    goto L_08A19634;
L_08A19634:
    aot_gpr[31] = (0x08A1963Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1963Cu) goto L_08A1963C;
    return;
L_08A1963C:
    aot_gpr[31] = (0x08A19644u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19644u) goto L_08A19644;
    return;
L_08A19644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19654u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19654u) goto L_08A19654;
    return;
L_08A19654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A19664;
L_08A19664:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08A1969C;
    }
    goto L_08A1966C;
L_08A1966C:
    aot_gpr[31] = (0x08A19674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19674u) goto L_08A19674;
    return;
L_08A19674:
    aot_gpr[31] = (0x08A1967Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1967Cu) goto L_08A1967C;
    return;
L_08A1967C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1968Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1968Cu) goto L_08A1968C;
    return;
L_08A1968C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A1969C;
L_08A1969C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08A1974C;
    }
    goto L_08A196A4;
L_08A196A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1971C;
      }
      goto L_08A196B8;
    }
L_08A196B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_08A1970C;
    }
    goto L_08A196CC;
L_08A196CC:
    aot_gpr[31] = (0x08A196D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A196D4u) goto L_08A196D4;
    return;
L_08A196D4:
    aot_gpr[31] = (0x08A196DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A196DCu) goto L_08A196DC;
    return;
L_08A196DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A196F4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A196F4u) goto L_08A196F4;
    return;
L_08A196F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08A1970C;
L_08A1970C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A196B8;
      }
      goto L_08A1971C;
    }
L_08A1971C:
    aot_gpr[31] = (0x08A19724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19724u) goto L_08A19724;
    return;
L_08A19724:
    aot_gpr[31] = (0x08A1972Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1972Cu) goto L_08A1972C;
    return;
L_08A1972C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1973Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1973Cu) goto L_08A1973C;
    return;
L_08A1973C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A1974C;
L_08A1974C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A197FC;
    }
    goto L_08A19754;
L_08A19754:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A197CC;
      }
      goto L_08A19768;
    }
L_08A19768:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_08A197BC;
    }
    goto L_08A1977C;
L_08A1977C:
    aot_gpr[31] = (0x08A19784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19784u) goto L_08A19784;
    return;
L_08A19784:
    aot_gpr[31] = (0x08A1978Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1978Cu) goto L_08A1978C;
    return;
L_08A1978C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A197A4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A197A4u) goto L_08A197A4;
    return;
L_08A197A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08A197BC;
L_08A197BC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A19768;
      }
      goto L_08A197CC;
    }
L_08A197CC:
    aot_gpr[31] = (0x08A197D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A197D4u) goto L_08A197D4;
    return;
L_08A197D4:
    aot_gpr[31] = (0x08A197DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A197DCu) goto L_08A197DC;
    return;
L_08A197DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A197ECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A197ECu) goto L_08A197EC;
    return;
L_08A197EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A197FC;
L_08A197FC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A198FC;
    }
    goto L_08A19804;
L_08A19804:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A198CC;
      }
      goto L_08A19818;
    }
L_08A19818:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A1986C;
    }
    goto L_08A1982C;
L_08A1982C:
    aot_gpr[31] = (0x08A19834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19834u) goto L_08A19834;
    return;
L_08A19834:
    aot_gpr[31] = (0x08A1983Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1983Cu) goto L_08A1983C;
    return;
L_08A1983C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19854u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19854u) goto L_08A19854;
    return;
L_08A19854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A1986C;
L_08A1986C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
        goto L_08A198BC;
    }
    goto L_08A1987C;
L_08A1987C:
    aot_gpr[31] = (0x08A19884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19884u) goto L_08A19884;
    return;
L_08A19884:
    aot_gpr[31] = (0x08A1988Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1988Cu) goto L_08A1988C;
    return;
L_08A1988C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A198A4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A198A4u) goto L_08A198A4;
    return;
L_08A198A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08A198BC;
L_08A198BC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A19818;
      }
      goto L_08A198CC;
    }
L_08A198CC:
    aot_gpr[31] = (0x08A198D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A198D4u) goto L_08A198D4;
    return;
L_08A198D4:
    aot_gpr[31] = (0x08A198DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A198DCu) goto L_08A198DC;
    return;
L_08A198DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A198ECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A198ECu) goto L_08A198EC;
    return;
L_08A198EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A198FC;
L_08A198FC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_08A199FC;
    }
    goto L_08A19904;
L_08A19904:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A199CC;
      }
      goto L_08A19918;
    }
L_08A19918:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A1996C;
    }
    goto L_08A1992C;
L_08A1992C:
    aot_gpr[31] = (0x08A19934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19934u) goto L_08A19934;
    return;
L_08A19934:
    aot_gpr[31] = (0x08A1993Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1993Cu) goto L_08A1993C;
    return;
L_08A1993C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19954u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19954u) goto L_08A19954;
    return;
L_08A19954:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A1996C;
L_08A1996C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
        goto L_08A199BC;
    }
    goto L_08A1997C;
L_08A1997C:
    aot_gpr[31] = (0x08A19984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19984u) goto L_08A19984;
    return;
L_08A19984:
    aot_gpr[31] = (0x08A1998Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1998Cu) goto L_08A1998C;
    return;
L_08A1998C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A199A4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A199A4u) goto L_08A199A4;
    return;
L_08A199A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A199BC;
L_08A199BC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A19918;
      }
      goto L_08A199CC;
    }
L_08A199CC:
    aot_gpr[31] = (0x08A199D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A199D4u) goto L_08A199D4;
    return;
L_08A199D4:
    aot_gpr[31] = (0x08A199DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A199DCu) goto L_08A199DC;
    return;
L_08A199DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A199ECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A199ECu) goto L_08A199EC;
    return;
L_08A199EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A199FC;
L_08A199FC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A19AFC;
    }
    goto L_08A19A04;
L_08A19A04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19ACC;
      }
      goto L_08A19A18;
    }
L_08A19A18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_08A19A6C;
    }
    goto L_08A19A2C;
L_08A19A2C:
    aot_gpr[31] = (0x08A19A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19A34u) goto L_08A19A34;
    return;
L_08A19A34:
    aot_gpr[31] = (0x08A19A3Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19A3Cu) goto L_08A19A3C;
    return;
L_08A19A3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19A54u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19A54u) goto L_08A19A54;
    return;
L_08A19A54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A19A6C;
L_08A19A6C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_08A19ABC;
    }
    goto L_08A19A7C;
L_08A19A7C:
    aot_gpr[31] = (0x08A19A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19A84u) goto L_08A19A84;
    return;
L_08A19A84:
    aot_gpr[31] = (0x08A19A8Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19A8Cu) goto L_08A19A8C;
    return;
L_08A19A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19AA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19AA4u) goto L_08A19AA4;
    return;
L_08A19AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_08A19ABC;
L_08A19ABC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A19A18;
      }
      goto L_08A19ACC;
    }
L_08A19ACC:
    aot_gpr[31] = (0x08A19AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19AD4u) goto L_08A19AD4;
    return;
L_08A19AD4:
    aot_gpr[31] = (0x08A19ADCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19ADCu) goto L_08A19ADC;
    return;
L_08A19ADC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19AECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19AECu) goto L_08A19AEC;
    return;
L_08A19AEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A19AFC;
L_08A19AFC:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08A19BFC;
    }
    goto L_08A19B04;
L_08A19B04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19BCC;
      }
      goto L_08A19B18;
    }
L_08A19B18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A19B6C;
    }
    goto L_08A19B2C;
L_08A19B2C:
    aot_gpr[31] = (0x08A19B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19B34u) goto L_08A19B34;
    return;
L_08A19B34:
    aot_gpr[31] = (0x08A19B3Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19B3Cu) goto L_08A19B3C;
    return;
L_08A19B3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19B54u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19B54u) goto L_08A19B54;
    return;
L_08A19B54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A19B6C;
L_08A19B6C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08A19BBC;
    }
    goto L_08A19B7C;
L_08A19B7C:
    aot_gpr[31] = (0x08A19B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19B84u) goto L_08A19B84;
    return;
L_08A19B84:
    aot_gpr[31] = (0x08A19B8Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19B8Cu) goto L_08A19B8C;
    return;
L_08A19B8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19BA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19BA4u) goto L_08A19BA4;
    return;
L_08A19BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08A19BBC;
L_08A19BBC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A19B18;
      }
      goto L_08A19BCC;
    }
L_08A19BCC:
    aot_gpr[31] = (0x08A19BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19BD4u) goto L_08A19BD4;
    return;
L_08A19BD4:
    aot_gpr[31] = (0x08A19BDCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19BDCu) goto L_08A19BDC;
    return;
L_08A19BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19BECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19BECu) goto L_08A19BEC;
    return;
L_08A19BEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08A19BFC;
L_08A19BFC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19CF4;
      }
      goto L_08A19C04;
    }
L_08A19C04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19CCC;
      }
      goto L_08A19C18;
    }
L_08A19C18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08A19C6C;
    }
    goto L_08A19C2C;
L_08A19C2C:
    aot_gpr[31] = (0x08A19C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19C34u) goto L_08A19C34;
    return;
L_08A19C34:
    aot_gpr[31] = (0x08A19C3Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19C3Cu) goto L_08A19C3C;
    return;
L_08A19C3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19C54u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19C54u) goto L_08A19C54;
    return;
L_08A19C54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08A19C6C;
L_08A19C6C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
        goto L_08A19CBC;
    }
    goto L_08A19C7C;
L_08A19C7C:
    aot_gpr[31] = (0x08A19C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19C84u) goto L_08A19C84;
    return;
L_08A19C84:
    aot_gpr[31] = (0x08A19C8Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19C8Cu) goto L_08A19C8C;
    return;
L_08A19C8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A19CA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19CA4u) goto L_08A19CA4;
    return;
L_08A19CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    goto L_08A19CBC;
L_08A19CBC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A19C18;
      }
      goto L_08A19CCC;
    }
L_08A19CCC:
    aot_gpr[31] = (0x08A19CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19CD4u) goto L_08A19CD4;
    return;
L_08A19CD4:
    aot_gpr[31] = (0x08A19CDCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19CDCu) goto L_08A19CDC;
    return;
L_08A19CDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19CECu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19CECu) goto L_08A19CEC;
    return;
L_08A19CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A19CF4;
L_08A19CF4:
    aot_gpr[31] = (0x08A19CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19CFCu) goto L_08A19CFC;
    return;
L_08A19CFC:
    aot_gpr[31] = (0x08A19D04u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19D04u) goto L_08A19D04;
    return;
L_08A19D04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08A19D10u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19D10u) goto L_08A19D10;
    return;
L_08A19D10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08A19D14;
L_08A19D14:
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
L_08A19D2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A19D7C;
      }
      goto L_08A19D48;
    }
L_08A19D48:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15912));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17992), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A19D68u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19D68u) goto L_08A19D68;
    return;
L_08A19D68:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19D7C;
      }
      goto L_08A19D74;
    }
L_08A19D74:
    aot_gpr[31] = (0x08A19D7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A19E44;
L_08A19D7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19D90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17992)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19DD8;
      }
      goto L_08A19DB4;
    }
L_08A19DB4:
    aot_gpr[31] = (0x08A19DBCu);
    aot_gpr[4] = (0u | 12u);
    goto L_08A19DFC;
L_08A19DBC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-17992), aot_gpr[17]);
        goto L_08A19DD8;
    }
    goto L_08A19DC8;
L_08A19DC8:
    aot_gpr[31] = (0x08A19DD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A19E7C;
L_08A19DD0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-17992), aot_gpr[17]);
    goto L_08A19DD8;
L_08A19DD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17992)));
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
L_08A19DF4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19DFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A19E10u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19E10u) goto L_08A19E10;
    return;
L_08A19E10:
    aot_gpr[31] = (0x08A19E18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19E18u) goto L_08A19E18;
    return;
L_08A19E18:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 22u);
    aot_gpr[31] = (0x08A19E34u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1216));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A19E34u) goto L_08A19E34;
    return;
L_08A19E34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19E44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A19E58u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A19E58u) goto L_08A19E58;
    return;
L_08A19E58:
    aot_gpr[31] = (0x08A19E60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19E60u) goto L_08A19E60;
    return;
L_08A19E60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19E6Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A19E6Cu) goto L_08A19E6C;
    return;
L_08A19E6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19E7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A19E90u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A19E90u) goto L_08A19E90;
    return;
L_08A19E90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15912));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19EB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A19EC8u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A19EC8u) goto L_08A19EC8;
    return;
L_08A19EC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19ED4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19ED4u) goto L_08A19ED4;
    return;
L_08A19ED4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19EE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1172));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19EE4u) goto L_08A19EE4;
    return;
L_08A19EE4:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19EF8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19F00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A19F2Cu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A19F2Cu) goto L_08A19F2C;
    return;
L_08A19F2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A19F38u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A19F38u) goto L_08A19F38;
    return;
L_08A19F38:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A19F48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1172));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19F48u) goto L_08A19F48;
    return;
L_08A19F48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A19F7C;
      }
      goto L_08A19F50;
    }
L_08A19F50:
    aot_gpr[31] = (0x08A19F58u);
    aot_gpr[4] = (0u | 304u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19F58u) goto L_08A19F58;
    return;
L_08A19F58:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (aot_gpr[19] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_08A19F7C;
    }
    goto L_08A19F64;
L_08A19F64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A19F74u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 69u, 0x08A26544u>(ctx, &aot_mem) && ctx.pc == 0x08A19F74u) goto L_08A19F74;
    return;
L_08A19F74:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_08A19F7C;
L_08A19F7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19F9C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A19FF4;
      }
      goto L_08A19FC0;
    }
L_08A19FC0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15976));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17984), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A19FE0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19FE0u) goto L_08A19FE0;
    return;
L_08A19FE0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19FF4;
      }
      goto L_08A19FEC;
    }
L_08A19FEC:
    aot_gpr[31] = (0x08A19FF4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 13u, 0x08A1A0BCu>(ctx, &aot_mem) && ctx.pc == 0x08A19FF4u) goto L_08A19FF4;
    return;
L_08A19FF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A1A000u; return;
}

void recomp_unit_0533(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0533_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_533(Runtime &runtime) {
    runtime.register_generated_unit(533u, 0x08A19000u, 4096u, &recomp_unit_0533, &recomp_unit_0533_entry);
    runtime.register_function(0x08A19000u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1901Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19044u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19058u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19064u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19098u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A190A0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A190B0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A190C8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A190E4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A190F4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19114u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1911Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19124u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19148u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1914Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1915Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19190u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A191A0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A191CCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A191D0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A191E0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A191E4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19224u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19234u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19260u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19274u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19278u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1929Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A192ACu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A192E0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A192F0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1931Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19330u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19334u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19358u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19368u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1939Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A193ACu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A193D8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A193ECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A193F0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19414u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19424u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19444u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19454u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19480u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19494u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19498u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A194BCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A194CCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19500u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19510u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1953Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19550u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19554u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19578u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19588u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A195B4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A195E0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19604u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19628u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19634u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1963Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19644u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19654u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19664u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1966Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19674u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1967Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1968Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1969Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A196A4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A196B8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A196CCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A196D4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A196DCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A196F4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1970Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1971Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19724u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1972Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1973Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1974Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19754u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19768u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1977Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19784u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1978Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197A4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197BCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197CCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197D4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197DCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197ECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A197FCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19804u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19818u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1982Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19834u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1983Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19854u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1986Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1987Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19884u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1988Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198A4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198BCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198CCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198D4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198DCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198ECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A198FCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19904u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19918u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1992Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19934u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1993Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19954u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1996Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1997Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19984u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A1998Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199A4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199BCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199CCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199D4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199DCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199ECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A199FCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A04u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A18u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A2Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A34u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A3Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A54u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A6Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A7Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A84u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19A8Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19AA4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19ABCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19ACCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19AD4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19ADCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19AECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19AFCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B04u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B18u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B2Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B34u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B3Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B54u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B6Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B7Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B84u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19B8Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BA4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BBCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BCCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BD4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BDCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19BFCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C04u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C18u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C2Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C34u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C3Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C54u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C6Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C7Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C84u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19C8Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CA4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CBCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CCCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CD4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CDCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CF4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19CFCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D04u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D10u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D14u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D2Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D48u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D68u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D74u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D7Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19D90u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DB4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DBCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DC8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DD0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DD8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DF4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19DFCu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E10u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E18u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E34u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E44u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E58u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E60u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E6Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E7Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19E90u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19EB4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19EC8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19ED4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19EE4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19EF8u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F00u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F2Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F38u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F48u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F50u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F58u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F64u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F74u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F7Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19F9Cu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19FA4u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19FC0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19FE0u, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19FECu, &recomp_unit_0533, "recomp_unit_0533");
    runtime.register_function(0x08A19FF4u, &recomp_unit_0533, "recomp_unit_0533");
}
} // namespace psprecomp
