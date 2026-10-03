#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0060[1022] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0,
    28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0,
    66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0,
    0, 74, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111,
    0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 121,
    0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0,
    0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0,
    164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0,
    180, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0,
    190, 0, 0, 0, 191, 0, 192, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0,
    205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0,
    226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0,
    0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246,
};
void recomp_unit_0060_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08840000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0060[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08840000;
    case 2u: goto L_08840014;
    case 3u: goto L_0884003C;
    case 4u: goto L_08840054;
    case 5u: goto L_08840068;
    case 6u: goto L_08840074;
    case 7u: goto L_08840084;
    case 8u: goto L_0884008C;
    case 9u: goto L_088400A0;
    case 10u: goto L_088400A8;
    case 11u: goto L_088400B4;
    case 12u: goto L_088400BC;
    case 13u: goto L_088400C4;
    case 14u: goto L_088400CC;
    case 15u: goto L_088400D4;
    case 16u: goto L_088400E8;
    case 17u: goto L_088400F4;
    case 18u: goto L_08840108;
    case 19u: goto L_08840110;
    case 20u: goto L_0884011C;
    case 21u: goto L_08840130;
    case 22u: goto L_0884013C;
    case 23u: goto L_08840148;
    case 24u: goto L_0884015C;
    case 25u: goto L_08840164;
    case 26u: goto L_08840170;
    case 27u: goto L_08840178;
    case 28u: goto L_08840180;
    case 29u: goto L_08840194;
    case 30u: goto L_0884019C;
    case 31u: goto L_088401A8;
    case 32u: goto L_088401B0;
    case 33u: goto L_088401BC;
    case 34u: goto L_088401C4;
    case 35u: goto L_088401D4;
    case 36u: goto L_088401DC;
    case 37u: goto L_088401E8;
    case 38u: goto L_088401F8;
    case 39u: goto L_0884021C;
    case 40u: goto L_08840224;
    case 41u: goto L_0884022C;
    case 42u: goto L_08840234;
    case 43u: goto L_08840240;
    case 44u: goto L_08840250;
    case 45u: goto L_0884025C;
    case 46u: goto L_08840270;
    case 47u: goto L_08840278;
    case 48u: goto L_08840280;
    case 49u: goto L_08840294;
    case 50u: goto L_088402B4;
    case 51u: goto L_088402B8;
    case 52u: goto L_088402C8;
    case 53u: goto L_088402D0;
    case 54u: goto L_088402DC;
    case 55u: goto L_088402E4;
    case 56u: goto L_088402EC;
    case 57u: goto L_088402FC;
    case 58u: goto L_0884030C;
    case 59u: goto L_08840320;
    case 60u: goto L_08840340;
    case 61u: goto L_0884034C;
    case 62u: goto L_08840354;
    case 63u: goto L_0884035C;
    case 64u: goto L_0884036C;
    case 65u: goto L_08840378;
    case 66u: goto L_08840380;
    case 67u: goto L_08840388;
    case 68u: goto L_08840398;
    case 69u: goto L_088403A8;
    case 70u: goto L_088403C8;
    case 71u: goto L_088403D4;
    case 72u: goto L_088403E8;
    case 73u: goto L_088403F8;
    case 74u: goto L_08840404;
    case 75u: goto L_0884040C;
    case 76u: goto L_08840414;
    case 77u: goto L_08840424;
    case 78u: goto L_08840430;
    case 79u: goto L_08840440;
    case 80u: goto L_08840448;
    case 81u: goto L_08840458;
    case 82u: goto L_0884045C;
    case 83u: goto L_08840480;
    case 84u: goto L_0884048C;
    case 85u: goto L_088404A0;
    case 86u: goto L_088404D0;
    case 87u: goto L_088404F0;
    case 88u: goto L_0884052C;
    case 89u: goto L_08840534;
    case 90u: goto L_08840554;
    case 91u: goto L_08840560;
    case 92u: goto L_08840568;
    case 93u: goto L_08840574;
    case 94u: goto L_0884057C;
    case 95u: goto L_08840594;
    case 96u: goto L_0884059C;
    case 97u: goto L_088405B0;
    case 98u: goto L_088405B8;
    case 99u: goto L_088405C4;
    case 100u: goto L_088405E8;
    case 101u: goto L_088405EC;
    case 102u: goto L_08840600;
    case 103u: goto L_08840614;
    case 104u: goto L_08840624;
    case 105u: goto L_08840630;
    case 106u: goto L_08840640;
    case 107u: goto L_0884064C;
    case 108u: goto L_08840658;
    case 109u: goto L_08840664;
    case 110u: goto L_08840670;
    case 111u: goto L_0884067C;
    case 112u: goto L_08840684;
    case 113u: goto L_08840694;
    case 114u: goto L_088406A0;
    case 115u: goto L_088406B4;
    case 116u: goto L_088406BC;
    case 117u: goto L_088406CC;
    case 118u: goto L_088406D8;
    case 119u: goto L_088406E0;
    case 120u: goto L_088406EC;
    case 121u: goto L_088406FC;
    case 122u: goto L_08840708;
    case 123u: goto L_0884070C;
    case 124u: goto L_08840728;
    case 125u: goto L_08840734;
    case 126u: goto L_08840744;
    case 127u: goto L_08840758;
    case 128u: goto L_08840764;
    case 129u: goto L_0884076C;
    case 130u: goto L_08840778;
    case 131u: goto L_08840784;
    case 132u: goto L_0884078C;
    case 133u: goto L_088407A0;
    case 134u: goto L_088407A8;
    case 135u: goto L_088407B4;
    case 136u: goto L_088407CC;
    case 137u: goto L_088407D0;
    case 138u: goto L_088407E8;
    case 139u: goto L_08840800;
    case 140u: goto L_0884080C;
    case 141u: goto L_08840818;
    case 142u: goto L_08840828;
    case 143u: goto L_08840834;
    case 144u: goto L_0884085C;
    case 145u: goto L_088408A0;
    case 146u: goto L_088408A8;
    case 147u: goto L_088408BC;
    case 148u: goto L_088408C4;
    case 149u: goto L_088408F0;
    case 150u: goto L_08840904;
    case 151u: goto L_08840914;
    case 152u: goto L_08840920;
    case 153u: goto L_0884093C;
    case 154u: goto L_08840950;
    case 155u: goto L_08840970;
    case 156u: goto L_08840994;
    case 157u: goto L_0884099C;
    case 158u: goto L_088409A8;
    case 159u: goto L_088409B4;
    case 160u: goto L_088409C4;
    case 161u: goto L_088409DC;
    case 162u: goto L_088409EC;
    case 163u: goto L_088409F4;
    case 164u: goto L_08840A00;
    case 165u: goto L_08840A0C;
    case 166u: goto L_08840A24;
    case 167u: goto L_08840A30;
    case 168u: goto L_08840A44;
    case 169u: goto L_08840A4C;
    case 170u: goto L_08840A7C;
    case 171u: goto L_08840A88;
    case 172u: goto L_08840A94;
    case 173u: goto L_08840AAC;
    case 174u: goto L_08840AB8;
    case 175u: goto L_08840ACC;
    case 176u: goto L_08840ADC;
    case 177u: goto L_08840AE4;
    case 178u: goto L_08840AF0;
    case 179u: goto L_08840AF8;
    case 180u: goto L_08840B00;
    case 181u: goto L_08840B04;
    case 182u: goto L_08840B18;
    case 183u: goto L_08840B28;
    case 184u: goto L_08840B38;
    case 185u: goto L_08840B40;
    case 186u: goto L_08840B4C;
    case 187u: goto L_08840B5C;
    case 188u: goto L_08840B6C;
    case 189u: goto L_08840B74;
    case 190u: goto L_08840B80;
    case 191u: goto L_08840B90;
    case 192u: goto L_08840B98;
    case 193u: goto L_08840B9C;
    case 194u: goto L_08840BAC;
    case 195u: goto L_08840BD4;
    case 196u: goto L_08840BE8;
    case 197u: goto L_08840BFC;
    case 198u: goto L_08840C0C;
    case 199u: goto L_08840C20;
    case 200u: goto L_08840C28;
    case 201u: goto L_08840C40;
    case 202u: goto L_08840C48;
    case 203u: goto L_08840C5C;
    case 204u: goto L_08840C68;
    case 205u: goto L_08840C80;
    case 206u: goto L_08840C8C;
    case 207u: goto L_08840C94;
    case 208u: goto L_08840CD0;
    case 209u: goto L_08840CD8;
    case 210u: goto L_08840D00;
    case 211u: goto L_08840D08;
    case 212u: goto L_08840D24;
    case 213u: goto L_08840D2C;
    case 214u: goto L_08840D30;
    case 215u: goto L_08840D54;
    case 216u: goto L_08840D5C;
    case 217u: goto L_08840D7C;
    case 218u: goto L_08840D84;
    case 219u: goto L_08840D90;
    case 220u: goto L_08840DA4;
    case 221u: goto L_08840DB0;
    case 222u: goto L_08840DBC;
    case 223u: goto L_08840DD0;
    case 224u: goto L_08840DE4;
    case 225u: goto L_08840DEC;
    case 226u: goto L_08840E00;
    case 227u: goto L_08840E08;
    case 228u: goto L_08840E20;
    case 229u: goto L_08840E28;
    case 230u: goto L_08840E64;
    case 231u: goto L_08840E70;
    case 232u: goto L_08840E88;
    case 233u: goto L_08840E94;
    case 234u: goto L_08840EC4;
    case 235u: goto L_08840EE0;
    case 236u: goto L_08840EEC;
    case 237u: goto L_08840EF4;
    case 238u: goto L_08840F0C;
    case 239u: goto L_08840F44;
    case 240u: goto L_08840F54;
    case 241u: goto L_08840F5C;
    case 242u: goto L_08840F74;
    case 243u: goto L_08840FA4;
    case 244u: goto L_08840FC4;
    case 245u: goto L_08840FE4;
    case 246u: goto L_08840FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08840000:
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 4u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08840074;
      }
      goto L_08840014;
    }
L_08840014:
    aot_gpr[4] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 62u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x0884003Cu);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-6648));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884003Cu) goto L_0884003C;
    return;
L_0884003C:
    aot_gpr[7] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08840054u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08840054u) goto L_08840054;
    return;
L_08840054:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08840068u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08840068u) goto L_08840068;
    return;
L_08840068:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08840084;
      }
      goto L_08840074;
    }
L_08840074:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 137u, 0x0883FFD8u>(ctx, &aot_mem); return;
      }
      goto L_08840084;
    }
L_08840084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_0884008C;
    }
L_0884008C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08840148;
      }
      goto L_088400A0;
    }
L_088400A0:
    aot_gpr[31] = (0x088400A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088400A8u) goto L_088400A8;
    return;
L_088400A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088400C4;
    }
    goto L_088400B4;
L_088400B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08840178;
      }
      goto L_088400BC;
    }
L_088400BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088400D4;
      }
      goto L_088400C4;
    }
L_088400C4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088400F4;
      }
      goto L_088400CC;
    }
L_088400CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840178;
      }
      goto L_088400D4;
    }
L_088400D4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088400E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 240u, 0x08963D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088400E8u) goto L_088400E8;
    return;
L_088400E8:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08840178;
      }
      goto L_088400F4;
    }
L_088400F4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08840108u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 256u, 0x08963E70u>(ctx, &aot_mem) && ctx.pc == 0x08840108u) goto L_08840108;
    return;
L_08840108:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0884013C;
      }
      goto L_08840110;
    }
L_08840110:
    aot_gpr[4] = (0u | 187u);
    aot_gpr[31] = (0x0884011Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884011Cu) goto L_0884011C;
    return;
L_0884011C:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840130u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08840130u) goto L_08840130;
    return;
L_08840130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0884013Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 240u, 0x08963D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0884013Cu) goto L_0884013C;
    return;
L_0884013C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08840178;
      }
      goto L_08840148;
    }
L_08840148:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08840178;
      }
      goto L_0884015C;
    }
L_0884015C:
    aot_gpr[31] = (0x08840164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08840164u) goto L_08840164;
    return;
L_08840164:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08840178;
      }
      goto L_08840170;
    }
L_08840170:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08840178;
L_08840178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_08840180;
    }
L_08840180:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088401E8;
      }
      goto L_08840194;
    }
L_08840194:
    aot_gpr[31] = (0x0884019Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0884019Cu) goto L_0884019C;
    return;
L_0884019C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088401BC;
    }
    goto L_088401A8;
L_088401A8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_088401B0;
    }
L_088401B0:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_088401BC;
    }
L_088401BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_088401C4;
    }
L_088401C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088401D4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x088401D4u) goto L_088401D4;
    return;
L_088401D4:
    aot_gpr[31] = (0x088401DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 240u, 0x08963D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088401DCu) goto L_088401DC;
    return;
L_088401DC:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_088401E8;
    }
L_088401E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_088401F8;
    }
L_088401F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840270;
      }
      goto L_0884021C;
    }
L_0884021C:
    aot_gpr[31] = (0x08840224u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08840224u) goto L_08840224;
    return;
L_08840224:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840270;
      }
      goto L_0884022C;
    }
L_0884022C:
    aot_gpr[31] = (0x08840234u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08840234u) goto L_08840234;
    return;
L_08840234:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08840240u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08840240u) goto L_08840240;
    return;
L_08840240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840270;
      }
      goto L_08840250;
    }
L_08840250:
    aot_gpr[4] = (0u | 63u);
    aot_gpr[31] = (0x0884025Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884025Cu) goto L_0884025C;
    return;
L_0884025C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840270u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08840270u) goto L_08840270;
    return;
L_08840270:
    aot_gpr[31] = (0x08840278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 211u, 0x08963BD8u>(ctx, &aot_mem) && ctx.pc == 0x08840278u) goto L_08840278;
    return;
L_08840278:
    aot_gpr[31] = (0x08840280u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 212u, 0x08963BE4u>(ctx, &aot_mem) && ctx.pc == 0x08840280u) goto L_08840280;
    return;
L_08840280:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088402C8;
      }
      goto L_08840294;
    }
L_08840294:
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088402B8;
      }
      goto L_088402B4;
    }
L_088402B4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088402B8;
L_088402B8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840294;
      }
      goto L_088402C8;
    }
L_088402C8:
    aot_gpr[31] = (0x088402D0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x088402D0u) goto L_088402D0;
    return;
L_088402D0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088402EC;
      }
      goto L_088402DC;
    }
L_088402DC:
    aot_gpr[31] = (0x088402E4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x088402E4u) goto L_088402E4;
    return;
L_088402E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840398;
      }
      goto L_088402EC;
    }
L_088402EC:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840398;
      }
      goto L_088402FC;
    }
L_088402FC:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884030Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x0884030Cu) goto L_0884030C;
    return;
L_0884030C:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0884036C;
      }
      goto L_08840320;
    }
L_08840320:
    aot_gpr[4] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[16] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0884035C;
      }
      goto L_08840340;
    }
L_08840340:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0884034Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884034Cu) goto L_0884034C;
    return;
L_0884034C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884035C;
      }
      goto L_08840354;
    }
L_08840354:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0884036C;
      }
      goto L_0884035C;
    }
L_0884035C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840320;
      }
      goto L_0884036C;
    }
L_0884036C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08840388;
      }
      goto L_08840378;
    }
L_08840378:
    aot_gpr[31] = (0x08840380u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08840380u) goto L_08840380;
    return;
L_08840380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840398;
      }
      goto L_08840388;
    }
L_08840388:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088402FC;
      }
      goto L_08840398;
    }
L_08840398:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
        goto L_0884045C;
    }
    goto L_088403A8;
L_088403A8:
    aot_gpr[4] = (aot_gpr[18] << 5u);
    aot_gpr[5] = (aot_gpr[18] << 3u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[30] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08840448;
      }
      goto L_088403C8;
    }
L_088403C8:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088403D4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x088403D4u) goto L_088403D4;
    return;
L_088403D4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840424;
      }
      goto L_088403E8;
    }
L_088403E8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088403F8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x088403F8u) goto L_088403F8;
    return;
L_088403F8:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08840404u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08840404u) goto L_08840404;
    return;
L_08840404:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840414;
      }
      goto L_0884040C;
    }
L_0884040C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08840424;
      }
      goto L_08840414;
    }
L_08840414:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088403E8;
      }
      goto L_08840424;
    }
L_08840424:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08840448;
      }
      goto L_08840430;
    }
L_08840430:
    aot_gpr[6] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08840440u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08840440u) goto L_08840440;
    return;
L_08840440:
    aot_gpr[31] = (0x08840448u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08840448u) goto L_08840448;
    return;
L_08840448:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088403A8;
      }
      goto L_08840458;
    }
L_08840458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    goto L_0884045C;
L_0884045C:
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088404A0;
      }
      goto L_08840480;
    }
L_08840480:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x0884048Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 88u, 0x088936C4u>(ctx, &aot_mem) && ctx.pc == 0x0884048Cu) goto L_0884048C;
    return;
L_0884048C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_088404A0;
L_088404A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088404D0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23840), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088404F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6640));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0884052Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884052Cu) goto L_0884052C;
    return;
L_0884052C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08840568;
      }
      goto L_08840534;
    }
L_08840534:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8436)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[31] = (0x08840554u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6620));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840554u) goto L_08840554;
    return;
L_08840554:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840560u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840560u) goto L_08840560;
    return;
L_08840560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840834;
      }
      goto L_08840568;
    }
L_08840568:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08840574u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6608));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840574u) goto L_08840574;
    return;
L_08840574:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884059C;
      }
      goto L_0884057C;
    }
L_0884057C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08840594u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6588));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08840594u) goto L_08840594;
    return;
L_08840594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840834;
      }
      goto L_0884059C;
    }
L_0884059C:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6556));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088405B0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088405B0u) goto L_088405B0;
    return;
L_088405B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884078C;
      }
      goto L_088405B8;
    }
L_088405B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088405C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25320)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088405C4u) goto L_088405C4;
    return;
L_088405C4:
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-6520));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-6432));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_088405EC;
      }
      goto L_088405E8;
    }
L_088405E8:
    aot_gpr[18] = (0u | 0u);
    goto L_088405EC;
L_088405EC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(-6540));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840600u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840600u) goto L_08840600;
    return;
L_08840600:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840614u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08840614u) goto L_08840614;
    return;
L_08840614:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840624u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840624u) goto L_08840624;
    return;
L_08840624:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840630u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840630u) goto L_08840630;
    return;
L_08840630:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25344)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08840664;
      }
      goto L_08840640;
    }
L_08840640:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884064Cu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884064Cu) goto L_0884064C;
    return;
L_0884064C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840658u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840658u) goto L_08840658;
    return;
L_08840658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25324)));
      if (branch_taken) {
          goto L_08840684;
      }
      goto L_08840664;
    }
L_08840664:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840670u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840670u) goto L_08840670;
    return;
L_08840670:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884067Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884067Cu) goto L_0884067C;
    return;
L_0884067C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25324)));
    goto L_08840684;
L_08840684:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840694u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840694u) goto L_08840694;
    return;
L_08840694:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088406A0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088406A0u) goto L_088406A0;
    return;
L_088406A0:
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2416)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_088406E0;
      }
      goto L_088406B4;
    }
L_088406B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884070C;
      }
      goto L_088406BC;
    }
L_088406BC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088406CCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6484));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088406CCu) goto L_088406CC;
    return;
L_088406CC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088406D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088406D8u) goto L_088406D8;
    return;
L_088406D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0884070C;
      }
      goto L_088406E0;
    }
L_088406E0:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884070C;
      }
      goto L_088406EC;
    }
L_088406EC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088406FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6484));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088406FCu) goto L_088406FC;
    return;
L_088406FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840708u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840708u) goto L_08840708;
    return;
L_08840708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    goto L_0884070C;
L_0884070C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8003)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840728u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6460));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840728u) goto L_08840728;
    return;
L_08840728:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840734u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840734u) goto L_08840734;
    return;
L_08840734:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2420)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0884076C;
      }
      goto L_08840744;
    }
L_08840744:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08840758u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(2424)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840758u) goto L_08840758;
    return;
L_08840758:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08840764u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840764u) goto L_08840764;
    return;
L_08840764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840784;
      }
      goto L_0884076C;
    }
L_0884076C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840778u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840778u) goto L_08840778;
    return;
L_08840778:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840784u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840784u) goto L_08840784;
    return;
L_08840784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840834;
      }
      goto L_0884078C;
    }
L_0884078C:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6408));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088407A0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088407A0u) goto L_088407A0;
    return;
L_088407A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840834;
      }
      goto L_088407A8;
    }
L_088407A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088407B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25328)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088407B4u) goto L_088407B4;
    return;
L_088407B4:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[5];
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-6520));
      if (branch_taken) {
          goto L_088407D0;
      }
      goto L_088407CC;
    }
L_088407CC:
    aot_gpr[19] = (0u | 0u);
    goto L_088407D0;
L_088407D0:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(25345)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088407E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6392));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088407E8u) goto L_088407E8;
    return;
L_088407E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08840800u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08840800u) goto L_08840800;
    return;
L_08840800:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884080Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 93u, 0x0888C544u>(ctx, &aot_mem) && ctx.pc == 0x0884080Cu) goto L_0884080C;
    return;
L_0884080C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08840818u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840818u) goto L_08840818;
    return;
L_08840818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840828u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840828u) goto L_08840828;
    return;
L_08840828:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840834u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08840834u) goto L_08840834;
    return;
L_08840834:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884085C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-6640));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x088408A0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088408A0u) goto L_088408A0;
    return;
L_088408A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08840BE8;
      }
      goto L_088408A8;
    }
L_088408A8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088408BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6620));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088408BCu) goto L_088408BC;
    return;
L_088408BC:
    aot_gpr[31] = (0x088408C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088408C4u) goto L_088408C4;
    return;
L_088408C4:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8436), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8436)));
    aot_gpr[31] = (0x088408F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x088408F0u) goto L_088408F0;
    return;
L_088408F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-2072), aot_gpr[4]);
    aot_gpr[31] = (0x08840904u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 64u, 0x0881C4B4u>(ctx, &aot_mem) && ctx.pc == 0x08840904u) goto L_08840904;
    return;
L_08840904:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2428), aot_gpr[2]);
    aot_gpr[31] = (0x08840914u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x0881C224u>(ctx, &aot_mem) && ctx.pc == 0x08840914u) goto L_08840914;
    return;
L_08840914:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840920u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 54u, 0x0881C408u>(ctx, &aot_mem) && ctx.pc == 0x08840920u) goto L_08840920;
    return;
L_08840920:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2432));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (2218u << 16u);
      if (branch_taken) {
          goto L_08840A4C;
      }
      goto L_0884093C;
    }
L_0884093C:
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2852), aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840950u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x08840950u) goto L_08840950;
    return;
L_08840950:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25316), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2688), aot_gpr[4]);
    aot_gpr[31] = (0x08840970u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 177u, 0x0881BF04u>(ctx, &aot_mem) && ctx.pc == 0x08840970u) goto L_08840970;
    return;
L_08840970:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2696), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(2176));
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(3008));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2192));
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[18]);
    goto L_08840994;
L_08840994:
    aot_gpr[31] = (0x0884099Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 177u, 0x0881BF04u>(ctx, &aot_mem) && ctx.pc == 0x0884099Cu) goto L_0884099C;
    return;
L_0884099C:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840A44;
      }
      goto L_088409A8;
    }
L_088409A8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088409B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 179u, 0x0881BF58u>(ctx, &aot_mem) && ctx.pc == 0x088409B4u) goto L_088409B4;
    return;
L_088409B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088409C4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 180u, 0x0881BF88u>(ctx, &aot_mem) && ctx.pc == 0x088409C4u) goto L_088409C4;
    return;
L_088409C4:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088409DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 181u, 0x0881BFB8u>(ctx, &aot_mem) && ctx.pc == 0x088409DCu) goto L_088409DC;
    return;
L_088409DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088409ECu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 179u, 0x0881BF58u>(ctx, &aot_mem) && ctx.pc == 0x088409ECu) goto L_088409EC;
    return;
L_088409EC:
    aot_gpr[31] = (0x088409F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088409F4u) goto L_088409F4;
    return;
L_088409F4:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840A00u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08840A00u) goto L_08840A00;
    return;
L_08840A00:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08840A0Cu);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08840A0Cu) goto L_08840A0C;
    return;
L_08840A0C:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08840A24u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08840A24u) goto L_08840A24;
    return;
L_08840A24:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840A30u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08840A30u) goto L_08840A30;
    return;
L_08840A30:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08840994;
      }
      goto L_08840A44;
    }
L_08840A44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08840BAC;
      }
      goto L_08840A4C;
    }
L_08840A4C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2852), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(2176), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(45)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(3008), aot_gpr[4]);
    aot_gpr[31] = (0x08840A7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08840A7Cu) goto L_08840A7C;
    return;
L_08840A7C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840A88u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08840A88u) goto L_08840A88;
    return;
L_08840A88:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08840A94u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08840A94u) goto L_08840A94;
    return;
L_08840A94:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08840AACu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08840AACu) goto L_08840AAC;
    return;
L_08840AAC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840AB8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08840AB8u) goto L_08840AB8;
    return;
L_08840AB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08840ACCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x08840ACCu) goto L_08840ACC;
    return;
L_08840ACC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08840AE4;
      }
      goto L_08840ADC;
    }
L_08840ADC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 50u);
      if (branch_taken) {
          goto L_08840B04;
      }
      goto L_08840AE4;
    }
L_08840AE4:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08840AF8;
      }
      goto L_08840AF0;
    }
L_08840AF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 75u);
      if (branch_taken) {
          goto L_08840B04;
      }
      goto L_08840AF8;
    }
L_08840AF8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08840B04;
      }
      goto L_08840B00;
    }
L_08840B00:
    aot_gpr[19] = (0u | 100u);
    goto L_08840B04;
L_08840B04:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25364), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08840B40;
      }
      goto L_08840B18;
    }
L_08840B18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08840B28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 140u, 0x08874838u>(ctx, &aot_mem) && ctx.pc == 0x08840B28u) goto L_08840B28;
    return;
L_08840B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840B9C;
      }
      goto L_08840B38;
    }
L_08840B38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08840B9C;
      }
      goto L_08840B40;
    }
L_08840B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840B74;
      }
      goto L_08840B4C;
    }
L_08840B4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08840B5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 147u, 0x08874884u>(ctx, &aot_mem) && ctx.pc == 0x08840B5Cu) goto L_08840B5C;
    return;
L_08840B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840B9C;
      }
      goto L_08840B6C;
    }
L_08840B6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08840B9C;
      }
      goto L_08840B74;
    }
L_08840B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840B9C;
      }
      goto L_08840B80;
    }
L_08840B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08840B90u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 133u, 0x088747ECu>(ctx, &aot_mem) && ctx.pc == 0x08840B90u) goto L_08840B90;
    return;
L_08840B90:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08840B9C;
      }
      goto L_08840B98;
    }
L_08840B98:
    aot_gpr[19] = (0u | 1u);
    goto L_08840B9C;
L_08840B9C:
    aot_gpr[4] = (aot_gpr[19] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25368), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    goto L_08840BAC;
L_08840BAC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27980), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2420), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2424), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08840BD4u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08840BD4u) goto L_08840BD4;
    return;
L_08840BD4:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08840F74;
      }
      goto L_08840BE8;
    }
L_08840BE8:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-6556));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08840BFCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840BFCu) goto L_08840BFC;
    return;
L_08840BFC:
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-6608));
      if (branch_taken) {
          goto L_08840DD0;
      }
      goto L_08840C0C;
    }
L_08840C0C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840C20u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840C20u) goto L_08840C20;
    return;
L_08840C20:
    aot_gpr[31] = (0x08840C28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840C28u) goto L_08840C28;
    return;
L_08840C28:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840C40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6520));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840C40u) goto L_08840C40;
    return;
L_08840C40:
    aot_gpr[31] = (0x08840C48u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840C48u) goto L_08840C48;
    return;
L_08840C48:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[17] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08840C5Cu);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(2432));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08840C5Cu) goto L_08840C5C;
    return;
L_08840C5C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08840C68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08840C68u) goto L_08840C68;
    return;
L_08840C68:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08840C80u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08840C80u) goto L_08840C80;
    return;
L_08840C80:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08840C8Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08840C8Cu) goto L_08840C8C;
    return;
L_08840C8C:
    aot_gpr[31] = (0x08840C94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x0881CA68u>(ctx, &aot_mem) && ctx.pc == 0x08840C94u) goto L_08840C94;
    return;
L_08840C94:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25320), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2176), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25344), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840CD0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6504));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840CD0u) goto L_08840CD0;
    return;
L_08840CD0:
    aot_gpr[31] = (0x08840CD8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840CD8u) goto L_08840CD8;
    return;
L_08840CD8:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25324), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(3008), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840D00u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6484));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840D00u) goto L_08840D00;
    return;
L_08840D00:
    aot_gpr[31] = (0x08840D08u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840D08u) goto L_08840D08;
    return;
L_08840D08:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_08840D2C;
      }
      goto L_08840D24;
    }
L_08840D24:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2416), aot_gpr[4]);
      if (branch_taken) {
          goto L_08840D30;
      }
      goto L_08840D2C;
    }
L_08840D2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2416), aot_gpr[5]);
    goto L_08840D30;
L_08840D30:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7488), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2272), 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840D54u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6460));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840D54u) goto L_08840D54;
    return;
L_08840D54:
    aot_gpr[31] = (0x08840D5Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840D5Cu) goto L_08840D5C;
    return;
L_08840D5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8003), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08840D7Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6432));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840D7Cu) goto L_08840D7C;
    return;
L_08840D7C:
    aot_gpr[31] = (0x08840D84u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840D84u) goto L_08840D84;
    return;
L_08840D84:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08840DA4;
      }
      goto L_08840D90;
    }
L_08840D90:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2420), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2424), aot_gpr[4]);
      if (branch_taken) {
          goto L_08840DB0;
      }
      goto L_08840DA4;
    }
L_08840DA4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2420), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2424), aot_gpr[4]);
    goto L_08840DB0;
L_08840DB0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08840DBCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08840DBCu) goto L_08840DBC;
    return;
L_08840DBC:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08840F74;
      }
      goto L_08840DD0;
    }
L_08840DD0:
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-6408));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08840DE4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840DE4u) goto L_08840DE4;
    return;
L_08840DE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08840EE0;
      }
      goto L_08840DEC;
    }
L_08840DEC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08840E00u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6392));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840E00u) goto L_08840E00;
    return;
L_08840E00:
    aot_gpr[31] = (0x08840E08u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840E08u) goto L_08840E08;
    return;
L_08840E08:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08840E20u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6520));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08840E20u) goto L_08840E20;
    return;
L_08840E20:
    aot_gpr[31] = (0x08840E28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08840E28u) goto L_08840E28;
    return;
L_08840E28:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(25328), aot_gpr[5]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(2176), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25345), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840E64u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(2432));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08840E64u) goto L_08840E64;
    return;
L_08840E64:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08840E70u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x08840E70u) goto L_08840E70;
    return;
L_08840E70:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08840E88u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08840E88u) goto L_08840E88;
    return;
L_08840E88:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08840E94u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08840E94u) goto L_08840E94;
    return;
L_08840E94:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2420), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2424), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08840EC4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08840EC4u) goto L_08840EC4;
    return;
L_08840EC4:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2272), 0u);
      if (branch_taken) {
          goto L_08840F74;
      }
      goto L_08840EE0;
    }
L_08840EE0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08840EECu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840EECu) goto L_08840EEC;
    return;
L_08840EEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840F44;
      }
      goto L_08840EF4;
    }
L_08840EF4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08840F0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6372));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x08840F0Cu) goto L_08840F0C;
    return;
L_08840F0C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7488), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2852), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2072), 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(3024), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27980), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2272), 0u);
      if (branch_taken) {
          goto L_08840F74;
      }
      goto L_08840F44;
    }
L_08840F44:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08840F54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6340));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840F54u) goto L_08840F54;
    return;
L_08840F54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840F74;
      }
      goto L_08840F5C;
    }
L_08840F5C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7488), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2852), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-2072), 0u);
    goto L_08840F74;
L_08840F74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840FA4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23848), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08840FC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08840FE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6328));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840FE4u) goto L_08840FE4;
    return;
L_08840FE4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08840FF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6316));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08840FF4u) goto L_08840FF4;
    return;
L_08840FF4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08841004u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6300));
    (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0060(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0060_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_60(Runtime &runtime) {
    runtime.register_generated_unit(60u, 0x08840000u, 4096u, &recomp_unit_0060, &recomp_unit_0060_entry);
    runtime.register_function(0x08840000u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840014u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884003Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840054u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840068u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840074u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840084u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884008Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088400F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840108u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840110u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884011Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840130u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884013Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840148u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884015Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840164u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840170u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840178u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840180u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840194u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884019Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088401F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884021Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840224u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884022Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840234u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840240u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840250u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884025Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840270u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840278u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840280u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840294u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088402FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884030Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840320u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840340u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884034Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840354u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884035Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884036Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840378u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840380u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840388u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840398u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088403A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088403C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088403D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088403E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088403F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840404u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884040Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840414u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840424u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840430u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840440u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840448u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840458u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884045Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840480u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884048Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088404A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088404D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088404F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884052Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840534u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840554u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840560u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840568u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840574u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884057Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840594u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884059Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088405B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088405B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088405C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088405E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088405ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840600u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840614u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840624u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840630u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840640u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884064Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840658u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840664u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840670u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884067Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840684u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840694u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088406FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840708u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884070Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840728u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840734u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840744u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840758u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840764u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884076Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840778u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840784u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884078Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088407A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088407A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088407B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088407CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088407D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088407E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840800u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884080Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840818u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840828u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840834u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884085Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088408A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088408A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088408BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088408C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088408F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840904u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840914u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840920u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884093Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840950u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840994u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x0884099Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088409A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088409B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088409C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088409DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088409ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088409F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840A94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840AACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840AB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840ACCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840ADCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840AE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840AF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840AF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840B9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840BACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840BD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840BE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840BFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840C94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840CD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840CD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840D90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840DA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840DBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840DD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840DE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840DECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840E94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840EC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840EE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840EECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840EF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840F0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840F44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840F54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840F5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840F74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840FA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840FC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840FE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x08840FF4u, &recomp_unit_0060, "recomp_unit_0060");
}
} // namespace psprecomp
