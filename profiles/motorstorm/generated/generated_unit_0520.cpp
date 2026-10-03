#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0520[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52,
    0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81,
    0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107,
    0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 161, 0, 162, 0, 0, 163, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 169, 0, 0, 170, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0,
    177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0,
    186, 0, 187, 0, 0, 188, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223,
};
void recomp_unit_0520_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A0C000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0520[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0C000;
    case 2u: goto L_08A0C018;
    case 3u: goto L_08A0C030;
    case 4u: goto L_08A0C03C;
    case 5u: goto L_08A0C044;
    case 6u: goto L_08A0C058;
    case 7u: goto L_08A0C060;
    case 8u: goto L_08A0C06C;
    case 9u: goto L_08A0C08C;
    case 10u: goto L_08A0C098;
    case 11u: goto L_08A0C0AC;
    case 12u: goto L_08A0C0CC;
    case 13u: goto L_08A0C0E8;
    case 14u: goto L_08A0C100;
    case 15u: goto L_08A0C10C;
    case 16u: goto L_08A0C114;
    case 17u: goto L_08A0C128;
    case 18u: goto L_08A0C130;
    case 19u: goto L_08A0C13C;
    case 20u: goto L_08A0C17C;
    case 21u: goto L_08A0C194;
    case 22u: goto L_08A0C1B0;
    case 23u: goto L_08A0C1C4;
    case 24u: goto L_08A0C1E4;
    case 25u: goto L_08A0C200;
    case 26u: goto L_08A0C218;
    case 27u: goto L_08A0C224;
    case 28u: goto L_08A0C22C;
    case 29u: goto L_08A0C240;
    case 30u: goto L_08A0C248;
    case 31u: goto L_08A0C254;
    case 32u: goto L_08A0C284;
    case 33u: goto L_08A0C294;
    case 34u: goto L_08A0C2A8;
    case 35u: goto L_08A0C2BC;
    case 36u: goto L_08A0C2DC;
    case 37u: goto L_08A0C2F8;
    case 38u: goto L_08A0C310;
    case 39u: goto L_08A0C31C;
    case 40u: goto L_08A0C324;
    case 41u: goto L_08A0C338;
    case 42u: goto L_08A0C340;
    case 43u: goto L_08A0C34C;
    case 44u: goto L_08A0C360;
    case 45u: goto L_08A0C36C;
    case 46u: goto L_08A0C380;
    case 47u: goto L_08A0C3A0;
    case 48u: goto L_08A0C3BC;
    case 49u: goto L_08A0C3D4;
    case 50u: goto L_08A0C3E0;
    case 51u: goto L_08A0C3E8;
    case 52u: goto L_08A0C3FC;
    case 53u: goto L_08A0C404;
    case 54u: goto L_08A0C410;
    case 55u: goto L_08A0C424;
    case 56u: goto L_08A0C430;
    case 57u: goto L_08A0C454;
    case 58u: goto L_08A0C48C;
    case 59u: goto L_08A0C4A8;
    case 60u: goto L_08A0C4C0;
    case 61u: goto L_08A0C4CC;
    case 62u: goto L_08A0C4D4;
    case 63u: goto L_08A0C4E8;
    case 64u: goto L_08A0C4FC;
    case 65u: goto L_08A0C510;
    case 66u: goto L_08A0C518;
    case 67u: goto L_08A0C528;
    case 68u: goto L_08A0C534;
    case 69u: goto L_08A0C53C;
    case 70u: goto L_08A0C548;
    case 71u: goto L_08A0C55C;
    case 72u: goto L_08A0C568;
    case 73u: goto L_08A0C570;
    case 74u: goto L_08A0C584;
    case 75u: goto L_08A0C594;
    case 76u: goto L_08A0C5A4;
    case 77u: goto L_08A0C5B4;
    case 78u: goto L_08A0C5C4;
    case 79u: goto L_08A0C5D4;
    case 80u: goto L_08A0C5F4;
    case 81u: goto L_08A0C5FC;
    case 82u: goto L_08A0C604;
    case 83u: goto L_08A0C618;
    case 84u: goto L_08A0C620;
    case 85u: goto L_08A0C62C;
    case 86u: goto L_08A0C63C;
    case 87u: goto L_08A0C658;
    case 88u: goto L_08A0C664;
    case 89u: goto L_08A0C6AC;
    case 90u: goto L_08A0C6C0;
    case 91u: goto L_08A0C6C8;
    case 92u: goto L_08A0C6D0;
    case 93u: goto L_08A0C6D8;
    case 94u: goto L_08A0C718;
    case 95u: goto L_08A0C72C;
    case 96u: goto L_08A0C748;
    case 97u: goto L_08A0C75C;
    case 98u: goto L_08A0C774;
    case 99u: goto L_08A0C77C;
    case 100u: goto L_08A0C790;
    case 101u: goto L_08A0C7A4;
    case 102u: goto L_08A0C7AC;
    case 103u: goto L_08A0C7B8;
    case 104u: goto L_08A0C7C8;
    case 105u: goto L_08A0C7D0;
    case 106u: goto L_08A0C7E0;
    case 107u: goto L_08A0C7FC;
    case 108u: goto L_08A0C804;
    case 109u: goto L_08A0C814;
    case 110u: goto L_08A0C81C;
    case 111u: goto L_08A0C82C;
    case 112u: goto L_08A0C834;
    case 113u: goto L_08A0C858;
    case 114u: goto L_08A0C878;
    case 115u: goto L_08A0C890;
    case 116u: goto L_08A0C8B0;
    case 117u: goto L_08A0C8CC;
    case 118u: goto L_08A0C8F8;
    case 119u: goto L_08A0C90C;
    case 120u: goto L_08A0C910;
    case 121u: goto L_08A0C930;
    case 122u: goto L_08A0C978;
    case 123u: goto L_08A0C9A4;
    case 124u: goto L_08A0C9B0;
    case 125u: goto L_08A0C9B8;
    case 126u: goto L_08A0C9C0;
    case 127u: goto L_08A0C9E0;
    case 128u: goto L_08A0C9E8;
    case 129u: goto L_08A0C9F0;
    case 130u: goto L_08A0CA08;
    case 131u: goto L_08A0CA10;
    case 132u: goto L_08A0CA20;
    case 133u: goto L_08A0CA2C;
    case 134u: goto L_08A0CA34;
    case 135u: goto L_08A0CA3C;
    case 136u: goto L_08A0CA48;
    case 137u: goto L_08A0CA4C;
    case 138u: goto L_08A0CA68;
    case 139u: goto L_08A0CA88;
    case 140u: goto L_08A0CA94;
    case 141u: goto L_08A0CAA8;
    case 142u: goto L_08A0CAB8;
    case 143u: goto L_08A0CAC0;
    case 144u: goto L_08A0CAEC;
    case 145u: goto L_08A0CB04;
    case 146u: goto L_08A0CB18;
    case 147u: goto L_08A0CB2C;
    case 148u: goto L_08A0CB34;
    case 149u: goto L_08A0CB3C;
    case 150u: goto L_08A0CB68;
    case 151u: goto L_08A0CB70;
    case 152u: goto L_08A0CB78;
    case 153u: goto L_08A0CB84;
    case 154u: goto L_08A0CBA0;
    case 155u: goto L_08A0CBC0;
    case 156u: goto L_08A0CBC8;
    case 157u: goto L_08A0CBD0;
    case 158u: goto L_08A0CBD8;
    case 159u: goto L_08A0CBE0;
    case 160u: goto L_08A0CC00;
    case 161u: goto L_08A0CC08;
    case 162u: goto L_08A0CC10;
    case 163u: goto L_08A0CC1C;
    case 164u: goto L_08A0CC20;
    case 165u: goto L_08A0CC48;
    case 166u: goto L_08A0CC50;
    case 167u: goto L_08A0CC58;
    case 168u: goto L_08A0CC64;
    case 169u: goto L_08A0CC68;
    case 170u: goto L_08A0CC74;
    case 171u: goto L_08A0CC8C;
    case 172u: goto L_08A0CCBC;
    case 173u: goto L_08A0CCC4;
    case 174u: goto L_08A0CCD8;
    case 175u: goto L_08A0CCE0;
    case 176u: goto L_08A0CCE8;
    case 177u: goto L_08A0CD00;
    case 178u: goto L_08A0CD0C;
    case 179u: goto L_08A0CD1C;
    case 180u: goto L_08A0CD24;
    case 181u: goto L_08A0CD44;
    case 182u: goto L_08A0CD50;
    case 183u: goto L_08A0CD58;
    case 184u: goto L_08A0CD60;
    case 185u: goto L_08A0CD78;
    case 186u: goto L_08A0CD80;
    case 187u: goto L_08A0CD88;
    case 188u: goto L_08A0CD94;
    case 189u: goto L_08A0CD98;
    case 190u: goto L_08A0CDA4;
    case 191u: goto L_08A0CDAC;
    case 192u: goto L_08A0CDB4;
    case 193u: goto L_08A0CDC0;
    case 194u: goto L_08A0CDC8;
    case 195u: goto L_08A0CDDC;
    case 196u: goto L_08A0CE08;
    case 197u: goto L_08A0CE2C;
    case 198u: goto L_08A0CE40;
    case 199u: goto L_08A0CE50;
    case 200u: goto L_08A0CE60;
    case 201u: goto L_08A0CE68;
    case 202u: goto L_08A0CE7C;
    case 203u: goto L_08A0CE90;
    case 204u: goto L_08A0CE98;
    case 205u: goto L_08A0CEAC;
    case 206u: goto L_08A0CEC0;
    case 207u: goto L_08A0CECC;
    case 208u: goto L_08A0CEFC;
    case 209u: goto L_08A0CF04;
    case 210u: goto L_08A0CF10;
    case 211u: goto L_08A0CF18;
    case 212u: goto L_08A0CF20;
    case 213u: goto L_08A0CF28;
    case 214u: goto L_08A0CF50;
    case 215u: goto L_08A0CF64;
    case 216u: goto L_08A0CF68;
    case 217u: goto L_08A0CF98;
    case 218u: goto L_08A0CFA4;
    case 219u: goto L_08A0CFAC;
    case 220u: goto L_08A0CFB0;
    case 221u: goto L_08A0CFD4;
    case 222u: goto L_08A0CFE8;
    case 223u: goto L_08A0CFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0C000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C044;
      }
      goto L_08A0C018;
    }
L_08A0C018:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12728));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C030u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 231u, 0x08A0BF94u>(ctx, &aot_mem) && ctx.pc == 0x08A0C030u) goto L_08A0C030;
    return;
L_08A0C030:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C044;
      }
      goto L_08A0C03C;
    }
L_08A0C03C:
    aot_gpr[31] = (0x08A0C044u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C044u) goto L_08A0C044;
    return;
L_08A0C044:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C058:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C060:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4048));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26044)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C08Cu);
    aot_gpr[6] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 213u, 0x08A07C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C08Cu) goto L_08A0C08C;
    return;
L_08A0C08C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C0ACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 230u, 0x08A0BF80u>(ctx, &aot_mem) && ctx.pc == 0x08A0C0ACu) goto L_08A0C0AC;
    return;
L_08A0C0AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12768));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C0CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C114;
      }
      goto L_08A0C0E8;
    }
L_08A0C0E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12768));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C100u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 231u, 0x08A0BF94u>(ctx, &aot_mem) && ctx.pc == 0x08A0C100u) goto L_08A0C100;
    return;
L_08A0C100:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C114;
      }
      goto L_08A0C10C;
    }
L_08A0C10C:
    aot_gpr[31] = (0x08A0C114u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C114u) goto L_08A0C114;
    return;
L_08A0C114:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C128:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C130:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4048));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0C17Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0C17Cu) goto L_08A0C17C;
    return;
L_08A0C17C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0C194u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 213u, 0x08A07C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C194u) goto L_08A0C194;
    return;
L_08A0C194:
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
L_08A0C1B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C1C4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 230u, 0x08A0BF80u>(ctx, &aot_mem) && ctx.pc == 0x08A0C1C4u) goto L_08A0C1C4;
    return;
L_08A0C1C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12808));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C1E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C22C;
      }
      goto L_08A0C200;
    }
L_08A0C200:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12808));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C218u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 231u, 0x08A0BF94u>(ctx, &aot_mem) && ctx.pc == 0x08A0C218u) goto L_08A0C218;
    return;
L_08A0C218:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C22C;
      }
      goto L_08A0C224;
    }
L_08A0C224:
    aot_gpr[31] = (0x08A0C22Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C22Cu) goto L_08A0C22C;
    return;
L_08A0C22C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C240:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C248:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4048));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0C284u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0C284u) goto L_08A0C284;
    return;
L_08A0C284:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C294u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 57u, 0x08A08494u>(ctx, &aot_mem) && ctx.pc == 0x08A0C294u) goto L_08A0C294;
    return;
L_08A0C294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C2A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C2BCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 230u, 0x08A0BF80u>(ctx, &aot_mem) && ctx.pc == 0x08A0C2BCu) goto L_08A0C2BC;
    return;
L_08A0C2BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12848));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C2DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C324;
      }
      goto L_08A0C2F8;
    }
L_08A0C2F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12848));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C310u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 231u, 0x08A0BF94u>(ctx, &aot_mem) && ctx.pc == 0x08A0C310u) goto L_08A0C310;
    return;
L_08A0C310:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C324;
      }
      goto L_08A0C31C;
    }
L_08A0C31C:
    aot_gpr[31] = (0x08A0C324u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C324u) goto L_08A0C324;
    return;
L_08A0C324:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C338:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C340:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4048));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C34C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C360u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 176u, 0x08A07A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C360u) goto L_08A0C360;
    return;
L_08A0C360:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C36C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C380u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 230u, 0x08A0BF80u>(ctx, &aot_mem) && ctx.pc == 0x08A0C380u) goto L_08A0C380;
    return;
L_08A0C380:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12888));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C3A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C3E8;
      }
      goto L_08A0C3BC;
    }
L_08A0C3BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12888));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C3D4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 231u, 0x08A0BF94u>(ctx, &aot_mem) && ctx.pc == 0x08A0C3D4u) goto L_08A0C3D4;
    return;
L_08A0C3D4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C3E8;
      }
      goto L_08A0C3E0;
    }
L_08A0C3E0:
    aot_gpr[31] = (0x08A0C3E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C3E8u) goto L_08A0C3E8;
    return;
L_08A0C3E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C3FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C404:
    aot_gpr[2] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C410:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C424u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 176u, 0x08A07A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C424u) goto L_08A0C424;
    return;
L_08A0C424:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C430:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12928));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(696), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C454u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0C454u) goto L_08A0C454;
    return;
L_08A0C454:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(668), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(672), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(674), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(676), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(680), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(684), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(692), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C48C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C4D4;
      }
      goto L_08A0C4A8;
    }
L_08A0C4A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12928));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(696), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C4C0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C4C0u) goto L_08A0C4C0;
    return;
L_08A0C4C0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C4D4;
      }
      goto L_08A0C4CC;
    }
L_08A0C4CC:
    aot_gpr[31] = (0x08A0C4D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0C604;
L_08A0C4D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C4FCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A0C63C;
L_08A0C4FC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C510:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0C528u) goto L_08A0C528;
    return;
L_08A0C528:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C534:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(676)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C53C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(676), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(680), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C548:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(672), static_cast<std::uint16_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(674), static_cast<std::uint16_t>(aot_gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C55C:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(668), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C568:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(668)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C570:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C584u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 134u, 0x089F0784u>(ctx, &aot_mem) && ctx.pc == 0x08A0C584u) goto L_08A0C584;
    return;
L_08A0C584:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(668));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0C594u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C594u) goto L_08A0C594;
    return;
L_08A0C594:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(672));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0C5A4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C5A4u) goto L_08A0C5A4;
    return;
L_08A0C5A4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(674));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0C5B4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C5B4u) goto L_08A0C5B4;
    return;
L_08A0C5B4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(676));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0C5C4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C5C4u) goto L_08A0C5C4;
    return;
L_08A0C5C4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(680));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0C5D4u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C5D4u) goto L_08A0C5D4;
    return;
L_08A0C5D4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(684), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(692), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C5F4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(692), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C5FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(692)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C604:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C618u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0C618u) goto L_08A0C618;
    return;
L_08A0C618:
    aot_gpr[31] = (0x08A0C620u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C620u) goto L_08A0C620;
    return;
L_08A0C620:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0C62Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C62Cu) goto L_08A0C62C;
    return;
L_08A0C62C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C63C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C6AC;
      }
      goto L_08A0C658;
    }
L_08A0C658:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0C664u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0C664u) goto L_08A0C664;
    return;
L_08A0C664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(668), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(672)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(674)));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(674), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(676)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(676), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(680)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(680), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(688)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(689)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(684)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(684), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(692)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(692), aot_gpr[4]);
    goto L_08A0C6AC;
L_08A0C6AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C6C0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(684)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C6C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(688)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C6D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(689)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C6D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12944));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C718u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0CBE0;
L_08A0C718:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C72C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0C77C;
      }
      goto L_08A0C748;
    }
L_08A0C748:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12944));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A0C75Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0CBE0;
L_08A0C75C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26176));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C77C;
      }
      goto L_08A0C774;
    }
L_08A0C774:
    aot_gpr[31] = (0x08A0C77Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A0C790;
L_08A0C77C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C7A4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0C7A4u) goto L_08A0C7A4;
    return;
L_08A0C7A4:
    aot_gpr[31] = (0x08A0C7ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C7ACu) goto L_08A0C7AC;
    return;
L_08A0C7AC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0C7B8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C7B8u) goto L_08A0C7B8;
    return;
L_08A0C7B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C7C8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C7D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C804;
      }
      goto L_08A0C7E0;
    }
L_08A0C7E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A0C814;
    }
    goto L_08A0C7FC;
L_08A0C7FC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A0C81C;
      }
      goto L_08A0C804;
    }
L_08A0C804:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C814:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_08A0C81C;
L_08A0C81C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A0C82Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0C82Cu) goto L_08A0C82C;
    return;
L_08A0C82C:
    aot_gpr[31] = (0x08A0C834u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C834u) goto L_08A0C834;
    return;
L_08A0C834:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (0u | 525u);
    aot_gpr[31] = (0x08A0C858u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4032));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C858u) goto L_08A0C858;
    return;
L_08A0C858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0C878u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C878u) goto L_08A0C878;
    return;
L_08A0C878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C890:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 542u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0C8B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4032));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C8B0u) goto L_08A0C8B0;
    return;
L_08A0C8B0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C8CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A0C910;
      }
      goto L_08A0C8F8;
    }
L_08A0C8F8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08A0C90Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A0C90Cu) goto L_08A0C90C;
    return;
L_08A0C90C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08A0C910;
L_08A0C910:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C930:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(29012));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(29012), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A0CA10;
      }
      goto L_08A0C9A4;
    }
L_08A0C9A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08A0C9E8;
    }
    goto L_08A0C9B0;
L_08A0C9B0:
    aot_gpr[31] = (0x08A0C9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0C9B8u) goto L_08A0C9B8;
    return;
L_08A0C9B8:
    aot_gpr[31] = (0x08A0C9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C9C0u) goto L_08A0C9C0;
    return;
L_08A0C9C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0C9E0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0C9E0u) goto L_08A0C9E0;
    return;
L_08A0C9E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08A0C9E8;
L_08A0C9E8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CA4C;
      }
      goto L_08A0C9F0;
    }
L_08A0C9F0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A0CA08u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    goto L_08A0CDDC;
L_08A0CA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CA4C;
      }
      goto L_08A0CA10;
    }
L_08A0CA10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A0CA34;
      }
      goto L_08A0CA20;
    }
L_08A0CA20:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08A0CA34;
      }
      goto L_08A0CA2C;
    }
L_08A0CA2C:
    if (aot_gpr[4] != aot_gpr[6]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[17]);
        goto L_08A0CA4C;
    }
    goto L_08A0CA34;
L_08A0CA34:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0CA48;
      }
      goto L_08A0CA3C;
    }
L_08A0CA3C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0CA48u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 103u, 0x089EF5B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0CA48u) goto L_08A0CA48;
    return;
L_08A0CA48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    goto L_08A0CA4C;
L_08A0CA4C:
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
L_08A0CA68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[31] = (0x08A0CA88u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08A0CE40;
L_08A0CA88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CA94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CAA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_08A0CAB8;
    }
    goto L_08A0CAB8;
L_08A0CAB8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CAC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[9] != 0u) {
    aot_gpr[16] = (aot_gpr[6] | 0u);
        goto L_08A0CAEC;
    }
    goto L_08A0CAEC;
L_08A0CAEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x08A0CB04u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A0CB04u) goto L_08A0CB04;
    return;
L_08A0CB04:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CB18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[6]);
        goto L_08A0CB2C;
    }
    goto L_08A0CB2C;
L_08A0CB2C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CB34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CB3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A0CB84;
      }
      goto L_08A0CB68;
    }
L_08A0CB68:
    aot_gpr[31] = (0x08A0CB70u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CB70u) goto L_08A0CB70;
    return;
L_08A0CB70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CB84;
      }
      goto L_08A0CB78;
    }
L_08A0CB78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A0CB84;
L_08A0CB84:
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
L_08A0CBA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_08A0CBC0;
    }
    goto L_08A0CBC0;
L_08A0CBC0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CBC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CBD0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CBD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CBE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 500u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0CC20;
      }
      goto L_08A0CC00;
    }
L_08A0CC00:
    aot_gpr[31] = (0x08A0CC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CC08u) goto L_08A0CC08;
    return;
L_08A0CC08:
    aot_gpr[31] = (0x08A0CC10u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CC10u) goto L_08A0CC10;
    return;
L_08A0CC10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A0CC1Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CC1Cu) goto L_08A0CC1C;
    return;
L_08A0CC1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A0CC20;
L_08A0CC20:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08A0CC68;
      }
      goto L_08A0CC48;
    }
L_08A0CC48:
    aot_gpr[31] = (0x08A0CC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CC50u) goto L_08A0CC50;
    return;
L_08A0CC50:
    aot_gpr[31] = (0x08A0CC58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CC58u) goto L_08A0CC58;
    return;
L_08A0CC58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08A0CC64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CC64u) goto L_08A0CC64;
    return;
L_08A0CC64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08A0CC68;
L_08A0CC68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr[31] = (0x08A0CC74u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0CD60;
L_08A0CC74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CC8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A0CCBCu);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    goto L_08A0CD60;
L_08A0CCBC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0CD24;
      }
      goto L_08A0CCC4;
    }
L_08A0CCC4:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-4032));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 747u);
    aot_gpr[31] = (0x08A0CCD8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CCD8u) goto L_08A0CCD8;
    return;
L_08A0CCD8:
    aot_gpr[31] = (0x08A0CCE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CCE0u) goto L_08A0CCE0;
    return;
L_08A0CCE0:
    aot_gpr[31] = (0x08A0CCE8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CCE8u) goto L_08A0CCE8;
    return;
L_08A0CCE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 750u);
    aot_gpr[31] = (0x08A0CD00u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CD00u) goto L_08A0CD00;
    return;
L_08A0CD00:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A0CD24;
      }
      goto L_08A0CD0C;
    }
L_08A0CD0C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0CD1Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A0CD1Cu) goto L_08A0CD1C;
    return;
L_08A0CD1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(56), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    goto L_08A0CD24;
L_08A0CD24:
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
L_08A0CD44:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CD50:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CD58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CD60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0CD98;
      }
      goto L_08A0CD78;
    }
L_08A0CD78:
    aot_gpr[31] = (0x08A0CD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CD80u) goto L_08A0CD80;
    return;
L_08A0CD80:
    aot_gpr[31] = (0x08A0CD88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CD88u) goto L_08A0CD88;
    return;
L_08A0CD88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x08A0CD94u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CD94u) goto L_08A0CD94;
    return;
L_08A0CD94:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    goto L_08A0CD98;
L_08A0CD98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
        goto L_08A0CDC8;
    }
    goto L_08A0CDA4;
L_08A0CDA4:
    aot_gpr[31] = (0x08A0CDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CDACu) goto L_08A0CDAC;
    return;
L_08A0CDAC:
    aot_gpr[31] = (0x08A0CDB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CDB4u) goto L_08A0CDB4;
    return;
L_08A0CDB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x08A0CDC0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CDC0u) goto L_08A0CDC0;
    return;
L_08A0CDC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_08A0CDC8;
L_08A0CDC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CDDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-528));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 513u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[31]);
    aot_gpr[31] = (0x08A0CE08u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 242u, 0x08A05FDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CE08u) goto L_08A0CE08;
    return;
L_08A0CE08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A0CE2Cu);
    aot_gpr[7] = (0u | 302u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0CE2Cu) goto L_08A0CE2C;
    return;
L_08A0CE2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(516)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CE40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0CEC0;
      }
      goto L_08A0CE50;
    }
L_08A0CE50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_08A0CE90;
    }
    goto L_08A0CE60;
L_08A0CE60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0CEC0;
      }
      goto L_08A0CE68;
    }
L_08A0CE68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-3992));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0CE7Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A0CE7Cu) goto L_08A0CE7C;
    return;
L_08A0CE7C:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CE90:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0CEC0;
      }
      goto L_08A0CE98;
    }
L_08A0CE98:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(-3984));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A0CEACu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A0CEACu) goto L_08A0CEAC;
    return;
L_08A0CEAC:
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CEC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CECC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A0CEFCu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x08A0CEFCu) goto L_08A0CEFC;
    return;
L_08A0CEFC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_08A0CF10;
      }
      goto L_08A0CF04;
    }
L_08A0CF04:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_08A0CF18;
    }
    goto L_08A0CF10;
L_08A0CF10:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0CF18;
      }
      goto L_08A0CF18;
    }
L_08A0CF18:
    aot_gpr[31] = (0x08A0CF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0CF20u) goto L_08A0CF20;
    return;
L_08A0CF20:
    aot_gpr[31] = (0x08A0CF28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CF28u) goto L_08A0CF28;
    return;
L_08A0CF28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(720));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 41u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x08A0CF50u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3976));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CF50u) goto L_08A0CF50;
    return;
L_08A0CF50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A0CFE8;
      }
      goto L_08A0CF64;
    }
L_08A0CF64:
    aot_gpr[20] = (0u | 0u);
    goto L_08A0CF68;
L_08A0CF68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (0x08A0CF98u);
    aot_gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 8u, 0x08A0E070u>(ctx, &aot_mem) && ctx.pc == 0x08A0CF98u) goto L_08A0CF98;
    return;
L_08A0CF98:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A0CFB0;
      }
      goto L_08A0CFA4;
    }
L_08A0CFA4:
    aot_gpr[31] = (0x08A0CFACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 228u, 0x08A0DFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CFACu) goto L_08A0CFAC;
    return;
L_08A0CFAC:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A0CFB0;
L_08A0CFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 700u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x08A0CFD4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CFD4u) goto L_08A0CFD4;
    return;
L_08A0CFD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_08A0CF68;
      }
      goto L_08A0CFE8;
    }
L_08A0CFE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x08A0CFF4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 115u, 0x08A0D838u>(ctx, &aot_mem) && ctx.pc == 0x08A0CFF4u) goto L_08A0CFF4;
    return;
L_08A0CFF4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A0D000u; return;
}

void recomp_unit_0520(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0520_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_520(Runtime &runtime) {
    runtime.register_generated_unit(520u, 0x08A0C000u, 4096u, &recomp_unit_0520, &recomp_unit_0520_entry);
    runtime.register_function(0x08A0C000u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C018u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C030u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C03Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C044u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C058u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C060u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C06Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C08Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C098u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C0ACu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C0CCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C0E8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C100u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C10Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C114u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C128u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C130u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C13Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C17Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C194u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C1B0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C1C4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C1E4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C200u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C218u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C224u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C22Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C240u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C248u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C254u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C284u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C294u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C2A8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C2BCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C2DCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C2F8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C310u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C31Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C324u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C338u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C340u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C34Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C360u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C36Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C380u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C3A0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C3BCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C3D4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C3E0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C3E8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C3FCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C404u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C410u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C424u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C430u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C454u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C48Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C4A8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C4C0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C4CCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C4D4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C4E8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C4FCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C510u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C518u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C528u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C534u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C53Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C548u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C55Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C568u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C570u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C584u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C594u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C5A4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C5B4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C5C4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C5D4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C5F4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C5FCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C604u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C618u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C620u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C62Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C63Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C658u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C664u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C6ACu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C6C0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C6C8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C6D0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C6D8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C718u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C72Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C748u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C75Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C774u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C77Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C790u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7A4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7ACu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7B8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7C8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7D0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7E0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C7FCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C804u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C814u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C81Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C82Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C834u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C858u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C878u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C890u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C8B0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C8CCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C8F8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C90Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C910u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C930u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C978u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9A4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9B0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9B8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9C0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9E0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9E8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0C9F0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA08u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA10u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA20u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA2Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA34u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA3Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA48u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA4Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA68u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA88u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CA94u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CAA8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CAB8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CAC0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CAECu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB04u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB18u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB2Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB34u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB3Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB68u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB70u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB78u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CB84u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CBA0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CBC0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CBC8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CBD0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CBD8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CBE0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC00u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC08u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC10u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC1Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC20u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC48u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC50u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC58u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC64u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC68u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC74u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CC8Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CCBCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CCC4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CCD8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CCE0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CCE8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD00u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD0Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD1Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD24u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD44u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD50u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD58u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD60u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD78u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD80u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD88u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD94u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CD98u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CDA4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CDACu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CDB4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CDC0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CDC8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CDDCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE08u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE2Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE40u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE50u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE60u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE68u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE7Cu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE90u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CE98u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CEACu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CEC0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CECCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CEFCu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF04u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF10u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF18u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF20u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF28u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF50u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF64u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF68u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CF98u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CFA4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CFACu, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CFB0u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CFD4u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CFE8u, &recomp_unit_0520, "recomp_unit_0520");
    runtime.register_function(0x08A0CFF4u, &recomp_unit_0520, "recomp_unit_0520");
}
} // namespace psprecomp
