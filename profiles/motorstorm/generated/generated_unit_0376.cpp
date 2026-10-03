#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0376[1023] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 13,
    0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0,
    25, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 32, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 77, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82,
    83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 116,
    0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141,
    0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175,
    0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 193, 0, 194, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210,
    0, 0, 211, 0, 0, 212, 0, 213, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 226, 0, 0, 227, 0, 228, 229, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235,
};
void recomp_unit_0376_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0897C004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0376[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897C004;
    case 2u: goto L_0897C010;
    case 3u: goto L_0897C018;
    case 4u: goto L_0897C020;
    case 5u: goto L_0897C028;
    case 6u: goto L_0897C030;
    case 7u: goto L_0897C038;
    case 8u: goto L_0897C048;
    case 9u: goto L_0897C050;
    case 10u: goto L_0897C060;
    case 11u: goto L_0897C068;
    case 12u: goto L_0897C078;
    case 13u: goto L_0897C080;
    case 14u: goto L_0897C090;
    case 15u: goto L_0897C098;
    case 16u: goto L_0897C0A0;
    case 17u: goto L_0897C0A8;
    case 18u: goto L_0897C0B4;
    case 19u: goto L_0897C0C8;
    case 20u: goto L_0897C0D0;
    case 21u: goto L_0897C0DC;
    case 22u: goto L_0897C0E8;
    case 23u: goto L_0897C0F4;
    case 24u: goto L_0897C0FC;
    case 25u: goto L_0897C104;
    case 26u: goto L_0897C10C;
    case 27u: goto L_0897C114;
    case 28u: goto L_0897C11C;
    case 29u: goto L_0897C128;
    case 30u: goto L_0897C130;
    case 31u: goto L_0897C138;
    case 32u: goto L_0897C140;
    case 33u: goto L_0897C144;
    case 34u: goto L_0897C15C;
    case 35u: goto L_0897C164;
    case 36u: goto L_0897C18C;
    case 37u: goto L_0897C194;
    case 38u: goto L_0897C19C;
    case 39u: goto L_0897C1A4;
    case 40u: goto L_0897C1B0;
    case 41u: goto L_0897C1BC;
    case 42u: goto L_0897C1C8;
    case 43u: goto L_0897C1D4;
    case 44u: goto L_0897C1E0;
    case 45u: goto L_0897C1EC;
    case 46u: goto L_0897C204;
    case 47u: goto L_0897C21C;
    case 48u: goto L_0897C228;
    case 49u: goto L_0897C234;
    case 50u: goto L_0897C23C;
    case 51u: goto L_0897C24C;
    case 52u: goto L_0897C260;
    case 53u: goto L_0897C27C;
    case 54u: goto L_0897C28C;
    case 55u: goto L_0897C2A8;
    case 56u: goto L_0897C2D4;
    case 57u: goto L_0897C2F0;
    case 58u: goto L_0897C308;
    case 59u: goto L_0897C314;
    case 60u: goto L_0897C31C;
    case 61u: goto L_0897C330;
    case 62u: goto L_0897C368;
    case 63u: goto L_0897C38C;
    case 64u: goto L_0897C394;
    case 65u: goto L_0897C39C;
    case 66u: goto L_0897C3B4;
    case 67u: goto L_0897C3C0;
    case 68u: goto L_0897C3CC;
    case 69u: goto L_0897C3D8;
    case 70u: goto L_0897C40C;
    case 71u: goto L_0897C41C;
    case 72u: goto L_0897C424;
    case 73u: goto L_0897C42C;
    case 74u: goto L_0897C434;
    case 75u: goto L_0897C43C;
    case 76u: goto L_0897C444;
    case 77u: goto L_0897C454;
    case 78u: goto L_0897C458;
    case 79u: goto L_0897C460;
    case 80u: goto L_0897C46C;
    case 81u: goto L_0897C478;
    case 82u: goto L_0897C480;
    case 83u: goto L_0897C484;
    case 84u: goto L_0897C48C;
    case 85u: goto L_0897C4A0;
    case 86u: goto L_0897C4B0;
    case 87u: goto L_0897C4BC;
    case 88u: goto L_0897C4D0;
    case 89u: goto L_0897C4DC;
    case 90u: goto L_0897C4E4;
    case 91u: goto L_0897C4E8;
    case 92u: goto L_0897C50C;
    case 93u: goto L_0897C51C;
    case 94u: goto L_0897C524;
    case 95u: goto L_0897C530;
    case 96u: goto L_0897C53C;
    case 97u: goto L_0897C544;
    case 98u: goto L_0897C548;
    case 99u: goto L_0897C554;
    case 100u: goto L_0897C578;
    case 101u: goto L_0897C588;
    case 102u: goto L_0897C59C;
    case 103u: goto L_0897C5AC;
    case 104u: goto L_0897C5BC;
    case 105u: goto L_0897C5C8;
    case 106u: goto L_0897C5D0;
    case 107u: goto L_0897C5D4;
    case 108u: goto L_0897C5DC;
    case 109u: goto L_0897C60C;
    case 110u: goto L_0897C638;
    case 111u: goto L_0897C654;
    case 112u: goto L_0897C65C;
    case 113u: goto L_0897C664;
    case 114u: goto L_0897C670;
    case 115u: goto L_0897C678;
    case 116u: goto L_0897C680;
    case 117u: goto L_0897C688;
    case 118u: goto L_0897C690;
    case 119u: goto L_0897C694;
    case 120u: goto L_0897C6B8;
    case 121u: goto L_0897C6E0;
    case 122u: goto L_0897C700;
    case 123u: goto L_0897C708;
    case 124u: goto L_0897C710;
    case 125u: goto L_0897C718;
    case 126u: goto L_0897C728;
    case 127u: goto L_0897C730;
    case 128u: goto L_0897C7B8;
    case 129u: goto L_0897C7EC;
    case 130u: goto L_0897C7F0;
    case 131u: goto L_0897C810;
    case 132u: goto L_0897C83C;
    case 133u: goto L_0897C848;
    case 134u: goto L_0897C850;
    case 135u: goto L_0897C868;
    case 136u: goto L_0897C894;
    case 137u: goto L_0897C8B0;
    case 138u: goto L_0897C8D8;
    case 139u: goto L_0897C8F0;
    case 140u: goto L_0897C8F8;
    case 141u: goto L_0897C900;
    case 142u: goto L_0897C908;
    case 143u: goto L_0897C920;
    case 144u: goto L_0897C928;
    case 145u: goto L_0897C954;
    case 146u: goto L_0897C95C;
    case 147u: goto L_0897C960;
    case 148u: goto L_0897C978;
    case 149u: goto L_0897C994;
    case 150u: goto L_0897C9B8;
    case 151u: goto L_0897C9D4;
    case 152u: goto L_0897C9EC;
    case 153u: goto L_0897C9F8;
    case 154u: goto L_0897CA00;
    case 155u: goto L_0897CA14;
    case 156u: goto L_0897CA4C;
    case 157u: goto L_0897CA74;
    case 158u: goto L_0897CA8C;
    case 159u: goto L_0897CA94;
    case 160u: goto L_0897CAA0;
    case 161u: goto L_0897CAAC;
    case 162u: goto L_0897CAC0;
    case 163u: goto L_0897CACC;
    case 164u: goto L_0897CAE0;
    case 165u: goto L_0897CB00;
    case 166u: goto L_0897CB0C;
    case 167u: goto L_0897CB14;
    case 168u: goto L_0897CB1C;
    case 169u: goto L_0897CB30;
    case 170u: goto L_0897CB54;
    case 171u: goto L_0897CB60;
    case 172u: goto L_0897CBE8;
    case 173u: goto L_0897CBF0;
    case 174u: goto L_0897CBF8;
    case 175u: goto L_0897CC00;
    case 176u: goto L_0897CC08;
    case 177u: goto L_0897CC10;
    case 178u: goto L_0897CC18;
    case 179u: goto L_0897CC2C;
    case 180u: goto L_0897CC38;
    case 181u: goto L_0897CC40;
    case 182u: goto L_0897CC4C;
    case 183u: goto L_0897CC54;
    case 184u: goto L_0897CC60;
    case 185u: goto L_0897CC68;
    case 186u: goto L_0897CC74;
    case 187u: goto L_0897CC7C;
    case 188u: goto L_0897CC94;
    case 189u: goto L_0897CCF0;
    case 190u: goto L_0897CD0C;
    case 191u: goto L_0897CD40;
    case 192u: goto L_0897CD84;
    case 193u: goto L_0897CD8C;
    case 194u: goto L_0897CD94;
    case 195u: goto L_0897CD98;
    case 196u: goto L_0897CDA4;
    case 197u: goto L_0897CDB8;
    case 198u: goto L_0897CDC4;
    case 199u: goto L_0897CDCC;
    case 200u: goto L_0897CDD0;
    case 201u: goto L_0897CDF4;
    case 202u: goto L_0897CE04;
    case 203u: goto L_0897CE10;
    case 204u: goto L_0897CE1C;
    case 205u: goto L_0897CE28;
    case 206u: goto L_0897CE30;
    case 207u: goto L_0897CE34;
    case 208u: goto L_0897CE40;
    case 209u: goto L_0897CE78;
    case 210u: goto L_0897CE80;
    case 211u: goto L_0897CE8C;
    case 212u: goto L_0897CE98;
    case 213u: goto L_0897CEA0;
    case 214u: goto L_0897CEA4;
    case 215u: goto L_0897CEB0;
    case 216u: goto L_0897CEBC;
    case 217u: goto L_0897CECC;
    case 218u: goto L_0897CEE0;
    case 219u: goto L_0897CEF8;
    case 220u: goto L_0897CF20;
    case 221u: goto L_0897CF30;
    case 222u: goto L_0897CF38;
    case 223u: goto L_0897CF58;
    case 224u: goto L_0897CF64;
    case 225u: goto L_0897CF84;
    case 226u: goto L_0897CF90;
    case 227u: goto L_0897CF9C;
    case 228u: goto L_0897CFA4;
    case 229u: goto L_0897CFA8;
    case 230u: goto L_0897CFB0;
    case 231u: goto L_0897CFB8;
    case 232u: goto L_0897CFCC;
    case 233u: goto L_0897CFDC;
    case 234u: goto L_0897CFF0;
    case 235u: goto L_0897CFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897C004:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1408)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_0897C018;
      }
      goto L_0897C010;
    }
L_0897C010:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 256u);
      if (branch_taken) {
          goto L_0897C144;
      }
      goto L_0897C018;
    }
L_0897C018:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0897C080;
      }
      goto L_0897C020;
    }
L_0897C020:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897C068;
      }
      goto L_0897C028;
    }
L_0897C028:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0897C050;
      }
      goto L_0897C030;
    }
L_0897C030:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C098;
      }
      goto L_0897C038;
    }
L_0897C038:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897C048u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 149u, 0x08A47A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C048u) goto L_0897C048;
    return;
L_0897C048:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (17u << 16u);
      if (branch_taken) {
          goto L_0897C0A0;
      }
      goto L_0897C050;
    }
L_0897C050:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897C060u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 149u, 0x08A47A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C060u) goto L_0897C060;
    return;
L_0897C060:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (17u << 16u);
      if (branch_taken) {
          goto L_0897C0A0;
      }
      goto L_0897C068;
    }
L_0897C068:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897C078u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 149u, 0x08A47A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C078u) goto L_0897C078;
    return;
L_0897C078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (17u << 16u);
      if (branch_taken) {
          goto L_0897C0A0;
      }
      goto L_0897C080;
    }
L_0897C080:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897C090u);
    aot_gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 149u, 0x08A47A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C090u) goto L_0897C090;
    return;
L_0897C090:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (17u << 16u);
      if (branch_taken) {
          goto L_0897C0A0;
      }
      goto L_0897C098;
    }
L_0897C098:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 256u);
      if (branch_taken) {
          goto L_0897C144;
      }
      goto L_0897C0A0;
    }
L_0897C0A0:
    aot_gpr[31] = (0x0897C0A8u);
    aot_gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 201u, 0x08A47F80u>(ctx, &aot_mem) && ctx.pc == 0x0897C0A8u) goto L_0897C0A8;
    return;
L_0897C0A8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C0B4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 10u, 0x08A48170u>(ctx, &aot_mem) && ctx.pc == 0x0897C0B4u) goto L_0897C0B4;
    return;
L_0897C0B4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 480u);
    aot_gpr[31] = (0x0897C0C8u);
    aot_gpr[7] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 19u, 0x08A482F4u>(ctx, &aot_mem) && ctx.pc == 0x0897C0C8u) goto L_0897C0C8;
    return;
L_0897C0C8:
    aot_gpr[31] = (0x0897C0D0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 202u, 0x08A47FD4u>(ctx, &aot_mem) && ctx.pc == 0x0897C0D0u) goto L_0897C0D0;
    return;
L_0897C0D0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C0DCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 15u, 0x08A48244u>(ctx, &aot_mem) && ctx.pc == 0x0897C0DCu) goto L_0897C0DC;
    return;
L_0897C0DC:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[31] = (0x0897C0E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 14u, 0x08A48218u>(ctx, &aot_mem) && ctx.pc == 0x0897C0E8u) goto L_0897C0E8;
    return;
L_0897C0E8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C0F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 16u, 0x08A48284u>(ctx, &aot_mem) && ctx.pc == 0x0897C0F4u) goto L_0897C0F4;
    return;
L_0897C0F4:
    aot_gpr[31] = (0x0897C0FCu);
    aot_gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 202u, 0x08A47FD4u>(ctx, &aot_mem) && ctx.pc == 0x0897C0FCu) goto L_0897C0FC;
    return;
L_0897C0FC:
    aot_gpr[31] = (0x0897C104u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 5u, 0x08A48114u>(ctx, &aot_mem) && ctx.pc == 0x0897C104u) goto L_0897C104;
    return;
L_0897C104:
    aot_gpr[31] = (0x0897C10Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 7u, 0x08A48138u>(ctx, &aot_mem) && ctx.pc == 0x0897C10Cu) goto L_0897C10C;
    return;
L_0897C10C:
    aot_gpr[31] = (0x0897C114u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 6u, 0x08A48128u>(ctx, &aot_mem) && ctx.pc == 0x0897C114u) goto L_0897C114;
    return;
L_0897C114:
    aot_gpr[31] = (0x0897C11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 171u, 0x08A47D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C11Cu) goto L_0897C11C;
    return;
L_0897C11C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C128u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x0897C128u) goto L_0897C128;
    return;
L_0897C128:
    aot_gpr[31] = (0x0897C130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 132u, 0x08A47944u>(ctx, &aot_mem) && ctx.pc == 0x0897C130u) goto L_0897C130;
    return;
L_0897C130:
    aot_gpr[31] = (0x0897C138u);
    // nop
    ctx.pc = 0x08A5AF3Cu;
    return;
L_0897C138:
    aot_gpr[31] = (0x0897C140u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 192u, 0x08A47E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C140u) goto L_0897C140;
    return;
L_0897C140:
    aot_gpr[2] = (0u | 0u);
    goto L_0897C144;
L_0897C144:
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
L_0897C15C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897C18Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C18Cu) goto L_0897C18C;
    return;
L_0897C18C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C19C;
      }
      goto L_0897C194;
    }
L_0897C194:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C23C;
      }
      goto L_0897C19C;
    }
L_0897C19C:
    aot_gpr[31] = (0x0897C1A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897C15C;
L_0897C1A4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C1B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897C1B0u) goto L_0897C1B0;
    return;
L_0897C1B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(672)));
    aot_gpr[31] = (0x0897C1BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C1BCu) goto L_0897C1BC;
    return;
L_0897C1BC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C1C8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897C1C8u) goto L_0897C1C8;
    return;
L_0897C1C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(728)));
    aot_gpr[31] = (0x0897C1D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C1D4u) goto L_0897C1D4;
    return;
L_0897C1D4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C1E0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897C1E0u) goto L_0897C1E0;
    return;
L_0897C1E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(784)));
    aot_gpr[31] = (0x0897C1ECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C1ECu) goto L_0897C1EC;
    return;
L_0897C1EC:
    aot_gpr[7] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 24u);
    aot_gpr[31] = (0x0897C204u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-17064));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0897C204u) goto L_0897C204;
    return;
L_0897C204:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(672));
    aot_gpr[31] = (0x0897C21Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C21Cu) goto L_0897C21C;
    return;
L_0897C21C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(728));
    aot_gpr[31] = (0x0897C228u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C228u) goto L_0897C228;
    return;
L_0897C228:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(784));
    aot_gpr[31] = (0x0897C234u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C234u) goto L_0897C234;
    return;
L_0897C234:
    aot_gpr[31] = (0x0897C23Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 90u, 0x0897F594u>(ctx, &aot_mem) && ctx.pc == 0x0897C23Cu) goto L_0897C23C;
    return;
L_0897C23C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C24C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897C260u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 187u, 0x0897FCA8u>(ctx, &aot_mem) && ctx.pc == 0x0897C260u) goto L_0897C260;
    return;
L_0897C260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 64u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897C27Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C27Cu) goto L_0897C27C;
    return;
L_0897C27C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C28C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897C2A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20384));
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 22u, 0x0898016Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C2A8u) goto L_0897C2A8;
    return;
L_0897C2A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7800));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1652), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1648), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1656), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C2D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897C31C;
      }
      goto L_0897C2F0;
    }
L_0897C2F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7800));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897C308u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 25u, 0x0898024Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C308u) goto L_0897C308;
    return;
L_0897C308:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C31C;
      }
      goto L_0897C314;
    }
L_0897C314:
    aot_gpr[31] = (0x0897C31Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897C31Cu) goto L_0897C31C;
    return;
L_0897C31C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[30] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897C43C;
      }
      goto L_0897C368;
    }
L_0897C368:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(640), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(636), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897C38Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C38Cu) goto L_0897C38C;
    return;
L_0897C38C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C434;
      }
      goto L_0897C394;
    }
L_0897C394:
    aot_gpr[31] = (0x0897C39Cu);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 93u, 0x089754F4u>(ctx, &aot_mem) && ctx.pc == 0x0897C39Cu) goto L_0897C39C;
    return;
L_0897C39C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C3B4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897C3B4u) goto L_0897C3B4;
    return;
L_0897C3B4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897C3C0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C3C0u) goto L_0897C3C0;
    return;
L_0897C3C0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0897C42C;
      }
      goto L_0897C3CC;
    }
L_0897C3CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C424;
      }
      goto L_0897C3D8;
    }
L_0897C3D8:
    aot_gpr[6] = (0u < aot_gpr[19] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(26032));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[8] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(26000));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    aot_gpr[6] = (aot_gpr[19] + static_cast<std::uint32_t>(1444));
      if (branch_taken) {
          goto L_0897C444;
      }
      goto L_0897C40C;
    }
L_0897C40C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897C41Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = 0x08A5AEC4u;
    return;
L_0897C41C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897C458;
      }
      goto L_0897C424;
    }
L_0897C424:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C42C;
    }
L_0897C42C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C434;
    }
L_0897C434:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C43C;
    }
L_0897C43C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C444;
    }
L_0897C444:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897C454u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = 0x08A5AE8Cu;
    return;
L_0897C454:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_0897C458;
L_0897C458:
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
      if (branch_taken) {
          goto L_0897C48C;
      }
      goto L_0897C460;
    }
L_0897C460:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
      if (branch_taken) {
          goto L_0897C480;
      }
      goto L_0897C46C;
    }
L_0897C46C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
        goto L_0897C484;
    }
    goto L_0897C478;
L_0897C478:
    aot_gpr[31] = (0x0897C480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C480u) goto L_0897C480;
    return;
L_0897C480:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    goto L_0897C484;
L_0897C484:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C48C;
    }
L_0897C48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(368)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0897C59C;
      }
      goto L_0897C4A0;
    }
L_0897C4A0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20388)));
    aot_gpr[18] = (0u | 4u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20392)));
    goto L_0897C4B0;
L_0897C4B0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C4BCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897C4BCu) goto L_0897C4BC;
    return;
L_0897C4BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[31] = (0x0897C4D0u);
    aot_gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x0897C4D0u) goto L_0897C4D0;
    return;
L_0897C4D0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0897C4E8;
      }
      goto L_0897C4DC;
    }
L_0897C4DC:
    aot_gpr[31] = (0x0897C4E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 57u, 0x0897D494u>(ctx, &aot_mem) && ctx.pc == 0x0897C4E4u) goto L_0897C4E4;
    return;
L_0897C4E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897C4E8;
L_0897C4E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897C50Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897C50Cu) goto L_0897C50C;
    return;
L_0897C50C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1444)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897C51Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897C51Cu) goto L_0897C51C;
    return;
L_0897C51C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897C554;
      }
      goto L_0897C524;
    }
L_0897C524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
      if (branch_taken) {
          goto L_0897C544;
      }
      goto L_0897C530;
    }
L_0897C530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_0897C548;
    }
    goto L_0897C53C;
L_0897C53C:
    aot_gpr[31] = (0x0897C544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C544u) goto L_0897C544;
    return;
L_0897C544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0897C548;
L_0897C548:
    aot_gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C554;
    }
L_0897C554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1444)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897C578u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C578u) goto L_0897C578;
    return;
L_0897C578:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897C588u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 194u, 0x0897EE88u>(ctx, &aot_mem) && ctx.pc == 0x0897C588u) goto L_0897C588;
    return;
L_0897C588:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(368)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C4B0;
      }
      goto L_0897C59C;
    }
L_0897C59C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0897C5ACu);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 82u, 0x0897F504u>(ctx, &aot_mem) && ctx.pc == 0x0897C5ACu) goto L_0897C5AC;
    return;
L_0897C5AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
      if (branch_taken) {
          goto L_0897C5D0;
      }
      goto L_0897C5BC;
    }
L_0897C5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_0897C5D4;
    }
    goto L_0897C5C8;
L_0897C5C8:
    aot_gpr[31] = (0x0897C5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C5D0u) goto L_0897C5D0;
    return;
L_0897C5D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0897C5D4;
L_0897C5D4:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0897C5DC;
L_0897C5DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C60C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C678;
      }
      goto L_0897C638;
    }
L_0897C638:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897C654u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C654u) goto L_0897C654;
    return;
L_0897C654:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C678;
      }
      goto L_0897C65C;
    }
L_0897C65C:
    aot_gpr[31] = (0x0897C664u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 120u, 0x0897F748u>(ctx, &aot_mem) && ctx.pc == 0x0897C664u) goto L_0897C664;
    return;
L_0897C664:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
        goto L_0897C694;
    }
    goto L_0897C670;
L_0897C670:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897C688;
      }
      goto L_0897C678;
    }
L_0897C678:
    aot_gpr[31] = (0x0897C680u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_0897C680:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C7F0;
      }
      goto L_0897C688;
    }
L_0897C688:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C708;
      }
      goto L_0897C690;
    }
L_0897C690:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_0897C694;
L_0897C694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897C6B8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C6B8u) goto L_0897C6B8;
    return;
L_0897C6B8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1440)));
    aot_gpr[4] = (18176u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0897C6E0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 8u, 0x08A49080u>(ctx, &aot_mem) && ctx.pc == 0x0897C6E0u) goto L_0897C6E0;
    return;
L_0897C6E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0897C700u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C700u) goto L_0897C700;
    return;
L_0897C700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C7EC;
      }
      goto L_0897C708;
    }
L_0897C708:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C7EC;
      }
      goto L_0897C710;
    }
L_0897C710:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C7EC;
      }
      goto L_0897C718;
    }
L_0897C718:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(644)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(368));
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0897C730;
      }
      goto L_0897C728;
    }
L_0897C728:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897C7F0;
      }
      goto L_0897C730;
    }
L_0897C730:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20388)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[20] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[31] = (0x0897C7B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 122u, 0x0897F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C7B8u) goto L_0897C7B8;
    return;
L_0897C7B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    aot_gpr[4] = (0u | 1u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0897C7ECu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C7ECu) goto L_0897C7EC;
    return;
L_0897C7EC:
    aot_gpr[2] = (0u | 0u);
    goto L_0897C7F0;
L_0897C7F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0897C83Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 162u, 0x0897EC14u>(ctx, &aot_mem) && ctx.pc == 0x0897C83Cu) goto L_0897C83C;
    return;
L_0897C83C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C850;
      }
      goto L_0897C848;
    }
L_0897C848:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_0897C894;
      }
      goto L_0897C850;
    }
L_0897C850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897C868u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C868u) goto L_0897C868;
    return;
L_0897C868:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[1] = (aot_gpr[5] << 30u);
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    aot_gpr[4] = (aot_gpr[1] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1448), aot_gpr[19]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897C894;
L_0897C894:
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
L_0897C8B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1448)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 46u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897C900;
      }
      goto L_0897C8D8;
    }
L_0897C8D8:
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (0u | 0u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0897C8F8;
      }
      goto L_0897C8F0;
    }
L_0897C8F0:
    { const bool branch_taken = aot_gpr[9] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897C908;
      }
      goto L_0897C8F8;
    }
L_0897C8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C95C;
      }
      goto L_0897C900;
    }
L_0897C900:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897C960;
      }
      goto L_0897C908;
    }
L_0897C908:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897C920u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C920u) goto L_0897C920;
    return;
L_0897C920:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0897C95C;
      }
      goto L_0897C928;
    }
L_0897C928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1448)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897C954u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C954u) goto L_0897C954;
    return;
L_0897C954:
    aot_gpr[31] = (0x0897C95Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 181u, 0x0897ED78u>(ctx, &aot_mem) && ctx.pc == 0x0897C95Cu) goto L_0897C95C;
    return;
L_0897C95C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_0897C960;
L_0897C960:
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
L_0897C978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897C994u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 59u, 0x08980488u>(ctx, &aot_mem) && ctx.pc == 0x0897C994u) goto L_0897C994;
    return;
L_0897C994:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8080));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1448), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C9B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897CA00;
      }
      goto L_0897C9D4;
    }
L_0897C9D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8080));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897C9ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 61u, 0x089804CCu>(ctx, &aot_mem) && ctx.pc == 0x0897C9ECu) goto L_0897C9EC;
    return;
L_0897C9EC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CA00;
      }
      goto L_0897C9F8;
    }
L_0897C9F8:
    aot_gpr[31] = (0x0897CA00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897CA00u) goto L_0897CA00;
    return;
L_0897CA00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897CA14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897CB14;
      }
      goto L_0897CA4C;
    }
L_0897CA4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(640), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 480u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(636), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1592), aot_gpr[5]);
    aot_gpr[4] = (0u | 272u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1596), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897CA74u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 66u, 0x08980528u>(ctx, &aot_mem) && ctx.pc == 0x0897CA74u) goto L_0897CA74;
    return;
L_0897CA74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897CA8Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CA8Cu) goto L_0897CA8C;
    return;
L_0897CA8C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CB0C;
      }
      goto L_0897CA94;
    }
L_0897CA94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[31] = (0x0897CAA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 54u, 0x089742F4u>(ctx, &aot_mem) && ctx.pc == 0x0897CAA0u) goto L_0897CAA0;
    return;
L_0897CAA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[31] = (0x0897CAACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 53u, 0x08975314u>(ctx, &aot_mem) && ctx.pc == 0x0897CAACu) goto L_0897CAAC;
    return;
L_0897CAAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897CAC0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897CAC0u) goto L_0897CAC0;
    return;
L_0897CAC0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897CACCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CACCu) goto L_0897CACC;
    return;
L_0897CACC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897CAE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    ctx.pc = 0x08A5AF4Cu;
    return;
L_0897CAE0:
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0897CB1C;
      }
      goto L_0897CB00;
    }
L_0897CB00:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0897CB30;
      }
      goto L_0897CB0C;
    }
L_0897CB0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CB14;
    }
L_0897CB14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CB1C;
    }
L_0897CB1C:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[7] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    goto L_0897CB30;
L_0897CB30:
    aot_gpr[8] = (1u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24464));
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(652), aot_gpr[9]);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(648), aot_gpr[8]);
      if (branch_taken) {
          goto L_0897CBF8;
      }
      goto L_0897CB54;
    }
L_0897CB54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CBF0;
      }
      goto L_0897CB60;
    }
L_0897CB60:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20348)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20352)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20340)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20344)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1412), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] & aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1416), aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1620)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1624)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1628)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[11] = (0u | 512u);
      if (branch_taken) {
          goto L_0897CC00;
      }
      goto L_0897CBE8;
    }
L_0897CBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC2C;
      }
      goto L_0897CBF0;
    }
L_0897CBF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CBF8;
    }
L_0897CBF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CC00;
    }
L_0897CC00:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC2C;
      }
      goto L_0897CC08;
    }
L_0897CC08:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC2C;
      }
      goto L_0897CC10;
    }
L_0897CC10:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC2C;
      }
      goto L_0897CC18;
    }
L_0897CC18:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1428), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1420), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897CC94;
      }
      goto L_0897CC2C;
    }
L_0897CC2C:
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC40;
      }
      goto L_0897CC38;
    }
L_0897CC38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897CC40;
      }
      goto L_0897CC40;
    }
L_0897CC40:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC4C;
    }
L_0897CC4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC54;
    }
L_0897CC54:
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC68;
      }
      goto L_0897CC60;
    }
L_0897CC60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_0897CC68;
      }
      goto L_0897CC68;
    }
L_0897CC68:
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC7C;
      }
      goto L_0897CC74;
    }
L_0897CC74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0897CC7C;
      }
      goto L_0897CC7C;
    }
L_0897CC7C:
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1420), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1428), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0897CC94;
L_0897CC94:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-20332)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-20336)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-20324)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-20328)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1424), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897CCF0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CCF0u) goto L_0897CCF0;
    return;
L_0897CCF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1416)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1412)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0897CD0Cu);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ADF4u;
    return;
L_0897CD0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1424)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1412)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1440)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1656), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897CD8C;
      }
      goto L_0897CD40;
    }
L_0897CD40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26000));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[5] = (0u < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[30] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(26032));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20388)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20392)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_0897CD94;
      }
      goto L_0897CD84;
    }
L_0897CD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CEE0;
      }
      goto L_0897CD8C;
    }
L_0897CD8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CD94;
    }
L_0897CD94:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0897CD98;
L_0897CD98:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897CDA4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897CDA4u) goto L_0897CDA4;
    return;
L_0897CDA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[31] = (0x0897CDB8u);
    aot_gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x0897CDB8u) goto L_0897CDB8;
    return;
L_0897CDB8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0897CDD0;
      }
      goto L_0897CDC4;
    }
L_0897CDC4:
    aot_gpr[31] = (0x0897CDCCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 57u, 0x0897D494u>(ctx, &aot_mem) && ctx.pc == 0x0897CDCCu) goto L_0897CDCC;
    return;
L_0897CDCC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897CDD0;
L_0897CDD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897CDF4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897CDF4u) goto L_0897CDF4;
    return;
L_0897CDF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897CE04u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897CE04u) goto L_0897CE04;
    return;
L_0897CE04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897CE40;
      }
      goto L_0897CE10;
    }
L_0897CE10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
      if (branch_taken) {
          goto L_0897CE30;
      }
      goto L_0897CE1C;
    }
L_0897CE1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_0897CE34;
    }
    goto L_0897CE28;
L_0897CE28:
    aot_gpr[31] = (0x0897CE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CE30u) goto L_0897CE30;
    return;
L_0897CE30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_0897CE34;
L_0897CE34:
    aot_gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CE40;
    }
L_0897CE40:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1416)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1412)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    aot_gpr[31] = (0x0897CE78u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5AE3Cu;
    return;
L_0897CE78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CEB0;
      }
      goto L_0897CE80;
    }
L_0897CE80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
      if (branch_taken) {
          goto L_0897CEA0;
      }
      goto L_0897CE8C;
    }
L_0897CE8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_0897CEA4;
    }
    goto L_0897CE98;
L_0897CE98:
    aot_gpr[31] = (0x0897CEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CEA0u) goto L_0897CEA0;
    return;
L_0897CEA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_0897CEA4;
L_0897CEA4:
    aot_gpr[2] = (0u | 64u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CEB0;
    }
L_0897CEB0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897CEBCu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CEBCu) goto L_0897CEBC;
    return;
L_0897CEBC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897CECCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 194u, 0x0897EE88u>(ctx, &aot_mem) && ctx.pc == 0x0897CECCu) goto L_0897CECC;
    return;
L_0897CECC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(368)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CD98;
      }
      goto L_0897CEE0;
    }
L_0897CEE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[31] = (0x0897CEF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.pc = 0x08A5AF1Cu;
    return;
L_0897CEF8:
    aot_gpr[4] = (0u | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1424), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897CF20u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CF20u) goto L_0897CF20;
    return;
L_0897CF20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0897CF58;
      }
      goto L_0897CF30;
    }
L_0897CF30:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CF84;
      }
      goto L_0897CF38;
    }
L_0897CF38:
    aot_gpr[4] = (9u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32768));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1648), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1652), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897CFB0;
      }
      goto L_0897CF58;
    }
L_0897CF58:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CF84;
      }
      goto L_0897CF64;
    }
L_0897CF64:
    aot_gpr[4] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16384));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1648), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1652), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897CFB0;
      }
      goto L_0897CF84;
    }
L_0897CF84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[30]);
      if (branch_taken) {
          goto L_0897CFA4;
      }
      goto L_0897CF90;
    }
L_0897CF90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
        goto L_0897CFA8;
    }
    goto L_0897CF9C;
L_0897CF9C:
    aot_gpr[31] = (0x0897CFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CFA4u) goto L_0897CFA4;
    return;
L_0897CFA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    goto L_0897CFA8;
L_0897CFA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 256u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 9u, 0x0897D070u>(ctx, &aot_mem); return;
      }
      goto L_0897CFB0;
    }
L_0897CFB0:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(672));
    goto L_0897CFB8;
L_0897CFB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897CFCCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897CFCCu) goto L_0897CFCC;
    return;
L_0897CFCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1656)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897CFDCu);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897CFDCu) goto L_0897CFDC;
    return;
L_0897CFDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1656)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897CFF0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CFF0u) goto L_0897CFF0;
    return;
L_0897CFF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (0x0897CFFCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CFFCu) goto L_0897CFFC;
    return;
L_0897CFFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.pc = 0x0897D000u; return;
}

void recomp_unit_0376(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0376_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_376(Runtime &runtime) {
    runtime.register_generated_unit(376u, 0x0897C000u, 4096u, &recomp_unit_0376, &recomp_unit_0376_entry);
    runtime.register_function(0x0897C004u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C010u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C018u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C020u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C028u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C030u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C038u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C048u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C050u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C060u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C068u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C078u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C080u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C090u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C098u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0A0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0A8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0B4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0C8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0D0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0DCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0E8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0F4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C0FCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C104u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C10Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C114u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C11Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C128u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C130u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C138u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C140u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C144u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C15Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C164u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C18Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C194u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C19Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1A4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1B0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1BCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1C8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1D4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1E0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C1ECu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C204u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C21Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C228u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C234u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C23Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C24Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C260u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C27Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C28Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C2A8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C2D4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C2F0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C308u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C314u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C31Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C330u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C368u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C38Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C394u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C39Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C3B4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C3C0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C3CCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C3D8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C40Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C41Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C424u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C42Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C434u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C43Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C444u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C454u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C458u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C460u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C46Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C478u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C480u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C484u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C48Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4A0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4B0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4BCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4D0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4DCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4E4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C4E8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C50Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C51Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C524u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C530u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C53Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C544u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C548u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C554u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C578u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C588u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C59Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C5ACu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C5BCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C5C8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C5D0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C5D4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C5DCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C60Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C638u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C654u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C65Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C664u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C670u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C678u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C680u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C688u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C690u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C694u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C6B8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C6E0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C700u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C708u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C710u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C718u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C728u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C730u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C7B8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C7ECu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C7F0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C810u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C83Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C848u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C850u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C868u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C894u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C8B0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C8D8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C8F0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C8F8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C900u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C908u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C920u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C928u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C954u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C95Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C960u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C978u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C994u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C9B8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C9D4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C9ECu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897C9F8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CA00u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CA14u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CA4Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CA74u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CA8Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CA94u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CAA0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CAACu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CAC0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CACCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CAE0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB00u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB0Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB14u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB1Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB30u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB54u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CB60u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CBE8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CBF0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CBF8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC00u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC08u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC10u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC18u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC2Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC38u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC40u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC4Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC54u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC60u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC68u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC74u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC7Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CC94u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CCF0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CD0Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CD40u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CD84u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CD8Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CD94u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CD98u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CDA4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CDB8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CDC4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CDCCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CDD0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CDF4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE04u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE10u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE1Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE28u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE30u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE34u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE40u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE78u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE80u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE8Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CE98u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CEA0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CEA4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CEB0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CEBCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CECCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CEE0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CEF8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF20u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF30u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF38u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF58u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF64u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF84u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF90u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CF9Cu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFA4u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFA8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFB0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFB8u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFCCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFDCu, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFF0u, &recomp_unit_0376, "recomp_unit_0376");
    runtime.register_function(0x0897CFFCu, &recomp_unit_0376, "recomp_unit_0376");
}
} // namespace psprecomp
