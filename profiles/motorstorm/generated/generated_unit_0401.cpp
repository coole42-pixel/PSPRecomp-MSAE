#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0401[1022] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 12,
    0, 13, 0, 14, 15, 0, 16, 17, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 54, 0, 55, 0, 56, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 66,
    67, 0, 68, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87,
    0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 0, 0,
    94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103,
    0, 0, 0, 104, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 126, 0, 0, 0, 0, 0, 0, 127, 0,
    128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 134, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 148, 0, 0, 149, 150, 0, 0, 0, 0, 151, 0, 152, 0, 153,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164,
    0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 177, 0, 178, 0, 179, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 184, 0, 0, 0, 0,
    0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 198,
    0, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0,
    0, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 218, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0, 0, 230, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0,
    0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 247, 0, 248,
};
void recomp_unit_0401_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08995004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0401[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08995004;
    case 2u: goto L_08995018;
    case 3u: goto L_08995024;
    case 4u: goto L_0899502C;
    case 5u: goto L_08995034;
    case 6u: goto L_0899503C;
    case 7u: goto L_08995048;
    case 8u: goto L_08995054;
    case 9u: goto L_08995060;
    case 10u: goto L_08995068;
    case 11u: goto L_08995074;
    case 12u: goto L_08995080;
    case 13u: goto L_08995088;
    case 14u: goto L_08995090;
    case 15u: goto L_08995094;
    case 16u: goto L_0899509C;
    case 17u: goto L_089950A0;
    case 18u: goto L_089950A8;
    case 19u: goto L_089950B0;
    case 20u: goto L_089950B8;
    case 21u: goto L_089950C4;
    case 22u: goto L_089950CC;
    case 23u: goto L_089950D8;
    case 24u: goto L_089950E0;
    case 25u: goto L_089950E8;
    case 26u: goto L_089950F8;
    case 27u: goto L_08995120;
    case 28u: goto L_08995130;
    case 29u: goto L_08995140;
    case 30u: goto L_08995180;
    case 31u: goto L_089951A8;
    case 32u: goto L_089951B8;
    case 33u: goto L_089951C4;
    case 34u: goto L_089951DC;
    case 35u: goto L_089951E8;
    case 36u: goto L_08995218;
    case 37u: goto L_08995228;
    case 38u: goto L_08995238;
    case 39u: goto L_08995254;
    case 40u: goto L_08995294;
    case 41u: goto L_0899529C;
    case 42u: goto L_089952A8;
    case 43u: goto L_089952B8;
    case 44u: goto L_089952C8;
    case 45u: goto L_089952EC;
    case 46u: goto L_089952F4;
    case 47u: goto L_08995304;
    case 48u: goto L_08995314;
    case 49u: goto L_08995338;
    case 50u: goto L_0899534C;
    case 51u: goto L_08995354;
    case 52u: goto L_08995364;
    case 53u: goto L_08995380;
    case 54u: goto L_0899538C;
    case 55u: goto L_08995394;
    case 56u: goto L_0899539C;
    case 57u: goto L_089953A0;
    case 58u: goto L_089953A8;
    case 59u: goto L_089953B0;
    case 60u: goto L_089953BC;
    case 61u: goto L_089953C8;
    case 62u: goto L_089953CC;
    case 63u: goto L_089953E4;
    case 64u: goto L_089953EC;
    case 65u: goto L_089953F4;
    case 66u: goto L_08995400;
    case 67u: goto L_08995404;
    case 68u: goto L_0899540C;
    case 69u: goto L_08995410;
    case 70u: goto L_08995414;
    case 71u: goto L_08995440;
    case 72u: goto L_0899544C;
    case 73u: goto L_08995478;
    case 74u: goto L_08995494;
    case 75u: goto L_0899549C;
    case 76u: goto L_089954A4;
    case 77u: goto L_089954AC;
    case 78u: goto L_089954B4;
    case 79u: goto L_089954D0;
    case 80u: goto L_089954D8;
    case 81u: goto L_089954E4;
    case 82u: goto L_08995518;
    case 83u: goto L_08995534;
    case 84u: goto L_08995540;
    case 85u: goto L_0899556C;
    case 86u: goto L_08995578;
    case 87u: goto L_08995580;
    case 88u: goto L_08995598;
    case 89u: goto L_0899559C;
    case 90u: goto L_089955B4;
    case 91u: goto L_089955CC;
    case 92u: goto L_089955E8;
    case 93u: goto L_089955EC;
    case 94u: goto L_08995604;
    case 95u: goto L_0899560C;
    case 96u: goto L_08995614;
    case 97u: goto L_0899562C;
    case 98u: goto L_08995634;
    case 99u: goto L_0899564C;
    case 100u: goto L_08995654;
    case 101u: goto L_08995670;
    case 102u: goto L_08995678;
    case 103u: goto L_08995680;
    case 104u: goto L_08995690;
    case 105u: goto L_08995694;
    case 106u: goto L_089956A8;
    case 107u: goto L_089956B0;
    case 108u: goto L_089956B8;
    case 109u: goto L_089956C0;
    case 110u: goto L_089956C8;
    case 111u: goto L_089956D0;
    case 112u: goto L_089956FC;
    case 113u: goto L_08995704;
    case 114u: goto L_0899572C;
    case 115u: goto L_08995734;
    case 116u: goto L_0899573C;
    case 117u: goto L_08995744;
    case 118u: goto L_08995750;
    case 119u: goto L_08995770;
    case 120u: goto L_0899579C;
    case 121u: goto L_089957A0;
    case 122u: goto L_089957BC;
    case 123u: goto L_08995808;
    case 124u: goto L_08995854;
    case 125u: goto L_0899585C;
    case 126u: goto L_08995860;
    case 127u: goto L_0899587C;
    case 128u: goto L_08995884;
    case 129u: goto L_0899588C;
    case 130u: goto L_089958A4;
    case 131u: goto L_089958B0;
    case 132u: goto L_089958B8;
    case 133u: goto L_089958C4;
    case 134u: goto L_089958C8;
    case 135u: goto L_089958DC;
    case 136u: goto L_089958E4;
    case 137u: goto L_089958EC;
    case 138u: goto L_08995904;
    case 139u: goto L_08995950;
    case 140u: goto L_08995958;
    case 141u: goto L_08995984;
    case 142u: goto L_0899598C;
    case 143u: goto L_089959A8;
    case 144u: goto L_089959B0;
    case 145u: goto L_089959B8;
    case 146u: goto L_089959C0;
    case 147u: goto L_089959C8;
    case 148u: goto L_089959CC;
    case 149u: goto L_089959D8;
    case 150u: goto L_089959DC;
    case 151u: goto L_089959F0;
    case 152u: goto L_089959F8;
    case 153u: goto L_08995A00;
    case 154u: goto L_08995A18;
    case 155u: goto L_08995A64;
    case 156u: goto L_08995A6C;
    case 157u: goto L_08995A98;
    case 158u: goto L_08995AA0;
    case 159u: goto L_08995AC8;
    case 160u: goto L_08995AD0;
    case 161u: goto L_08995AD4;
    case 162u: goto L_08995AE8;
    case 163u: goto L_08995AF8;
    case 164u: goto L_08995B00;
    case 165u: goto L_08995B08;
    case 166u: goto L_08995B10;
    case 167u: goto L_08995B2C;
    case 168u: goto L_08995B34;
    case 169u: goto L_08995B3C;
    case 170u: goto L_08995B58;
    case 171u: goto L_08995B70;
    case 172u: goto L_08995B9C;
    case 173u: goto L_08995BAC;
    case 174u: goto L_08995BD8;
    case 175u: goto L_08995BE0;
    case 176u: goto L_08995C00;
    case 177u: goto L_08995C14;
    case 178u: goto L_08995C1C;
    case 179u: goto L_08995C24;
    case 180u: goto L_08995C28;
    case 181u: goto L_08995C44;
    case 182u: goto L_08995C68;
    case 183u: goto L_08995C6C;
    case 184u: goto L_08995C70;
    case 185u: goto L_08995C88;
    case 186u: goto L_08995C90;
    case 187u: goto L_08995C98;
    case 188u: goto L_08995CA0;
    case 189u: goto L_08995CB0;
    case 190u: goto L_08995CB8;
    case 191u: goto L_08995CC4;
    case 192u: goto L_08995CCC;
    case 193u: goto L_08995CD4;
    case 194u: goto L_08995CDC;
    case 195u: goto L_08995CE4;
    case 196u: goto L_08995CF0;
    case 197u: goto L_08995CF8;
    case 198u: goto L_08995D00;
    case 199u: goto L_08995D0C;
    case 200u: goto L_08995D14;
    case 201u: goto L_08995D1C;
    case 202u: goto L_08995D28;
    case 203u: goto L_08995D3C;
    case 204u: goto L_08995D44;
    case 205u: goto L_08995D48;
    case 206u: goto L_08995D50;
    case 207u: goto L_08995D58;
    case 208u: goto L_08995D60;
    case 209u: goto L_08995D68;
    case 210u: goto L_08995D70;
    case 211u: goto L_08995D78;
    case 212u: goto L_08995D8C;
    case 213u: goto L_08995D98;
    case 214u: goto L_08995DA0;
    case 215u: goto L_08995DA8;
    case 216u: goto L_08995DBC;
    case 217u: goto L_08995DC4;
    case 218u: goto L_08995DCC;
    case 219u: goto L_08995DD0;
    case 220u: goto L_08995DE0;
    case 221u: goto L_08995E0C;
    case 222u: goto L_08995E14;
    case 223u: goto L_08995E1C;
    case 224u: goto L_08995E24;
    case 225u: goto L_08995E4C;
    case 226u: goto L_08995E54;
    case 227u: goto L_08995E5C;
    case 228u: goto L_08995E60;
    case 229u: goto L_08995E68;
    case 230u: goto L_08995E74;
    case 231u: goto L_08995E8C;
    case 232u: goto L_08995ED8;
    case 233u: goto L_08995EE0;
    case 234u: goto L_08995F0C;
    case 235u: goto L_08995F38;
    case 236u: goto L_08995F64;
    case 237u: goto L_08995F6C;
    case 238u: goto L_08995F74;
    case 239u: goto L_08995F88;
    case 240u: goto L_08995F90;
    case 241u: goto L_08995F98;
    case 242u: goto L_08995FA0;
    case 243u: goto L_08995FCC;
    case 244u: goto L_08995FD8;
    case 245u: goto L_08995FE4;
    case 246u: goto L_08995FEC;
    case 247u: goto L_08995FF0;
    case 248u: goto L_08995FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08995004:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
        goto L_08995060;
    }
    goto L_08995018;
L_08995018:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08995024;
L_08995024:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    goto L_0899502C;
L_0899502C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 65535u);
      if (branch_taken) {
          goto L_0899503C;
      }
      goto L_08995034;
    }
L_08995034:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899503C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_08995034;
      }
      goto L_08995048;
    }
L_08995048:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08995034;
      }
      goto L_08995054;
    }
L_08995054:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27872));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995060:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08995024;
L_08995068:
    aot_gpr[5] = ((aot_gpr[5] & ~0xE0000000u) | ((0u & 0x00000007u) << 29u));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0899509C;
      }
      goto L_08995074;
    }
L_08995074:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_08995094;
    }
    goto L_08995080;
L_08995080:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995088:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089950A0;
      }
      goto L_08995090;
    }
L_08995090:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    goto L_08995094;
L_08995094:
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_08995088;
    }
    goto L_0899509C;
L_0899509C:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    goto L_089950A0;
L_089950A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089950A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089950E0;
      }
      goto L_089950B0;
    }
L_089950B0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089950E0;
      }
      goto L_089950B8;
    }
L_089950B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089950E8;
      }
      goto L_089950C4;
    }
L_089950C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089950CC;
L_089950CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
        goto L_089950E0;
    }
    goto L_089950D8;
L_089950D8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089950E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089950E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089950CC;
L_089950F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    aot_gpr[31] = (0x08995120u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08995120u) goto L_08995120;
    return;
L_08995120:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08995130u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08995130u) goto L_08995130;
    return;
L_08995130:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08995140u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08995140u) goto L_08995140;
    return;
L_08995140:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 24u);
    aot_gpr[3] = (aot_gpr[3] << 16u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] << 8u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[31] = (0x089951A8u);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 4u, 0x0899D780u>(ctx, &aot_mem) && ctx.pc == 0x089951A8u) goto L_089951A8;
    return;
L_089951A8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089951B8u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 22u, 0x0899DAA0u>(ctx, &aot_mem) && ctx.pc == 0x089951B8u) goto L_089951B8;
    return;
L_089951B8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089951C4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0409_entry, 409u, 5u, 0x0899D79Cu>(ctx, &aot_mem) && ctx.pc == 0x089951C4u) goto L_089951C4;
    return;
L_089951C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089951DC:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-18044));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089951E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[31] = (0x08995218u);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08995218u) goto L_08995218;
    return;
L_08995218:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08995228u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08995228u) goto L_08995228;
    return;
L_08995228:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08995238u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08995238u) goto L_08995238;
    return;
L_08995238:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[31]);
    aot_gpr[31] = (0x08995294u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08995294u) goto L_08995294;
    return;
L_08995294:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089952A8;
      }
      goto L_0899529C;
    }
L_0899529C:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089952EC;
      }
      goto L_089952A8;
    }
L_089952A8:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089952B8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x089952B8u) goto L_089952B8;
    return;
L_089952B8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089952C8u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x089952C8u) goto L_089952C8;
    return;
L_089952C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089952EC:
    aot_gpr[31] = (0x089952F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x089952F4u) goto L_089952F4;
    return;
L_089952F4:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08995304u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08995304u) goto L_08995304;
    return;
L_08995304:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08995314u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08995314u) goto L_08995314;
    return;
L_08995314:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995338:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0899534Cu);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x0899534Cu) goto L_0899534C;
    return;
L_0899534C:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[16]);
        goto L_08995354;
    }
    goto L_08995354;
L_08995354:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08995380u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08995380u) goto L_08995380;
    return;
L_08995380:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089953CC;
      }
      goto L_0899538C;
    }
L_0899538C:
    aot_gpr[31] = (0x08995394u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08995394u) goto L_08995394;
    return;
L_08995394:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
        goto L_089953E4;
    }
    goto L_0899539C;
L_0899539C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089953A0;
L_089953A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089953B0;
      }
      goto L_089953A8;
    }
L_089953A8:
    aot_gpr[31] = (0x089953B0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089953B0u) goto L_089953B0;
    return;
L_089953B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089953CC;
      }
      goto L_089953BC;
    }
L_089953BC:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089953C8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089953C8u) goto L_089953C8;
    return;
L_089953C8:
    aot_gpr[2] = (0u + 0u);
    goto L_089953CC;
L_089953CC:
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
L_089953E4:
    aot_gpr[31] = (0x089953ECu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089953ECu) goto L_089953EC;
    return;
L_089953EC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089953A0;
    }
    goto L_089953F4;
L_089953F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089954A4;
      }
      goto L_08995400;
    }
L_08995400:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08995404;
L_08995404:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08995494;
      }
      goto L_0899540C;
    }
L_0899540C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08995410;
L_08995410:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    goto L_08995414;
L_08995414:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995414;
      }
      goto L_08995440;
    }
L_08995440:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
    goto L_0899544C;
L_0899544C:
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
          goto L_0899544C;
      }
      goto L_08995478;
    }
L_08995478:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995494:
    aot_gpr[31] = (0x0899549Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x0899549Cu) goto L_0899549C;
    return;
L_0899549C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08995410;
L_089954A4:
    aot_gpr[31] = (0x089954ACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x089954ACu) goto L_089954AC;
    return;
L_089954AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08995404;
L_089954B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089954D0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x089954D0u) goto L_089954D0;
    return;
L_089954D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0899559C;
      }
      goto L_089954D8;
    }
L_089954D8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089954E4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x089954E4u) goto L_089954E4;
    return;
L_089954E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_089955E8;
      }
      goto L_08995518;
    }
L_08995518:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
        goto L_08995540;
    }
    goto L_08995534;
L_08995534:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08995540;
L_08995540:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[5] = ((aot_gpr[5] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (16384u << 16u);
    aot_gpr[8] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
      if (branch_taken) {
          goto L_089955B4;
      }
      goto L_0899556C;
    }
L_0899556C:
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_08995604;
      }
      goto L_08995578;
    }
L_08995578:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089955EC;
      }
      goto L_08995580;
    }
L_08995580:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[31] = (0x08995598u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(136));
    goto L_08995364;
L_08995598:
    aot_gpr[3] = (0u + 0u);
    goto L_0899559C;
L_0899559C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089955B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[31] = (0x089955CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(392));
    goto L_08995364;
L_089955CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089955E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089955EC;
L_089955EC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995604:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (49152u << 16u);
      if (branch_taken) {
          goto L_08995634;
      }
      goto L_0899560C;
    }
L_0899560C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089955EC;
      }
      goto L_08995614;
    }
L_08995614:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1536));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[31] = (0x0899562Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(264));
    goto L_08995364;
L_0899562C:
    aot_gpr[3] = (0u + 0u);
    goto L_0899559C;
L_08995634:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[31] = (0x0899564Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08995364;
L_0899564C:
    aot_gpr[3] = (0u + 0u);
    goto L_0899559C;
L_08995654:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08995670u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08995670u) goto L_08995670;
    return;
L_08995670:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089956A8;
      }
      goto L_08995678;
    }
L_08995678:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995694;
      }
      goto L_08995680;
    }
L_08995680:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08995690u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08995690u) goto L_08995690;
    return;
L_08995690:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08995694;
L_08995694:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089956A8:
    aot_gpr[31] = (0x089956B0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08995068;
L_089956B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08995678;
      }
      goto L_089956B8;
    }
L_089956B8:
    aot_gpr[31] = (0x089956C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x089956C0u) goto L_089956C0;
    return;
L_089956C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08995678;
      }
      goto L_089956C8;
    }
L_089956C8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    goto L_089956D0;
L_089956D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089956D0;
      }
      goto L_089956FC;
    }
L_089956FC:
    aot_gpr[2] = (0u + 0u);
    goto L_08995694;
L_08995704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0899572Cu);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x0899572Cu) goto L_0899572C;
    return;
L_0899572C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0899585C;
      }
      goto L_08995734;
    }
L_08995734:
    aot_gpr[31] = (0x0899573Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x0899573Cu) goto L_0899573C;
    return;
L_0899573C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08995860;
      }
      goto L_08995744;
    }
L_08995744:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0899587C;
      }
      goto L_08995750;
    }
L_08995750:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[19]);
      if (branch_taken) {
          goto L_089957BC;
      }
      goto L_08995770;
    }
L_08995770:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995770;
      }
      goto L_0899579C;
    }
L_0899579C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089957A0;
L_089957A0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089957BC:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0899579C;
      }
      goto L_08995808;
    }
L_08995808:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089957BC;
      }
      goto L_08995854;
    }
L_08995854:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089957A0;
L_0899585C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08995860;
L_08995860:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899587C:
    aot_gpr[31] = (0x08995884u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08995884u) goto L_08995884;
    return;
L_08995884:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08995750;
L_0899588C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089958A4u);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x089958A4u) goto L_089958A4;
    return;
L_089958A4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089958C8;
      }
      goto L_089958B0;
    }
L_089958B0:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089958DC;
      }
      goto L_089958B8;
    }
L_089958B8:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089958C4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089958C4u) goto L_089958C4;
    return;
L_089958C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089958C8;
L_089958C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089958DC:
    aot_gpr[31] = (0x089958E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x089958E4u) goto L_089958E4;
    return;
L_089958E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089958B8;
      }
      goto L_089958EC;
    }
L_089958EC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08995958;
      }
      goto L_08995904;
    }
L_08995904:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995904;
      }
      goto L_08995950;
    }
L_08995950:
    aot_gpr[2] = (0u + 0u);
    goto L_089958C8;
L_08995958:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995958;
      }
      goto L_08995984;
    }
L_08995984:
    aot_gpr[2] = (0u + 0u);
    goto L_089958C8;
L_0899598C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089959A8u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x089959A8u) goto L_089959A8;
    return;
L_089959A8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_089959DC;
    }
    goto L_089959B0;
L_089959B0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089959D8;
      }
      goto L_089959B8;
    }
L_089959B8:
    aot_gpr[31] = (0x089959C0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08995068;
L_089959C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089959F0;
      }
      goto L_089959C8;
    }
L_089959C8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089959CC;
L_089959CC:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089959D8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089959D8u) goto L_089959D8;
    return;
L_089959D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089959DC;
L_089959DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089959F0:
    aot_gpr[31] = (0x089959F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x089959F8u) goto L_089959F8;
    return;
L_089959F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089959CC;
      }
      goto L_08995A00;
    }
L_08995A00:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08995A6C;
      }
      goto L_08995A18;
    }
L_08995A18:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995A18;
      }
      goto L_08995A64;
    }
L_08995A64:
    aot_gpr[2] = (0u + 0u);
    goto L_089959DC;
L_08995A6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995A6C;
      }
      goto L_08995A98;
    }
L_08995A98:
    aot_gpr[2] = (0u + 0u);
    goto L_089959DC;
L_08995AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    aot_gpr[31] = (0x08995AC8u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08995AC8u) goto L_08995AC8;
    return;
L_08995AC8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995AE8;
      }
      goto L_08995AD0;
    }
L_08995AD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08995AD4;
L_08995AD4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995AE8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08995AF8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    goto L_0899598C;
L_08995AF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_08995B3C;
      }
      goto L_08995B00;
    }
L_08995B00:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(63));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(-1));
    goto L_08995B08;
L_08995B08:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08995AD0;
      }
      goto L_08995B10;
    }
L_08995B10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(63)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995B3C;
      }
      goto L_08995B2C;
    }
L_08995B2C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995B08;
      }
      goto L_08995B34;
    }
L_08995B34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08995AD4;
L_08995B3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995B58:
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[9] = (aot_gpr[5] + 0u);
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(584));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(520));
    goto L_08995B70;
L_08995B70:
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
          goto L_08995B70;
      }
      goto L_08995B9C;
    }
L_08995B9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[7] = (aot_gpr[9] + 0u);
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(648));
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(584));
    goto L_08995BAC;
L_08995BAC:
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
          goto L_08995BAC;
      }
      goto L_08995BD8;
    }
L_08995BD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995BE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
      if (branch_taken) {
          goto L_08995C68;
      }
      goto L_08995C00;
    }
L_08995C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08995C14u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08995C14u) goto L_08995C14;
    return;
L_08995C14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995C88;
      }
      goto L_08995C1C;
    }
L_08995C1C:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08995C44;
      }
      goto L_08995C24;
    }
L_08995C24:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27316));
    goto L_08995C28;
L_08995C28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
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
L_08995C44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27176));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995C68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_08995C6C;
L_08995C6C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_08995C70;
L_08995C70:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995C88:
    aot_gpr[31] = (0x08995C90u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08995C90u) goto L_08995C90;
    return;
L_08995C90:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08995CD4;
      }
      goto L_08995C98;
    }
L_08995C98:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995CB0;
      }
      goto L_08995CA0;
    }
L_08995CA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995CC4;
      }
      goto L_08995CB0;
    }
L_08995CB0:
    if (aot_gpr[17] == aot_gpr[2]) {
    aot_gpr[2] = (2201u << 16u);
        goto L_08995D68;
    }
    goto L_08995CB8;
L_08995CB8:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27600));
    goto L_08995C28;
L_08995CC4:
    aot_gpr[31] = (0x08995CCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08995CCCu) goto L_08995CCC;
    return;
L_08995CCC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08995CB0;
      }
      goto L_08995CD4;
    }
L_08995CD4:
    aot_gpr[31] = (0x08995CDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08995CDCu) goto L_08995CDC;
    return;
L_08995CDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08995D00;
      }
      goto L_08995CE4;
    }
L_08995CE4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08995D70;
      }
      goto L_08995CF0;
    }
L_08995CF0:
    aot_gpr[31] = (0x08995CF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08995CF8u) goto L_08995CF8;
    return;
L_08995CF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08995D70;
      }
      goto L_08995D00;
    }
L_08995D00:
    aot_gpr[16] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[16];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08995C6C;
      }
      goto L_08995D0C;
    }
L_08995D0C:
    aot_gpr[31] = (0x08995D14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08995D14u) goto L_08995D14;
    return;
L_08995D14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08995C6C;
      }
      goto L_08995D1C;
    }
L_08995D1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[2] == aot_gpr[16]) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
        goto L_08995C70;
    }
    goto L_08995D28;
L_08995D28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (16384u << 16u);
    aot_gpr[3] = ((aot_gpr[3] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (aot_gpr[29] + 0u);
        goto L_08995D48;
    }
    goto L_08995D3C;
L_08995D3C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08995C70;
      }
      goto L_08995D44;
    }
L_08995D44:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_08995D48;
L_08995D48:
    aot_gpr[31] = (0x08995D50u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08995B58;
L_08995D50:
    aot_gpr[31] = (0x08995D58u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem) && ctx.pc == 0x08995D58u) goto L_08995D58;
    return;
L_08995D58:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2201u << 16u);
      if (branch_taken) {
          goto L_08995C68;
      }
      goto L_08995D60;
    }
L_08995D60:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27872));
    goto L_08995C28;
L_08995D68:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27456));
    goto L_08995C28;
L_08995D70:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(27744));
    goto L_08995C28;
L_08995D78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08995D8Cu);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08995D8Cu) goto L_08995D8C;
    return;
L_08995D8C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08995DD0;
      }
      goto L_08995D98;
    }
L_08995D98:
    aot_gpr[31] = (0x08995DA0u);
    // nop
    goto L_08995068;
L_08995DA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08995DD0;
      }
      goto L_08995DA8;
    }
L_08995DA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08995DC4;
      }
      goto L_08995DBC;
    }
L_08995DBC:
    aot_gpr[31] = (0x08995DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08995DC4u) goto L_08995DC4;
    return;
L_08995DC4:
    aot_gpr[31] = (0x08995DCCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08995BE0;
L_08995DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_08995DD0;
L_08995DD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995DE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08995E0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08995E0Cu) goto L_08995E0C;
    return;
L_08995E0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08995E24;
      }
      goto L_08995E14;
    }
L_08995E14:
    aot_gpr[31] = (0x08995E1Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 182u, 0x08994ECCu>(ctx, &aot_mem) && ctx.pc == 0x08995E1Cu) goto L_08995E1C;
    return;
L_08995E1C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_08995E4C;
    }
    goto L_08995E24;
L_08995E24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08995E4C:
    aot_gpr[31] = (0x08995E54u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_08995068;
L_08995E54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08995F6C;
      }
      goto L_08995E5C;
    }
L_08995E5C:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_08995E60;
L_08995E60:
    aot_gpr[31] = (0x08995E68u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 188u, 0x08994F04u>(ctx, &aot_mem) && ctx.pc == 0x08995E68u) goto L_08995E68;
    return;
L_08995E68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08995F90;
      }
      goto L_08995E74;
    }
L_08995E74:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[19] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08995F0C;
      }
      goto L_08995E8C;
    }
L_08995E8C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995E8C;
      }
      goto L_08995ED8;
    }
L_08995ED8:
    aot_gpr[31] = (0x08995EE0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08995BE0;
L_08995EE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
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
L_08995F0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995ED8;
      }
      goto L_08995F38;
    }
L_08995F38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08995F0C;
      }
      goto L_08995F64;
    }
L_08995F64:
    // nop
    goto L_08995ED8;
L_08995F6C:
    aot_gpr[31] = (0x08995F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 194u, 0x08994F48u>(ctx, &aot_mem) && ctx.pc == 0x08995F74u) goto L_08995F74;
    return;
L_08995F74:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08995F88u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 207u, 0x08994FFCu>(ctx, &aot_mem) && ctx.pc == 0x08995F88u) goto L_08995F88;
    return;
L_08995F88:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    goto L_08995E60;
L_08995F90:
    aot_gpr[31] = (0x08995F98u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08995F98u) goto L_08995F98;
    return;
L_08995F98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08995E74;
L_08995FA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08995FCCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 163u, 0x0898FA08u>(ctx, &aot_mem) && ctx.pc == 0x08995FCCu) goto L_08995FCC;
    return;
L_08995FCC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 6u, 0x0899602Cu>(ctx, &aot_mem); return;
      }
      goto L_08995FD8;
    }
L_08995FD8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08995FE4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    goto L_08995068;
L_08995FE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0402_entry, 402u, 12u, 0x089960A0u>(ctx, &aot_mem); return;
      }
      goto L_08995FEC;
    }
L_08995FEC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08995FF0;
L_08995FF0:
    aot_gpr[31] = (0x08995FF8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 188u, 0x08994F04u>(ctx, &aot_mem) && ctx.pc == 0x08995FF8u) goto L_08995FF8;
    return;
L_08995FF8:
    aot_gpr[31] = (0x08996000u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 135u, 0x0898F898u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0401(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0401_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_401(Runtime &runtime) {
    runtime.register_generated_unit(401u, 0x08995000u, 4096u, &recomp_unit_0401, &recomp_unit_0401_entry);
    runtime.register_function(0x08995004u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995018u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995024u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899502Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995034u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899503Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995048u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995054u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995060u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995068u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995074u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995080u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995088u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995090u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995094u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899509Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950A0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950A8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950B0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950B8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950C4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950CCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950D8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950E0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950E8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089950F8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995120u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995130u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995140u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995180u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089951A8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089951B8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089951C4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089951DCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089951E8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995218u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995228u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995238u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995254u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995294u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899529Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089952A8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089952B8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089952C8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089952ECu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089952F4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995304u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995314u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995338u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899534Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995354u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995364u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995380u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899538Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995394u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899539Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953A0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953A8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953B0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953BCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953C8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953CCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953E4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953ECu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089953F4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995400u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995404u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899540Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995410u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995414u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995440u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899544Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995478u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995494u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899549Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089954A4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089954ACu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089954B4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089954D0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089954D8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089954E4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995518u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995534u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995540u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899556Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995578u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995580u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995598u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899559Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089955B4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089955CCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089955E8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089955ECu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995604u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899560Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995614u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899562Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995634u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899564Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995654u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995670u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995678u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995680u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995690u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995694u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956A8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956B0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956B8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956C0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956C8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956D0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089956FCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995704u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899572Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995734u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899573Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995744u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995750u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995770u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899579Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089957A0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089957BCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995808u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995854u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899585Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995860u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899587Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995884u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899588Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958A4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958B0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958B8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958C4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958C8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958DCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958E4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089958ECu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995904u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995950u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995958u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995984u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x0899598Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959A8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959B0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959B8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959C0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959C8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959CCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959D8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959DCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959F0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x089959F8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995A00u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995A18u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995A64u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995A6Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995A98u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995AA0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995AC8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995AD0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995AD4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995AE8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995AF8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B00u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B08u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B10u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B2Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B34u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B3Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B58u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B70u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995B9Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995BACu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995BD8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995BE0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C00u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C14u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C1Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C24u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C28u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C44u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C68u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C6Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C70u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C88u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C90u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995C98u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CA0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CB0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CB8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CC4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CCCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CD4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CDCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CE4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CF0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995CF8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D00u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D0Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D14u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D1Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D28u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D3Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D44u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D48u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D50u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D58u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D60u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D68u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D70u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D78u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D8Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995D98u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DA0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DA8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DBCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DC4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DCCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DD0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995DE0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E0Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E14u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E1Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E24u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E4Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E54u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E5Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E60u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E68u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E74u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995E8Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995ED8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995EE0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F0Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F38u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F64u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F6Cu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F74u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F88u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F90u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995F98u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FA0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FCCu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FD8u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FE4u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FECu, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FF0u, &recomp_unit_0401, "recomp_unit_0401");
    runtime.register_function(0x08995FF8u, &recomp_unit_0401, "recomp_unit_0401");
}
} // namespace psprecomp
