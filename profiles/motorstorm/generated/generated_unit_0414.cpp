#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0414[1022] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 9, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 18, 0, 19, 0, 0,
    0, 20, 0, 0, 21, 0, 22, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0,
    0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 82, 83, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95,
    0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 117, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 119, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 125, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0,
    142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0, 157, 158, 0, 159, 0, 160, 0, 0, 0,
    0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0,
    0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 195, 0, 196, 0, 0,
    197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 206, 0, 207, 0, 0, 208, 0, 0,
    209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 215,
    0, 216, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 223, 0, 224, 0, 225, 226, 0, 0, 0, 0,
    0, 227, 0, 228, 0, 229, 230, 0, 0, 231, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 238, 0,
    239, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 248, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0,
    0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 274, 275,
    0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 280, 281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 286,
};
void recomp_unit_0414_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089A2000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0414[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A2000;
    case 2u: goto L_089A2014;
    case 3u: goto L_089A201C;
    case 4u: goto L_089A2034;
    case 5u: goto L_089A203C;
    case 6u: goto L_089A2050;
    case 7u: goto L_089A205C;
    case 8u: goto L_089A2068;
    case 9u: goto L_089A206C;
    case 10u: goto L_089A2088;
    case 11u: goto L_089A2098;
    case 12u: goto L_089A20A0;
    case 13u: goto L_089A20BC;
    case 14u: goto L_089A20CC;
    case 15u: goto L_089A20D8;
    case 16u: goto L_089A20E0;
    case 17u: goto L_089A20E4;
    case 18u: goto L_089A20EC;
    case 19u: goto L_089A20F4;
    case 20u: goto L_089A2104;
    case 21u: goto L_089A2110;
    case 22u: goto L_089A2118;
    case 23u: goto L_089A211C;
    case 24u: goto L_089A2124;
    case 25u: goto L_089A212C;
    case 26u: goto L_089A213C;
    case 27u: goto L_089A2144;
    case 28u: goto L_089A214C;
    case 29u: goto L_089A2150;
    case 30u: goto L_089A2160;
    case 31u: goto L_089A2168;
    case 32u: goto L_089A217C;
    case 33u: goto L_089A2198;
    case 34u: goto L_089A21A0;
    case 35u: goto L_089A21A8;
    case 36u: goto L_089A21E8;
    case 37u: goto L_089A21F4;
    case 38u: goto L_089A2200;
    case 39u: goto L_089A2214;
    case 40u: goto L_089A2224;
    case 41u: goto L_089A224C;
    case 42u: goto L_089A2254;
    case 43u: goto L_089A2268;
    case 44u: goto L_089A2278;
    case 45u: goto L_089A228C;
    case 46u: goto L_089A2298;
    case 47u: goto L_089A22A0;
    case 48u: goto L_089A22AC;
    case 49u: goto L_089A22B8;
    case 50u: goto L_089A22DC;
    case 51u: goto L_089A22E4;
    case 52u: goto L_089A22EC;
    case 53u: goto L_089A22F4;
    case 54u: goto L_089A230C;
    case 55u: goto L_089A2324;
    case 56u: goto L_089A232C;
    case 57u: goto L_089A233C;
    case 58u: goto L_089A2354;
    case 59u: goto L_089A2360;
    case 60u: goto L_089A237C;
    case 61u: goto L_089A2390;
    case 62u: goto L_089A2398;
    case 63u: goto L_089A23A4;
    case 64u: goto L_089A23B4;
    case 65u: goto L_089A23C4;
    case 66u: goto L_089A23CC;
    case 67u: goto L_089A23D4;
    case 68u: goto L_089A23E0;
    case 69u: goto L_089A242C;
    case 70u: goto L_089A243C;
    case 71u: goto L_089A244C;
    case 72u: goto L_089A245C;
    case 73u: goto L_089A246C;
    case 74u: goto L_089A2480;
    case 75u: goto L_089A2490;
    case 76u: goto L_089A24A0;
    case 77u: goto L_089A24AC;
    case 78u: goto L_089A24BC;
    case 79u: goto L_089A24D4;
    case 80u: goto L_089A24EC;
    case 81u: goto L_089A2508;
    case 82u: goto L_089A2520;
    case 83u: goto L_089A2524;
    case 84u: goto L_089A2528;
    case 85u: goto L_089A2538;
    case 86u: goto L_089A254C;
    case 87u: goto L_089A2550;
    case 88u: goto L_089A2580;
    case 89u: goto L_089A2588;
    case 90u: goto L_089A2598;
    case 91u: goto L_089A25A8;
    case 92u: goto L_089A25C8;
    case 93u: goto L_089A25EC;
    case 94u: goto L_089A25F4;
    case 95u: goto L_089A25FC;
    case 96u: goto L_089A2604;
    case 97u: goto L_089A260C;
    case 98u: goto L_089A2614;
    case 99u: goto L_089A261C;
    case 100u: goto L_089A2634;
    case 101u: goto L_089A2660;
    case 102u: goto L_089A2670;
    case 103u: goto L_089A267C;
    case 104u: goto L_089A2698;
    case 105u: goto L_089A26A0;
    case 106u: goto L_089A26C0;
    case 107u: goto L_089A26CC;
    case 108u: goto L_089A26D8;
    case 109u: goto L_089A26E4;
    case 110u: goto L_089A26F4;
    case 111u: goto L_089A271C;
    case 112u: goto L_089A2724;
    case 113u: goto L_089A272C;
    case 114u: goto L_089A2734;
    case 115u: goto L_089A2748;
    case 116u: goto L_089A2758;
    case 117u: goto L_089A275C;
    case 118u: goto L_089A2770;
    case 119u: goto L_089A2788;
    case 120u: goto L_089A278C;
    case 121u: goto L_089A2798;
    case 122u: goto L_089A27A4;
    case 123u: goto L_089A27AC;
    case 124u: goto L_089A27B4;
    case 125u: goto L_089A27B8;
    case 126u: goto L_089A27CC;
    case 127u: goto L_089A27D4;
    case 128u: goto L_089A27DC;
    case 129u: goto L_089A27E4;
    case 130u: goto L_089A27EC;
    case 131u: goto L_089A27F4;
    case 132u: goto L_089A27FC;
    case 133u: goto L_089A2828;
    case 134u: goto L_089A2834;
    case 135u: goto L_089A283C;
    case 136u: goto L_089A2844;
    case 137u: goto L_089A284C;
    case 138u: goto L_089A2854;
    case 139u: goto L_089A285C;
    case 140u: goto L_089A286C;
    case 141u: goto L_089A2878;
    case 142u: goto L_089A2880;
    case 143u: goto L_089A288C;
    case 144u: goto L_089A2898;
    case 145u: goto L_089A28A4;
    case 146u: goto L_089A28B4;
    case 147u: goto L_089A28BC;
    case 148u: goto L_089A28C4;
    case 149u: goto L_089A28E0;
    case 150u: goto L_089A28E4;
    case 151u: goto L_089A2900;
    case 152u: goto L_089A2920;
    case 153u: goto L_089A2928;
    case 154u: goto L_089A2934;
    case 155u: goto L_089A293C;
    case 156u: goto L_089A2940;
    case 157u: goto L_089A295C;
    case 158u: goto L_089A2960;
    case 159u: goto L_089A2968;
    case 160u: goto L_089A2970;
    case 161u: goto L_089A2984;
    case 162u: goto L_089A298C;
    case 163u: goto L_089A2994;
    case 164u: goto L_089A299C;
    case 165u: goto L_089A29A4;
    case 166u: goto L_089A29B4;
    case 167u: goto L_089A29BC;
    case 168u: goto L_089A29C4;
    case 169u: goto L_089A2A04;
    case 170u: goto L_089A2A18;
    case 171u: goto L_089A2A24;
    case 172u: goto L_089A2A30;
    case 173u: goto L_089A2A34;
    case 174u: goto L_089A2A3C;
    case 175u: goto L_089A2A44;
    case 176u: goto L_089A2A60;
    case 177u: goto L_089A2A84;
    case 178u: goto L_089A2A94;
    case 179u: goto L_089A2A9C;
    case 180u: goto L_089A2AAC;
    case 181u: goto L_089A2AB8;
    case 182u: goto L_089A2AC0;
    case 183u: goto L_089A2AD0;
    case 184u: goto L_089A2AF0;
    case 185u: goto L_089A2AF8;
    case 186u: goto L_089A2B0C;
    case 187u: goto L_089A2B14;
    case 188u: goto L_089A2B1C;
    case 189u: goto L_089A2B24;
    case 190u: goto L_089A2B28;
    case 191u: goto L_089A2B40;
    case 192u: goto L_089A2B48;
    case 193u: goto L_089A2B5C;
    case 194u: goto L_089A2B68;
    case 195u: goto L_089A2B6C;
    case 196u: goto L_089A2B74;
    case 197u: goto L_089A2B80;
    case 198u: goto L_089A2B88;
    case 199u: goto L_089A2B90;
    case 200u: goto L_089A2B98;
    case 201u: goto L_089A2BA0;
    case 202u: goto L_089A2BA8;
    case 203u: goto L_089A2BB0;
    case 204u: goto L_089A2BC0;
    case 205u: goto L_089A2BDC;
    case 206u: goto L_089A2BE0;
    case 207u: goto L_089A2BE8;
    case 208u: goto L_089A2BF4;
    case 209u: goto L_089A2C00;
    case 210u: goto L_089A2C0C;
    case 211u: goto L_089A2C18;
    case 212u: goto L_089A2C24;
    case 213u: goto L_089A2C30;
    case 214u: goto L_089A2C78;
    case 215u: goto L_089A2C7C;
    case 216u: goto L_089A2C84;
    case 217u: goto L_089A2C88;
    case 218u: goto L_089A2C90;
    case 219u: goto L_089A2CA8;
    case 220u: goto L_089A2CB0;
    case 221u: goto L_089A2CC4;
    case 222u: goto L_089A2CD4;
    case 223u: goto L_089A2CD8;
    case 224u: goto L_089A2CE0;
    case 225u: goto L_089A2CE8;
    case 226u: goto L_089A2CEC;
    case 227u: goto L_089A2D04;
    case 228u: goto L_089A2D0C;
    case 229u: goto L_089A2D14;
    case 230u: goto L_089A2D18;
    case 231u: goto L_089A2D24;
    case 232u: goto L_089A2D28;
    case 233u: goto L_089A2D34;
    case 234u: goto L_089A2D3C;
    case 235u: goto L_089A2D5C;
    case 236u: goto L_089A2D64;
    case 237u: goto L_089A2D74;
    case 238u: goto L_089A2D78;
    case 239u: goto L_089A2D80;
    case 240u: goto L_089A2D84;
    case 241u: goto L_089A2D8C;
    case 242u: goto L_089A2D9C;
    case 243u: goto L_089A2DA4;
    case 244u: goto L_089A2DAC;
    case 245u: goto L_089A2DC0;
    case 246u: goto L_089A2DCC;
    case 247u: goto L_089A2DD8;
    case 248u: goto L_089A2DDC;
    case 249u: goto L_089A2DE8;
    case 250u: goto L_089A2E10;
    case 251u: goto L_089A2E18;
    case 252u: goto L_089A2E20;
    case 253u: goto L_089A2E58;
    case 254u: goto L_089A2E5C;
    case 255u: goto L_089A2E90;
    case 256u: goto L_089A2E98;
    case 257u: goto L_089A2EA4;
    case 258u: goto L_089A2EAC;
    case 259u: goto L_089A2EB8;
    case 260u: goto L_089A2EC4;
    case 261u: goto L_089A2ED0;
    case 262u: goto L_089A2EDC;
    case 263u: goto L_089A2EE8;
    case 264u: goto L_089A2EF4;
    case 265u: goto L_089A2F04;
    case 266u: goto L_089A2F0C;
    case 267u: goto L_089A2F20;
    case 268u: goto L_089A2F30;
    case 269u: goto L_089A2F44;
    case 270u: goto L_089A2F50;
    case 271u: goto L_089A2F58;
    case 272u: goto L_089A2F68;
    case 273u: goto L_089A2F70;
    case 274u: goto L_089A2F78;
    case 275u: goto L_089A2F7C;
    case 276u: goto L_089A2F94;
    case 277u: goto L_089A2F9C;
    case 278u: goto L_089A2FA8;
    case 279u: goto L_089A2FB8;
    case 280u: goto L_089A2FC0;
    case 281u: goto L_089A2FC4;
    case 282u: goto L_089A2FD0;
    case 283u: goto L_089A2FD8;
    case 284u: goto L_089A2FE4;
    case 285u: goto L_089A2FEC;
    case 286u: goto L_089A2FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A2000:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16092)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0413_entry, 413u, 241u, 0x089A1FD4u>(ctx, &aot_mem); return;
      }
      goto L_089A2014;
    }
L_089A2014:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0413_entry, 413u, 238u, 0x089A1FB4u>(ctx, &aot_mem); return;
L_089A201C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x089A2034u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A2034u) goto L_089A2034;
    return;
L_089A2034:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A206C;
      }
      goto L_089A203C;
    }
L_089A203C:
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
      if (branch_taken) {
          goto L_089A20BC;
      }
      goto L_089A2050;
    }
L_089A2050:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089A205Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16100), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A205Cu) goto L_089A205C;
    return;
L_089A205C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A2088;
      }
      goto L_089A2068;
    }
L_089A2068:
    aot_gpr[3] = (0u + 0u);
    goto L_089A206C;
L_089A206C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2088:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16244));
    aot_gpr[31] = (0x089A2098u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16096), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 82u, 0x089908ACu>(ctx, &aot_mem) && ctx.pc == 0x089A2098u) goto L_089A2098;
    return;
L_089A2098:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A2068;
      }
      goto L_089A20A0;
    }
L_089A20A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A20BC:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16092)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A2118;
      }
      goto L_089A20CC;
    }
L_089A20CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16088)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16088), 0u);
        goto L_089A20E4;
    }
    goto L_089A20D8;
L_089A20D8:
    aot_gpr[31] = (0x089A20E0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16088));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A20E0u) goto L_089A20E0;
    return;
L_089A20E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16088), 0u);
    goto L_089A20E4;
L_089A20E4:
    aot_gpr[31] = (0x089A20ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16092), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 15u, 0x089A30B4u>(ctx, &aot_mem) && ctx.pc == 0x089A20ECu) goto L_089A20EC;
    return;
L_089A20EC:
    aot_gpr[31] = (0x089A20F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 23u, 0x089A7124u>(ctx, &aot_mem) && ctx.pc == 0x089A20F4u) goto L_089A20F4;
    return;
L_089A20F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089A2104u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16100), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A2104u) goto L_089A2104;
    return;
L_089A2104:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16100)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A206C;
      }
      goto L_089A2110;
    }
L_089A2110:
    aot_gpr[4] = (2217u << 16u);
    goto L_089A2088;
L_089A2118:
    aot_gpr[16] = (0u + 0u);
    goto L_089A211C;
L_089A211C:
    aot_gpr[31] = (0x089A2124u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A2124u) goto L_089A2124;
    return;
L_089A2124:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16092)));
        goto L_089A2150;
    }
    goto L_089A212C;
L_089A212C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089A2144;
      }
      goto L_089A213C;
    }
L_089A213C:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A2144u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2144u) goto L_089A2144;
    return;
L_089A2144:
    aot_gpr[31] = (0x089A214Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 154u, 0x0899FC98u>(ctx, &aot_mem) && ctx.pc == 0x089A214Cu) goto L_089A214C;
    return;
L_089A214C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16092)));
    goto L_089A2150;
L_089A2150:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A211C;
      }
      goto L_089A2160;
    }
L_089A2160:
    aot_gpr[16] = (2217u << 16u);
    goto L_089A20CC;
L_089A2168:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16088)));
    aot_gpr[6] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089A2198;
      }
      goto L_089A217C;
    }
L_089A217C:
    aot_gpr[3] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16092)));
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A21A0;
      }
      goto L_089A2198;
    }
L_089A2198:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A21A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 199u, 0x0899FFA8u>(ctx, &aot_mem); return;
L_089A21A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2224));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2208), aot_gpr[20]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2204), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2192), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2216), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2212), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2200), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2196), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A2224;
      }
      goto L_089A21E8;
    }
L_089A21E8:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A2224;
      }
      goto L_089A21F4;
    }
L_089A21F4:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089A2200u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2200u) goto L_089A2200;
    return;
L_089A2200:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(-7));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A2398;
      }
      goto L_089A2214;
    }
L_089A2214:
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(-11));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A224C;
      }
      goto L_089A2224;
    }
L_089A2224:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2192)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A224C:
    aot_gpr[31] = (0x089A2254u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2254u) goto L_089A2254;
    return;
L_089A2254:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[6]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A2354;
      }
      goto L_089A2268;
    }
L_089A2268:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x089A2278u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2278u) goto L_089A2278;
    return;
L_089A2278:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    aot_gpr[16] = (aot_gpr[21] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089A230C;
      }
      goto L_089A228C;
    }
L_089A228C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_089A22F4;
      }
      goto L_089A2298;
    }
L_089A2298:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_089A2324;
      }
      goto L_089A22A0;
    }
L_089A22A0:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[19] = (0u + 0u);
    goto L_089A22AC;
L_089A22AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
      if (branch_taken) {
          goto L_089A22EC;
      }
      goto L_089A22B8;
    }
L_089A22B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[11] = (aot_gpr[19] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(22));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(150));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A22DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A22DCu) goto L_089A22DC;
    return;
L_089A22DC:
    aot_gpr[31] = (0x089A22E4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A2168;
L_089A22E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A2224;
      }
      goto L_089A22EC;
    }
L_089A22EC:
    aot_gpr[3] = (0u + 0u);
    goto L_089A2224;
L_089A22F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A22AC;
L_089A230C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(100)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A22AC;
L_089A2324:
    aot_gpr[31] = (0x089A232Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A232Cu) goto L_089A232C;
    return;
L_089A232C:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A237C;
      }
      goto L_089A233C;
    }
L_089A233C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089A22AC;
L_089A2354:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089A2360u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2360u) goto L_089A2360;
    return;
L_089A2360:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[6] & 127u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089A2268;
L_089A237C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(150));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[31] = (0x089A2390u);
    aot_gpr[6] = (aot_gpr[19] << 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2390u) goto L_089A2390;
    return;
L_089A2390:
    aot_gpr[5] = (0u | 65535u);
    goto L_089A22AC;
L_089A2398:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr[31] = (0x089A23A4u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A23A4u) goto L_089A23A4;
    return;
L_089A23A4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          goto L_089A23CC;
      }
      goto L_089A23B4;
    }
L_089A23B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[2];
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089A22AC;
      }
      goto L_089A23C4;
    }
L_089A23C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(100)));
    goto L_089A22AC;
L_089A23CC:
    aot_gpr[31] = (0x089A23D4u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A23D4u) goto L_089A23D4;
    return;
L_089A23D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
    aot_gpr[19] = (0u + 0u);
    goto L_089A22AC;
L_089A23E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-10368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10324), aot_gpr[17]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10308), aot_gpr[4]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(127));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10356), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10320), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10352), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10348), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10344), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10340), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10336), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10332), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10328), aot_gpr[18]);
    aot_gpr[31] = (0x089A242Cu);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A242Cu) goto L_089A242C;
    return;
L_089A242C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6240));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A243Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4064));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A243Cu) goto L_089A243C;
    return;
L_089A243C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A244Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2032));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A244Cu) goto L_089A244C;
    return;
L_089A244C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(2176));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089A245Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2032));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A245Cu) goto L_089A245C;
    return;
L_089A245C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2032));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4208));
    aot_gpr[31] = (0x089A246Cu);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A246Cu) goto L_089A246C;
    return;
L_089A246C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A2480u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(10304), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2480u) goto L_089A2480;
    return;
L_089A2480:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[6]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089A2614;
      }
      goto L_089A2490;
    }
L_089A2490:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A24A0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A24A0u) goto L_089A24A0;
    return;
L_089A24A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089A254C;
      }
      goto L_089A24AC;
    }
L_089A24AC:
    aot_gpr[22] = (0u + 0u);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[21] << 3u);
    goto L_089A24BC;
L_089A24BC:
    aot_gpr[3] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(6240));
    aot_gpr[23] = (aot_gpr[2] & 65535u);
    aot_gpr[19] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089A24D4;
L_089A24D4:
    aot_gpr[2] = (aot_gpr[21] + aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[30] << (aot_gpr[17] & 31u));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (aot_gpr[23] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089A2528;
      }
      goto L_089A24EC;
    }
L_089A24EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10304)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089A2604;
      }
      goto L_089A2508;
    }
L_089A2508:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10304)));
    aot_gpr[16] = (aot_gpr[22] << 1u);
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[10] == aot_gpr[30];
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089A2580;
      }
      goto L_089A2520;
    }
L_089A2520:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089A2524;
L_089A2524:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    goto L_089A2528;
L_089A2528:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089A24D4;
      }
      goto L_089A2538;
    }
L_089A2538:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[21] << 3u);
      if (branch_taken) {
          goto L_089A24BC;
      }
      goto L_089A254C;
    }
L_089A254C:
    aot_gpr[2] = (0u + 0u);
    goto L_089A2550;
L_089A2550:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10356)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10352)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10348)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10344)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10340)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10336)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10332)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10328)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10324)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10320)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(10368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2580:
    aot_gpr[31] = (0x089A2588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2588u) goto L_089A2588;
    return;
L_089A2588:
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(2176));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A2598u);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2598u) goto L_089A2598;
    return;
L_089A2598:
    aot_gpr[3] = (aot_gpr[29] + static_cast<std::uint32_t>(4208));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A25A8u);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A25A8u) goto L_089A25A8;
    return;
L_089A25A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(10308)));
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[29]);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089A2520;
      }
      goto L_089A25C8;
    }
L_089A25C8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(4208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(144)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(2176)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089A25ECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A25ECu) goto L_089A25EC;
    return;
L_089A25EC:
    aot_gpr[31] = (0x089A25F4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A2168;
L_089A25F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A2524;
      }
      goto L_089A25FC;
    }
L_089A25FC:
    aot_gpr[2] = (0u | 52003u);
    goto L_089A2550;
L_089A2604:
    aot_gpr[31] = (0x089A260Cu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A260Cu) goto L_089A260C;
    return;
L_089A260C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089A2524;
L_089A2614:
    aot_gpr[31] = (0x089A261Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A261Cu) goto L_089A261C;
    return;
L_089A261C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[6] & 127u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089A2490;
L_089A2634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089A2660u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2660u) goto L_089A2660;
    return;
L_089A2660:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089A2698;
      }
      goto L_089A2670;
    }
L_089A2670:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A26C0;
      }
      goto L_089A267C;
    }
L_089A267C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2698:
    aot_gpr[31] = (0x089A26A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A26A0u) goto L_089A26A0;
    return;
L_089A26A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A26C0:
    aot_gpr[4] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (0x089A26CCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A26CCu) goto L_089A26CC;
    return;
L_089A26CC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089A26D8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A26D8u) goto L_089A26D8;
    return;
L_089A26D8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(7));
    aot_gpr[31] = (0x089A26E4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A26E4u) goto L_089A26E4;
    return;
L_089A26E4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A272C;
      }
      goto L_089A26F4;
    }
L_089A26F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089A271Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A271Cu) goto L_089A271C;
    return;
L_089A271C:
    aot_gpr[31] = (0x089A2724u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A2168;
L_089A2724:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A267C;
      }
      goto L_089A272C;
    }
L_089A272C:
    aot_gpr[4] = (0u + 0u);
    goto L_089A267C;
L_089A2734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089A2758;
      }
      goto L_089A2748;
    }
L_089A2748:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089A2770;
      }
      goto L_089A2758;
    }
L_089A2758:
    aot_gpr[3] = (0u | 52000u);
    goto L_089A275C;
L_089A275C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2770:
    aot_gpr[2] = (aot_gpr[6] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16604));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2788:
    aot_gpr[5] = (0u + 0u);
    goto L_089A278C;
L_089A278C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089A27B8;
      }
      goto L_089A2798;
    }
L_089A2798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A27A4u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A27A4u) goto L_089A27A4;
    return;
L_089A27A4:
    aot_gpr[31] = (0x089A27ACu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A2168;
L_089A27AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A275C;
      }
      goto L_089A27B4;
    }
L_089A27B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089A27B8;
L_089A27B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A27CC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A278C;
L_089A27D4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A278C;
L_089A27DC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_089A278C;
L_089A27E4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
    goto L_089A278C;
L_089A27EC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6));
    goto L_089A278C;
L_089A27F4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
    goto L_089A278C;
L_089A27FC:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A2828;
    }
L_089A2828:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(53));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A2834;
    }
L_089A2834:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A283C;
    }
L_089A283C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A2844;
    }
L_089A2844:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(54));
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A284C;
    }
L_089A284C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A2854;
    }
L_089A2854:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A28C4;
      }
      goto L_089A285C;
    }
L_089A285C:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[5] = (0u | 65535u);
    goto L_089A2898;
L_089A286C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A285C;
      }
      goto L_089A2878;
    }
L_089A2878:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52000u);
      if (branch_taken) {
          goto L_089A28C4;
      }
      goto L_089A2880;
    }
L_089A2880:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089A288Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A288Cu) goto L_089A288C;
    return;
L_089A288C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A2898;
L_089A2898:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089A28E4;
      }
      goto L_089A28A4;
    }
L_089A28A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A28B4u);
    aot_gpr[7] = (aot_gpr[18] - aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A28B4u) goto L_089A28B4;
    return;
L_089A28B4:
    aot_gpr[31] = (0x089A28BCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A2168;
L_089A28BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A28E0;
      }
      goto L_089A28C4;
    }
L_089A28C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A28E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089A28E4;
L_089A28E4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2900:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x089A2920u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A2920u) goto L_089A2920;
    return;
L_089A2920:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_089A2940;
      }
      goto L_089A2928;
    }
L_089A2928:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16092)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089A295C;
      }
      goto L_089A2934;
    }
L_089A2934:
    aot_gpr[31] = (0x089A293Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A293Cu) goto L_089A293C;
    return;
L_089A293C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A2940;
L_089A2940:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089A295C:
    aot_gpr[17] = (0u + 0u);
    goto L_089A2960;
L_089A2960:
    aot_gpr[31] = (0x089A2968u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089A2168;
L_089A2968:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089A2994;
      }
      goto L_089A2970;
    }
L_089A2970:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16092)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2934;
      }
      goto L_089A2984;
    }
L_089A2984:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2960;
      }
      goto L_089A298C;
    }
L_089A298C:
    // nop
    goto L_089A2934;
L_089A2994:
    aot_gpr[31] = (0x089A299Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0412_entry, 412u, 10u, 0x089A0068u>(ctx, &aot_mem) && ctx.pc == 0x089A299Cu) goto L_089A299C;
    return;
L_089A299C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089A2970;
      }
      goto L_089A29A4;
    }
L_089A29A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(140)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A2970;
      }
      goto L_089A29B4;
    }
L_089A29B4:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A29BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A29BCu) goto L_089A29BC;
    return;
L_089A29BC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089A2970;
L_089A29C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16092)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089A2A84;
      }
      goto L_089A2A04;
    }
L_089A2A04:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16088)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_089A2A34;
      }
      goto L_089A2A18;
    }
L_089A2A18:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] == aot_gpr[16]) {
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(10));
        goto L_089A2A84;
    }
    goto L_089A2A24;
L_089A2A24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A2A18;
      }
      goto L_089A2A30;
    }
L_089A2A30:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(192));
    goto L_089A2A34;
L_089A2A34:
    aot_gpr[31] = (0x089A2A3Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A2A3Cu) goto L_089A2A3C;
    return;
L_089A2A3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A2A60;
      }
      goto L_089A2A44;
    }
L_089A2A44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16088)));
    aot_gpr[3] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089A2A60;
L_089A2A60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2A84:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A2A94u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089A2A94u) goto L_089A2A94;
    return;
L_089A2A94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A2A60;
      }
      goto L_089A2A9C;
    }
L_089A2A9C:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16088)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16092)));
      if (branch_taken) {
          goto L_089A2AC0;
      }
      goto L_089A2AAC;
    }
L_089A2AAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089A2AB8u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2AB8u) goto L_089A2AB8;
    return;
L_089A2AB8:
    aot_gpr[31] = (0x089A2AC0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(16088));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089A2AC0u) goto L_089A2AC0;
    return;
L_089A2AC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16092), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16088), aot_gpr[2]);
    goto L_089A2A30;
L_089A2AD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089A2AF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 139u, 0x0899FB94u>(ctx, &aot_mem) && ctx.pc == 0x089A2AF0u) goto L_089A2AF0;
    return;
L_089A2AF0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089A2B0C;
      }
      goto L_089A2AF8;
    }
L_089A2AF8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2B0C:
    aot_gpr[31] = (0x089A2B14u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089A29C4;
L_089A2B14:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089A2B40;
      }
      goto L_089A2B1C;
    }
L_089A2B1C:
    aot_gpr[31] = (0x089A2B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A2B24u) goto L_089A2B24;
    return;
L_089A2B24:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A2B28;
L_089A2B28:
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
L_089A2B40:
    aot_gpr[31] = (0x089A2B48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 158u, 0x0899FCD4u>(ctx, &aot_mem) && ctx.pc == 0x089A2B48u) goto L_089A2B48;
    return;
L_089A2B48:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2B90;
      }
      goto L_089A2B5C;
    }
L_089A2B5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A2BA0;
      }
      goto L_089A2B68;
    }
L_089A2B68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    goto L_089A2B6C;
L_089A2B6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A2B1C;
      }
      goto L_089A2B74;
    }
L_089A2B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089A2B80u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2B80u) goto L_089A2B80;
    return;
L_089A2B80:
    aot_gpr[31] = (0x089A2B88u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0411_entry, 411u, 143u, 0x0899FBD8u>(ctx, &aot_mem) && ctx.pc == 0x089A2B88u) goto L_089A2B88;
    return;
L_089A2B88:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089A2B28;
L_089A2B90:
    aot_gpr[31] = (0x089A2B98u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 22u, 0x089A3110u>(ctx, &aot_mem) && ctx.pc == 0x089A2B98u) goto L_089A2B98;
    return;
L_089A2B98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    goto L_089A2B6C;
L_089A2BA0:
    aot_gpr[31] = (0x089A2BA8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0419_entry, 419u, 24u, 0x089A712Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2BA8u) goto L_089A2BA8;
    return;
L_089A2BA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    goto L_089A2B6C;
L_089A2BB0:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A2BE0;
      }
      goto L_089A2BC0;
    }
L_089A2BC0:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-16572));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2BDC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    goto L_089A2BE0;
L_089A2BE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2BE8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2BF4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(9));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2C00:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(7));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2C0C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2C18:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2C24:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2C30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2360), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2352), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2388), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2384), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2380), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2376), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2372), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2368), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2364), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2356), aot_gpr[17]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2340), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[30] & 2u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A2EAC;
      }
      goto L_089A2C78;
    }
L_089A2C78:
    aot_gpr[2] = (aot_gpr[30] & 4u);
    goto L_089A2C7C;
L_089A2C7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089A2E90;
      }
      goto L_089A2C84;
    }
L_089A2C84:
    aot_gpr[2] = (aot_gpr[30] & 8u);
    goto L_089A2C88;
L_089A2C88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 5u, 0x089A3034u>(ctx, &aot_mem); return;
      }
      goto L_089A2C90;
    }
L_089A2C90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[2] & 127u);
    aot_gpr[2] = (aot_gpr[2] >> 7u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2336), aot_gpr[2]);
      if (branch_taken) {
          goto L_089A2E58;
      }
      goto L_089A2CA8;
    }
L_089A2CA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A2F0C;
      }
      goto L_089A2CB0;
    }
L_089A2CB0:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A2CC4u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2CC4u) goto L_089A2CC4;
    return;
L_089A2CC4:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_089A2CD4;
L_089A2CD4:
    aot_gpr[16] = (0u + 0u);
    goto L_089A2CD8;
L_089A2CD8:
    aot_gpr[17] = (aot_gpr[21] + aot_gpr[23]);
    goto L_089A2CE8;
L_089A2CE0:
    if (aot_gpr[16] == aot_gpr[19]) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089A2D18;
    }
    goto L_089A2CE8;
L_089A2CE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089A2CEC;
L_089A2CEC:
    aot_gpr[2] = (aot_gpr[20] << (aot_gpr[16] & 31u));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089A2CE0;
      }
      goto L_089A2D04;
    }
L_089A2D04:
    aot_gpr[31] = (0x089A2D0Cu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A2D0Cu) goto L_089A2D0C;
    return;
L_089A2D0C:
    if (aot_gpr[16] != aot_gpr[19]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089A2CEC;
    }
    goto L_089A2D14;
L_089A2D14:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089A2D18;
L_089A2D18:
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[22] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + 0u);
        goto L_089A2CD8;
    }
    goto L_089A2D24;
L_089A2D24:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089A2D28;
L_089A2D28:
    aot_gpr[2] = (aot_gpr[30] & 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[30] & 32u);
      if (branch_taken) {
          goto L_089A2D84;
      }
      goto L_089A2D34;
    }
L_089A2D34:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2336)));
      if (branch_taken) {
          goto L_089A2D78;
      }
      goto L_089A2D3C;
    }
L_089A2D3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[2] & 127u);
    aot_gpr[2] = (aot_gpr[2] >> 7u);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2336), aot_gpr[4]);
      if (branch_taken) {
          goto L_089A2E58;
      }
      goto L_089A2D5C;
    }
L_089A2D5C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A2FD8;
      }
      goto L_089A2D64;
    }
L_089A2D64:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A2D74u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2D74u) goto L_089A2D74;
    return;
L_089A2D74:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[22]);
    goto L_089A2D78;
L_089A2D78:
    if (aot_gpr[22] != 0u) {
    aot_gpr[21] = (0u + 0u);
        goto L_089A2F58;
    }
    goto L_089A2D80;
L_089A2D80:
    aot_gpr[2] = (aot_gpr[30] & 32u);
    goto L_089A2D84;
L_089A2D84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A2E20;
      }
      goto L_089A2D8C;
    }
L_089A2D8C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[19]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089A2F44;
      }
      goto L_089A2D9C;
    }
L_089A2D9C:
    if (aot_gpr[19] == 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
        goto L_089A2E5C;
    }
    goto L_089A2DA4;
L_089A2DA4:
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0415_entry, 415u, 3u, 0x089A3020u>(ctx, &aot_mem); return;
      }
      goto L_089A2DAC;
    }
L_089A2DAC:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(163));
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089A2DC0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2DC0u) goto L_089A2DC0;
    return;
L_089A2DC0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A2DCCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2DCCu) goto L_089A2DCC;
    return;
L_089A2DCC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A2FEC;
      }
      goto L_089A2DD8;
    }
L_089A2DD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2340)));
    goto L_089A2DDC;
L_089A2DDC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(18)));
      if (branch_taken) {
          goto L_089A2E20;
      }
      goto L_089A2DE8;
    }
L_089A2DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089A2E10u);
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(290));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A2E10u) goto L_089A2E10;
    return;
L_089A2E10:
    aot_gpr[31] = (0x089A2E18u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089A2168;
L_089A2E18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 52003u);
      if (branch_taken) {
          goto L_089A2E5C;
      }
      goto L_089A2E20;
    }
L_089A2E20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2388)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2384)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2380)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2376)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2372)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2368)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2364)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2360)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2356)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2352)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2E58:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A2E5C;
L_089A2E5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2388)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2384)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2380)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2376)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2372)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2368)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2364)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2360)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2356)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2352)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2E90:
    aot_gpr[31] = (0x089A2E98u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089A2E98u) goto L_089A2E98;
    return;
L_089A2E98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089A2EA4u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 207u, 0x08992F38u>(ctx, &aot_mem) && ctx.pc == 0x089A2EA4u) goto L_089A2EA4;
    return;
L_089A2EA4:
    aot_gpr[2] = (aot_gpr[30] & 8u);
    goto L_089A2C88;
L_089A2EAC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089A2EB8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2EB8u) goto L_089A2EB8;
    return;
L_089A2EB8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A2EC4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2EC4u) goto L_089A2EC4;
    return;
L_089A2EC4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089A2ED0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2ED0u) goto L_089A2ED0;
    return;
L_089A2ED0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089A2EDCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2EDCu) goto L_089A2EDC;
    return;
L_089A2EDC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x089A2EE8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2EE8u) goto L_089A2EE8;
    return;
L_089A2EE8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089A2EF4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2EF4u) goto L_089A2EF4;
    return;
L_089A2EF4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(7));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089A2F04u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 242u, 0x0898FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2F04u) goto L_089A2F04;
    return;
L_089A2F04:
    aot_gpr[2] = (aot_gpr[30] & 4u);
    goto L_089A2C7C;
L_089A2F0C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x089A2F20u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2F20u) goto L_089A2F20;
    return;
L_089A2F20:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A2F30u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089A2F30u) goto L_089A2F30;
    return;
L_089A2F30:
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[21] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_089A2CD4;
L_089A2F44:
    aot_gpr[19] = (aot_gpr[19] & 127u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A2DA4;
      }
      goto L_089A2F50;
    }
L_089A2F50:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089A2E5C;
L_089A2F58:
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[16] = (0u + 0u);
    goto L_089A2F68;
L_089A2F68:
    aot_gpr[17] = (aot_gpr[21] + aot_gpr[23]);
    goto L_089A2F78;
L_089A2F70:
    if (aot_gpr[16] == aot_gpr[19]) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089A2FC4;
    }
    goto L_089A2F78;
L_089A2F78:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089A2F7C;
L_089A2F7C:
    aot_gpr[2] = (aot_gpr[20] << (aot_gpr[16] & 31u));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A2F70;
      }
      goto L_089A2F94;
    }
L_089A2F94:
    aot_gpr[31] = (0x089A2F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2F9Cu) goto L_089A2F9C;
    return;
L_089A2F9C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089A2FA8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2FA8u) goto L_089A2FA8;
    return;
L_089A2FA8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089A2FB8u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2FB8u) goto L_089A2FB8;
    return;
L_089A2FB8:
    if (aot_gpr[16] != aot_gpr[19]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089A2F7C;
    }
    goto L_089A2FC0;
L_089A2FC0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089A2FC4;
L_089A2FC4:
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[22] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u + 0u);
        goto L_089A2F68;
    }
    goto L_089A2FD0;
L_089A2FD0:
    aot_gpr[2] = (aot_gpr[30] & 32u);
    goto L_089A2D84;
L_089A2FD8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A2FE4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089A2FE4u) goto L_089A2FE4;
    return;
L_089A2FE4:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(3));
    goto L_089A2D64;
L_089A2FEC:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(290));
    goto L_089A2FF4;
L_089A2FF4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089A3000u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0414(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0414_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_414(Runtime &runtime) {
    runtime.register_generated_unit(414u, 0x089A2000u, 4096u, &recomp_unit_0414, &recomp_unit_0414_entry);
    runtime.register_function(0x089A2000u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2014u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A201Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2034u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A203Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2050u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A205Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2068u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A206Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2088u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2098u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20A0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20BCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20CCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20D8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20E0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20E4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20ECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A20F4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2104u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2110u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2118u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A211Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2124u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A212Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A213Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2144u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A214Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2150u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2160u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2168u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A217Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2198u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A21A0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A21A8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A21E8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A21F4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2200u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2214u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2224u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A224Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2254u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2268u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2278u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A228Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2298u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22A0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22ACu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22B8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22DCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22E4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22ECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A22F4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A230Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2324u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A232Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A233Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2354u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2360u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A237Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2390u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2398u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A23A4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A23B4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A23C4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A23CCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A23D4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A23E0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A242Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A243Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A244Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A245Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A246Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2480u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2490u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A24A0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A24ACu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A24BCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A24D4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A24ECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2508u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2520u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2524u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2528u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2538u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A254Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2550u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2580u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2588u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2598u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A25A8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A25C8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A25ECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A25F4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A25FCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2604u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A260Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2614u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A261Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2634u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2660u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2670u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A267Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2698u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A26A0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A26C0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A26CCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A26D8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A26E4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A26F4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A271Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2724u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A272Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2734u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2748u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2758u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A275Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2770u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2788u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A278Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2798u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27A4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27ACu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27B4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27B8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27CCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27D4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27DCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27E4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27ECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27F4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A27FCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2828u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2834u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A283Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2844u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A284Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2854u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A285Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A286Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2878u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2880u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A288Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2898u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A28A4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A28B4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A28BCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A28C4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A28E0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A28E4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2900u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2920u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2928u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2934u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A293Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2940u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A295Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2960u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2968u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2970u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2984u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A298Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2994u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A299Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A29A4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A29B4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A29BCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A29C4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A04u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A18u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A24u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A30u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A34u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A3Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A44u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A60u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A84u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A94u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2A9Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2AACu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2AB8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2AC0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2AD0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2AF0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2AF8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B0Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B14u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B1Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B24u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B28u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B40u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B48u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B5Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B68u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B6Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B74u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B80u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B88u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B90u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2B98u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BA0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BA8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BB0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BC0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BDCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BE0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BE8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2BF4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C00u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C0Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C18u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C24u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C30u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C78u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C7Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C84u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C88u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2C90u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CA8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CB0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CC4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CD4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CD8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CE0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CE8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2CECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D04u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D0Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D14u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D18u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D24u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D28u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D34u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D3Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D5Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D64u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D74u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D78u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D80u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D84u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D8Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2D9Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DA4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DACu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DC0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DCCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DD8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DDCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2DE8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E10u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E18u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E20u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E58u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E5Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E90u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2E98u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EA4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EACu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EB8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EC4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2ED0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EDCu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EE8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2EF4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F04u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F0Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F20u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F30u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F44u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F50u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F58u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F68u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F70u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F78u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F7Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F94u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2F9Cu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FA8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FB8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FC0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FC4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FD0u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FD8u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FE4u, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FECu, &recomp_unit_0414, "recomp_unit_0414");
    runtime.register_function(0x089A2FF4u, &recomp_unit_0414, "recomp_unit_0414");
}
} // namespace psprecomp
