#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0075[1021] = {
    1, 2, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0,
    0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0,
    0, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0,
    39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0,
    0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56,
    0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105,
    0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 117, 0, 0,
    118, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147,
    0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0,
    158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 187,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0,
    0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232,
    0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249,
};
void recomp_unit_0075_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0884F000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0075[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884F000;
    case 2u: goto L_0884F004;
    case 3u: goto L_0884F010;
    case 4u: goto L_0884F020;
    case 5u: goto L_0884F024;
    case 6u: goto L_0884F050;
    case 7u: goto L_0884F060;
    case 8u: goto L_0884F070;
    case 9u: goto L_0884F078;
    case 10u: goto L_0884F088;
    case 11u: goto L_0884F090;
    case 12u: goto L_0884F0A0;
    case 13u: goto L_0884F0B0;
    case 14u: goto L_0884F0B8;
    case 15u: goto L_0884F0C0;
    case 16u: goto L_0884F0C8;
    case 17u: goto L_0884F0D0;
    case 18u: goto L_0884F0D4;
    case 19u: goto L_0884F0E0;
    case 20u: goto L_0884F0E8;
    case 21u: goto L_0884F104;
    case 22u: goto L_0884F114;
    case 23u: goto L_0884F11C;
    case 24u: goto L_0884F130;
    case 25u: goto L_0884F134;
    case 26u: goto L_0884F13C;
    case 27u: goto L_0884F164;
    case 28u: goto L_0884F174;
    case 29u: goto L_0884F188;
    case 30u: goto L_0884F194;
    case 31u: goto L_0884F19C;
    case 32u: goto L_0884F1A4;
    case 33u: goto L_0884F1BC;
    case 34u: goto L_0884F1C8;
    case 35u: goto L_0884F1DC;
    case 36u: goto L_0884F1E4;
    case 37u: goto L_0884F1EC;
    case 38u: goto L_0884F1F8;
    case 39u: goto L_0884F200;
    case 40u: goto L_0884F218;
    case 41u: goto L_0884F224;
    case 42u: goto L_0884F228;
    case 43u: goto L_0884F254;
    case 44u: goto L_0884F25C;
    case 45u: goto L_0884F264;
    case 46u: goto L_0884F270;
    case 47u: goto L_0884F284;
    case 48u: goto L_0884F288;
    case 49u: goto L_0884F2A4;
    case 50u: goto L_0884F2B0;
    case 51u: goto L_0884F2B8;
    case 52u: goto L_0884F2C0;
    case 53u: goto L_0884F2CC;
    case 54u: goto L_0884F2E0;
    case 55u: goto L_0884F2E8;
    case 56u: goto L_0884F2FC;
    case 57u: goto L_0884F308;
    case 58u: goto L_0884F310;
    case 59u: goto L_0884F324;
    case 60u: goto L_0884F334;
    case 61u: goto L_0884F350;
    case 62u: goto L_0884F368;
    case 63u: goto L_0884F380;
    case 64u: goto L_0884F398;
    case 65u: goto L_0884F3A8;
    case 66u: goto L_0884F414;
    case 67u: goto L_0884F424;
    case 68u: goto L_0884F42C;
    case 69u: goto L_0884F434;
    case 70u: goto L_0884F488;
    case 71u: goto L_0884F490;
    case 72u: goto L_0884F4C0;
    case 73u: goto L_0884F4C8;
    case 74u: goto L_0884F4E8;
    case 75u: goto L_0884F518;
    case 76u: goto L_0884F52C;
    case 77u: goto L_0884F540;
    case 78u: goto L_0884F548;
    case 79u: goto L_0884F554;
    case 80u: goto L_0884F564;
    case 81u: goto L_0884F578;
    case 82u: goto L_0884F58C;
    case 83u: goto L_0884F59C;
    case 84u: goto L_0884F5A8;
    case 85u: goto L_0884F5E4;
    case 86u: goto L_0884F5F4;
    case 87u: goto L_0884F60C;
    case 88u: goto L_0884F614;
    case 89u: goto L_0884F630;
    case 90u: goto L_0884F654;
    case 91u: goto L_0884F668;
    case 92u: goto L_0884F670;
    case 93u: goto L_0884F684;
    case 94u: goto L_0884F6A0;
    case 95u: goto L_0884F6C0;
    case 96u: goto L_0884F6D0;
    case 97u: goto L_0884F6E0;
    case 98u: goto L_0884F6EC;
    case 99u: goto L_0884F704;
    case 100u: goto L_0884F71C;
    case 101u: goto L_0884F730;
    case 102u: goto L_0884F74C;
    case 103u: goto L_0884F75C;
    case 104u: goto L_0884F774;
    case 105u: goto L_0884F77C;
    case 106u: goto L_0884F790;
    case 107u: goto L_0884F798;
    case 108u: goto L_0884F7A4;
    case 109u: goto L_0884F7AC;
    case 110u: goto L_0884F7B4;
    case 111u: goto L_0884F7BC;
    case 112u: goto L_0884F7C8;
    case 113u: goto L_0884F7D0;
    case 114u: goto L_0884F7D8;
    case 115u: goto L_0884F7E4;
    case 116u: goto L_0884F7EC;
    case 117u: goto L_0884F7F4;
    case 118u: goto L_0884F800;
    case 119u: goto L_0884F808;
    case 120u: goto L_0884F814;
    case 121u: goto L_0884F81C;
    case 122u: goto L_0884F824;
    case 123u: goto L_0884F834;
    case 124u: goto L_0884F83C;
    case 125u: goto L_0884F844;
    case 126u: goto L_0884F84C;
    case 127u: goto L_0884F85C;
    case 128u: goto L_0884F868;
    case 129u: goto L_0884F87C;
    case 130u: goto L_0884F890;
    case 131u: goto L_0884F8A4;
    case 132u: goto L_0884F8B0;
    case 133u: goto L_0884F8BC;
    case 134u: goto L_0884F8D0;
    case 135u: goto L_0884F8E4;
    case 136u: goto L_0884F8EC;
    case 137u: goto L_0884F8F8;
    case 138u: goto L_0884F900;
    case 139u: goto L_0884F910;
    case 140u: goto L_0884F924;
    case 141u: goto L_0884F938;
    case 142u: goto L_0884F940;
    case 143u: goto L_0884F950;
    case 144u: goto L_0884F964;
    case 145u: goto L_0884F96C;
    case 146u: goto L_0884F974;
    case 147u: goto L_0884F97C;
    case 148u: goto L_0884F988;
    case 149u: goto L_0884F990;
    case 150u: goto L_0884F998;
    case 151u: goto L_0884F9A8;
    case 152u: goto L_0884F9B0;
    case 153u: goto L_0884F9C0;
    case 154u: goto L_0884F9C8;
    case 155u: goto L_0884F9D0;
    case 156u: goto L_0884F9E4;
    case 157u: goto L_0884F9F8;
    case 158u: goto L_0884FA00;
    case 159u: goto L_0884FA08;
    case 160u: goto L_0884FA18;
    case 161u: goto L_0884FA20;
    case 162u: goto L_0884FA28;
    case 163u: goto L_0884FA30;
    case 164u: goto L_0884FA38;
    case 165u: goto L_0884FA44;
    case 166u: goto L_0884FA4C;
    case 167u: goto L_0884FA6C;
    case 168u: goto L_0884FA7C;
    case 169u: goto L_0884FA8C;
    case 170u: goto L_0884FA98;
    case 171u: goto L_0884FAB0;
    case 172u: goto L_0884FAC4;
    case 173u: goto L_0884FACC;
    case 174u: goto L_0884FAE4;
    case 175u: goto L_0884FAEC;
    case 176u: goto L_0884FB04;
    case 177u: goto L_0884FB18;
    case 178u: goto L_0884FB38;
    case 179u: goto L_0884FB58;
    case 180u: goto L_0884FB88;
    case 181u: goto L_0884FB90;
    case 182u: goto L_0884FBAC;
    case 183u: goto L_0884FBB8;
    case 184u: goto L_0884FBD8;
    case 185u: goto L_0884FBE4;
    case 186u: goto L_0884FBEC;
    case 187u: goto L_0884FBFC;
    case 188u: goto L_0884FC04;
    case 189u: goto L_0884FC24;
    case 190u: goto L_0884FC30;
    case 191u: goto L_0884FC4C;
    case 192u: goto L_0884FC58;
    case 193u: goto L_0884FC78;
    case 194u: goto L_0884FC84;
    case 195u: goto L_0884FCA0;
    case 196u: goto L_0884FCD0;
    case 197u: goto L_0884FCD8;
    case 198u: goto L_0884FCE8;
    case 199u: goto L_0884FCF0;
    case 200u: goto L_0884FD20;
    case 201u: goto L_0884FD28;
    case 202u: goto L_0884FD44;
    case 203u: goto L_0884FD54;
    case 204u: goto L_0884FD5C;
    case 205u: goto L_0884FD70;
    case 206u: goto L_0884FD78;
    case 207u: goto L_0884FDA0;
    case 208u: goto L_0884FDAC;
    case 209u: goto L_0884FDC8;
    case 210u: goto L_0884FDD0;
    case 211u: goto L_0884FDE4;
    case 212u: goto L_0884FDF0;
    case 213u: goto L_0884FDF8;
    case 214u: goto L_0884FE0C;
    case 215u: goto L_0884FE14;
    case 216u: goto L_0884FE1C;
    case 217u: goto L_0884FE38;
    case 218u: goto L_0884FE58;
    case 219u: goto L_0884FE6C;
    case 220u: goto L_0884FE84;
    case 221u: goto L_0884FE90;
    case 222u: goto L_0884FE98;
    case 223u: goto L_0884FEA4;
    case 224u: goto L_0884FEAC;
    case 225u: goto L_0884FEB8;
    case 226u: goto L_0884FEC0;
    case 227u: goto L_0884FECC;
    case 228u: goto L_0884FED4;
    case 229u: goto L_0884FEE0;
    case 230u: goto L_0884FEE8;
    case 231u: goto L_0884FEF4;
    case 232u: goto L_0884FEFC;
    case 233u: goto L_0884FF08;
    case 234u: goto L_0884FF10;
    case 235u: goto L_0884FF1C;
    case 236u: goto L_0884FF28;
    case 237u: goto L_0884FF34;
    case 238u: goto L_0884FF54;
    case 239u: goto L_0884FF5C;
    case 240u: goto L_0884FF64;
    case 241u: goto L_0884FF6C;
    case 242u: goto L_0884FF84;
    case 243u: goto L_0884FF94;
    case 244u: goto L_0884FFAC;
    case 245u: goto L_0884FFBC;
    case 246u: goto L_0884FFC4;
    case 247u: goto L_0884FFD0;
    case 248u: goto L_0884FFE0;
    case 249u: goto L_0884FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884F000:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0884F004;
L_0884F004:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[30];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0884F024;
      }
      goto L_0884F010;
    }
L_0884F010:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F024;
      }
      goto L_0884F020;
    }
L_0884F020:
    aot_gpr[4] = (0u | 1u);
    goto L_0884F024;
L_0884F024:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[23] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884F050u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 166u, 0x0884EAD8u>(ctx, &aot_mem) && ctx.pc == 0x0884F050u) goto L_0884F050;
    return;
L_0884F050:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884F060u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884F060u) goto L_0884F060;
    return;
L_0884F060:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884F070u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884F070u) goto L_0884F070;
    return;
L_0884F070:
    aot_gpr[31] = (0x0884F078u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 15u, 0x08A3C09Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F078u) goto L_0884F078;
    return;
L_0884F078:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0884F088u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884F088u) goto L_0884F088;
    return;
L_0884F088:
    aot_gpr[31] = (0x0884F090u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 15u, 0x08A3C09Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F090u) goto L_0884F090;
    return;
L_0884F090:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x0884F0A0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884F0A0u) goto L_0884F0A0;
    return;
L_0884F0A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884F0B0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x0884F0B0u) goto L_0884F0B0;
    return;
L_0884F0B0:
    aot_gpr[31] = (0x0884F0B8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F0B8u) goto L_0884F0B8;
    return;
L_0884F0B8:
    aot_gpr[31] = (0x0884F0C0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 120u, 0x0886D7F8u>(ctx, &aot_mem) && ctx.pc == 0x0884F0C0u) goto L_0884F0C0;
    return;
L_0884F0C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 210u, 0x0884EF88u>(ctx, &aot_mem); return;
      }
      goto L_0884F0C8;
    }
L_0884F0C8:
    aot_gpr[31] = (0x0884F0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 122u, 0x0886D840u>(ctx, &aot_mem) && ctx.pc == 0x0884F0D0u) goto L_0884F0D0;
    return;
L_0884F0D0:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    goto L_0884F0D4;
L_0884F0D4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F134;
      }
      goto L_0884F0E0;
    }
L_0884F0E0:
    aot_gpr[31] = (0x0884F0E8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884F0E8u) goto L_0884F0E8;
    return;
L_0884F0E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F130;
      }
      goto L_0884F104;
    }
L_0884F104:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0884F114u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 139u, 0x0888C8CCu>(ctx, &aot_mem) && ctx.pc == 0x0884F114u) goto L_0884F114;
    return;
L_0884F114:
    aot_gpr[31] = (0x0884F11Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 125u, 0x0886D894u>(ctx, &aot_mem) && ctx.pc == 0x0884F11Cu) goto L_0884F11C;
    return;
L_0884F11C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F104;
      }
      goto L_0884F130;
    }
L_0884F130:
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_0884F134;
L_0884F134:
    aot_gpr[31] = (0x0884F13Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x0884F13Cu) goto L_0884F13C;
    return;
L_0884F13C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (49152u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[21]);
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[22] + aot_gpr[16]);
      if (branch_taken) {
          goto L_0884F288;
      }
      goto L_0884F164;
    }
L_0884F164:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884F174u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x0884F174u) goto L_0884F174;
    return;
L_0884F174:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884F188u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x0884F188u) goto L_0884F188;
    return;
L_0884F188:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F194u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 84u, 0x0886D588u>(ctx, &aot_mem) && ctx.pc == 0x0884F194u) goto L_0884F194;
    return;
L_0884F194:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F1EC;
      }
      goto L_0884F19C;
    }
L_0884F19C:
    aot_gpr[31] = (0x0884F1A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 125u, 0x0886D894u>(ctx, &aot_mem) && ctx.pc == 0x0884F1A4u) goto L_0884F1A4;
    return;
L_0884F1A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F1C8;
      }
      goto L_0884F1BC;
    }
L_0884F1BC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884F1C8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 159u, 0x0886DAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884F1C8u) goto L_0884F1C8;
    return;
L_0884F1C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0884F284;
      }
      goto L_0884F1DC;
    }
L_0884F1DC:
    aot_gpr[31] = (0x0884F1E4u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 125u, 0x08865A40u>(ctx, &aot_mem) && ctx.pc == 0x0884F1E4u) goto L_0884F1E4;
    return;
L_0884F1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F284;
      }
      goto L_0884F1EC;
    }
L_0884F1EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F264;
      }
      goto L_0884F1F8;
    }
L_0884F1F8:
    aot_gpr[31] = (0x0884F200u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 124u, 0x0886D860u>(ctx, &aot_mem) && ctx.pc == 0x0884F200u) goto L_0884F200;
    return;
L_0884F200:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0884F228;
      }
      goto L_0884F218;
    }
L_0884F218:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884F224u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 157u, 0x0886DAD4u>(ctx, &aot_mem) && ctx.pc == 0x0884F224u) goto L_0884F224;
    return;
L_0884F224:
    aot_gpr[4] = (2215u << 16u);
    goto L_0884F228;
L_0884F228:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24920)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 0 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F284;
      }
      goto L_0884F254;
    }
L_0884F254:
    aot_gpr[31] = (0x0884F25Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 125u, 0x08865A40u>(ctx, &aot_mem) && ctx.pc == 0x0884F25Cu) goto L_0884F25C;
    return;
L_0884F25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F284;
      }
      goto L_0884F264;
    }
L_0884F264:
    aot_gpr[4] = (0u | 357u);
    aot_gpr[31] = (0x0884F270u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884F270u) goto L_0884F270;
    return;
L_0884F270:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F284u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884F284u) goto L_0884F284;
    return;
L_0884F284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_0884F288;
L_0884F288:
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[21]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F2E0;
      }
      goto L_0884F2A4;
    }
L_0884F2A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F2C0;
      }
      goto L_0884F2B0;
    }
L_0884F2B0:
    aot_gpr[31] = (0x0884F2B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 125u, 0x08865A40u>(ctx, &aot_mem) && ctx.pc == 0x0884F2B8u) goto L_0884F2B8;
    return;
L_0884F2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F2E0;
      }
      goto L_0884F2C0;
    }
L_0884F2C0:
    aot_gpr[4] = (0u | 357u);
    aot_gpr[31] = (0x0884F2CCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884F2CCu) goto L_0884F2CC;
    return;
L_0884F2CC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F2E0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884F2E0u) goto L_0884F2E0;
    return;
L_0884F2E0:
    aot_gpr[31] = (0x0884F2E8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884F2E8u) goto L_0884F2E8;
    return;
L_0884F2E8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F334;
      }
      goto L_0884F2FC;
    }
L_0884F2FC:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[31] = (0x0884F308u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 84u, 0x0886D588u>(ctx, &aot_mem) && ctx.pc == 0x0884F308u) goto L_0884F308;
    return;
L_0884F308:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (0u | 2u);
        goto L_0884F310;
    }
    goto L_0884F310;
L_0884F310:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0884F324u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 183u, 0x0888CB68u>(ctx, &aot_mem) && ctx.pc == 0x0884F324u) goto L_0884F324;
    return;
L_0884F324:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F2FC;
      }
      goto L_0884F334;
    }
L_0884F334:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884F350u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F350u) goto L_0884F350;
    return;
L_0884F350:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884F368u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F368u) goto L_0884F368;
    return;
L_0884F368:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884F380u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F380u) goto L_0884F380;
    return;
L_0884F380:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884F398u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F398u) goto L_0884F398;
    return;
L_0884F398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(9)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0884F434;
      }
      goto L_0884F3A8;
    }
L_0884F3A8:
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[20] & aot_gpr[5]);
    aot_gpr[7] = (61440u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884F414u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884F414u) goto L_0884F414;
    return;
L_0884F414:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (0u | 188u);
    aot_gpr[31] = (0x0884F424u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 84u, 0x0886D588u>(ctx, &aot_mem) && ctx.pc == 0x0884F424u) goto L_0884F424;
    return;
L_0884F424:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u | 189u);
        goto L_0884F42C;
    }
    goto L_0884F42C;
L_0884F42C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
      if (branch_taken) {
          goto L_0884F488;
      }
      goto L_0884F434;
    }
L_0884F434:
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[6] = (aot_gpr[20] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[7] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_0884F488;
L_0884F488:
    aot_gpr[31] = (0x0884F490u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 191u, 0x0884ED88u>(ctx, &aot_mem) && ctx.pc == 0x0884F490u) goto L_0884F490;
    return;
L_0884F490:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(504)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(508)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(512)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F4C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F4C8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24008), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0884F518u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 31u, 0x0891D244u>(ctx, &aot_mem) && ctx.pc == 0x0884F518u) goto L_0884F518;
    return;
L_0884F518:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(26492)));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0884F548;
      }
      goto L_0884F52C;
    }
L_0884F52C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F548;
      }
      goto L_0884F540;
    }
L_0884F540:
    aot_gpr[31] = (0x0884F548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 135u, 0x08899F18u>(ctx, &aot_mem) && ctx.pc == 0x0884F548u) goto L_0884F548;
    return;
L_0884F548:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F578;
      }
      goto L_0884F554;
    }
L_0884F554:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884F564u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884F564u) goto L_0884F564;
    return;
L_0884F564:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0884F578u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26536), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 135u, 0x0889B8D8u>(ctx, &aot_mem) && ctx.pc == 0x0884F578u) goto L_0884F578;
    return;
L_0884F578:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F58C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0884F59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 135u, 0x08899F18u>(ctx, &aot_mem) && ctx.pc == 0x0884F59Cu) goto L_0884F59C;
    return;
L_0884F59C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F5A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26528)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884F60C;
      }
      goto L_0884F5E4;
    }
L_0884F5E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884F5F4;
    }
L_0884F5F4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F60C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884F614;
    }
L_0884F614:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884F630u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F630u) goto L_0884F630;
    return;
L_0884F630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[20] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F670;
      }
      goto L_0884F654;
    }
L_0884F654:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[31] = (0x0884F668u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 157u, 0x0889A978u>(ctx, &aot_mem) && ctx.pc == 0x0884F668u) goto L_0884F668;
    return;
L_0884F668:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_0884F774;
      }
      goto L_0884F670;
    }
L_0884F670:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884F684u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F684u) goto L_0884F684;
    return;
L_0884F684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F71C;
      }
      goto L_0884F6A0;
    }
L_0884F6A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(7922), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6EC;
      }
      goto L_0884F6C0;
    }
L_0884F6C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6EC;
      }
      goto L_0884F6D0;
    }
L_0884F6D0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x0884F6E0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x0884F6E0u) goto L_0884F6E0;
    return;
L_0884F6E0:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F774;
      }
      goto L_0884F6EC;
    }
L_0884F6EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884F704u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884F704u) goto L_0884F704;
    return;
L_0884F704:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F774;
      }
      goto L_0884F71C;
    }
L_0884F71C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0884F730u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F730u) goto L_0884F730;
    return;
L_0884F730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F774;
      }
      goto L_0884F74C;
    }
L_0884F74C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884F75Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884F75Cu) goto L_0884F75C;
    return;
L_0884F75C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884F774;
L_0884F774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884F77C;
    }
L_0884F77C:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884F7E4;
      }
      goto L_0884F790;
    }
L_0884F790:
    aot_gpr[31] = (0x0884F798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0884F798u) goto L_0884F798;
    return;
L_0884F798:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884F7E4;
      }
      goto L_0884F7A4;
    }
L_0884F7A4:
    aot_gpr[31] = (0x0884F7ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x0884F7ACu) goto L_0884F7AC;
    return;
L_0884F7AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7C8;
      }
      goto L_0884F7B4;
    }
L_0884F7B4:
    aot_gpr[31] = (0x0884F7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x0884F7BCu) goto L_0884F7BC;
    return;
L_0884F7BC:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F7E4;
      }
      goto L_0884F7C8;
    }
L_0884F7C8:
    aot_gpr[31] = (0x0884F7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 122u, 0x0889A810u>(ctx, &aot_mem) && ctx.pc == 0x0884F7D0u) goto L_0884F7D0;
    return;
L_0884F7D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7E4;
      }
      goto L_0884F7D8;
    }
L_0884F7D8:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0884F7E4;
L_0884F7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884F7EC;
    }
L_0884F7EC:
    aot_gpr[31] = (0x0884F7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x0884F7F4u) goto L_0884F7F4;
    return;
L_0884F7F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884F814;
      }
      goto L_0884F800;
    }
L_0884F800:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F814;
      }
      goto L_0884F808;
    }
L_0884F808:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0884F814;
L_0884F814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884F81C;
    }
L_0884F81C:
    aot_gpr[31] = (0x0884F824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x0884F824u) goto L_0884F824;
    return;
L_0884F824:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_0884F844;
    }
    goto L_0884F834;
L_0884F834:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884FA00;
      }
      goto L_0884F83C;
    }
L_0884F83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F9D0;
      }
      goto L_0884F844;
    }
L_0884F844:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA00;
      }
      goto L_0884F84C;
    }
L_0884F84C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26538)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F890;
      }
      goto L_0884F85C;
    }
L_0884F85C:
    aot_gpr[4] = (0u | 392u);
    aot_gpr[31] = (0x0884F868u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884F868u) goto L_0884F868;
    return;
L_0884F868:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F87Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884F87Cu) goto L_0884F87C;
    return;
L_0884F87C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F9C8;
      }
      goto L_0884F890;
    }
L_0884F890:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26652)));
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0884F8B0;
      }
      goto L_0884F8A4;
    }
L_0884F8A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26537)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F8E4;
      }
      goto L_0884F8B0;
    }
L_0884F8B0:
    aot_gpr[4] = (0u | 69u);
    aot_gpr[31] = (0x0884F8BCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884F8BCu) goto L_0884F8BC;
    return;
L_0884F8BC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F8D0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884F8D0u) goto L_0884F8D0;
    return;
L_0884F8D0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F9C8;
      }
      goto L_0884F8E4;
    }
L_0884F8E4:
    aot_gpr[31] = (0x0884F8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F8ECu) goto L_0884F8EC;
    return;
L_0884F8EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F938;
      }
      goto L_0884F8F8;
    }
L_0884F8F8:
    aot_gpr[31] = (0x0884F900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F900u) goto L_0884F900;
    return;
L_0884F900:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 99u);
    aot_gpr[31] = (0x0884F910u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884F910u) goto L_0884F910;
    return;
L_0884F910:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F924u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884F924u) goto L_0884F924;
    return;
L_0884F924:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F9C8;
      }
      goto L_0884F938;
    }
L_0884F938:
    aot_gpr[31] = (0x0884F940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F940u) goto L_0884F940;
    return;
L_0884F940:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0884F964;
      }
      goto L_0884F950;
    }
L_0884F950:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3032));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0884F9A8;
      }
      goto L_0884F964;
    }
L_0884F964:
    aot_gpr[31] = (0x0884F96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x0884F96Cu) goto L_0884F96C;
    return;
L_0884F96C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F988;
      }
      goto L_0884F974;
    }
L_0884F974:
    aot_gpr[31] = (0x0884F97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x0884F97Cu) goto L_0884F97C;
    return;
L_0884F97C:
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884F9C8;
      }
      goto L_0884F988;
    }
L_0884F988:
    aot_gpr[31] = (0x0884F990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 122u, 0x0889A810u>(ctx, &aot_mem) && ctx.pc == 0x0884F990u) goto L_0884F990;
    return;
L_0884F990:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F9C8;
      }
      goto L_0884F998;
    }
L_0884F998:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884F9C8;
      }
      goto L_0884F9A8;
    }
L_0884F9A8:
    aot_gpr[31] = (0x0884F9B0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0884F9B0u) goto L_0884F9B0;
    return;
L_0884F9B0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x0884F9C0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 154u, 0x08962B58u>(ctx, &aot_mem) && ctx.pc == 0x0884F9C0u) goto L_0884F9C0;
    return;
L_0884F9C0:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884F9C8;
L_0884F9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA00;
      }
      goto L_0884F9D0;
    }
L_0884F9D0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 302u);
    aot_gpr[31] = (0x0884F9E4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884F9E4u) goto L_0884F9E4;
    return;
L_0884F9E4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884F9F8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884F9F8u) goto L_0884F9F8;
    return;
L_0884F9F8:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884FA00;
L_0884FA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884FA08;
    }
L_0884FA08:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA28;
      }
      goto L_0884FA18;
    }
L_0884FA18:
    aot_gpr[31] = (0x0884FA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x0884FA20u) goto L_0884FA20;
    return;
L_0884FA20:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884FA28;
L_0884FA28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884FA30;
    }
L_0884FA30:
    aot_gpr[31] = (0x0884FA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x0884FA38u) goto L_0884FA38;
    return;
L_0884FA38:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884FAC4;
      }
      goto L_0884FA44;
    }
L_0884FA44:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FAC4;
      }
      goto L_0884FA4C;
    }
L_0884FA4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(7922), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA98;
      }
      goto L_0884FA6C;
    }
L_0884FA6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA98;
      }
      goto L_0884FA7C;
    }
L_0884FA7C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x0884FA8Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x0884FA8Cu) goto L_0884FA8C;
    return;
L_0884FA8C:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884FAC4;
      }
      goto L_0884FA98;
    }
L_0884FA98:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FAB0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884FAB0u) goto L_0884FAB0;
    return;
L_0884FAB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884FAC4;
L_0884FAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884FACC;
    }
L_0884FACC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884FAE4;
    }
L_0884FAE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB18;
      }
      goto L_0884FAEC;
    }
L_0884FAEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FB04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0884FB04u) goto L_0884FB04;
    return;
L_0884FB04:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0884FB18;
L_0884FB18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FB38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24016), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FB58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(208));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0884FB88u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FB88u) goto L_0884FB88;
    return;
L_0884FB88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0884FBEC;
      }
      goto L_0884FB90;
    }
L_0884FB90:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(7919)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FBACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FBACu) goto L_0884FBAC;
    return;
L_0884FBAC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884FBB8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FBB8u) goto L_0884FBB8;
    return;
L_0884FBB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7918)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FBD8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FBD8u) goto L_0884FBD8;
    return;
L_0884FBD8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884FBE4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FBE4u) goto L_0884FBE4;
    return;
L_0884FBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC84;
      }
      goto L_0884FBEC;
    }
L_0884FBEC:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x0884FBFCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FBFCu) goto L_0884FBFC;
    return;
L_0884FBFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC84;
      }
      goto L_0884FC04;
    }
L_0884FC04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7912)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FC24u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC24u) goto L_0884FC24;
    return;
L_0884FC24:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884FC30u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC30u) goto L_0884FC30;
    return;
L_0884FC30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FC4Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC4Cu) goto L_0884FC4C;
    return;
L_0884FC4C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884FC58u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC58u) goto L_0884FC58;
    return;
L_0884FC58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8000)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FC78u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(312));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC78u) goto L_0884FC78;
    return;
L_0884FC78:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884FC84u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC84u) goto L_0884FC84;
    return;
L_0884FC84:
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
L_0884FCA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(208));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0884FCD0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FCD0u) goto L_0884FCD0;
    return;
L_0884FCD0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0884FD44;
      }
      goto L_0884FCD8;
    }
L_0884FCD8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FCE8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FCE8u) goto L_0884FCE8;
    return;
L_0884FCE8:
    aot_gpr[31] = (0x0884FCF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884FCF0u) goto L_0884FCF0;
    return;
L_0884FCF0:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7919), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FD20u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FD20u) goto L_0884FD20;
    return;
L_0884FD20:
    aot_gpr[31] = (0x0884FD28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884FD28u) goto L_0884FD28;
    return;
L_0884FD28:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7918), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0884FE1C;
      }
      goto L_0884FD44;
    }
L_0884FD44:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(260));
    aot_gpr[31] = (0x0884FD54u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FD54u) goto L_0884FD54;
    return;
L_0884FD54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FE1C;
      }
      goto L_0884FD5C;
    }
L_0884FD5C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FD70u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FD70u) goto L_0884FD70;
    return;
L_0884FD70:
    aot_gpr[31] = (0x0884FD78u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884FD78u) goto L_0884FD78;
    return;
L_0884FD78:
    aot_gpr[18] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (15820u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7912), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0884FDAC;
      }
      goto L_0884FDA0;
    }
L_0884FDA0:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0884FDAC;
L_0884FDAC:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0884FDC8u);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FDC8u) goto L_0884FDC8;
    return;
L_0884FDC8:
    aot_gpr[31] = (0x0884FDD0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884FDD0u) goto L_0884FDD0;
    return;
L_0884FDD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7908), aot_gpr[2]);
      if (branch_taken) {
          goto L_0884FDF0;
      }
      goto L_0884FDE4;
    }
L_0884FDE4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0884FDF0;
L_0884FDF0:
    aot_gpr[31] = (0x0884FDF8u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 36u, 0x0886325Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FDF8u) goto L_0884FDF8;
    return;
L_0884FDF8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884FE0Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(312));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FE0Cu) goto L_0884FE0C;
    return;
L_0884FE0C:
    aot_gpr[31] = (0x0884FE14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884FE14u) goto L_0884FE14;
    return;
L_0884FE14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8000), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0884FE1C;
L_0884FE1C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FE38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24024), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FE58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF10;
      }
      goto L_0884FE6C;
    }
L_0884FE6C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(488)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FE84:
    aot_gpr[4] = (0u | 77u);
    aot_gpr[31] = (0x0884FE90u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FE90u) goto L_0884FE90;
    return;
L_0884FE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FE98;
    }
L_0884FE98:
    aot_gpr[4] = (0u | 73u);
    aot_gpr[31] = (0x0884FEA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FEA4u) goto L_0884FEA4;
    return;
L_0884FEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FEAC;
    }
L_0884FEAC:
    aot_gpr[4] = (0u | 76u);
    aot_gpr[31] = (0x0884FEB8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FEB8u) goto L_0884FEB8;
    return;
L_0884FEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FEC0;
    }
L_0884FEC0:
    aot_gpr[4] = (0u | 79u);
    aot_gpr[31] = (0x0884FECCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FECCu) goto L_0884FECC;
    return;
L_0884FECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FED4;
    }
L_0884FED4:
    aot_gpr[4] = (0u | 74u);
    aot_gpr[31] = (0x0884FEE0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FEE0u) goto L_0884FEE0;
    return;
L_0884FEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FEE8;
    }
L_0884FEE8:
    aot_gpr[4] = (0u | 78u);
    aot_gpr[31] = (0x0884FEF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FEF4u) goto L_0884FEF4;
    return;
L_0884FEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FEFC;
    }
L_0884FEFC:
    aot_gpr[4] = (0u | 75u);
    aot_gpr[31] = (0x0884FF08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FF08u) goto L_0884FF08;
    return;
L_0884FF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF1C;
      }
      goto L_0884FF10;
    }
L_0884FF10:
    aot_gpr[4] = (0u | 80u);
    aot_gpr[31] = (0x0884FF1Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FF1Cu) goto L_0884FF1C;
    return;
L_0884FF1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FF28:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FF34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 44u, 0x0885021Cu>(ctx, &aot_mem); return;
      }
      goto L_0884FF54;
    }
L_0884FF54:
    aot_gpr[31] = (0x0884FF5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884FF5Cu) goto L_0884FF5C;
    return;
L_0884FF5C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0884FF6C;
      }
      goto L_0884FF64;
    }
L_0884FF64:
    aot_gpr[31] = (0x0884FF6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884FF6Cu) goto L_0884FF6C;
    return;
L_0884FF6C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u | 234u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4808));
    aot_gpr[31] = (0x0884FF84u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FF84u) goto L_0884FF84;
    return;
L_0884FF84:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0884FF94u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884FF94u) goto L_0884FF94;
    return;
L_0884FF94:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(440));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(664)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884FFACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884FFACu) goto L_0884FFAC;
    return;
L_0884FFAC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0884FFBCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884FFBCu) goto L_0884FFBC;
    return;
L_0884FFBC:
    aot_gpr[31] = (0x0884FFC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FFC4u) goto L_0884FFC4;
    return;
L_0884FFC4:
    aot_gpr[4] = (0u | 235u);
    aot_gpr[31] = (0x0884FFD0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884FFD0u) goto L_0884FFD0;
    return;
L_0884FFD0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0884FFE0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x0884FFE0u) goto L_0884FFE0;
    return;
L_0884FFE0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(668)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884FFF0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884FFF0u) goto L_0884FFF0;
    return;
L_0884FFF0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08850000u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0075(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0075_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_75(Runtime &runtime) {
    runtime.register_generated_unit(75u, 0x0884F000u, 4096u, &recomp_unit_0075, &recomp_unit_0075_entry);
    runtime.register_function(0x0884F000u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F004u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F010u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F020u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F024u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F050u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F060u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F070u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F078u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F088u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F090u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F0E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F104u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F114u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F11Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F130u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F134u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F13Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F164u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F174u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F188u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F194u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F19Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F1F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F200u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F218u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F224u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F228u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F254u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F25Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F264u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F270u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F284u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F288u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F2FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F308u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F310u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F324u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F334u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F350u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F368u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F380u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F398u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F3A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F414u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F424u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F42Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F434u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F488u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F490u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F4C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F4C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F4E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F518u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F52Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F540u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F548u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F554u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F564u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F578u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F58Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F59Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F5A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F5E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F5F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F60Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F614u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F630u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F654u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F668u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F670u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F684u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F6A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F6C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F6D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F6E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F6ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F704u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F71Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F730u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F74Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F75Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F774u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F77Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F790u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F798u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F7F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F800u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F808u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F814u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F81Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F824u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F834u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F83Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F844u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F84Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F85Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F868u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F87Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F890u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F8F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F900u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F910u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F924u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F938u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F940u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F950u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F964u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F96Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F974u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F97Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F988u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F990u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F998u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884F9F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FA98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FAB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FAC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FACCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FAE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FAECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FB04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FB18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FB38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FB58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FB88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FB90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FBACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FBB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FBD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FBE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FBECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FBFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FC84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FCA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FCD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FCD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FCE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FCF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FD78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FDF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FE98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FECCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FED4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FEFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FF94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FFACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FFBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FFC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FFD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FFE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0884FFF0u, &recomp_unit_0075, "recomp_unit_0075");
}
} // namespace psprecomp
