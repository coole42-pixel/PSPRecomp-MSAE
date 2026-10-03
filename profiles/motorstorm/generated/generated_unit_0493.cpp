#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0493[1024] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 10, 0, 11, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21,
    22, 0, 0, 23, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 27, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 35, 0, 36, 0, 0, 0, 37, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0,
    56, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 63, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 69,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    96, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 102, 0, 0, 103, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 110, 111, 112, 0,
    0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0,
    142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0,
    0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163,
    0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 190, 0, 0, 191, 0, 192, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 198, 0, 0, 0, 0, 199, 0,
    200, 0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0,
    243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 255, 0, 0, 256, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267,
    0, 268, 0, 269, 270, 0, 0, 271, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 287,
};
void recomp_unit_0493_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F1000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0493[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F1000;
    case 2u: goto L_089F1008;
    case 3u: goto L_089F1018;
    case 4u: goto L_089F1030;
    case 5u: goto L_089F1040;
    case 6u: goto L_089F1048;
    case 7u: goto L_089F1054;
    case 8u: goto L_089F105C;
    case 9u: goto L_089F106C;
    case 10u: goto L_089F1084;
    case 11u: goto L_089F108C;
    case 12u: goto L_089F1090;
    case 13u: goto L_089F109C;
    case 14u: goto L_089F10B0;
    case 15u: goto L_089F10C0;
    case 16u: goto L_089F10C8;
    case 17u: goto L_089F10D4;
    case 18u: goto L_089F10E0;
    case 19u: goto L_089F10E8;
    case 20u: goto L_089F10F0;
    case 21u: goto L_089F10FC;
    case 22u: goto L_089F1100;
    case 23u: goto L_089F110C;
    case 24u: goto L_089F111C;
    case 25u: goto L_089F1120;
    case 26u: goto L_089F1128;
    case 27u: goto L_089F1140;
    case 28u: goto L_089F1144;
    case 29u: goto L_089F114C;
    case 30u: goto L_089F1174;
    case 31u: goto L_089F1194;
    case 32u: goto L_089F119C;
    case 33u: goto L_089F11A4;
    case 34u: goto L_089F11B0;
    case 35u: goto L_089F11B4;
    case 36u: goto L_089F11BC;
    case 37u: goto L_089F11CC;
    case 38u: goto L_089F11D0;
    case 39u: goto L_089F11E4;
    case 40u: goto L_089F1204;
    case 41u: goto L_089F1210;
    case 42u: goto L_089F1218;
    case 43u: goto L_089F1234;
    case 44u: goto L_089F1244;
    case 45u: goto L_089F1254;
    case 46u: goto L_089F126C;
    case 47u: goto L_089F1280;
    case 48u: goto L_089F1290;
    case 49u: goto L_089F12B0;
    case 50u: goto L_089F12BC;
    case 51u: goto L_089F12C8;
    case 52u: goto L_089F12E0;
    case 53u: goto L_089F12E8;
    case 54u: goto L_089F12F0;
    case 55u: goto L_089F12F8;
    case 56u: goto L_089F1300;
    case 57u: goto L_089F1308;
    case 58u: goto L_089F1314;
    case 59u: goto L_089F131C;
    case 60u: goto L_089F1324;
    case 61u: goto L_089F132C;
    case 62u: goto L_089F1334;
    case 63u: goto L_089F1338;
    case 64u: goto L_089F133C;
    case 65u: goto L_089F1358;
    case 66u: goto L_089F1364;
    case 67u: goto L_089F136C;
    case 68u: goto L_089F1374;
    case 69u: goto L_089F137C;
    case 70u: goto L_089F1388;
    case 71u: goto L_089F139C;
    case 72u: goto L_089F13B8;
    case 73u: goto L_089F13C8;
    case 74u: goto L_089F13D4;
    case 75u: goto L_089F13E0;
    case 76u: goto L_089F13E8;
    case 77u: goto L_089F13FC;
    case 78u: goto L_089F141C;
    case 79u: goto L_089F1428;
    case 80u: goto L_089F143C;
    case 81u: goto L_089F1454;
    case 82u: goto L_089F1464;
    case 83u: goto L_089F1478;
    case 84u: goto L_089F1498;
    case 85u: goto L_089F14A8;
    case 86u: goto L_089F14B4;
    case 87u: goto L_089F14C8;
    case 88u: goto L_089F14D8;
    case 89u: goto L_089F14E0;
    case 90u: goto L_089F14E8;
    case 91u: goto L_089F14F4;
    case 92u: goto L_089F1534;
    case 93u: goto L_089F1540;
    case 94u: goto L_089F154C;
    case 95u: goto L_089F1578;
    case 96u: goto L_089F1580;
    case 97u: goto L_089F1584;
    case 98u: goto L_089F15AC;
    case 99u: goto L_089F15C4;
    case 100u: goto L_089F15D0;
    case 101u: goto L_089F15E8;
    case 102u: goto L_089F15EC;
    case 103u: goto L_089F15F8;
    case 104u: goto L_089F160C;
    case 105u: goto L_089F1628;
    case 106u: goto L_089F163C;
    case 107u: goto L_089F1654;
    case 108u: goto L_089F1660;
    case 109u: goto L_089F1668;
    case 110u: goto L_089F1670;
    case 111u: goto L_089F1674;
    case 112u: goto L_089F1678;
    case 113u: goto L_089F1684;
    case 114u: goto L_089F168C;
    case 115u: goto L_089F1694;
    case 116u: goto L_089F169C;
    case 117u: goto L_089F16A8;
    case 118u: goto L_089F16B4;
    case 119u: goto L_089F16B8;
    case 120u: goto L_089F16C4;
    case 121u: goto L_089F16D4;
    case 122u: goto L_089F16DC;
    case 123u: goto L_089F1704;
    case 124u: goto L_089F170C;
    case 125u: goto L_089F1714;
    case 126u: goto L_089F1720;
    case 127u: goto L_089F173C;
    case 128u: goto L_089F1744;
    case 129u: goto L_089F1760;
    case 130u: goto L_089F1768;
    case 131u: goto L_089F1770;
    case 132u: goto L_089F1778;
    case 133u: goto L_089F1798;
    case 134u: goto L_089F17A0;
    case 135u: goto L_089F17AC;
    case 136u: goto L_089F17B8;
    case 137u: goto L_089F17C4;
    case 138u: goto L_089F17D0;
    case 139u: goto L_089F17DC;
    case 140u: goto L_089F17E8;
    case 141u: goto L_089F17F4;
    case 142u: goto L_089F1800;
    case 143u: goto L_089F180C;
    case 144u: goto L_089F1818;
    case 145u: goto L_089F1824;
    case 146u: goto L_089F1830;
    case 147u: goto L_089F183C;
    case 148u: goto L_089F1848;
    case 149u: goto L_089F1854;
    case 150u: goto L_089F1860;
    case 151u: goto L_089F186C;
    case 152u: goto L_089F1878;
    case 153u: goto L_089F1884;
    case 154u: goto L_089F1890;
    case 155u: goto L_089F189C;
    case 156u: goto L_089F18A8;
    case 157u: goto L_089F18B4;
    case 158u: goto L_089F18C0;
    case 159u: goto L_089F18CC;
    case 160u: goto L_089F18D8;
    case 161u: goto L_089F18E4;
    case 162u: goto L_089F18F0;
    case 163u: goto L_089F18FC;
    case 164u: goto L_089F1908;
    case 165u: goto L_089F1914;
    case 166u: goto L_089F1920;
    case 167u: goto L_089F192C;
    case 168u: goto L_089F1938;
    case 169u: goto L_089F1944;
    case 170u: goto L_089F1950;
    case 171u: goto L_089F195C;
    case 172u: goto L_089F1978;
    case 173u: goto L_089F199C;
    case 174u: goto L_089F19A4;
    case 175u: goto L_089F19A8;
    case 176u: goto L_089F19B0;
    case 177u: goto L_089F19BC;
    case 178u: goto L_089F19CC;
    case 179u: goto L_089F19D8;
    case 180u: goto L_089F19E8;
    case 181u: goto L_089F19F4;
    case 182u: goto L_089F1A1C;
    case 183u: goto L_089F1A28;
    case 184u: goto L_089F1A38;
    case 185u: goto L_089F1A40;
    case 186u: goto L_089F1A4C;
    case 187u: goto L_089F1A54;
    case 188u: goto L_089F1A5C;
    case 189u: goto L_089F1A7C;
    case 190u: goto L_089F1A8C;
    case 191u: goto L_089F1A98;
    case 192u: goto L_089F1AA0;
    case 193u: goto L_089F1AA4;
    case 194u: goto L_089F1AB8;
    case 195u: goto L_089F1ACC;
    case 196u: goto L_089F1AD8;
    case 197u: goto L_089F1AE0;
    case 198u: goto L_089F1AE4;
    case 199u: goto L_089F1AF8;
    case 200u: goto L_089F1B00;
    case 201u: goto L_089F1B10;
    case 202u: goto L_089F1B18;
    case 203u: goto L_089F1B20;
    case 204u: goto L_089F1B28;
    case 205u: goto L_089F1B30;
    case 206u: goto L_089F1B38;
    case 207u: goto L_089F1B40;
    case 208u: goto L_089F1B50;
    case 209u: goto L_089F1B58;
    case 210u: goto L_089F1B60;
    case 211u: goto L_089F1B6C;
    case 212u: goto L_089F1B74;
    case 213u: goto L_089F1B7C;
    case 214u: goto L_089F1B84;
    case 215u: goto L_089F1BAC;
    case 216u: goto L_089F1BB4;
    case 217u: goto L_089F1BBC;
    case 218u: goto L_089F1BC4;
    case 219u: goto L_089F1BD0;
    case 220u: goto L_089F1BD8;
    case 221u: goto L_089F1BE4;
    case 222u: goto L_089F1C04;
    case 223u: goto L_089F1C10;
    case 224u: goto L_089F1C30;
    case 225u: goto L_089F1C48;
    case 226u: goto L_089F1C54;
    case 227u: goto L_089F1C64;
    case 228u: goto L_089F1C70;
    case 229u: goto L_089F1C8C;
    case 230u: goto L_089F1CA8;
    case 231u: goto L_089F1CB4;
    case 232u: goto L_089F1CBC;
    case 233u: goto L_089F1CC0;
    case 234u: goto L_089F1CD8;
    case 235u: goto L_089F1CFC;
    case 236u: goto L_089F1D04;
    case 237u: goto L_089F1D0C;
    case 238u: goto L_089F1D38;
    case 239u: goto L_089F1D44;
    case 240u: goto L_089F1D48;
    case 241u: goto L_089F1D64;
    case 242u: goto L_089F1D78;
    case 243u: goto L_089F1D80;
    case 244u: goto L_089F1D9C;
    case 245u: goto L_089F1DAC;
    case 246u: goto L_089F1DBC;
    case 247u: goto L_089F1DC8;
    case 248u: goto L_089F1DD4;
    case 249u: goto L_089F1DF8;
    case 250u: goto L_089F1E08;
    case 251u: goto L_089F1E14;
    case 252u: goto L_089F1E24;
    case 253u: goto L_089F1E2C;
    case 254u: goto L_089F1E34;
    case 255u: goto L_089F1E38;
    case 256u: goto L_089F1E44;
    case 257u: goto L_089F1E48;
    case 258u: goto L_089F1E54;
    case 259u: goto L_089F1E5C;
    case 260u: goto L_089F1E68;
    case 261u: goto L_089F1E70;
    case 262u: goto L_089F1E90;
    case 263u: goto L_089F1EAC;
    case 264u: goto L_089F1ED0;
    case 265u: goto L_089F1EE0;
    case 266u: goto L_089F1EEC;
    case 267u: goto L_089F1EFC;
    case 268u: goto L_089F1F04;
    case 269u: goto L_089F1F0C;
    case 270u: goto L_089F1F10;
    case 271u: goto L_089F1F1C;
    case 272u: goto L_089F1F20;
    case 273u: goto L_089F1F2C;
    case 274u: goto L_089F1F34;
    case 275u: goto L_089F1F40;
    case 276u: goto L_089F1F48;
    case 277u: goto L_089F1F68;
    case 278u: goto L_089F1F84;
    case 279u: goto L_089F1FA8;
    case 280u: goto L_089F1FB8;
    case 281u: goto L_089F1FC4;
    case 282u: goto L_089F1FD0;
    case 283u: goto L_089F1FD8;
    case 284u: goto L_089F1FE0;
    case 285u: goto L_089F1FF0;
    case 286u: goto L_089F1FF8;
    case 287u: goto L_089F1FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F1000:
    aot_gpr[31] = (0x089F1008u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F1008u) goto L_089F1008;
    return;
L_089F1008:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089F1018u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F1018u) goto L_089F1018;
    return;
L_089F1018:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 47u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089F1048;
      }
      goto L_089F1030;
    }
L_089F1030:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F1040u);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089F1040u) goto L_089F1040;
    return;
L_089F1040:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F1144;
      }
      goto L_089F1048;
    }
L_089F1048:
    aot_gpr[5] = (0u | 35u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_089F105C;
      }
      goto L_089F1054;
    }
L_089F1054:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(146));
      if (branch_taken) {
          goto L_089F1090;
      }
      goto L_089F105C;
    }
L_089F105C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x089F106Cu);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-10304));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F106Cu) goto L_089F106C;
    return;
L_089F106C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 513u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F1084u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x089F1084u) goto L_089F1084;
    return;
L_089F1084:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F1144;
      }
      goto L_089F108C;
    }
L_089F108C:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(146));
    goto L_089F1090;
L_089F1090:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F109Cu);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F109Cu) goto L_089F109C;
    return;
L_089F109C:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10296));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10292));
    goto L_089F10B0;
L_089F10B0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F10C0u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089F10C0u) goto L_089F10C0;
    return;
L_089F10C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F10D4;
      }
      goto L_089F10C8;
    }
L_089F10C8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F10B0;
      }
      goto L_089F10D4;
    }
L_089F10D4:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F10E0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089F10E0u) goto L_089F10E0;
    return;
L_089F10E0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u | 0u);
        goto L_089F10F0;
    }
    goto L_089F10E8;
L_089F10E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F10B0;
      }
      goto L_089F10F0;
    }
L_089F10F0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_089F1120;
      }
      goto L_089F10FC;
    }
L_089F10FC:
    aot_gpr[20] = (0u | 45u);
    goto L_089F1100;
L_089F1100:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F110Cu);
    aot_gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x089F110Cu) goto L_089F110C;
    return;
L_089F110C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[20]));
      if (branch_taken) {
          goto L_089F1100;
      }
      goto L_089F111C;
    }
L_089F111C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_089F1120;
L_089F1120:
    aot_gpr[31] = (0x089F1128u);
    aot_gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x089F1128u) goto L_089F1128;
    return;
L_089F1128:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[29]);
    aot_gpr[5] = (0u | 513u);
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[31] = (0x089F1140u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089F1140u) goto L_089F1140;
    return;
L_089F1140:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F1144;
L_089F1144:
    aot_gpr[31] = (0x089F114Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_089F11E4;
L_089F114C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(528)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(532)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(664)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F11B4;
      }
      goto L_089F1194;
    }
L_089F1194:
    aot_gpr[31] = (0x089F119Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F119Cu) goto L_089F119C;
    return;
L_089F119C:
    aot_gpr[31] = (0x089F11A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F11A4u) goto L_089F11A4;
    return;
L_089F11A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(664)));
    aot_gpr[31] = (0x089F11B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F11B0u) goto L_089F11B0;
    return;
L_089F11B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(664), 0u);
    goto L_089F11B4;
L_089F11B4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F11D0;
      }
      goto L_089F11BC;
    }
L_089F11BC:
    aot_gpr[5] = (0u | 241u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F11CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10348));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089F11CCu) goto L_089F11CC;
    return;
L_089F11CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(664), aot_gpr[2]);
    goto L_089F11D0;
L_089F11D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F11E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089F1204u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F1204u) goto L_089F1204;
    return;
L_089F1204:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x089F1210u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F1210u) goto L_089F1210;
    return;
L_089F1210:
    aot_gpr[31] = (0x089F1218u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1218u) goto L_089F1218;
    return;
L_089F1218:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 504u);
    aot_gpr[31] = (0x089F1234u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10348));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x089F1234u) goto L_089F1234;
    return;
L_089F1234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F1244u);
    aot_gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x089F1244u) goto L_089F1244;
    return;
L_089F1244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089F1254u);
    aot_gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x089F1254u) goto L_089F1254;
    return;
L_089F1254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(146));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F126Cu);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F126Cu) goto L_089F126C;
    return;
L_089F126C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(659));
    aot_gpr[31] = (0x089F1280u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1280u) goto L_089F1280;
    return;
L_089F1280:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F1290u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1290u) goto L_089F1290;
    return;
L_089F1290:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[8] != 0u) {
    aot_gpr[7] = (aot_gpr[8] - aot_gpr[5]);
        goto L_089F12B0;
    }
    goto L_089F12B0;
L_089F12B0:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[9] != 0u) {
    aot_gpr[8] = (aot_gpr[9] - aot_gpr[5]);
        goto L_089F12BC;
    }
    goto L_089F12BC;
L_089F12BC:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1358;
      }
      goto L_089F12C8;
    }
L_089F12C8:
    aot_gpr[12] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[9] - aot_gpr[7]);
    aot_gpr[13] = (aot_gpr[12] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[13] = (aot_gpr[16] + aot_gpr[13]);
    goto L_089F12E0;
L_089F12E0:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[11];
    aot_gpr[14] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F1300;
      }
      goto L_089F12E8;
    }
L_089F12E8:
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[14] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F1300;
      }
      goto L_089F12F0;
    }
L_089F12F0:
    if (aot_gpr[14] == 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_089F133C;
    }
    goto L_089F12F8;
L_089F12F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(659), static_cast<std::uint8_t>(aot_gpr[10]));
      if (branch_taken) {
          goto L_089F1338;
      }
      goto L_089F1300;
    }
L_089F1300:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[11];
    aot_gpr[14] = (aot_gpr[9] < static_cast<std::uint32_t>(513) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F132C;
      }
      goto L_089F1308;
    }
L_089F1308:
    aot_gpr[14] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[14] = (aot_gpr[9] < static_cast<std::uint32_t>(513) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F132C;
      }
      goto L_089F1314;
    }
L_089F1314:
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[14] = (aot_gpr[12] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_089F1338;
      }
      goto L_089F131C;
    }
L_089F131C:
    if (aot_gpr[14] == 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_089F133C;
    }
    goto L_089F1324;
L_089F1324:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[10]));
      if (branch_taken) {
          goto L_089F1338;
      }
      goto L_089F132C;
    }
L_089F132C:
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[14] = (aot_gpr[4] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089F1338;
      }
      goto L_089F1334;
    }
L_089F1334:
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(aot_gpr[10]));
    goto L_089F1338;
L_089F1338:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089F133C;
L_089F133C:
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F12E0;
      }
      goto L_089F1358;
    }
L_089F1358:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F136C;
      }
      goto L_089F1364;
    }
L_089F1364:
    aot_gpr[31] = (0x089F136Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089F1174;
L_089F136C:
    aot_gpr[31] = (0x089F1374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089F1374u) goto L_089F1374;
    return;
L_089F1374:
    aot_gpr[31] = (0x089F137Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089F137Cu) goto L_089F137C;
    return;
L_089F137C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F1388u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089F1388u) goto L_089F1388;
    return;
L_089F1388:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F139C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F13E8;
      }
      goto L_089F13B8;
    }
L_089F13B8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9888));
    aot_gpr[31] = (0x089F13C8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089F1478;
L_089F13C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F13D4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089F16B4;
L_089F13D4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F13E8;
      }
      goto L_089F13E0;
    }
L_089F13E0:
    aot_gpr[31] = (0x089F13E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F13E8u) goto L_089F13E8;
    return;
L_089F13E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F13FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9888));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F141Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089F1478;
L_089F141C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F1428u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089F163C;
L_089F1428:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F143C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F1454u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x089F1454u) goto L_089F1454;
    return;
L_089F1454:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(680));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089F1464u);
    aot_gpr[6] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1464u) goto L_089F1464;
    return;
L_089F1464:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1478:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28832)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28836));
      if (branch_taken) {
          goto L_089F14B4;
      }
      goto L_089F1498;
    }
L_089F1498:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28832), aot_gpr[5]);
    aot_gpr[31] = (0x089F14A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F160C;
L_089F14A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089F14B4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18960));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089F14B4u) goto L_089F14B4;
    return;
L_089F14B4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F14C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_089F14E8;
      }
      goto L_089F14D8;
    }
L_089F14D8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F14E8;
      }
      goto L_089F14E0;
    }
L_089F14E0:
    aot_gpr[31] = (0x089F14E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F14E8u) goto L_089F14E8;
    return;
L_089F14E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F14F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[10] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089F1534u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x089F1534u) goto L_089F1534;
    return;
L_089F1534:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F1540u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_089F16DC;
L_089F1540:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1584;
      }
      goto L_089F154C;
    }
L_089F154C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x089F1578u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1578u) goto L_089F1578;
    return;
L_089F1578:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1584;
      }
      goto L_089F1580;
    }
L_089F1580:
    aot_gpr[21] = (0u | 0u);
    goto L_089F1584;
L_089F1584:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_089F15AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_089F15C4;
L_089F15C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089F15EC;
    }
    goto L_089F15D0;
L_089F15D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F15E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F15E8u) goto L_089F15E8;
    return;
L_089F15E8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089F15EC;
L_089F15EC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F15C4;
      }
      goto L_089F15F8;
    }
L_089F15F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F160C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F1628u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1628u) goto L_089F1628;
    return;
L_089F1628:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F163C:
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[10] = (aot_gpr[11] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089F1654;
L_089F1654:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1668;
      }
      goto L_089F1660;
    }
L_089F1660:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_089F1674;
      }
      goto L_089F1668;
    }
L_089F1668:
    if (aot_gpr[7] != aot_gpr[5]) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_089F1678;
    }
    goto L_089F1670;
L_089F1670:
    aot_gpr[10] = (aot_gpr[9] | 0u);
    goto L_089F1674;
L_089F1674:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089F1678;
L_089F1678:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[9]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F1654;
      }
      goto L_089F1684;
    }
L_089F1684:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089F1694;
      }
      goto L_089F168C;
    }
L_089F168C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1694:
    { const bool branch_taken = aot_gpr[11] == aot_gpr[6];
    aot_gpr[6] = (aot_gpr[11] << 2u);
      if (branch_taken) {
          goto L_089F16A8;
      }
      goto L_089F169C;
    }
L_089F169C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F16A8:
    aot_gpr[2] = (0u | 0u);
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F16B4:
    aot_gpr[6] = (0u | 0u);
    goto L_089F16B8;
L_089F16B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] == aot_gpr[5]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
        goto L_089F16C4;
    }
    goto L_089F16C4;
L_089F16C4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F16B8;
      }
      goto L_089F16D4;
    }
L_089F16D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F16DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 15u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(60));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_089F1704;
L_089F1704:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089F1778;
      }
      goto L_089F170C;
    }
L_089F170C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1778;
      }
      goto L_089F1714;
    }
L_089F1714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_089F1770;
    }
    goto L_089F1720;
L_089F1720:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F173Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F173Cu) goto L_089F173C;
    return;
L_089F173C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_089F1770;
    }
    goto L_089F1744;
L_089F1744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F1760u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1760u) goto L_089F1760;
    return;
L_089F1760:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_089F1770;
    }
    goto L_089F1768;
L_089F1768:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_089F1770;
L_089F1770:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089F1704;
      }
      goto L_089F1778;
    }
L_089F1778:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_089F1798:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F19A8;
      }
      goto L_089F17A0;
    }
L_089F17A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17AC;
L_089F17AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17B8;
L_089F17B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17C4;
L_089F17C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17D0;
L_089F17D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17DC;
L_089F17DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17E8;
L_089F17E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F17F4;
L_089F17F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1800;
L_089F1800:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F180C;
L_089F180C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1818;
L_089F1818:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1824;
L_089F1824:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1830;
L_089F1830:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F183C;
L_089F183C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1848;
L_089F1848:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1854;
L_089F1854:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1860;
L_089F1860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F186C;
L_089F186C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1878;
L_089F1878:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1884;
L_089F1884:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1890;
L_089F1890:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F189C;
L_089F189C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18A8;
L_089F18A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18B4;
L_089F18B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18C0;
L_089F18C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18CC;
L_089F18CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18D8;
L_089F18D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18E4;
L_089F18E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18F0;
L_089F18F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F18FC;
L_089F18FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1908;
L_089F1908:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1914;
L_089F1914:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1920;
L_089F1920:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F192C;
L_089F192C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1938;
L_089F1938:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1944;
L_089F1944:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_089F19A8;
    }
    goto L_089F1950;
L_089F1950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F19A4;
      }
      goto L_089F195C;
    }
L_089F195C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (aot_gpr[10] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18944));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 18u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_089F1978;
L_089F1978:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089F1978;
      }
      goto L_089F199C;
    }
L_089F199C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F19A4:
    aot_gpr[2] = (0u | 0u);
    goto L_089F19A8;
L_089F19A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F19B0:
    aot_gpr[2] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-18944));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F19BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F19CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 27u, 0x089FA1C8u>(ctx, &aot_mem) && ctx.pc == 0x089F19CCu) goto L_089F19CC;
    return;
L_089F19CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F19D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F19E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 30u, 0x089FA208u>(ctx, &aot_mem) && ctx.pc == 0x089F19E8u) goto L_089F19E8;
    return;
L_089F19E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F19F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F1A1Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1A1Cu) goto L_089F1A1C;
    return;
L_089F1A1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F1A28u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 85u, 0x089F55F4u>(ctx, &aot_mem) && ctx.pc == 0x089F1A28u) goto L_089F1A28;
    return;
L_089F1A28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1A38:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1A54;
      }
      goto L_089F1A40;
    }
L_089F1A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1A54;
      }
      goto L_089F1A4C;
    }
L_089F1A4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    goto L_089F1A54;
L_089F1A54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1A5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F1AA4;
      }
      goto L_089F1A7C;
    }
L_089F1A7C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089F1A8Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 224u, 0x089F4DFCu>(ctx, &aot_mem) && ctx.pc == 0x089F1A8Cu) goto L_089F1A8C;
    return;
L_089F1A8C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1AA4;
      }
      goto L_089F1A98;
    }
L_089F1A98:
    aot_gpr[31] = (0x089F1AA0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_089F1A38;
L_089F1AA0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089F1AA4;
L_089F1AA4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F1ACCu);
    aot_gpr[16] = (0u | 0u);
    goto L_089F1A38;
L_089F1ACC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1AE4;
      }
      goto L_089F1AD8;
    }
L_089F1AD8:
    aot_gpr[31] = (0x089F1AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F1AE0u) goto L_089F1AE0;
    return;
L_089F1AE0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089F1AE4;
L_089F1AE4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1AF8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1B30;
      }
      goto L_089F1B00;
    }
L_089F1B00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_089F1B20;
    }
    goto L_089F1B10;
L_089F1B10:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1B30;
      }
      goto L_089F1B18;
    }
L_089F1B18:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B20:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1B30;
      }
      goto L_089F1B28;
    }
L_089F1B28:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B38:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1B58;
      }
      goto L_089F1B40;
    }
L_089F1B40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089F1B58;
      }
      goto L_089F1B50;
    }
L_089F1B50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    goto L_089F1B58;
L_089F1B58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B60:
    aot_gpr[2] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089F1B6C;
    }
    goto L_089F1B6C;
L_089F1B6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B74:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1B84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_089F1BAC;
L_089F1BAC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1BE4;
      }
      goto L_089F1BB4;
    }
L_089F1BB4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1BE4;
      }
      goto L_089F1BBC;
    }
L_089F1BBC:
    aot_gpr[31] = (0x089F1BC4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F1B7C;
L_089F1BC4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F1BD0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F1AF8;
L_089F1BD0:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_089F1BAC;
      }
      goto L_089F1BD8;
    }
L_089F1BD8:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F1BAC;
      }
      goto L_089F1BE4;
    }
L_089F1BE4:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_089F1C04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1C10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F1C30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1C30u) goto L_089F1C30;
    return;
L_089F1C30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    if (aot_gpr[5] != aot_gpr[6]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
        goto L_089F1C48;
    }
    goto L_089F1C48;
L_089F1C48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1C54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F1C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 7u, 0x089F50D0u>(ctx, &aot_mem) && ctx.pc == 0x089F1C64u) goto L_089F1C64;
    return;
L_089F1C64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1C70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1C8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089F1CA8u);
    aot_gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F1CA8u) goto L_089F1CA8;
    return;
L_089F1CA8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1CC0;
      }
      goto L_089F1CB4;
    }
L_089F1CB4:
    aot_gpr[31] = (0x089F1CBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0498_entry, 498u, 80u, 0x089F6594u>(ctx, &aot_mem) && ctx.pc == 0x089F1CBCu) goto L_089F1CBC;
    return;
L_089F1CBC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_089F1CC0;
L_089F1CC0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F1CFCu);
    aot_gpr[18] = (0u | 0u);
    goto L_089F1C04;
L_089F1CFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089F1D0C;
      }
      goto L_089F1D04;
    }
L_089F1D04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_089F1D48;
      }
      goto L_089F1D0C;
    }
L_089F1D0C:
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-18752), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F1D38u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1D38u) goto L_089F1D38;
    return;
L_089F1D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1D48;
      }
      goto L_089F1D44;
    }
L_089F1D44:
    aot_gpr[18] = (0u | 2u);
    goto L_089F1D48;
L_089F1D48:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089F1D64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089F1D78u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 218u, 0x089F4D94u>(ctx, &aot_mem) && ctx.pc == 0x089F1D78u) goto L_089F1D78;
    return;
L_089F1D78:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1D9C;
      }
      goto L_089F1D80;
    }
L_089F1D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F1D9Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1D9Cu) goto L_089F1D9C;
    return;
L_089F1D9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F1DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 218u, 0x089F4D94u>(ctx, &aot_mem) && ctx.pc == 0x089F1DBCu) goto L_089F1DBC;
    return;
L_089F1DBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1DC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1DD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F1DF8u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_089F19B0;
L_089F1DF8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F1E08u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1E08u) goto L_089F1E08;
    return;
L_089F1E08:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1E90;
      }
      goto L_089F1E14;
    }
L_089F1E14:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 45u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089F1E38;
    }
    goto L_089F1E24;
L_089F1E24:
    aot_gpr[31] = (0x089F1E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089F1E2Cu) goto L_089F1E2C;
    return;
L_089F1E2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1E90;
      }
      goto L_089F1E34;
    }
L_089F1E34:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089F1E38;
L_089F1E38:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089F1E68;
      }
      goto L_089F1E44;
    }
L_089F1E44:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
    goto L_089F1E48;
L_089F1E48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x089F1E54u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089F1E54u) goto L_089F1E54;
    return;
L_089F1E54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089F1E90;
      }
      goto L_089F1E5C;
    }
L_089F1E5C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089F1E48;
      }
      goto L_089F1E68;
    }
L_089F1E68:
    aot_gpr[31] = (0x089F1E70u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x089F1E70u) goto L_089F1E70;
    return;
L_089F1E70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u | 1u);
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
L_089F1E90:
    aot_gpr[2] = (0u | 0u);
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
L_089F1EAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F1ED0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_089F19B0;
L_089F1ED0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F1EE0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1EE0u) goto L_089F1EE0;
    return;
L_089F1EE0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1F68;
      }
      goto L_089F1EEC;
    }
L_089F1EEC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 45u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089F1F10;
    }
    goto L_089F1EFC;
L_089F1EFC:
    aot_gpr[31] = (0x089F1F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089F1F04u) goto L_089F1F04;
    return;
L_089F1F04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1F68;
      }
      goto L_089F1F0C;
    }
L_089F1F0C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089F1F10;
L_089F1F10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089F1F40;
      }
      goto L_089F1F1C;
    }
L_089F1F1C:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
    goto L_089F1F20;
L_089F1F20:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x089F1F2Cu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x089F1F2Cu) goto L_089F1F2C;
    return;
L_089F1F2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089F1F68;
      }
      goto L_089F1F34;
    }
L_089F1F34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_089F1F20;
      }
      goto L_089F1F40;
    }
L_089F1F40:
    aot_gpr[31] = (0x089F1F48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 101u, 0x08A39528u>(ctx, &aot_mem) && ctx.pc == 0x089F1F48u) goto L_089F1F48;
    return;
L_089F1F48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u | 1u);
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
L_089F1F68:
    aot_gpr[2] = (0u | 0u);
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
L_089F1F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F1FA8u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_089F19B0;
L_089F1FA8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F1FB8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1FB8u) goto L_089F1FB8;
    return;
L_089F1FB8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 2u, 0x089F2018u>(ctx, &aot_mem); return;
      }
      goto L_089F1FC4;
    }
L_089F1FC4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F1FD0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10288));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089F1FD0u) goto L_089F1FD0;
    return;
L_089F1FD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089F1FE0;
      }
      goto L_089F1FD8;
    }
L_089F1FD8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
      if (branch_taken) {
          goto L_089F1FFC;
      }
      goto L_089F1FE0;
    }
L_089F1FE0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F1FF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10280));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x089F1FF0u) goto L_089F1FF0;
    return;
L_089F1FF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1FFC;
      }
      goto L_089F1FF8;
    }
L_089F1FF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089F1FFC;
L_089F1FFC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    ctx.pc = 0x089F2000u; return;
}

void recomp_unit_0493(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0493_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_493(Runtime &runtime) {
    runtime.register_generated_unit(493u, 0x089F1000u, 4096u, &recomp_unit_0493, &recomp_unit_0493_entry);
    runtime.register_function(0x089F1000u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1008u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1018u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1030u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1040u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1048u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1054u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F105Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F106Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1084u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F108Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1090u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F109Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10B0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10C0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10C8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10D4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10E0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10F0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F10FCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1100u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F110Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F111Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1120u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1128u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1140u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1144u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F114Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1174u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1194u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F119Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11A4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11B0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11B4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11BCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11CCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11D0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F11E4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1204u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1210u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1218u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1234u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1244u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1254u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F126Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1280u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1290u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12B0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12BCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12C8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12E0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12F0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F12F8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1300u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1308u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1314u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F131Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1324u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F132Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1334u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1338u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F133Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1358u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1364u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F136Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1374u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F137Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1388u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F139Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F13B8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F13C8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F13D4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F13E0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F13E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F13FCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F141Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1428u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F143Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1454u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1464u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1478u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1498u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14A8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14B4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14C8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14D8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14E0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F14F4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1534u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1540u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F154Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1578u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1580u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1584u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F15ACu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F15C4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F15D0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F15E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F15ECu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F15F8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F160Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1628u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F163Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1654u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1660u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1668u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1670u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1674u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1678u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1684u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F168Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1694u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F169Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F16A8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F16B4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F16B8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F16C4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F16D4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F16DCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1704u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F170Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1714u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1720u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F173Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1744u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1760u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1768u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1770u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1778u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1798u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17A0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17ACu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17B8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17C4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17D0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17DCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F17F4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1800u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F180Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1818u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1824u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1830u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F183Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1848u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1854u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1860u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F186Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1878u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1884u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1890u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F189Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18A8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18B4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18C0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18CCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18D8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18E4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18F0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F18FCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1908u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1914u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1920u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F192Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1938u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1944u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1950u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F195Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1978u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F199Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19A4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19A8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19B0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19BCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19CCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19D8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19E8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F19F4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A1Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A28u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A38u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A40u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A4Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A54u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A5Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A7Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A8Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1A98u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AA0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AA4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AB8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1ACCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AD8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AE0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AE4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1AF8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B00u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B10u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B18u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B20u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B28u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B30u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B38u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B40u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B50u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B58u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B60u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B6Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B74u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B7Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1B84u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BACu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BB4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BBCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BC4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BD0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BD8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1BE4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C04u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C10u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C30u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C48u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C54u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C64u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C70u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1C8Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1CA8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1CB4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1CBCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1CC0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1CD8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1CFCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D04u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D0Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D38u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D44u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D48u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D64u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D78u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D80u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1D9Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1DACu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1DBCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1DC8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1DD4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1DF8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E08u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E14u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E24u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E2Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E34u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E38u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E44u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E48u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E54u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E5Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E68u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E70u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1E90u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1EACu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1ED0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1EE0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1EECu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1EFCu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F04u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F0Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F10u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F1Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F20u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F2Cu, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F34u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F40u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F48u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F68u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1F84u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FA8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FB8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FC4u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FD0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FD8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FE0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FF0u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FF8u, &recomp_unit_0493, "recomp_unit_0493");
    runtime.register_function(0x089F1FFCu, &recomp_unit_0493, "recomp_unit_0493");
}
} // namespace psprecomp
