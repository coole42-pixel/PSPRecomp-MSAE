#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0150[1018] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 23, 0, 0, 0, 24, 0,
    25, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 37, 0,
    0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0,
    50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101,
    0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 107, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0,
    120, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 126, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131,
    0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 144, 0,
    145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 156, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0,
    162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171,
    0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182,
    0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 193,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0,
    203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222,
    0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0,
    0, 235, 0, 236, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252,
    0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 262, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276,
};
void recomp_unit_0150_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0889A000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0150[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889A000;
    case 2u: goto L_0889A00C;
    case 3u: goto L_0889A014;
    case 4u: goto L_0889A030;
    case 5u: goto L_0889A034;
    case 6u: goto L_0889A07C;
    case 7u: goto L_0889A098;
    case 8u: goto L_0889A0A0;
    case 9u: goto L_0889A0A8;
    case 10u: goto L_0889A0B0;
    case 11u: goto L_0889A0BC;
    case 12u: goto L_0889A0D0;
    case 13u: goto L_0889A0E4;
    case 14u: goto L_0889A10C;
    case 15u: goto L_0889A11C;
    case 16u: goto L_0889A124;
    case 17u: goto L_0889A12C;
    case 18u: goto L_0889A13C;
    case 19u: goto L_0889A14C;
    case 20u: goto L_0889A154;
    case 21u: goto L_0889A15C;
    case 22u: goto L_0889A164;
    case 23u: goto L_0889A168;
    case 24u: goto L_0889A178;
    case 25u: goto L_0889A180;
    case 26u: goto L_0889A184;
    case 27u: goto L_0889A18C;
    case 28u: goto L_0889A194;
    case 29u: goto L_0889A19C;
    case 30u: goto L_0889A1B0;
    case 31u: goto L_0889A1C4;
    case 32u: goto L_0889A1D0;
    case 33u: goto L_0889A1D8;
    case 34u: goto L_0889A1E4;
    case 35u: goto L_0889A1EC;
    case 36u: goto L_0889A1F4;
    case 37u: goto L_0889A1F8;
    case 38u: goto L_0889A204;
    case 39u: goto L_0889A20C;
    case 40u: goto L_0889A218;
    case 41u: goto L_0889A220;
    case 42u: goto L_0889A228;
    case 43u: goto L_0889A234;
    case 44u: goto L_0889A240;
    case 45u: goto L_0889A248;
    case 46u: goto L_0889A254;
    case 47u: goto L_0889A264;
    case 48u: goto L_0889A270;
    case 49u: goto L_0889A278;
    case 50u: goto L_0889A280;
    case 51u: goto L_0889A290;
    case 52u: goto L_0889A298;
    case 53u: goto L_0889A2B4;
    case 54u: goto L_0889A2C0;
    case 55u: goto L_0889A2CC;
    case 56u: goto L_0889A2D8;
    case 57u: goto L_0889A2E4;
    case 58u: goto L_0889A2F0;
    case 59u: goto L_0889A2FC;
    case 60u: goto L_0889A318;
    case 61u: goto L_0889A324;
    case 62u: goto L_0889A32C;
    case 63u: goto L_0889A334;
    case 64u: goto L_0889A33C;
    case 65u: goto L_0889A344;
    case 66u: goto L_0889A34C;
    case 67u: goto L_0889A354;
    case 68u: goto L_0889A370;
    case 69u: goto L_0889A394;
    case 70u: goto L_0889A3A0;
    case 71u: goto L_0889A3BC;
    case 72u: goto L_0889A3C4;
    case 73u: goto L_0889A3D0;
    case 74u: goto L_0889A3DC;
    case 75u: goto L_0889A3E8;
    case 76u: goto L_0889A3F4;
    case 77u: goto L_0889A400;
    case 78u: goto L_0889A41C;
    case 79u: goto L_0889A438;
    case 80u: goto L_0889A450;
    case 81u: goto L_0889A460;
    case 82u: goto L_0889A468;
    case 83u: goto L_0889A470;
    case 84u: goto L_0889A480;
    case 85u: goto L_0889A490;
    case 86u: goto L_0889A498;
    case 87u: goto L_0889A4A4;
    case 88u: goto L_0889A4BC;
    case 89u: goto L_0889A4C4;
    case 90u: goto L_0889A4D0;
    case 91u: goto L_0889A4DC;
    case 92u: goto L_0889A4F4;
    case 93u: goto L_0889A504;
    case 94u: goto L_0889A50C;
    case 95u: goto L_0889A514;
    case 96u: goto L_0889A52C;
    case 97u: goto L_0889A538;
    case 98u: goto L_0889A550;
    case 99u: goto L_0889A56C;
    case 100u: goto L_0889A574;
    case 101u: goto L_0889A57C;
    case 102u: goto L_0889A588;
    case 103u: goto L_0889A594;
    case 104u: goto L_0889A614;
    case 105u: goto L_0889A648;
    case 106u: goto L_0889A684;
    case 107u: goto L_0889A688;
    case 108u: goto L_0889A698;
    case 109u: goto L_0889A69C;
    case 110u: goto L_0889A6D4;
    case 111u: goto L_0889A784;
    case 112u: goto L_0889A794;
    case 113u: goto L_0889A79C;
    case 114u: goto L_0889A7AC;
    case 115u: goto L_0889A7B4;
    case 116u: goto L_0889A7BC;
    case 117u: goto L_0889A7D8;
    case 118u: goto L_0889A7E8;
    case 119u: goto L_0889A7F8;
    case 120u: goto L_0889A800;
    case 121u: goto L_0889A804;
    case 122u: goto L_0889A810;
    case 123u: goto L_0889A820;
    case 124u: goto L_0889A830;
    case 125u: goto L_0889A838;
    case 126u: goto L_0889A840;
    case 127u: goto L_0889A844;
    case 128u: goto L_0889A850;
    case 129u: goto L_0889A85C;
    case 130u: goto L_0889A874;
    case 131u: goto L_0889A87C;
    case 132u: goto L_0889A884;
    case 133u: goto L_0889A88C;
    case 134u: goto L_0889A894;
    case 135u: goto L_0889A89C;
    case 136u: goto L_0889A8A8;
    case 137u: goto L_0889A8B0;
    case 138u: goto L_0889A8BC;
    case 139u: goto L_0889A8C4;
    case 140u: goto L_0889A8D0;
    case 141u: goto L_0889A8D8;
    case 142u: goto L_0889A8E4;
    case 143u: goto L_0889A8EC;
    case 144u: goto L_0889A8F8;
    case 145u: goto L_0889A900;
    case 146u: goto L_0889A90C;
    case 147u: goto L_0889A914;
    case 148u: goto L_0889A920;
    case 149u: goto L_0889A928;
    case 150u: goto L_0889A934;
    case 151u: goto L_0889A93C;
    case 152u: goto L_0889A948;
    case 153u: goto L_0889A958;
    case 154u: goto L_0889A960;
    case 155u: goto L_0889A968;
    case 156u: goto L_0889A96C;
    case 157u: goto L_0889A978;
    case 158u: goto L_0889A994;
    case 159u: goto L_0889A9C4;
    case 160u: goto L_0889A9E8;
    case 161u: goto L_0889A9F8;
    case 162u: goto L_0889AA00;
    case 163u: goto L_0889AA08;
    case 164u: goto L_0889AA10;
    case 165u: goto L_0889AA20;
    case 166u: goto L_0889AA30;
    case 167u: goto L_0889AA40;
    case 168u: goto L_0889AA50;
    case 169u: goto L_0889AA58;
    case 170u: goto L_0889AA68;
    case 171u: goto L_0889AA7C;
    case 172u: goto L_0889AA84;
    case 173u: goto L_0889AA8C;
    case 174u: goto L_0889AA94;
    case 175u: goto L_0889AAA0;
    case 176u: goto L_0889AAB4;
    case 177u: goto L_0889AABC;
    case 178u: goto L_0889AACC;
    case 179u: goto L_0889AAE4;
    case 180u: goto L_0889AAEC;
    case 181u: goto L_0889AAF4;
    case 182u: goto L_0889AAFC;
    case 183u: goto L_0889AB08;
    case 184u: goto L_0889AB18;
    case 185u: goto L_0889AB20;
    case 186u: goto L_0889AB28;
    case 187u: goto L_0889AB30;
    case 188u: goto L_0889AB38;
    case 189u: goto L_0889AB3C;
    case 190u: goto L_0889AB48;
    case 191u: goto L_0889AB58;
    case 192u: goto L_0889AB78;
    case 193u: goto L_0889AB7C;
    case 194u: goto L_0889AB84;
    case 195u: goto L_0889ABA0;
    case 196u: goto L_0889ABA8;
    case 197u: goto L_0889ABB8;
    case 198u: goto L_0889ABCC;
    case 199u: goto L_0889ABD4;
    case 200u: goto L_0889ABE0;
    case 201u: goto L_0889ABEC;
    case 202u: goto L_0889ABF8;
    case 203u: goto L_0889AC00;
    case 204u: goto L_0889AC10;
    case 205u: goto L_0889AC18;
    case 206u: goto L_0889AC20;
    case 207u: goto L_0889AC28;
    case 208u: goto L_0889AC34;
    case 209u: goto L_0889AC40;
    case 210u: goto L_0889AC4C;
    case 211u: goto L_0889AC5C;
    case 212u: goto L_0889AC6C;
    case 213u: goto L_0889AC7C;
    case 214u: goto L_0889AC94;
    case 215u: goto L_0889ACA0;
    case 216u: goto L_0889ACB0;
    case 217u: goto L_0889ACC0;
    case 218u: goto L_0889ACD4;
    case 219u: goto L_0889ACDC;
    case 220u: goto L_0889ACE8;
    case 221u: goto L_0889ACF0;
    case 222u: goto L_0889ACFC;
    case 223u: goto L_0889AD04;
    case 224u: goto L_0889AD0C;
    case 225u: goto L_0889AD14;
    case 226u: goto L_0889AD20;
    case 227u: goto L_0889AD28;
    case 228u: goto L_0889AD34;
    case 229u: goto L_0889AD3C;
    case 230u: goto L_0889AD48;
    case 231u: goto L_0889AD54;
    case 232u: goto L_0889AD64;
    case 233u: goto L_0889AD70;
    case 234u: goto L_0889AD78;
    case 235u: goto L_0889AD84;
    case 236u: goto L_0889AD8C;
    case 237u: goto L_0889AD90;
    case 238u: goto L_0889AD9C;
    case 239u: goto L_0889ADB0;
    case 240u: goto L_0889ADBC;
    case 241u: goto L_0889ADC4;
    case 242u: goto L_0889ADD0;
    case 243u: goto L_0889ADDC;
    case 244u: goto L_0889ADF4;
    case 245u: goto L_0889AE04;
    case 246u: goto L_0889AE18;
    case 247u: goto L_0889AE24;
    case 248u: goto L_0889AE48;
    case 249u: goto L_0889AE50;
    case 250u: goto L_0889AE60;
    case 251u: goto L_0889AE6C;
    case 252u: goto L_0889AE7C;
    case 253u: goto L_0889AE88;
    case 254u: goto L_0889AE90;
    case 255u: goto L_0889AEA4;
    case 256u: goto L_0889AEB0;
    case 257u: goto L_0889AEB8;
    case 258u: goto L_0889AECC;
    case 259u: goto L_0889AED4;
    case 260u: goto L_0889AEDC;
    case 261u: goto L_0889AEEC;
    case 262u: goto L_0889AEF0;
    case 263u: goto L_0889AF10;
    case 264u: goto L_0889AF38;
    case 265u: goto L_0889AF44;
    case 266u: goto L_0889AF58;
    case 267u: goto L_0889AF68;
    case 268u: goto L_0889AF74;
    case 269u: goto L_0889AF80;
    case 270u: goto L_0889AFA4;
    case 271u: goto L_0889AFB0;
    case 272u: goto L_0889AFBC;
    case 273u: goto L_0889AFCC;
    case 274u: goto L_0889AFD4;
    case 275u: goto L_0889AFDC;
    case 276u: goto L_0889AFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889A000:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26552)));
    if (aot_gpr[17] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26552), 0u);
        goto L_0889A034;
    }
    goto L_0889A00C;
L_0889A00C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A030;
      }
      goto L_0889A014;
    }
L_0889A014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889A030u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889A030u) goto L_0889A030;
    return;
L_0889A030:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26552), 0u);
    goto L_0889A034;
L_0889A034:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26496), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26492), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26500), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26520), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26529), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A07C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
      if (branch_taken) {
          goto L_0889A0A8;
      }
      goto L_0889A098;
    }
L_0889A098:
    aot_gpr[31] = (0x0889A0A0u);
    aot_gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889A0A0u) goto L_0889A0A0;
    return;
L_0889A0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A0B0;
      }
      goto L_0889A0A8;
    }
L_0889A0A8:
    aot_gpr[31] = (0x0889A0B0u);
    aot_gpr[5] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889A0B0u) goto L_0889A0B0;
    return;
L_0889A0B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A0BC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26640)));
    aot_gpr[2] = (aot_gpr[4] ^ 1u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A0D0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26640)));
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A0E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A124;
      }
      goto L_0889A10C;
    }
L_0889A10C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A12C;
      }
      goto L_0889A11C;
    }
L_0889A11C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A19C;
      }
      goto L_0889A124;
    }
L_0889A124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A12C;
    }
L_0889A12C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28400)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_0889A14C;
      }
      goto L_0889A13C;
    }
L_0889A13C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28400), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x0889A14Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 195u, 0x0895ECC8u>(ctx, &aot_mem) && ctx.pc == 0x0889A14Cu) goto L_0889A14C;
    return;
L_0889A14C:
    aot_gpr[31] = (0x0889A154u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A154u) goto L_0889A154;
    return;
L_0889A154:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A168;
      }
      goto L_0889A15C;
    }
L_0889A15C:
    aot_gpr[31] = (0x0889A164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A164u) goto L_0889A164;
    return;
L_0889A164:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_0889A168;
L_0889A168:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889A184;
      }
      goto L_0889A178;
    }
L_0889A178:
    aot_gpr[31] = (0x0889A180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 160u, 0x0896E98Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A180u) goto L_0889A180;
    return;
L_0889A180:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_0889A184;
L_0889A184:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889A19C;
      }
      goto L_0889A18C;
    }
L_0889A18C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889A19C;
      }
      goto L_0889A194;
    }
L_0889A194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A19C;
    }
L_0889A19C:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26528)));
    aot_gpr[18] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_0889A1C4;
      }
      goto L_0889A1B0;
    }
L_0889A1B0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26529)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A234;
      }
      goto L_0889A1C4;
    }
L_0889A1C4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889A1D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 179u, 0x0889D9C0u>(ctx, &aot_mem) && ctx.pc == 0x0889A1D0u) goto L_0889A1D0;
    return;
L_0889A1D0:
    aot_gpr[31] = (0x0889A1D8u);
    aot_gpr[19] = (0u | 0u);
    ctx.pc = 0x08A5B2BCu;
    return;
L_0889A1D8:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A1F8;
      }
      goto L_0889A1E4;
    }
L_0889A1E4:
    aot_gpr[31] = (0x0889A1ECu);
    aot_gpr[4] = (0u | 32u);
    ctx.pc = 0x08A5B2C4u;
    return;
L_0889A1EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0889A1F8;
      }
      goto L_0889A1F4;
    }
L_0889A1F4:
    aot_gpr[19] = (0u | 1u);
    goto L_0889A1F8;
L_0889A1F8:
    aot_gpr[4] = (aot_gpr[19] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A20C;
      }
      goto L_0889A204;
    }
L_0889A204:
    aot_gpr[31] = (0x0889A20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 84u, 0x08962684u>(ctx, &aot_mem) && ctx.pc == 0x0889A20Cu) goto L_0889A20C;
    return;
L_0889A20C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889A218u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 114u, 0x088A3B44u>(ctx, &aot_mem) && ctx.pc == 0x0889A218u) goto L_0889A218;
    return;
L_0889A218:
    aot_gpr[31] = (0x0889A220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 189u, 0x0896FB30u>(ctx, &aot_mem) && ctx.pc == 0x0889A220u) goto L_0889A220;
    return;
L_0889A220:
    aot_gpr[31] = (0x0889A228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889A228u) goto L_0889A228;
    return;
L_0889A228:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889A234u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 192u, 0x0889FF88u>(ctx, &aot_mem) && ctx.pc == 0x0889A234u) goto L_0889A234;
    return;
L_0889A234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0889A280;
      }
      goto L_0889A240;
    }
L_0889A240:
    aot_gpr[31] = (0x0889A248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0889A248u) goto L_0889A248;
    return;
L_0889A248:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A254;
    }
L_0889A254:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26528)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A264;
    }
L_0889A264:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A270;
    }
L_0889A270:
    aot_gpr[31] = (0x0889A278u);
    // nop
    goto L_0889A07C;
L_0889A278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A280;
    }
L_0889A280:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26528)));
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26529)));
      if (branch_taken) {
          goto L_0889A324;
      }
      goto L_0889A290;
    }
L_0889A290:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A324;
      }
      goto L_0889A298;
    }
L_0889A298:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A2FC;
      }
      goto L_0889A2B4;
    }
L_0889A2B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A2FC;
      }
      goto L_0889A2C0;
    }
L_0889A2C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A2FC;
      }
      goto L_0889A2CC;
    }
L_0889A2CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A2FC;
      }
      goto L_0889A2D8;
    }
L_0889A2D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A2FC;
      }
      goto L_0889A2E4;
    }
L_0889A2E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A2FC;
      }
      goto L_0889A2F0;
    }
L_0889A2F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A2FC;
    }
L_0889A2FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26532)));
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x0889A318u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0889A318u) goto L_0889A318;
    return;
L_0889A318:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(26529), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A324;
    }
L_0889A324:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A32C;
    }
L_0889A32C:
    aot_gpr[31] = (0x0889A334u);
    // nop
    goto L_0889A0BC;
L_0889A334:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A354;
      }
      goto L_0889A33C;
    }
L_0889A33C:
    aot_gpr[31] = (0x0889A344u);
    // nop
    goto L_0889A0D0;
L_0889A344:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889A354;
      }
      goto L_0889A34C;
    }
L_0889A34C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A354;
    }
L_0889A354:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A394;
      }
      goto L_0889A370;
    }
L_0889A370:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26536)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[6]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A394;
    }
L_0889A394:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889A3C4;
      }
      goto L_0889A3A0;
    }
L_0889A3A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26536)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0889A3BCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x0889A3BCu) goto L_0889A3BC;
    return;
L_0889A3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A3C4;
    }
L_0889A3C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A400;
      }
      goto L_0889A3D0;
    }
L_0889A3D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A400;
      }
      goto L_0889A3DC;
    }
L_0889A3DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A400;
      }
      goto L_0889A3E8;
    }
L_0889A3E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A400;
      }
      goto L_0889A3F4;
    }
L_0889A3F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889A41C;
      }
      goto L_0889A400;
    }
L_0889A400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26536)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x0889A41Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x0889A41Cu) goto L_0889A41C;
    return;
L_0889A41C:
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
L_0889A438:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A468;
      }
      goto L_0889A450;
    }
L_0889A450:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A480;
      }
      goto L_0889A460;
    }
L_0889A460:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889A470;
      }
      goto L_0889A468;
    }
L_0889A468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A498;
      }
      goto L_0889A470;
    }
L_0889A470:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26529)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A498;
      }
      goto L_0889A480;
    }
L_0889A480:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A498;
      }
      goto L_0889A490;
    }
L_0889A490:
    aot_gpr[31] = (0x0889A498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 101u, 0x08983560u>(ctx, &aot_mem) && ctx.pc == 0x0889A498u) goto L_0889A498;
    return;
L_0889A498:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A4A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A4C4;
      }
      goto L_0889A4BC;
    }
L_0889A4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A4D0;
      }
      goto L_0889A4C4;
    }
L_0889A4C4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889A4D0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 2u, 0x088A2014u>(ctx, &aot_mem) && ctx.pc == 0x0889A4D0u) goto L_0889A4D0;
    return;
L_0889A4D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A4DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A50C;
      }
      goto L_0889A4F4;
    }
L_0889A4F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26976)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A514;
      }
      goto L_0889A504;
    }
L_0889A504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A52C;
      }
      goto L_0889A50C;
    }
L_0889A50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A52C;
      }
      goto L_0889A514;
    }
L_0889A514:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889A52Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889A52Cu) goto L_0889A52C;
    return;
L_0889A52C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A538:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A574;
      }
      goto L_0889A550;
    }
L_0889A550:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A57C;
      }
      goto L_0889A56C;
    }
L_0889A56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A588;
      }
      goto L_0889A574;
    }
L_0889A574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A588;
      }
      goto L_0889A57C;
    }
L_0889A57C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889A588u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 59u, 0x088A151Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A588u) goto L_0889A588;
    return;
L_0889A588:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    aot_gpr[8] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-28804), aot_gpr[7]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0889A614u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0889A614u) goto L_0889A614;
    return;
L_0889A614:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26556)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26556), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0889A648u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x0889A648u) goto L_0889A648;
    return;
L_0889A648:
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (16179u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[9] = (2215u << 16u);
    aot_gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0889A688;
      }
      goto L_0889A684;
    }
L_0889A684:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0889A688;
L_0889A688:
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (17279u << 16u);
      if (branch_taken) {
          goto L_0889A69C;
      }
      goto L_0889A698;
    }
L_0889A698:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0889A69C;
L_0889A69C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (129u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-32640));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] << 24u);
    aot_gpr[31] = (0x0889A6D4u);
    aot_gpr[10] = (aot_gpr[8] | aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x0889A6D4u) goto L_0889A6D4;
    return;
L_0889A6D4:
    aot_gpr[4] = (16768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[22] - aot_fpr[13];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = aot_fpr[20] - aot_fpr[13];
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[15] = aot_fpr[22] + aot_fpr[13];
    aot_gpr[5] = (0u | 32u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[13] = aot_fpr[20] + aot_fpr[13];
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (0u | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(26552)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26548)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(26552)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A794;
      }
      goto L_0889A784;
    }
L_0889A784:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(26552)));
    goto L_0889A794;
L_0889A794:
    aot_gpr[31] = (0x0889A79Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0889A79Cu) goto L_0889A79C;
    return;
L_0889A79C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889A7ACu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x0889A7ACu) goto L_0889A7AC;
    return;
L_0889A7AC:
    aot_gpr[31] = (0x0889A7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 47u, 0x0893D79Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A7B4u) goto L_0889A7B4;
    return;
L_0889A7B4:
    aot_gpr[31] = (0x0889A7BCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0889A7BCu) goto L_0889A7BC;
    return;
L_0889A7BC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A7D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889A7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A7E8u) goto L_0889A7E8;
    return;
L_0889A7E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889A800;
      }
      goto L_0889A7F8;
    }
L_0889A7F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889A804;
      }
      goto L_0889A800;
    }
L_0889A800:
    aot_gpr[2] = (0u | 0u);
    goto L_0889A804;
L_0889A804:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889A820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A820u) goto L_0889A820;
    return;
L_0889A820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 11u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889A838;
      }
      goto L_0889A830;
    }
L_0889A830:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A840;
      }
      goto L_0889A838;
    }
L_0889A838:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889A844;
      }
      goto L_0889A840;
    }
L_0889A840:
    aot_gpr[2] = (0u | 0u);
    goto L_0889A844;
L_0889A844:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A850:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26640)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A85C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A88C;
      }
      goto L_0889A874;
    }
L_0889A874:
    aot_gpr[31] = (0x0889A87Cu);
    // nop
    goto L_0889A850;
L_0889A87C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A894;
      }
      goto L_0889A884;
    }
L_0889A884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A88C;
    }
L_0889A88C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889A96C;
      }
      goto L_0889A894;
    }
L_0889A894:
    aot_gpr[31] = (0x0889A89Cu);
    // nop
    goto L_0889A850;
L_0889A89C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A8A8;
    }
L_0889A8A8:
    aot_gpr[31] = (0x0889A8B0u);
    // nop
    goto L_0889A850;
L_0889A8B0:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A8BC;
    }
L_0889A8BC:
    aot_gpr[31] = (0x0889A8C4u);
    // nop
    goto L_0889A850;
L_0889A8C4:
    aot_gpr[4] = (0u | 18u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A8D0;
    }
L_0889A8D0:
    aot_gpr[31] = (0x0889A8D8u);
    // nop
    goto L_0889A850;
L_0889A8D8:
    aot_gpr[4] = (0u | 40u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A8E4;
    }
L_0889A8E4:
    aot_gpr[31] = (0x0889A8ECu);
    // nop
    goto L_0889A850;
L_0889A8EC:
    aot_gpr[4] = (0u | 61u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A8F8;
    }
L_0889A8F8:
    aot_gpr[31] = (0x0889A900u);
    // nop
    goto L_0889A850;
L_0889A900:
    aot_gpr[4] = (0u | 46u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A90C;
    }
L_0889A90C:
    aot_gpr[31] = (0x0889A914u);
    // nop
    goto L_0889A850;
L_0889A914:
    aot_gpr[4] = (0u | 66u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A920;
    }
L_0889A920:
    aot_gpr[31] = (0x0889A928u);
    // nop
    goto L_0889A850;
L_0889A928:
    aot_gpr[4] = (0u | 67u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A948;
      }
      goto L_0889A934;
    }
L_0889A934:
    aot_gpr[31] = (0x0889A93Cu);
    // nop
    goto L_0889A850;
L_0889A93C:
    aot_gpr[4] = (0u | 47u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889A960;
      }
      goto L_0889A948;
    }
L_0889A948:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(10120)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889A968;
      }
      goto L_0889A958;
    }
L_0889A958:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889A96C;
      }
      goto L_0889A960;
    }
L_0889A960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889A96C;
      }
      goto L_0889A968;
    }
L_0889A968:
    aot_gpr[2] = (0u | 0u);
    goto L_0889A96C;
L_0889A96C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889AA00;
      }
      goto L_0889A994;
    }
L_0889A994:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26496), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26537), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26538), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26520), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889A9C4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26529), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A9C4u) goto L_0889A9C4;
    return;
L_0889A9C4:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3032));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26496)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AA08;
      }
      goto L_0889A9E8;
    }
L_0889A9E8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889A9F8u);
    aot_gpr[5] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889A9F8u) goto L_0889A9F8;
    return;
L_0889A9F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AA20;
      }
      goto L_0889AA00;
    }
L_0889AA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AA20;
      }
      goto L_0889AA08;
    }
L_0889AA08:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889AA20;
      }
      goto L_0889AA10;
    }
L_0889AA10:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889AA20u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AA20u) goto L_0889AA20;
    return;
L_0889AA20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AA30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889AA40u) goto L_0889AA40;
    return;
L_0889AA40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AA68;
      }
      goto L_0889AA50;
    }
L_0889AA50:
    aot_gpr[31] = (0x0889AA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889AA58u) goto L_0889AA58;
    return;
L_0889AA58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AA94;
      }
      goto L_0889AA68;
    }
L_0889AA68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
      if (branch_taken) {
          goto L_0889AA8C;
      }
      goto L_0889AA7C;
    }
L_0889AA7C:
    aot_gpr[31] = (0x0889AA84u);
    aot_gpr[5] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AA84u) goto L_0889AA84;
    return;
L_0889AA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AA94;
      }
      goto L_0889AA8C;
    }
L_0889AA8C:
    aot_gpr[31] = (0x0889AA94u);
    aot_gpr[5] = (0u | 69u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AA94u) goto L_0889AA94;
    return;
L_0889AA94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AAA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AAB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 15u, 0x088A1120u>(ctx, &aot_mem) && ctx.pc == 0x0889AAB4u) goto L_0889AAB4;
    return;
L_0889AAB4:
    aot_gpr[31] = (0x0889AABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889AABCu) goto L_0889AABC;
    return;
L_0889AABC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AAFC;
      }
      goto L_0889AACC;
    }
L_0889AACC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
      if (branch_taken) {
          goto L_0889AAF4;
      }
      goto L_0889AAE4;
    }
L_0889AAE4:
    aot_gpr[31] = (0x0889AAECu);
    aot_gpr[5] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AAECu) goto L_0889AAEC;
    return;
L_0889AAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AAFC;
      }
      goto L_0889AAF4;
    }
L_0889AAF4:
    aot_gpr[31] = (0x0889AAFCu);
    aot_gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AAFCu) goto L_0889AAFC;
    return;
L_0889AAFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AB08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889AB18u) goto L_0889AB18;
    return;
L_0889AB18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AB38;
      }
      goto L_0889AB20;
    }
L_0889AB20:
    aot_gpr[31] = (0x0889AB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889AB28u) goto L_0889AB28;
    return;
L_0889AB28:
    aot_gpr[31] = (0x0889AB30u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0889AB30u) goto L_0889AB30;
    return;
L_0889AB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AB3C;
      }
      goto L_0889AB38;
    }
L_0889AB38:
    aot_gpr[2] = (0u | 0u);
    goto L_0889AB3C;
L_0889AB3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AB48:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0889AB78;
      }
      goto L_0889AB58;
    }
L_0889AB58:
    aot_gpr[6] = (aot_gpr[4] << 9u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(10104)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_0889AB7C;
      }
      goto L_0889AB78;
    }
L_0889AB78:
    aot_gpr[2] = (0u | 0u);
    goto L_0889AB7C;
L_0889AB7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AB84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889ABA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 15u, 0x088A1120u>(ctx, &aot_mem) && ctx.pc == 0x0889ABA0u) goto L_0889ABA0;
    return;
L_0889ABA0:
    aot_gpr[31] = (0x0889ABA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ABA8u) goto L_0889ABA8;
    return;
L_0889ABA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AC6C;
      }
      goto L_0889ABB8;
    }
L_0889ABB8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AC18;
      }
      goto L_0889ABCC;
    }
L_0889ABCC:
    aot_gpr[31] = (0x0889ABD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889AB48;
L_0889ABD4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC10;
      }
      goto L_0889ABE0;
    }
L_0889ABE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC10;
      }
      goto L_0889ABEC;
    }
L_0889ABEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC10;
      }
      goto L_0889ABF8;
    }
L_0889ABF8:
    aot_gpr[31] = (0x0889AC00u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 96u, 0x089657A4u>(ctx, &aot_mem) && ctx.pc == 0x0889AC00u) goto L_0889AC00;
    return;
L_0889AC00:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889AC10u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AC10u) goto L_0889AC10;
    return;
L_0889AC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC6C;
      }
      goto L_0889AC18;
    }
L_0889AC18:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC6C;
      }
      goto L_0889AC20;
    }
L_0889AC20:
    aot_gpr[31] = (0x0889AC28u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889AB48;
L_0889AC28:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC6C;
      }
      goto L_0889AC34;
    }
L_0889AC34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC6C;
      }
      goto L_0889AC40;
    }
L_0889AC40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC6C;
      }
      goto L_0889AC4C;
    }
L_0889AC4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[31] = (0x0889AC5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14340));
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 123u, 0x08969864u>(ctx, &aot_mem) && ctx.pc == 0x0889AC5Cu) goto L_0889AC5C;
    return;
L_0889AC5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889AC6Cu);
    aot_gpr[5] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AC6Cu) goto L_0889AC6C;
    return;
L_0889AC6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AC7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AC94u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AC94u) goto L_0889AC94;
    return;
L_0889AC94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889ACA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889ACB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ACB0u) goto L_0889ACB0;
    return;
L_0889ACB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889AD3C;
      }
      goto L_0889ACC0;
    }
L_0889ACC0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889AD0C;
      }
      goto L_0889ACD4;
    }
L_0889ACD4:
    aot_gpr[31] = (0x0889ACDCu);
    // nop
    goto L_0889A850;
L_0889ACDC:
    aot_gpr[4] = (0u | 66u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889ACFC;
      }
      goto L_0889ACE8;
    }
L_0889ACE8:
    aot_gpr[31] = (0x0889ACF0u);
    // nop
    goto L_0889A850;
L_0889ACF0:
    aot_gpr[4] = (0u | 67u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889AD3C;
      }
      goto L_0889ACFC;
    }
L_0889ACFC:
    aot_gpr[31] = (0x0889AD04u);
    aot_gpr[4] = (0u | 68u);
    goto L_0889AC7C;
L_0889AD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AD3C;
      }
      goto L_0889AD0C;
    }
L_0889AD0C:
    aot_gpr[31] = (0x0889AD14u);
    // nop
    goto L_0889A850;
L_0889AD14:
    aot_gpr[4] = (0u | 46u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889AD34;
      }
      goto L_0889AD20;
    }
L_0889AD20:
    aot_gpr[31] = (0x0889AD28u);
    // nop
    goto L_0889A850;
L_0889AD28:
    aot_gpr[4] = (0u | 47u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889AD3C;
      }
      goto L_0889AD34;
    }
L_0889AD34:
    aot_gpr[31] = (0x0889AD3Cu);
    aot_gpr[4] = (0u | 48u);
    goto L_0889AC7C;
L_0889AD3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889AD48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 15u, 0x088A1120u>(ctx, &aot_mem) && ctx.pc == 0x0889AD48u) goto L_0889AD48;
    return;
L_0889AD48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AD54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AD64u);
    // nop
    goto L_0889A850;
L_0889AD64:
    aot_gpr[4] = (0u | 68u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889AD84;
      }
      goto L_0889AD70;
    }
L_0889AD70:
    aot_gpr[31] = (0x0889AD78u);
    // nop
    goto L_0889A850;
L_0889AD78:
    aot_gpr[4] = (0u | 48u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889AD8C;
      }
      goto L_0889AD84;
    }
L_0889AD84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889AD90;
      }
      goto L_0889AD8C;
    }
L_0889AD8C:
    aot_gpr[2] = (0u | 0u);
    goto L_0889AD90;
L_0889AD90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AD9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889ADB0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    goto L_0889A850;
L_0889ADB0:
    aot_gpr[4] = (0u | 66u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889ADD0;
      }
      goto L_0889ADBC;
    }
L_0889ADBC:
    aot_gpr[31] = (0x0889ADC4u);
    // nop
    goto L_0889A850;
L_0889ADC4:
    aot_gpr[4] = (0u | 46u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889ADF4;
      }
      goto L_0889ADD0;
    }
L_0889ADD0:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[31] = (0x0889ADDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 201u, 0x088A2D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ADDCu) goto L_0889ADDC;
    return;
L_0889ADDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5104)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0889ADF4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 184u, 0x088A2CA0u>(ctx, &aot_mem) && ctx.pc == 0x0889ADF4u) goto L_0889ADF4;
    return;
L_0889ADF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AE04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AE18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 207u, 0x088A2DFCu>(ctx, &aot_mem) && ctx.pc == 0x0889AE18u) goto L_0889AE18;
    return;
L_0889AE18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AE24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889AE50;
      }
      goto L_0889AE48;
    }
L_0889AE48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889AEF0;
      }
      goto L_0889AE50;
    }
L_0889AE50:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0889AE60u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 203u, 0x08963B64u>(ctx, &aot_mem) && ctx.pc == 0x0889AE60u) goto L_0889AE60;
    return;
L_0889AE60:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    goto L_0889AE6C;
L_0889AE6C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889AE7Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0889AE7Cu) goto L_0889AE7C;
    return;
L_0889AE7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0889AE88u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889AE88u) goto L_0889AE88;
    return;
L_0889AE88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AEDC;
      }
      goto L_0889AE90;
    }
L_0889AE90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_0889AEDC;
      }
      goto L_0889AEA4;
    }
L_0889AEA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0889AEB0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0889AEB0u) goto L_0889AEB0;
    return;
L_0889AEB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AED4;
      }
      goto L_0889AEB8;
    }
L_0889AEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889AEA4;
      }
      goto L_0889AECC;
    }
L_0889AECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AEDC;
      }
      goto L_0889AED4;
    }
L_0889AED4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889AEF0;
      }
      goto L_0889AEDC;
    }
L_0889AEDC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0889AE6C;
      }
      goto L_0889AEEC;
    }
L_0889AEEC:
    aot_gpr[2] = (0u | 0u);
    goto L_0889AEF0;
L_0889AEF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AF10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889AF38u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10232));
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x0889AF38u) goto L_0889AF38;
    return;
L_0889AF38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AF44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889AF58u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26544), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 80u, 0x0896C558u>(ctx, &aot_mem) && ctx.pc == 0x0889AF58u) goto L_0889AF58;
    return;
L_0889AF58:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889AF68u);
    aot_gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889AF68u) goto L_0889AF68;
    return;
L_0889AF68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AF74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889AF80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26540), aot_gpr[4]);
    aot_gpr[13] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_0889AFCC;
      }
      goto L_0889AFA4;
    }
L_0889AFA4:
    aot_gpr[12] = (2214u << 16u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(14344));
    goto L_0889AFB0;
L_0889AFB0:
    aot_gpr[4] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (0x0889AFBCu);
    aot_gpr[5] = (aot_gpr[3] | 0u);
    goto L_0889AF74;
L_0889AFBC:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[13]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(912));
      if (branch_taken) {
          goto L_0889AFB0;
      }
      goto L_0889AFCC;
    }
L_0889AFCC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AFE4;
      }
      goto L_0889AFD4;
    }
L_0889AFD4:
    aot_gpr[31] = (0x0889AFDCu);
    aot_gpr[4] = (0u | 0u);
    goto L_0889AF44;
L_0889AFDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 1u, 0x0889B000u>(ctx, &aot_mem); return;
      }
      goto L_0889AFE4;
    }
L_0889AFE4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26537), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889B000u);
    aot_gpr[5] = (0u | 2u);
    (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0150(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0150_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_150(Runtime &runtime) {
    runtime.register_generated_unit(150u, 0x0889A000u, 4096u, &recomp_unit_0150, &recomp_unit_0150_entry);
    runtime.register_function(0x0889A000u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A00Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A014u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A030u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A034u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A07Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A098u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A0A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A0A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A0B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A0BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A0D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A10Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A11Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A124u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A12Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A13Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A154u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A15Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A168u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A178u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A180u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A184u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A18Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A1F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A204u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A20Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A218u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A220u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A234u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A240u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A248u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A254u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A264u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A270u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A278u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A280u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A290u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A298u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A318u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A324u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A32Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A334u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A33Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A34Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A370u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A394u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A3F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A400u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A41Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A450u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A468u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A470u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A480u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A490u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A498u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A4A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A4BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A4D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A4F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A50Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A514u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A538u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A56Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A574u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A588u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A594u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A614u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A648u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A684u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A688u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A698u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A69Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A6D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A794u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A79Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A7ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A7B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A7BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A7D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A7E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A7F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A800u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A804u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A810u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A820u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A830u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A838u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A840u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A844u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A850u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A85Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A874u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A87Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A884u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A88Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A894u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A89Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A8F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A900u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A90Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A920u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A928u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A934u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A93Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A948u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A958u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A960u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A968u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A96Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A978u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A994u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A9C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A9E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889A9F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AAA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AAB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AABCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AACCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AAECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AAF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AAFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AB84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ABF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AC94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ACFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AD9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ADB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ADBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ADC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ADD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ADDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889ADF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AE90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AEA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AEB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AEB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AECCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AED4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AEDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AEECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AEF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AF80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFDCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x0889AFE4u, &recomp_unit_0150, "recomp_unit_0150");
}
} // namespace psprecomp
