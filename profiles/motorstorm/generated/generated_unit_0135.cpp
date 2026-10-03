#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0135[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 0,
    37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0,
    49, 0, 50, 0, 0, 51, 0, 52, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110,
    0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0,
    126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 134,
    0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142,
    0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0,
    152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0,
    0, 185, 0, 0, 186, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 192, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223,
    0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 233, 0, 0, 0, 0, 234, 235, 0, 0, 0, 236, 237, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248, 0,
    0, 0, 249, 0, 250, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 258,
};
void recomp_unit_0135_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0888B000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0135[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888B000;
    case 2u: goto L_0888B010;
    case 3u: goto L_0888B024;
    case 4u: goto L_0888B05C;
    case 5u: goto L_0888B078;
    case 6u: goto L_0888B09C;
    case 7u: goto L_0888B0B8;
    case 8u: goto L_0888B0E0;
    case 9u: goto L_0888B0E8;
    case 10u: goto L_0888B0FC;
    case 11u: goto L_0888B10C;
    case 12u: goto L_0888B120;
    case 13u: goto L_0888B128;
    case 14u: goto L_0888B138;
    case 15u: goto L_0888B150;
    case 16u: goto L_0888B15C;
    case 17u: goto L_0888B164;
    case 18u: goto L_0888B178;
    case 19u: goto L_0888B1A8;
    case 20u: goto L_0888B1B4;
    case 21u: goto L_0888B1C0;
    case 22u: goto L_0888B1C8;
    case 23u: goto L_0888B1D8;
    case 24u: goto L_0888B1E4;
    case 25u: goto L_0888B1F0;
    case 26u: goto L_0888B1F4;
    case 27u: goto L_0888B208;
    case 28u: goto L_0888B220;
    case 29u: goto L_0888B230;
    case 30u: goto L_0888B238;
    case 31u: goto L_0888B244;
    case 32u: goto L_0888B24C;
    case 33u: goto L_0888B258;
    case 34u: goto L_0888B260;
    case 35u: goto L_0888B26C;
    case 36u: goto L_0888B274;
    case 37u: goto L_0888B280;
    case 38u: goto L_0888B288;
    case 39u: goto L_0888B294;
    case 40u: goto L_0888B29C;
    case 41u: goto L_0888B2B0;
    case 42u: goto L_0888B2B8;
    case 43u: goto L_0888B2C4;
    case 44u: goto L_0888B2CC;
    case 45u: goto L_0888B2D8;
    case 46u: goto L_0888B2E0;
    case 47u: goto L_0888B2EC;
    case 48u: goto L_0888B2F4;
    case 49u: goto L_0888B300;
    case 50u: goto L_0888B308;
    case 51u: goto L_0888B314;
    case 52u: goto L_0888B31C;
    case 53u: goto L_0888B320;
    case 54u: goto L_0888B328;
    case 55u: goto L_0888B338;
    case 56u: goto L_0888B360;
    case 57u: goto L_0888B364;
    case 58u: goto L_0888B384;
    case 59u: goto L_0888B3A0;
    case 60u: goto L_0888B3C0;
    case 61u: goto L_0888B3D8;
    case 62u: goto L_0888B3F0;
    case 63u: goto L_0888B414;
    case 64u: goto L_0888B430;
    case 65u: goto L_0888B43C;
    case 66u: goto L_0888B450;
    case 67u: goto L_0888B458;
    case 68u: goto L_0888B494;
    case 69u: goto L_0888B4A0;
    case 70u: goto L_0888B4AC;
    case 71u: goto L_0888B4B8;
    case 72u: goto L_0888B4BC;
    case 73u: goto L_0888B4C4;
    case 74u: goto L_0888B4E0;
    case 75u: goto L_0888B4EC;
    case 76u: goto L_0888B4F8;
    case 77u: goto L_0888B540;
    case 78u: goto L_0888B554;
    case 79u: goto L_0888B55C;
    case 80u: goto L_0888B570;
    case 81u: goto L_0888B588;
    case 82u: goto L_0888B5B0;
    case 83u: goto L_0888B5B8;
    case 84u: goto L_0888B5C8;
    case 85u: goto L_0888B5DC;
    case 86u: goto L_0888B5F0;
    case 87u: goto L_0888B5F8;
    case 88u: goto L_0888B614;
    case 89u: goto L_0888B630;
    case 90u: goto L_0888B64C;
    case 91u: goto L_0888B66C;
    case 92u: goto L_0888B680;
    case 93u: goto L_0888B688;
    case 94u: goto L_0888B694;
    case 95u: goto L_0888B6AC;
    case 96u: goto L_0888B6B8;
    case 97u: goto L_0888B6C0;
    case 98u: goto L_0888B6D0;
    case 99u: goto L_0888B708;
    case 100u: goto L_0888B710;
    case 101u: goto L_0888B724;
    case 102u: goto L_0888B73C;
    case 103u: goto L_0888B744;
    case 104u: goto L_0888B74C;
    case 105u: goto L_0888B754;
    case 106u: goto L_0888B75C;
    case 107u: goto L_0888B764;
    case 108u: goto L_0888B76C;
    case 109u: goto L_0888B774;
    case 110u: goto L_0888B77C;
    case 111u: goto L_0888B784;
    case 112u: goto L_0888B78C;
    case 113u: goto L_0888B794;
    case 114u: goto L_0888B79C;
    case 115u: goto L_0888B7A8;
    case 116u: goto L_0888B7B0;
    case 117u: goto L_0888B7B8;
    case 118u: goto L_0888B7C0;
    case 119u: goto L_0888B7C8;
    case 120u: goto L_0888B7D0;
    case 121u: goto L_0888B7D8;
    case 122u: goto L_0888B7E0;
    case 123u: goto L_0888B7E8;
    case 124u: goto L_0888B7F0;
    case 125u: goto L_0888B7F8;
    case 126u: goto L_0888B800;
    case 127u: goto L_0888B808;
    case 128u: goto L_0888B81C;
    case 129u: goto L_0888B83C;
    case 130u: goto L_0888B85C;
    case 131u: goto L_0888B864;
    case 132u: goto L_0888B86C;
    case 133u: goto L_0888B878;
    case 134u: goto L_0888B87C;
    case 135u: goto L_0888B898;
    case 136u: goto L_0888B8A0;
    case 137u: goto L_0888B8AC;
    case 138u: goto L_0888B8B8;
    case 139u: goto L_0888B8C0;
    case 140u: goto L_0888B8E0;
    case 141u: goto L_0888B8EC;
    case 142u: goto L_0888B8FC;
    case 143u: goto L_0888B904;
    case 144u: goto L_0888B90C;
    case 145u: goto L_0888B920;
    case 146u: goto L_0888B93C;
    case 147u: goto L_0888B944;
    case 148u: goto L_0888B954;
    case 149u: goto L_0888B960;
    case 150u: goto L_0888B96C;
    case 151u: goto L_0888B978;
    case 152u: goto L_0888B980;
    case 153u: goto L_0888B98C;
    case 154u: goto L_0888B998;
    case 155u: goto L_0888B9D0;
    case 156u: goto L_0888B9E4;
    case 157u: goto L_0888B9F0;
    case 158u: goto L_0888BA0C;
    case 159u: goto L_0888BA18;
    case 160u: goto L_0888BA24;
    case 161u: goto L_0888BA38;
    case 162u: goto L_0888BA4C;
    case 163u: goto L_0888BA58;
    case 164u: goto L_0888BA64;
    case 165u: goto L_0888BA6C;
    case 166u: goto L_0888BA80;
    case 167u: goto L_0888BAC0;
    case 168u: goto L_0888BAD4;
    case 169u: goto L_0888BAE8;
    case 170u: goto L_0888BAF8;
    case 171u: goto L_0888BB00;
    case 172u: goto L_0888BB08;
    case 173u: goto L_0888BB10;
    case 174u: goto L_0888BB1C;
    case 175u: goto L_0888BB2C;
    case 176u: goto L_0888BB30;
    case 177u: goto L_0888BB38;
    case 178u: goto L_0888BB40;
    case 179u: goto L_0888BB48;
    case 180u: goto L_0888BB50;
    case 181u: goto L_0888BB58;
    case 182u: goto L_0888BB64;
    case 183u: goto L_0888BB6C;
    case 184u: goto L_0888BB74;
    case 185u: goto L_0888BB84;
    case 186u: goto L_0888BB90;
    case 187u: goto L_0888BB94;
    case 188u: goto L_0888BB9C;
    case 189u: goto L_0888BBA4;
    case 190u: goto L_0888BBB8;
    case 191u: goto L_0888BBC0;
    case 192u: goto L_0888BBC8;
    case 193u: goto L_0888BBCC;
    case 194u: goto L_0888BBDC;
    case 195u: goto L_0888BBEC;
    case 196u: goto L_0888BBF4;
    case 197u: goto L_0888BC24;
    case 198u: goto L_0888BC4C;
    case 199u: goto L_0888BC58;
    case 200u: goto L_0888BC68;
    case 201u: goto L_0888BC74;
    case 202u: goto L_0888BC90;
    case 203u: goto L_0888BCA4;
    case 204u: goto L_0888BCB4;
    case 205u: goto L_0888BCBC;
    case 206u: goto L_0888BCCC;
    case 207u: goto L_0888BCE8;
    case 208u: goto L_0888BD18;
    case 209u: goto L_0888BD24;
    case 210u: goto L_0888BD40;
    case 211u: goto L_0888BD58;
    case 212u: goto L_0888BD60;
    case 213u: goto L_0888BD68;
    case 214u: goto L_0888BD78;
    case 215u: goto L_0888BD90;
    case 216u: goto L_0888BD98;
    case 217u: goto L_0888BDA4;
    case 218u: goto L_0888BDA8;
    case 219u: goto L_0888BDB0;
    case 220u: goto L_0888BDBC;
    case 221u: goto L_0888BDC8;
    case 222u: goto L_0888BDE0;
    case 223u: goto L_0888BDFC;
    case 224u: goto L_0888BE04;
    case 225u: goto L_0888BE0C;
    case 226u: goto L_0888BE28;
    case 227u: goto L_0888BE30;
    case 228u: goto L_0888BE34;
    case 229u: goto L_0888BE3C;
    case 230u: goto L_0888BE48;
    case 231u: goto L_0888BE54;
    case 232u: goto L_0888BE80;
    case 233u: goto L_0888BE88;
    case 234u: goto L_0888BE9C;
    case 235u: goto L_0888BEA0;
    case 236u: goto L_0888BEB0;
    case 237u: goto L_0888BEB4;
    case 238u: goto L_0888BEB8;
    case 239u: goto L_0888BEC0;
    case 240u: goto L_0888BED8;
    case 241u: goto L_0888BEF4;
    case 242u: goto L_0888BF14;
    case 243u: goto L_0888BF2C;
    case 244u: goto L_0888BF44;
    case 245u: goto L_0888BF58;
    case 246u: goto L_0888BF60;
    case 247u: goto L_0888BF70;
    case 248u: goto L_0888BF78;
    case 249u: goto L_0888BF88;
    case 250u: goto L_0888BF90;
    case 251u: goto L_0888BF94;
    case 252u: goto L_0888BF9C;
    case 253u: goto L_0888BFAC;
    case 254u: goto L_0888BFBC;
    case 255u: goto L_0888BFD0;
    case 256u: goto L_0888BFE8;
    case 257u: goto L_0888BFF4;
    case 258u: goto L_0888BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0888B000:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0888B010u);
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B010u) goto L_0888B010;
    return;
L_0888B010:
    aot_fpr[14] = aot_fpr[0] - aot_fpr[22];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    aot_fpr[22] = aot_fpr[26] + aot_fpr[22];
    goto L_0888B024;
L_0888B024:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B05C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0888B078u);
    aot_gpr[5] = (0u | 35u);
    goto L_0888B8C0;
L_0888B078:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888B09Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 120u, 0x0888A8B8u>(ctx, &aot_mem) && ctx.pc == 0x0888B09Cu) goto L_0888B09C;
    return;
L_0888B09C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B0B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888B0FC;
      }
      goto L_0888B0E0;
    }
L_0888B0E0:
    aot_gpr[31] = (0x0888B0E8u);
    aot_gpr[5] = (0u | 28u);
    goto L_0888B8C0;
L_0888B0E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    goto L_0888B0FC;
L_0888B0FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B10C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0888B120u);
    aot_gpr[5] = (0u | 45u);
    goto L_0888B8C0;
L_0888B120:
    aot_gpr[31] = (0x0888B128u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 73u, 0x0885B5B8u>(ctx, &aot_mem) && ctx.pc == 0x0888B128u) goto L_0888B128;
    return;
L_0888B128:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B138:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888B150u);
    aot_gpr[5] = (0u | 45u);
    goto L_0888B8C0;
L_0888B150:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888B15Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 73u, 0x0885B5B8u>(ctx, &aot_mem) && ctx.pc == 0x0888B15Cu) goto L_0888B15C;
    return;
L_0888B15C:
    aot_gpr[31] = (0x0888B164u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 70u, 0x0885B588u>(ctx, &aot_mem) && ctx.pc == 0x0888B164u) goto L_0888B164;
    return;
L_0888B164:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(27)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888B1C8;
      }
      goto L_0888B1A8;
    }
L_0888B1A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0888B1B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0888B1B4u) goto L_0888B1B4;
    return;
L_0888B1B4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B1C0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 86u, 0x0888A5B0u>(ctx, &aot_mem) && ctx.pc == 0x0888B1C0u) goto L_0888B1C0;
    return;
L_0888B1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B364;
      }
      goto L_0888B1C8;
    }
L_0888B1C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888B364;
      }
      goto L_0888B1D8;
    }
L_0888B1D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0888B1E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0888B1E4u) goto L_0888B1E4;
    return;
L_0888B1E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B1F4;
      }
      goto L_0888B1F0;
    }
L_0888B1F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0888B1F4;
L_0888B1F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B31C;
      }
      goto L_0888B208;
    }
L_0888B208:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12576)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B220:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0888B230u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x0888A614u>(ctx, &aot_mem) && ctx.pc == 0x0888B230u) goto L_0888B230;
    return;
L_0888B230:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B238;
    }
L_0888B238:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B244u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 114u, 0x0888A84Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B244u) goto L_0888B244;
    return;
L_0888B244:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B24C;
    }
L_0888B24C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B258u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 117u, 0x0888A884u>(ctx, &aot_mem) && ctx.pc == 0x0888B258u) goto L_0888B258;
    return;
L_0888B258:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B260;
    }
L_0888B260:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B26Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 126u, 0x0888A930u>(ctx, &aot_mem) && ctx.pc == 0x0888B26Cu) goto L_0888B26C;
    return;
L_0888B26C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B274;
    }
L_0888B274:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B280u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 157u, 0x0888AC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B280u) goto L_0888B280;
    return;
L_0888B280:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B288;
    }
L_0888B288:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B294u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 158u, 0x0888AC14u>(ctx, &aot_mem) && ctx.pc == 0x0888B294u) goto L_0888B294;
    return;
L_0888B294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B29C;
    }
L_0888B29C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888B2B0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 168u, 0x0888ACCCu>(ctx, &aot_mem) && ctx.pc == 0x0888B2B0u) goto L_0888B2B0;
    return;
L_0888B2B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B2B8;
    }
L_0888B2B8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B2C4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 203u, 0x0888AEBCu>(ctx, &aot_mem) && ctx.pc == 0x0888B2C4u) goto L_0888B2C4;
    return;
L_0888B2C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B2CC;
    }
L_0888B2CC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B2D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0888B05C;
L_0888B2D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B2E0;
    }
L_0888B2E0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B2ECu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0888B0B8;
L_0888B2EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B2F4;
    }
L_0888B2F4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B300u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0888B10C;
L_0888B300:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B308;
    }
L_0888B308:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888B314u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_0888B138;
L_0888B314:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B320;
      }
      goto L_0888B31C;
    }
L_0888B31C:
    aot_gpr[19] = (0u | 1u);
    goto L_0888B320;
L_0888B320:
    if (aot_gpr[19] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
        goto L_0888B338;
    }
    goto L_0888B328;
L_0888B328:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888B364;
      }
      goto L_0888B338;
    }
L_0888B338:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (32639u << 16u);
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0888B364;
      }
      goto L_0888B360;
    }
L_0888B360:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0888B364;
L_0888B364:
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
L_0888B384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888B3A0u);
    aot_gpr[5] = (0u | 11u);
    goto L_0888B8C0;
L_0888B3A0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B3C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B3D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B3F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0888B414u);
    aot_gpr[5] = (0u | 34u);
    goto L_0888B8C0;
L_0888B414:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B43C;
      }
      goto L_0888B430;
    }
L_0888B430:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0888B450;
      }
      goto L_0888B43C;
    }
L_0888B43C:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[17] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[5] + aot_gpr[17]);
    goto L_0888B450;
L_0888B450:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] << 24u);
      if (branch_taken) {
          goto L_0888B494;
      }
      goto L_0888B458;
    }
L_0888B458:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_0888B540;
      }
      goto L_0888B494;
    }
L_0888B494:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888B4A0u);
    aot_gpr[5] = (0u | 40u);
    goto L_0888B8C0;
L_0888B4A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B4BC;
      }
      goto L_0888B4AC;
    }
L_0888B4AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888B4B8u);
    aot_gpr[5] = (0u | 39u);
    goto L_0888B8C0;
L_0888B4B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0888B4BC;
L_0888B4BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B4E0;
      }
      goto L_0888B4C4;
    }
L_0888B4C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0888B540;
      }
      goto L_0888B4E0;
    }
L_0888B4E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888B4ECu);
    aot_gpr[5] = (0u | 49u);
    goto L_0888B8C0;
L_0888B4EC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B540;
      }
      goto L_0888B4F8;
    }
L_0888B4F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0888B540;
L_0888B540:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B554:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B55C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0888B570u);
    aot_gpr[5] = (0u | 40u);
    goto L_0888B8C0;
L_0888B570:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888B5DC;
      }
      goto L_0888B5B0;
    }
L_0888B5B0:
    aot_gpr[31] = (0x0888B5B8u);
    aot_gpr[5] = (0u | 40u);
    goto L_0888B8C0;
L_0888B5B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0888B5C8u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 204u, 0x08893DACu>(ctx, &aot_mem) && ctx.pc == 0x0888B5C8u) goto L_0888B5C8;
    return;
L_0888B5C8:
    aot_gpr[4] = (0u << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_0888B5DC;
L_0888B5DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B5F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B5F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888B614u);
    aot_gpr[5] = (0u | 35u);
    goto L_0888B8C0;
L_0888B614:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888B64Cu);
    aot_gpr[5] = (0u | 28u);
    goto L_0888B8C0;
L_0888B64C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B66C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0888B680u);
    aot_gpr[5] = (0u | 45u);
    goto L_0888B8C0;
L_0888B680:
    aot_gpr[31] = (0x0888B688u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 73u, 0x0885B5B8u>(ctx, &aot_mem) && ctx.pc == 0x0888B688u) goto L_0888B688;
    return;
L_0888B688:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888B6ACu);
    aot_gpr[5] = (0u | 45u);
    goto L_0888B8C0;
L_0888B6AC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0888B6B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 73u, 0x0885B5B8u>(ctx, &aot_mem) && ctx.pc == 0x0888B6B8u) goto L_0888B6B8;
    return;
L_0888B6B8:
    aot_gpr[31] = (0x0888B6C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 70u, 0x0885B588u>(ctx, &aot_mem) && ctx.pc == 0x0888B6C0u) goto L_0888B6C0;
    return;
L_0888B6C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B6D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888B808;
      }
      goto L_0888B708;
    }
L_0888B708:
    aot_gpr[31] = (0x0888B710u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x0888B710u) goto L_0888B710;
    return;
L_0888B710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B724;
    }
L_0888B724:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12632)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B73C:
    aot_gpr[31] = (0x0888B744u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B384;
L_0888B744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B74C;
    }
L_0888B74C:
    aot_gpr[31] = (0x0888B754u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B3C0;
L_0888B754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B75C;
    }
L_0888B75C:
    aot_gpr[31] = (0x0888B764u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B3D8;
L_0888B764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B76C;
    }
L_0888B76C:
    aot_gpr[31] = (0x0888B774u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B3F0;
L_0888B774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B77C;
    }
L_0888B77C:
    aot_gpr[31] = (0x0888B784u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B554;
L_0888B784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B78C;
    }
L_0888B78C:
    aot_gpr[31] = (0x0888B794u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B55C;
L_0888B794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B79C;
    }
L_0888B79C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888B7A8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0888B588;
L_0888B7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B7B0;
    }
L_0888B7B0:
    aot_gpr[31] = (0x0888B7B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B5F0;
L_0888B7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B7C0;
    }
L_0888B7C0:
    aot_gpr[31] = (0x0888B7C8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B5F8;
L_0888B7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B7D0;
    }
L_0888B7D0:
    aot_gpr[31] = (0x0888B7D8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B630;
L_0888B7D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B7E0;
    }
L_0888B7E0:
    aot_gpr[31] = (0x0888B7E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B66C;
L_0888B7E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B7F0;
    }
L_0888B7F0:
    aot_gpr[31] = (0x0888B7F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0888B694;
L_0888B7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B800;
      }
      goto L_0888B800;
    }
L_0888B800:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0888B808;
L_0888B808:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B81C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26040), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B83C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26048), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B85C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0888B86C;
      }
      goto L_0888B864;
    }
L_0888B864:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0888B87C;
      }
      goto L_0888B86C;
    }
L_0888B86C:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B87C;
      }
      goto L_0888B878;
    }
L_0888B878:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    goto L_0888B87C;
L_0888B87C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_0888B8A0;
      }
      goto L_0888B898;
    }
L_0888B898:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[2]);
      if (branch_taken) {
          goto L_0888B8B8;
      }
      goto L_0888B8A0;
    }
L_0888B8A0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888B8B8;
      }
      goto L_0888B8AC;
    }
L_0888B8AC:
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888B8B8;
      }
      goto L_0888B8B8;
    }
L_0888B8B8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0888B904;
      }
      goto L_0888B8E0;
    }
L_0888B8E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888B90C;
      }
      goto L_0888B8EC;
    }
L_0888B8EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888B8FCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 26u, 0x088942BCu>(ctx, &aot_mem) && ctx.pc == 0x0888B8FCu) goto L_0888B8FC;
    return;
L_0888B8FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B8E0;
      }
      goto L_0888B904;
    }
L_0888B904:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0888B90C;
      }
      goto L_0888B90C;
    }
L_0888B90C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888B93Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 137u, 0x08A4D9A8u>(ctx, &aot_mem) && ctx.pc == 0x0888B93Cu) goto L_0888B93C;
    return;
L_0888B93C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0888B944;
L_0888B944:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0888B954u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 26u, 0x088942BCu>(ctx, &aot_mem) && ctx.pc == 0x0888B954u) goto L_0888B954;
    return;
L_0888B954:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B944;
      }
      goto L_0888B960;
    }
L_0888B960:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888B96Cu);
    aot_gpr[5] = (0u | 29u);
    goto L_0888B8C0;
L_0888B96C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888B980;
      }
      goto L_0888B978;
    }
L_0888B978:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_0888B980;
L_0888B980:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888B98Cu);
    aot_gpr[5] = (0u | 48u);
    goto L_0888B8C0;
L_0888B98C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA0C;
      }
      goto L_0888B998;
    }
L_0888B998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BA0C;
      }
      goto L_0888B9D0;
    }
L_0888B9D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[8] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0888B9F0;
    }
    goto L_0888B9E4;
L_0888B9E4:
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0888B9F0;
L_0888B9F0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888B9D0;
      }
      goto L_0888BA0C;
    }
L_0888BA0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888BA18u);
    aot_gpr[5] = (0u | 40u);
    goto L_0888B8C0;
L_0888BA18:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA4C;
      }
      goto L_0888BA24;
    }
L_0888BA24:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA4C;
      }
      goto L_0888BA38;
    }
L_0888BA38:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    goto L_0888BA4C;
L_0888BA4C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888BA58u);
    aot_gpr[5] = (0u | 39u);
    goto L_0888B8C0;
L_0888BA58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BA6C;
      }
      goto L_0888BA64;
    }
L_0888BA64:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_0888BA6C;
L_0888BA6C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BA80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0888BBF4;
      }
      goto L_0888BAC0;
    }
L_0888BAC0:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[30] = (0u | 2u);
    aot_gpr[23] = (0u | 5u);
    aot_gpr[22] = (0u | 4u);
    aot_gpr[21] = (0u | 3u);
    goto L_0888BAD4;
L_0888BAD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 59u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0888BBDC;
      }
      goto L_0888BAE8;
    }
L_0888BAE8:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[21];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0888BBDC;
      }
      goto L_0888BAF8;
    }
L_0888BAF8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0888BB40;
      }
      goto L_0888BB00;
    }
L_0888BB00:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0888BB10;
      }
      goto L_0888BB08;
    }
L_0888BB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBDC;
      }
      goto L_0888BB10;
    }
L_0888BB10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888BB38;
      }
      goto L_0888BB1C;
    }
L_0888BB1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BB30;
      }
      goto L_0888BB2C;
    }
L_0888BB2C:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_0888BB30;
L_0888BB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BB38;
    }
L_0888BB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BB40;
    }
L_0888BB40:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0888BB64;
      }
      goto L_0888BB48;
    }
L_0888BB48:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0888BB58;
      }
      goto L_0888BB50;
    }
L_0888BB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBDC;
      }
      goto L_0888BB58;
    }
L_0888BB58:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BB64;
    }
L_0888BB64:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BB6C;
    }
L_0888BB6C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_0888BB9C;
      }
      goto L_0888BB74;
    }
L_0888BB74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0888BB84u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_0888B8C0;
L_0888BB84:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BB94;
      }
      goto L_0888BB90;
    }
L_0888BB90:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_0888BB94;
L_0888BB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BB9C;
    }
L_0888BB9C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888BBCC;
      }
      goto L_0888BBA4;
    }
L_0888BBA4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888BBC0;
      }
      goto L_0888BBB8;
    }
L_0888BBB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0888BBC8;
      }
      goto L_0888BBC0;
    }
L_0888BBC0:
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    goto L_0888BBC8;
L_0888BBC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0888BBCC;
L_0888BBCC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0888BAF8;
      }
      goto L_0888BBDC;
    }
L_0888BBDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0888BBECu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 26u, 0x088942BCu>(ctx, &aot_mem) && ctx.pc == 0x0888BBECu) goto L_0888BBEC;
    return;
L_0888BBEC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0888BAD4;
      }
      goto L_0888BBF4;
    }
L_0888BBF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BC24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0888BC4Cu);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    goto L_0888B8C0;
L_0888BC4C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BCCC;
      }
      goto L_0888BC58;
    }
L_0888BC58:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888BC68u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 52u, 0x0888A390u>(ctx, &aot_mem) && ctx.pc == 0x0888BC68u) goto L_0888BC68;
    return;
L_0888BC68:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BCCC;
      }
      goto L_0888BC74;
    }
L_0888BC74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (4096u << 16u);
      if (branch_taken) {
          goto L_0888BCBC;
      }
      goto L_0888BC90;
    }
L_0888BC90:
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 256u);
      if (branch_taken) {
          goto L_0888BCB4;
      }
      goto L_0888BCA4;
    }
L_0888BCA4:
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BCBC;
      }
      goto L_0888BCB4;
    }
L_0888BCB4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[19]);
      if (branch_taken) {
          goto L_0888BCCC;
      }
      goto L_0888BCBC;
    }
L_0888BCBC:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0888BCCCu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0888BC24;
L_0888BCCC:
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
L_0888BCE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0888BD18u);
    aot_gpr[5] = (0u | 56u);
    goto L_0888B8C0;
L_0888BD18:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BDB0;
      }
      goto L_0888BD24;
    }
L_0888BD24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD68;
      }
      goto L_0888BD40;
    }
L_0888BD40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & 64u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888BD60;
      }
      goto L_0888BD58;
    }
L_0888BD58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0888BD60;
      }
      goto L_0888BD60;
    }
L_0888BD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD98;
      }
      goto L_0888BD68;
    }
L_0888BD68:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BD98;
      }
      goto L_0888BD78;
    }
L_0888BD78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & 64u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0888BD98;
      }
      goto L_0888BD90;
    }
L_0888BD90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0888BD98;
      }
      goto L_0888BD98;
    }
L_0888BD98:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0888BDA8;
      }
      goto L_0888BDA4;
    }
L_0888BDA4:
    aot_gpr[19] = (0u | 1u);
    goto L_0888BDA8;
L_0888BDA8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0888BEB8;
      }
      goto L_0888BDB0;
    }
L_0888BDB0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888BDBCu);
    aot_gpr[5] = (0u | 29u);
    goto L_0888B8C0;
L_0888BDBC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE3C;
      }
      goto L_0888BDC8;
    }
L_0888BDC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE04;
      }
      goto L_0888BDE0;
    }
L_0888BDE0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] & 64u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0888BDFC;
    }
    goto L_0888BDFC;
L_0888BDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BE28;
      }
      goto L_0888BE04;
    }
L_0888BE04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0888BE28;
      }
      goto L_0888BE0C;
    }
L_0888BE0C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] & 64u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    if (aot_gpr[8] != 0u) {
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0888BE28;
    }
    goto L_0888BE28;
L_0888BE28:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0888BE34;
      }
      goto L_0888BE30;
    }
L_0888BE30:
    aot_gpr[19] = (0u | 1u);
    goto L_0888BE34;
L_0888BE34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_0888BEB8;
      }
      goto L_0888BE3C;
    }
L_0888BE3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0888BE48u);
    aot_gpr[5] = (0u | 57u);
    goto L_0888B8C0;
L_0888BE48:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BEB8;
      }
      goto L_0888BE54;
    }
L_0888BE54:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BE88;
      }
      goto L_0888BE80;
    }
L_0888BE80:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0888BEA0;
      }
      goto L_0888BE88;
    }
L_0888BE88:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BEA0;
      }
      goto L_0888BE9C;
    }
L_0888BE9C:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0888BEA0;
L_0888BEA0:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0888BEB4;
      }
      goto L_0888BEB0;
    }
L_0888BEB0:
    aot_gpr[19] = (0u | 1u);
    goto L_0888BEB4;
L_0888BEB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0888BEB8;
L_0888BEB8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BEF4;
      }
      goto L_0888BEC0;
    }
L_0888BEC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BEF4;
      }
      goto L_0888BED8;
    }
L_0888BED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0888BEF4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888BEF4u) goto L_0888BEF4;
    return;
L_0888BEF4:
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
L_0888BF14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0888BF44;
      }
      goto L_0888BF2C;
    }
L_0888BF2C:
    aot_gpr[6] = (aot_gpr[5] & 4u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (0u | 2u);
        goto L_0888BF44;
    }
    goto L_0888BF44;
L_0888BF44:
    aot_gpr[6] = (aot_gpr[5] & 8u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] & 16u);
      if (branch_taken) {
          goto L_0888BF60;
      }
      goto L_0888BF58;
    }
L_0888BF58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] | 64u);
      if (branch_taken) {
          goto L_0888BF94;
      }
      goto L_0888BF60;
    }
L_0888BF60:
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 32u);
      if (branch_taken) {
          goto L_0888BF78;
      }
      goto L_0888BF70;
    }
L_0888BF70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 128u);
      if (branch_taken) {
          goto L_0888BF90;
      }
      goto L_0888BF78;
    }
L_0888BF78:
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] | 32u);
        goto L_0888BF90;
    }
    goto L_0888BF88;
L_0888BF88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 16u);
      if (branch_taken) {
          goto L_0888BF90;
      }
      goto L_0888BF90;
    }
L_0888BF90:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_0888BF94;
L_0888BF94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BF9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BFAC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BFBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BFD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0888BFE8u);
    aot_gpr[5] = (0u | 9u);
    goto L_0888B8C0;
L_0888BFE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888BFF8;
      }
      goto L_0888BFF4;
    }
L_0888BFF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0888BFF8;
L_0888BFF8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x0888C000u; return;
}

void recomp_unit_0135(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0135_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_135(Runtime &runtime) {
    runtime.register_generated_unit(135u, 0x0888B000u, 4096u, &recomp_unit_0135, &recomp_unit_0135_entry);
    runtime.register_function(0x0888B000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B010u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B024u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B05Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B078u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B09Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B0B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B0E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B0E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B0FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B10Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B120u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B128u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B150u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B15Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B164u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B178u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B1F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B208u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B220u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B230u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B238u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B244u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B24Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B258u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B260u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B26Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B274u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B280u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B288u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B294u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B29Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B2F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B300u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B308u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B314u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B31Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B320u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B328u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B338u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B360u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B364u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B384u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B3A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B3C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B3D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B3F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B430u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B43Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B450u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B458u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B494u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B4F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B540u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B554u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B55Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B570u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B588u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B5B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B5B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B5C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B5DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B5F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B5F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B630u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B64Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B66Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B680u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B688u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B694u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B6ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B6B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B6C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B6D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B708u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B710u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B724u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B73Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B744u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B74Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B754u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B75Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B764u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B76Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B774u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B77Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B784u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B78Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B794u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B79Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B7F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B800u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B808u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B81Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B83Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B85Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B864u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B86Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B878u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B87Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B898u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B8FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B904u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B90Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B920u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B93Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B944u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B954u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B960u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B96Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B978u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B980u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B98Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B998u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B9D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B9E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888B9F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BA80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BAC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BAD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BAE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BAF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BB9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BBF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BC24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BC4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BC58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BC68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BC74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BC90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BCA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BCB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BCBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BCCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BCE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BD98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BDFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BE9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BEA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BEB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BEB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BEB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BEC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BED8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BEF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BF9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BFACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BFBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BFD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BFE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BFF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x0888BFF8u, &recomp_unit_0135, "recomp_unit_0135");
}
} // namespace psprecomp
