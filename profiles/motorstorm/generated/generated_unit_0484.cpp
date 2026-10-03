#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0484[1022] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 19,
    0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0,
    29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0,
    64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 73, 0, 74, 0, 75, 0, 0, 76, 0,
    0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 85, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98,
    0, 0, 99, 0, 100, 0, 0, 0, 101, 102, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 107, 108, 0, 0, 0, 109, 0,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118,
    0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 125, 0, 0,
    126, 0, 127, 0, 0, 0, 128, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 164, 165, 0, 166,
    0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 174, 0, 175, 0, 0, 176, 0, 177,
    0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 186, 0, 187, 0, 0, 188, 0, 189,
    0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201,
    0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232,
    0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244,
    0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 248, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0,
    256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 261, 0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 268,
    0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277,
    0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284,
};
void recomp_unit_0484_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E8000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0484[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E8000;
    case 2u: goto L_089E8014;
    case 3u: goto L_089E801C;
    case 4u: goto L_089E802C;
    case 5u: goto L_089E8038;
    case 6u: goto L_089E8050;
    case 7u: goto L_089E8058;
    case 8u: goto L_089E8068;
    case 9u: goto L_089E8074;
    case 10u: goto L_089E808C;
    case 11u: goto L_089E8094;
    case 12u: goto L_089E80A4;
    case 13u: goto L_089E80B0;
    case 14u: goto L_089E80C0;
    case 15u: goto L_089E80C8;
    case 16u: goto L_089E80D8;
    case 17u: goto L_089E80E4;
    case 18u: goto L_089E80F4;
    case 19u: goto L_089E80FC;
    case 20u: goto L_089E810C;
    case 21u: goto L_089E8118;
    case 22u: goto L_089E8128;
    case 23u: goto L_089E8130;
    case 24u: goto L_089E8140;
    case 25u: goto L_089E814C;
    case 26u: goto L_089E815C;
    case 27u: goto L_089E8164;
    case 28u: goto L_089E8174;
    case 29u: goto L_089E8180;
    case 30u: goto L_089E8190;
    case 31u: goto L_089E8198;
    case 32u: goto L_089E81A8;
    case 33u: goto L_089E81B8;
    case 34u: goto L_089E81C0;
    case 35u: goto L_089E81D0;
    case 36u: goto L_089E81E0;
    case 37u: goto L_089E81E8;
    case 38u: goto L_089E81F8;
    case 39u: goto L_089E8208;
    case 40u: goto L_089E8210;
    case 41u: goto L_089E8220;
    case 42u: goto L_089E8230;
    case 43u: goto L_089E8238;
    case 44u: goto L_089E8248;
    case 45u: goto L_089E8258;
    case 46u: goto L_089E8260;
    case 47u: goto L_089E8270;
    case 48u: goto L_089E8280;
    case 49u: goto L_089E8288;
    case 50u: goto L_089E8298;
    case 51u: goto L_089E82A8;
    case 52u: goto L_089E82B0;
    case 53u: goto L_089E82C4;
    case 54u: goto L_089E82D4;
    case 55u: goto L_089E82DC;
    case 56u: goto L_089E82F0;
    case 57u: goto L_089E8300;
    case 58u: goto L_089E8308;
    case 59u: goto L_089E8318;
    case 60u: goto L_089E8348;
    case 61u: goto L_089E834C;
    case 62u: goto L_089E8368;
    case 63u: goto L_089E8378;
    case 64u: goto L_089E8380;
    case 65u: goto L_089E8388;
    case 66u: goto L_089E8398;
    case 67u: goto L_089E83A0;
    case 68u: goto L_089E83A8;
    case 69u: goto L_089E83BC;
    case 70u: goto L_089E83C8;
    case 71u: goto L_089E83D0;
    case 72u: goto L_089E83D8;
    case 73u: goto L_089E83DC;
    case 74u: goto L_089E83E4;
    case 75u: goto L_089E83EC;
    case 76u: goto L_089E83F8;
    case 77u: goto L_089E8408;
    case 78u: goto L_089E8410;
    case 79u: goto L_089E8418;
    case 80u: goto L_089E8428;
    case 81u: goto L_089E8430;
    case 82u: goto L_089E8444;
    case 83u: goto L_089E844C;
    case 84u: goto L_089E8460;
    case 85u: goto L_089E8468;
    case 86u: goto L_089E846C;
    case 87u: goto L_089E8494;
    case 88u: goto L_089E84B8;
    case 89u: goto L_089E84C8;
    case 90u: goto L_089E84D0;
    case 91u: goto L_089E84D8;
    case 92u: goto L_089E84EC;
    case 93u: goto L_089E8548;
    case 94u: goto L_089E8550;
    case 95u: goto L_089E855C;
    case 96u: goto L_089E8568;
    case 97u: goto L_089E8574;
    case 98u: goto L_089E857C;
    case 99u: goto L_089E8588;
    case 100u: goto L_089E8590;
    case 101u: goto L_089E85A0;
    case 102u: goto L_089E85A4;
    case 103u: goto L_089E85AC;
    case 104u: goto L_089E85B4;
    case 105u: goto L_089E85C0;
    case 106u: goto L_089E85C4;
    case 107u: goto L_089E85E4;
    case 108u: goto L_089E85E8;
    case 109u: goto L_089E85F8;
    case 110u: goto L_089E8600;
    case 111u: goto L_089E8610;
    case 112u: goto L_089E8638;
    case 113u: goto L_089E8648;
    case 114u: goto L_089E8650;
    case 115u: goto L_089E8658;
    case 116u: goto L_089E8664;
    case 117u: goto L_089E866C;
    case 118u: goto L_089E867C;
    case 119u: goto L_089E8684;
    case 120u: goto L_089E8690;
    case 121u: goto L_089E86BC;
    case 122u: goto L_089E86D8;
    case 123u: goto L_089E86E4;
    case 124u: goto L_089E86F0;
    case 125u: goto L_089E86F4;
    case 126u: goto L_089E8700;
    case 127u: goto L_089E8708;
    case 128u: goto L_089E8718;
    case 129u: goto L_089E871C;
    case 130u: goto L_089E8724;
    case 131u: goto L_089E8740;
    case 132u: goto L_089E8754;
    case 133u: goto L_089E8768;
    case 134u: goto L_089E877C;
    case 135u: goto L_089E8790;
    case 136u: goto L_089E87A4;
    case 137u: goto L_089E87B8;
    case 138u: goto L_089E87CC;
    case 139u: goto L_089E87E0;
    case 140u: goto L_089E87F4;
    case 141u: goto L_089E8808;
    case 142u: goto L_089E881C;
    case 143u: goto L_089E8830;
    case 144u: goto L_089E8844;
    case 145u: goto L_089E8858;
    case 146u: goto L_089E886C;
    case 147u: goto L_089E8880;
    case 148u: goto L_089E8898;
    case 149u: goto L_089E88B0;
    case 150u: goto L_089E88C8;
    case 151u: goto L_089E88E0;
    case 152u: goto L_089E88F8;
    case 153u: goto L_089E8910;
    case 154u: goto L_089E8928;
    case 155u: goto L_089E8940;
    case 156u: goto L_089E8958;
    case 157u: goto L_089E8960;
    case 158u: goto L_089E8998;
    case 159u: goto L_089E899C;
    case 160u: goto L_089E89C0;
    case 161u: goto L_089E89D0;
    case 162u: goto L_089E89D8;
    case 163u: goto L_089E89E4;
    case 164u: goto L_089E89F0;
    case 165u: goto L_089E89F4;
    case 166u: goto L_089E89FC;
    case 167u: goto L_089E8A0C;
    case 168u: goto L_089E8A20;
    case 169u: goto L_089E8A28;
    case 170u: goto L_089E8A30;
    case 171u: goto L_089E8A48;
    case 172u: goto L_089E8A54;
    case 173u: goto L_089E8A5C;
    case 174u: goto L_089E8A60;
    case 175u: goto L_089E8A68;
    case 176u: goto L_089E8A74;
    case 177u: goto L_089E8A7C;
    case 178u: goto L_089E8A88;
    case 179u: goto L_089E8A90;
    case 180u: goto L_089E8AA0;
    case 181u: goto L_089E8AA8;
    case 182u: goto L_089E8AB0;
    case 183u: goto L_089E8AC4;
    case 184u: goto L_089E8AD4;
    case 185u: goto L_089E8ADC;
    case 186u: goto L_089E8AE0;
    case 187u: goto L_089E8AE8;
    case 188u: goto L_089E8AF4;
    case 189u: goto L_089E8AFC;
    case 190u: goto L_089E8B04;
    case 191u: goto L_089E8B14;
    case 192u: goto L_089E8B1C;
    case 193u: goto L_089E8B28;
    case 194u: goto L_089E8B38;
    case 195u: goto L_089E8B40;
    case 196u: goto L_089E8B48;
    case 197u: goto L_089E8B50;
    case 198u: goto L_089E8B54;
    case 199u: goto L_089E8B6C;
    case 200u: goto L_089E8B74;
    case 201u: goto L_089E8B7C;
    case 202u: goto L_089E8B8C;
    case 203u: goto L_089E8B94;
    case 204u: goto L_089E8B9C;
    case 205u: goto L_089E8BA4;
    case 206u: goto L_089E8BAC;
    case 207u: goto L_089E8BB4;
    case 208u: goto L_089E8BD8;
    case 209u: goto L_089E8BE8;
    case 210u: goto L_089E8BF0;
    case 211u: goto L_089E8BF8;
    case 212u: goto L_089E8C0C;
    case 213u: goto L_089E8C34;
    case 214u: goto L_089E8C3C;
    case 215u: goto L_089E8C48;
    case 216u: goto L_089E8C50;
    case 217u: goto L_089E8C64;
    case 218u: goto L_089E8C74;
    case 219u: goto L_089E8C8C;
    case 220u: goto L_089E8CA4;
    case 221u: goto L_089E8CE0;
    case 222u: goto L_089E8D0C;
    case 223u: goto L_089E8D1C;
    case 224u: goto L_089E8D24;
    case 225u: goto L_089E8D30;
    case 226u: goto L_089E8D3C;
    case 227u: goto L_089E8D40;
    case 228u: goto L_089E8D48;
    case 229u: goto L_089E8D58;
    case 230u: goto L_089E8D6C;
    case 231u: goto L_089E8D74;
    case 232u: goto L_089E8D7C;
    case 233u: goto L_089E8D94;
    case 234u: goto L_089E8DA0;
    case 235u: goto L_089E8DA8;
    case 236u: goto L_089E8DAC;
    case 237u: goto L_089E8DB4;
    case 238u: goto L_089E8DC0;
    case 239u: goto L_089E8DC8;
    case 240u: goto L_089E8DD4;
    case 241u: goto L_089E8DDC;
    case 242u: goto L_089E8DEC;
    case 243u: goto L_089E8DF4;
    case 244u: goto L_089E8DFC;
    case 245u: goto L_089E8E10;
    case 246u: goto L_089E8E20;
    case 247u: goto L_089E8E28;
    case 248u: goto L_089E8E2C;
    case 249u: goto L_089E8E34;
    case 250u: goto L_089E8E40;
    case 251u: goto L_089E8E48;
    case 252u: goto L_089E8E50;
    case 253u: goto L_089E8E60;
    case 254u: goto L_089E8E68;
    case 255u: goto L_089E8E74;
    case 256u: goto L_089E8E80;
    case 257u: goto L_089E8E88;
    case 258u: goto L_089E8E94;
    case 259u: goto L_089E8E9C;
    case 260u: goto L_089E8EB0;
    case 261u: goto L_089E8EB4;
    case 262u: goto L_089E8EC0;
    case 263u: goto L_089E8ECC;
    case 264u: goto L_089E8ED4;
    case 265u: goto L_089E8EDC;
    case 266u: goto L_089E8EE4;
    case 267u: goto L_089E8EF4;
    case 268u: goto L_089E8EFC;
    case 269u: goto L_089E8F04;
    case 270u: goto L_089E8F0C;
    case 271u: goto L_089E8F14;
    case 272u: goto L_089E8F1C;
    case 273u: goto L_089E8F48;
    case 274u: goto L_089E8F5C;
    case 275u: goto L_089E8F64;
    case 276u: goto L_089E8F74;
    case 277u: goto L_089E8F7C;
    case 278u: goto L_089E8F84;
    case 279u: goto L_089E8F8C;
    case 280u: goto L_089E8FA4;
    case 281u: goto L_089E8FD8;
    case 282u: goto L_089E8FE0;
    case 283u: goto L_089E8FEC;
    case 284u: goto L_089E8FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E8000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19104)));
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8014u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8014u) goto L_089E8014;
    return;
L_089E8014:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E80B0;
      }
      goto L_089E801C;
    }
L_089E801C:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(3588));
    aot_gpr[31] = (0x089E802Cu);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E802Cu) goto L_089E802C;
    return;
L_089E802C:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(3588), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8038:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19104)));
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8050u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8050u) goto L_089E8050;
    return;
L_089E8050:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8118;
      }
      goto L_089E8058;
    }
L_089E8058:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(3332));
    aot_gpr[31] = (0x089E8068u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E8068u) goto L_089E8068;
    return;
L_089E8068:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(3332), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8074:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19104)));
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E808Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E808Cu) goto L_089E808C;
    return;
L_089E808C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E814C;
      }
      goto L_089E8094;
    }
L_089E8094:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(3076));
    aot_gpr[31] = (0x089E80A4u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E80A4u) goto L_089E80A4;
    return;
L_089E80A4:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(3076), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E80B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19108)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E80C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E80C0u) goto L_089E80C0;
    return;
L_089E80C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 232u, 0x089E7C68u>(ctx, &aot_mem); return;
      }
      goto L_089E80C8;
    }
L_089E80C8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(4612));
    aot_gpr[31] = (0x089E80D8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E80D8u) goto L_089E80D8;
    return;
L_089E80D8:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(4612), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E80E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19108)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E80F4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E80F4u) goto L_089E80F4;
    return;
L_089E80F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 232u, 0x089E7C68u>(ctx, &aot_mem); return;
      }
      goto L_089E80FC;
    }
L_089E80FC:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(3844));
    aot_gpr[31] = (0x089E810Cu);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E810Cu) goto L_089E810C;
    return;
L_089E810C:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(3844), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19108)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8128u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8128u) goto L_089E8128;
    return;
L_089E8128:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 232u, 0x089E7C68u>(ctx, &aot_mem); return;
      }
      goto L_089E8130;
    }
L_089E8130:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(4356));
    aot_gpr[31] = (0x089E8140u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E8140u) goto L_089E8140;
    return;
L_089E8140:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(4356), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E814C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19108)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E815Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E815Cu) goto L_089E815C;
    return;
L_089E815C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 232u, 0x089E7C68u>(ctx, &aot_mem); return;
      }
      goto L_089E8164;
    }
L_089E8164:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(4100));
    aot_gpr[31] = (0x089E8174u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E8174u) goto L_089E8174;
    return;
L_089E8174:
    aot_gpr[3] = (aot_gpr[21] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(4100), static_cast<std::uint8_t>(0u));
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19068)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8190u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8190u) goto L_089E8190;
    return;
L_089E8190:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 226u, 0x089E7C28u>(ctx, &aot_mem); return;
      }
      goto L_089E8198;
    }
L_089E8198:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E81A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19084)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E81B8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E81B8u) goto L_089E81B8;
    return;
L_089E81B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E81D0;
      }
      goto L_089E81C0;
    }
L_089E81C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E81D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19088)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E81E0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E81E0u) goto L_089E81E0;
    return;
L_089E81E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8220;
      }
      goto L_089E81E8;
    }
L_089E81E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E81F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19076)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8208u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8208u) goto L_089E8208;
    return;
L_089E8208:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 232u, 0x089E7C68u>(ctx, &aot_mem); return;
      }
      goto L_089E8210;
    }
L_089E8210:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19092)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8230u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8230u) goto L_089E8230;
    return;
L_089E8230:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8248;
      }
      goto L_089E8238;
    }
L_089E8238:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19096)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8258u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8258u) goto L_089E8258;
    return;
L_089E8258:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8270;
      }
      goto L_089E8260;
    }
L_089E8260:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19100)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8280u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8280u) goto L_089E8280;
    return;
L_089E8280:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8298;
      }
      goto L_089E8288;
    }
L_089E8288:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 1024u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19104)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E82A8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E82A8u) goto L_089E82A8;
    return;
L_089E82A8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (2216u << 16u);
        goto L_089E82C4;
    }
    goto L_089E82B0;
L_089E82B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[2] | 2048u);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 229u, 0x089E7C50u>(ctx, &aot_mem); return;
L_089E82C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19108)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E82D4u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E82D4u) goto L_089E82D4;
    return;
L_089E82D4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (2216u << 16u);
        goto L_089E82F0;
    }
    goto L_089E82DC;
L_089E82DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (aot_gpr[2] | 4096u);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 229u, 0x089E7C50u>(ctx, &aot_mem); return;
L_089E82F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19112)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8300u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8300u) goto L_089E8300;
    return;
L_089E8300:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 232u, 0x089E7C68u>(ctx, &aot_mem); return;
      }
      goto L_089E8308;
    }
L_089E8308:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 231u, 0x089E7C64u>(ctx, &aot_mem); return;
L_089E8318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E8368;
      }
      goto L_089E8348;
    }
L_089E8348:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089E834C;
L_089E834C:
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
L_089E8368:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x089E8378u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 159u, 0x089E77E8u>(ctx, &aot_mem) && ctx.pc == 0x089E8378u) goto L_089E8378;
    return;
L_089E8378:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8388;
      }
      goto L_089E8380;
    }
L_089E8380:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E8388;
L_089E8388:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19628));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8398u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8398u) goto L_089E8398;
    return;
L_089E8398:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8418;
      }
      goto L_089E83A0;
    }
L_089E83A0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8348;
      }
      goto L_089E83A8;
    }
L_089E83A8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19116)));
    aot_gpr[16] = (aot_gpr[17] + 0u);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E83BC;
L_089E83BC:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(19380));
    aot_gpr[31] = (0x089E83C8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E83C8u) goto L_089E83C8;
    return;
L_089E83C8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089E83DC;
    }
    goto L_089E83D0;
L_089E83D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E83D8;
L_089E83D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E83DC;
L_089E83DC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8348;
      }
      goto L_089E83E4;
    }
L_089E83E4:
    if (aot_gpr[17] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089E83BC;
    }
    goto L_089E83EC;
L_089E83EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089E83DC;
    }
    goto L_089E83F8;
L_089E83F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8408u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8408u) goto L_089E8408;
    return;
L_089E8408:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[17]);
        goto L_089E83D8;
    }
    goto L_089E8410;
L_089E8410:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E83DC;
L_089E8418:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19388));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8428u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8428u) goto L_089E8428;
    return;
L_089E8428:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E846C;
      }
      goto L_089E8430;
    }
L_089E8430:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19636));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8444u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8444u) goto L_089E8444;
    return;
L_089E8444:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E846C;
      }
      goto L_089E844C;
    }
L_089E844C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19644));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8460u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8460u) goto L_089E8460;
    return;
L_089E8460:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E834C;
      }
      goto L_089E8468;
    }
L_089E8468:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    goto L_089E846C;
L_089E846C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem); return;
L_089E8494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(520));
      if (branch_taken) {
          goto L_089E84C8;
      }
      goto L_089E84B8;
    }
L_089E84B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E84C8:
    aot_gpr[31] = (0x089E84D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 174u, 0x089E78C8u>(ctx, &aot_mem) && ctx.pc == 0x089E84D0u) goto L_089E84D0;
    return;
L_089E84D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E84B8;
      }
      goto L_089E84D8;
    }
L_089E84D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E84EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-11660));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-11660)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
      if (branch_taken) {
          goto L_089E85C0;
      }
      goto L_089E8548;
    }
L_089E8548:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089E85C0;
      }
      goto L_089E8550;
    }
L_089E8550:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_089E85C4;
      }
      goto L_089E855C;
    }
L_089E855C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (0x089E8568u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 164u, 0x089E7864u>(ctx, &aot_mem) && ctx.pc == 0x089E8568u) goto L_089E8568;
    return;
L_089E8568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E85E4;
      }
      goto L_089E8574;
    }
L_089E8574:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089E857C;
L_089E857C:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E8588u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8588u) goto L_089E8588;
    return;
L_089E8588:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E85A4;
      }
      goto L_089E8590;
    }
L_089E8590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E857C;
      }
      goto L_089E85A0;
    }
L_089E85A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E85A4;
L_089E85A4:
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[4] = (2215u << 16u);
        goto L_089E8638;
    }
    goto L_089E85AC;
L_089E85AC:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_089E85E8;
    }
    goto L_089E85B4;
L_089E85B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[4] = (2215u << 16u);
        goto L_089E866C;
    }
    goto L_089E85C0;
L_089E85C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_089E85C4;
L_089E85C4:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E85E4:
    aot_gpr[4] = (2215u << 16u);
    goto L_089E85E8;
L_089E85E8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19388));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E85F8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E85F8u) goto L_089E85F8;
    return;
L_089E85F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8610;
      }
      goto L_089E8600;
    }
L_089E8600:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E85C0;
      }
      goto L_089E8610;
    }
L_089E8610:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8638:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19388));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E8648u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8648u) goto L_089E8648;
    return;
L_089E8648:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_089E8658;
    }
    goto L_089E8650;
L_089E8650:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), aot_gpr[17]);
    goto L_089E85C0;
L_089E8658:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    if (aot_gpr[3] != aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), aot_gpr[17]);
        goto L_089E85C0;
    }
    goto L_089E8664;
L_089E8664:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_089E85C4;
L_089E866C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19636));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E867Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E867Cu) goto L_089E867C;
    return;
L_089E867C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E85C0;
      }
      goto L_089E8684;
    }
L_089E8684:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(-11764));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    goto L_089E8690;
L_089E8690:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089E8690;
      }
      goto L_089E86BC;
    }
L_089E86BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_089E8958;
      }
      goto L_089E86D8;
    }
L_089E86D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089E8958;
      }
      goto L_089E86E4;
    }
L_089E86E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089E8740;
      }
      goto L_089E86F0;
    }
L_089E86F0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089E86F4;
L_089E86F4:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8700u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8700u) goto L_089E8700;
    return;
L_089E8700:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(25) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E871C;
      }
      goto L_089E8708;
    }
L_089E8708:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E86F4;
      }
      goto L_089E8718;
    }
L_089E8718:
    aot_gpr[2] = (aot_gpr[17] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    goto L_089E871C;
L_089E871C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
        goto L_089E85C0;
    }
    goto L_089E8724;
L_089E8724:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[17] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11644));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8740:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8754:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8768:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E877C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E87A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E87B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E87CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 128u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E87E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E87F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8808:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 1024u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E881C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8844:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8858:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 16384u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E886C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8880:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (1u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8898:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (2u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E88B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (4u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E88C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (8u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E88E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (16u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E88F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (128u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8910:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (256u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8928:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (32u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8940:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (64u << 16u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089E85C0;
L_089E8958:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(528)));
    goto L_089E86E4;
L_089E8960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E89C0;
      }
      goto L_089E8998;
    }
L_089E8998:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089E899C;
L_089E899C:
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
L_089E89C0:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x089E89D0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 159u, 0x089E77E8u>(ctx, &aot_mem) && ctx.pc == 0x089E89D0u) goto L_089E89D0;
    return;
L_089E89D0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_089E89E4;
    }
    goto L_089E89D8;
L_089E89D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_089E89E4;
L_089E89E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E8A0C;
      }
      goto L_089E89F0;
    }
L_089E89F0:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089E89F4;
L_089E89F4:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8998;
      }
      goto L_089E89FC;
    }
L_089E89FC:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E89F4;
      }
      goto L_089E8A0C;
    }
L_089E8A0C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20220));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089E8A20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8A20u) goto L_089E8A20;
    return;
L_089E8A20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8B28;
      }
      goto L_089E8A28;
    }
L_089E8A28:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8998;
      }
      goto L_089E8A30;
    }
L_089E8A30:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19128)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-19124)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E8A48;
L_089E8A48:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(19380));
    aot_gpr[31] = (0x089E8A54u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8A54u) goto L_089E8A54;
    return;
L_089E8A54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8AE0;
      }
      goto L_089E8A5C;
    }
L_089E8A5C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8A60;
L_089E8A60:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8998;
      }
      goto L_089E8A68;
    }
L_089E8A68:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[16] == aot_gpr[19]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089E8AE8;
    }
    goto L_089E8A74;
L_089E8A74:
    if (aot_gpr[16] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089E8A48;
    }
    goto L_089E8A7C;
L_089E8A7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E8AB0;
      }
      goto L_089E8A88;
    }
L_089E8A88:
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089E8A60;
    }
    goto L_089E8A90;
L_089E8A90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089E8AA0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8AA0u) goto L_089E8AA0;
    return;
L_089E8AA0:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[19]);
        goto L_089E8A5C;
    }
    goto L_089E8AA8;
L_089E8AA8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8A60;
L_089E8AB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8B14;
      }
      goto L_089E8AC4;
    }
L_089E8AC4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20232));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089E8AD4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8AD4u) goto L_089E8AD4;
    return;
L_089E8AD4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089E8A60;
    }
    goto L_089E8ADC;
L_089E8ADC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E8AE0;
L_089E8AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E8A5C;
L_089E8AE8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8AF4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8AF4u) goto L_089E8AF4;
    return;
L_089E8AF4:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[16]);
        goto L_089E8A5C;
    }
    goto L_089E8AFC;
L_089E8AFC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8A60;
L_089E8B04:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8AC4;
      }
      goto L_089E8B14;
    }
L_089E8B14:
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089E8B04;
    }
    goto L_089E8B1C;
L_089E8B1C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E8998;
L_089E8B28:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20248));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E8B38u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8B38u) goto L_089E8B38;
    return;
L_089E8B38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089E899C;
      }
      goto L_089E8B40;
    }
L_089E8B40:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E899C;
      }
      goto L_089E8B48;
    }
L_089E8B48:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19120)));
    aot_gpr[16] = (0u + 0u);
    goto L_089E8B50;
L_089E8B50:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8B54;
L_089E8B54:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19380));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8998;
      }
      goto L_089E8B6C;
    }
L_089E8B6C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[19];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E8B9C;
      }
      goto L_089E8B74;
    }
L_089E8B74:
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089E8B54;
    }
    goto L_089E8B7C;
L_089E8B7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8B8Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8B8Cu) goto L_089E8B8C;
    return;
L_089E8B8C:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[19]);
        goto L_089E8B50;
    }
    goto L_089E8B94;
L_089E8B94:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8B54;
L_089E8B9C:
    aot_gpr[31] = (0x089E8BA4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8BA4u) goto L_089E8BA4;
    return;
L_089E8BA4:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[16]);
        goto L_089E8B50;
    }
    goto L_089E8BAC;
L_089E8BAC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8B54;
L_089E8BB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(520));
      if (branch_taken) {
          goto L_089E8BE8;
      }
      goto L_089E8BD8;
    }
L_089E8BD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8BE8:
    aot_gpr[31] = (0x089E8BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 174u, 0x089E78C8u>(ctx, &aot_mem) && ctx.pc == 0x089E8BF0u) goto L_089E8BF0;
    return;
L_089E8BF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8BD8;
      }
      goto L_089E8BF8;
    }
L_089E8BF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8C0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          goto L_089E8C74;
      }
      goto L_089E8C34;
    }
L_089E8C34:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089E8C74;
      }
      goto L_089E8C3C;
    }
L_089E8C3C:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_089E8C74;
      }
      goto L_089E8C48;
    }
L_089E8C48:
    aot_gpr[31] = (0x089E8C50u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(520)));
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 164u, 0x089E7864u>(ctx, &aot_mem) && ctx.pc == 0x089E8C50u) goto L_089E8C50;
    return;
L_089E8C50:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20276));
    aot_gpr[31] = (0x089E8C64u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8C64u) goto L_089E8C64;
    return;
L_089E8C64:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E8C8C;
      }
      goto L_089E8C74;
    }
L_089E8C74:
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
L_089E8C8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem); return;
L_089E8CA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E8D0C;
      }
      goto L_089E8CE0;
    }
L_089E8CE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8D0C:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x089E8D1Cu);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 159u, 0x089E77E8u>(ctx, &aot_mem) && ctx.pc == 0x089E8D1Cu) goto L_089E8D1C;
    return;
L_089E8D1C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_089E8D30;
    }
    goto L_089E8D24;
L_089E8D24:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_089E8D30;
L_089E8D30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E8D58;
      }
      goto L_089E8D3C;
    }
L_089E8D3C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089E8D40;
L_089E8D40:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8CE0;
      }
      goto L_089E8D48;
    }
L_089E8D48:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E8D40;
      }
      goto L_089E8D58;
    }
L_089E8D58:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20220));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089E8D6Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8D6Cu) goto L_089E8D6C;
    return;
L_089E8D6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8E74;
      }
      goto L_089E8D74;
    }
L_089E8D74:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8CE0;
      }
      goto L_089E8D7C;
    }
L_089E8D7C:
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19128)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-19124)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E8D94;
L_089E8D94:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(19380));
    aot_gpr[31] = (0x089E8DA0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8DA0u) goto L_089E8DA0;
    return;
L_089E8DA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8E2C;
      }
      goto L_089E8DA8;
    }
L_089E8DA8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8DAC;
L_089E8DAC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E8CE0;
      }
      goto L_089E8DB4;
    }
L_089E8DB4:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[16] == aot_gpr[19]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089E8E34;
    }
    goto L_089E8DC0;
L_089E8DC0:
    if (aot_gpr[16] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089E8D94;
    }
    goto L_089E8DC8;
L_089E8DC8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E8DFC;
      }
      goto L_089E8DD4;
    }
L_089E8DD4:
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089E8DAC;
    }
    goto L_089E8DDC;
L_089E8DDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089E8DECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8DECu) goto L_089E8DEC;
    return;
L_089E8DEC:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[19]);
        goto L_089E8DA8;
    }
    goto L_089E8DF4;
L_089E8DF4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8DAC;
L_089E8DFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8E60;
      }
      goto L_089E8E10;
    }
L_089E8E10:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20232));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089E8E20u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8E20u) goto L_089E8E20;
    return;
L_089E8E20:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089E8DAC;
    }
    goto L_089E8E28;
L_089E8E28:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E8E2C;
L_089E8E2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E8DA8;
L_089E8E34:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E8E40u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8E40u) goto L_089E8E40;
    return;
L_089E8E40:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[16]);
        goto L_089E8DA8;
    }
    goto L_089E8E48;
L_089E8E48:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089E8DAC;
L_089E8E50:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089E8E10;
      }
      goto L_089E8E60;
    }
L_089E8E60:
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089E8E50;
    }
    goto L_089E8E68;
L_089E8E68:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E8CE0;
L_089E8E74:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20284));
    aot_gpr[31] = (0x089E8E80u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089E8E80u) goto L_089E8E80;
    return;
L_089E8E80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E8CE0;
      }
      goto L_089E8E88;
    }
L_089E8E88:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089E8E94u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E8E94u) goto L_089E8E94;
    return;
L_089E8E94:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089E8CE0;
      }
      goto L_089E8E9C;
    }
L_089E8E9C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19132)));
    aot_gpr[19] = (aot_gpr[17] + 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[21] = (2215u << 16u);
    goto L_089E8EB0;
L_089E8EB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089E8EB4;
L_089E8EB4:
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(19380));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E8EC0;
L_089E8EC0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E8CE0;
      }
      goto L_089E8ECC;
    }
L_089E8ECC:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_089E8F04;
      }
      goto L_089E8ED4;
    }
L_089E8ED4:
    if (aot_gpr[17] != aot_gpr[23]) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089E8EC0;
    }
    goto L_089E8EDC;
L_089E8EDC:
    aot_gpr[31] = (0x089E8EE4u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E8EE4u) goto L_089E8EE4;
    return;
L_089E8EE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089E8EF4u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8EF4u) goto L_089E8EF4;
    return;
L_089E8EF4:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[20]);
        goto L_089E8EB0;
    }
    goto L_089E8EFC;
L_089E8EFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089E8EB4;
L_089E8F04:
    aot_gpr[31] = (0x089E8F0Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x089E8F0Cu) goto L_089E8F0C;
    return;
L_089E8F0C:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(524), aot_gpr[17]);
        goto L_089E8EB0;
    }
    goto L_089E8F14;
L_089E8F14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089E8EB4;
L_089E8F1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(264));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(520));
      if (branch_taken) {
          goto L_089E8F5C;
      }
      goto L_089E8F48;
    }
L_089E8F48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8F5C:
    aot_gpr[31] = (0x089E8F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 174u, 0x089E78C8u>(ctx, &aot_mem) && ctx.pc == 0x089E8F64u) goto L_089E8F64;
    return;
L_089E8F64:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20284));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089E8F7C;
      }
      goto L_089E8F74;
    }
L_089E8F74:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), aot_gpr[2]);
    goto L_089E8F7C;
L_089E8F7C:
    aot_gpr[31] = (0x089E8F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x089E8F84u) goto L_089E8F84;
    return;
L_089E8F84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089E8F48;
      }
      goto L_089E8F8C;
    }
L_089E8F8C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8FA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 6u, 0x089E905Cu>(ctx, &aot_mem); return;
      }
      goto L_089E8FD8;
    }
L_089E8FD8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 6u, 0x089E905Cu>(ctx, &aot_mem); return;
      }
      goto L_089E8FE0;
    }
L_089E8FE0:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 6u, 0x089E905Cu>(ctx, &aot_mem); return;
      }
      goto L_089E8FEC;
    }
L_089E8FEC:
    aot_gpr[31] = (0x089E8FF4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(520)));
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 164u, 0x089E7864u>(ctx, &aot_mem) && ctx.pc == 0x089E8FF4u) goto L_089E8FF4;
    return;
L_089E8FF4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20284));
    ctx.pc = 0x089E9000u; return;
}

void recomp_unit_0484(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0484_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_484(Runtime &runtime) {
    runtime.register_generated_unit(484u, 0x089E8000u, 4096u, &recomp_unit_0484, &recomp_unit_0484_entry);
    runtime.register_function(0x089E8000u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8014u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E801Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E802Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8038u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8050u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8058u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8068u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8074u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E808Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8094u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80A4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80B0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80C0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80C8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80D8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80E4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80F4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E80FCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E810Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8118u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8128u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8130u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8140u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E814Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E815Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8164u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8174u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8180u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8190u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8198u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81A8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81B8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81C0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81D0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81E0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81E8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E81F8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8208u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8210u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8220u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8230u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8238u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8248u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8258u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8260u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8270u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8280u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8288u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8298u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E82A8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E82B0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E82C4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E82D4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E82DCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E82F0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8300u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8308u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8318u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8348u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E834Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8368u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8378u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8380u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8388u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8398u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83A0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83A8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83BCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83C8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83D0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83D8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83DCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83E4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83ECu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E83F8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8408u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8410u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8418u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8428u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8430u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8444u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E844Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8460u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8468u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E846Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8494u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E84B8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E84C8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E84D0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E84D8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E84ECu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8548u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8550u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E855Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8568u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8574u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E857Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8588u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8590u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85A0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85A4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85ACu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85B4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85C0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85C4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85E4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85E8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E85F8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8600u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8610u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8638u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8648u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8650u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8658u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8664u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E866Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E867Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8684u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8690u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E86BCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E86D8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E86E4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E86F0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E86F4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8700u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8708u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8718u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E871Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8724u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8740u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8754u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8768u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E877Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8790u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E87A4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E87B8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E87CCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E87E0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E87F4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8808u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E881Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8830u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8844u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8858u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E886Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8880u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8898u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E88B0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E88C8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E88E0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E88F8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8910u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8928u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8940u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8958u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8960u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8998u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E899Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89C0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89D0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89D8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89E4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89F0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89F4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E89FCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A0Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A20u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A28u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A30u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A48u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A54u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A5Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A60u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A68u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A74u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A7Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A88u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8A90u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AA0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AA8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AB0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AC4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AD4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8ADCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AE0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AE8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AF4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8AFCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B04u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B14u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B1Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B28u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B38u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B40u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B48u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B50u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B54u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B6Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B74u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B7Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B8Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B94u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8B9Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BA4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BACu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BB4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BD8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BE8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BF0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8BF8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C0Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C34u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C3Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C48u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C50u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C64u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C74u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8C8Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8CA4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8CE0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D0Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D1Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D24u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D30u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D3Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D40u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D48u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D58u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D6Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D74u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D7Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8D94u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DA0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DA8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DACu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DB4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DC0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DC8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DD4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DDCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DECu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DF4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8DFCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E10u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E20u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E28u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E2Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E34u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E40u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E48u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E50u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E60u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E68u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E74u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E80u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E88u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E94u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8E9Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EB0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EB4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EC0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8ECCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8ED4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EDCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EE4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EF4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8EFCu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F04u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F0Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F14u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F1Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F48u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F5Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F64u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F74u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F7Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F84u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8F8Cu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8FA4u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8FD8u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8FE0u, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8FECu, &recomp_unit_0484, "recomp_unit_0484");
    runtime.register_function(0x089E8FF4u, &recomp_unit_0484, "recomp_unit_0484");
}
} // namespace psprecomp
