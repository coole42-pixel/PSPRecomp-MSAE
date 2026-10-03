#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0152[1019] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58,
    0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 73,
    0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83,
    0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 107, 0,
    0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 124, 0, 125, 0, 0, 126, 127,
    0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140,
    0, 0, 141, 0, 142, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 150, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0,
    161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185,
    0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 196, 197, 0, 198, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 203, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207,
    0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222,
    0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 264,
};
void recomp_unit_0152_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0889C004u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0152[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889C004;
    case 2u: goto L_0889C018;
    case 3u: goto L_0889C030;
    case 4u: goto L_0889C03C;
    case 5u: goto L_0889C048;
    case 6u: goto L_0889C054;
    case 7u: goto L_0889C068;
    case 8u: goto L_0889C0C0;
    case 9u: goto L_0889C0D0;
    case 10u: goto L_0889C0E8;
    case 11u: goto L_0889C0FC;
    case 12u: goto L_0889C108;
    case 13u: goto L_0889C13C;
    case 14u: goto L_0889C150;
    case 15u: goto L_0889C160;
    case 16u: goto L_0889C178;
    case 17u: goto L_0889C190;
    case 18u: goto L_0889C1A4;
    case 19u: goto L_0889C1B8;
    case 20u: goto L_0889C1CC;
    case 21u: goto L_0889C1E0;
    case 22u: goto L_0889C1F4;
    case 23u: goto L_0889C208;
    case 24u: goto L_0889C21C;
    case 25u: goto L_0889C230;
    case 26u: goto L_0889C23C;
    case 27u: goto L_0889C25C;
    case 28u: goto L_0889C27C;
    case 29u: goto L_0889C284;
    case 30u: goto L_0889C28C;
    case 31u: goto L_0889C298;
    case 32u: goto L_0889C2CC;
    case 33u: goto L_0889C2D4;
    case 34u: goto L_0889C2DC;
    case 35u: goto L_0889C2E4;
    case 36u: goto L_0889C2EC;
    case 37u: goto L_0889C2F8;
    case 38u: goto L_0889C32C;
    case 39u: goto L_0889C334;
    case 40u: goto L_0889C340;
    case 41u: goto L_0889C34C;
    case 42u: goto L_0889C35C;
    case 43u: goto L_0889C36C;
    case 44u: goto L_0889C388;
    case 45u: goto L_0889C390;
    case 46u: goto L_0889C398;
    case 47u: goto L_0889C3A4;
    case 48u: goto L_0889C3BC;
    case 49u: goto L_0889C3F0;
    case 50u: goto L_0889C404;
    case 51u: goto L_0889C41C;
    case 52u: goto L_0889C424;
    case 53u: goto L_0889C43C;
    case 54u: goto L_0889C448;
    case 55u: goto L_0889C454;
    case 56u: goto L_0889C460;
    case 57u: goto L_0889C478;
    case 58u: goto L_0889C480;
    case 59u: goto L_0889C488;
    case 60u: goto L_0889C490;
    case 61u: goto L_0889C49C;
    case 62u: goto L_0889C4A4;
    case 63u: goto L_0889C4AC;
    case 64u: goto L_0889C4B4;
    case 65u: goto L_0889C4BC;
    case 66u: goto L_0889C4C4;
    case 67u: goto L_0889C4CC;
    case 68u: goto L_0889C4D4;
    case 69u: goto L_0889C4DC;
    case 70u: goto L_0889C4E8;
    case 71u: goto L_0889C4F0;
    case 72u: goto L_0889C4FC;
    case 73u: goto L_0889C500;
    case 74u: goto L_0889C508;
    case 75u: goto L_0889C520;
    case 76u: goto L_0889C52C;
    case 77u: goto L_0889C538;
    case 78u: goto L_0889C544;
    case 79u: goto L_0889C54C;
    case 80u: goto L_0889C554;
    case 81u: goto L_0889C56C;
    case 82u: goto L_0889C578;
    case 83u: goto L_0889C580;
    case 84u: goto L_0889C588;
    case 85u: goto L_0889C594;
    case 86u: goto L_0889C59C;
    case 87u: goto L_0889C5A8;
    case 88u: goto L_0889C5AC;
    case 89u: goto L_0889C5B4;
    case 90u: goto L_0889C5CC;
    case 91u: goto L_0889C5D8;
    case 92u: goto L_0889C5E4;
    case 93u: goto L_0889C5FC;
    case 94u: goto L_0889C604;
    case 95u: goto L_0889C60C;
    case 96u: goto L_0889C614;
    case 97u: goto L_0889C620;
    case 98u: goto L_0889C62C;
    case 99u: goto L_0889C630;
    case 100u: goto L_0889C638;
    case 101u: goto L_0889C640;
    case 102u: goto L_0889C648;
    case 103u: goto L_0889C650;
    case 104u: goto L_0889C65C;
    case 105u: goto L_0889C660;
    case 106u: goto L_0889C668;
    case 107u: goto L_0889C67C;
    case 108u: goto L_0889C688;
    case 109u: goto L_0889C690;
    case 110u: goto L_0889C6A4;
    case 111u: goto L_0889C6B0;
    case 112u: goto L_0889C6B8;
    case 113u: goto L_0889C6CC;
    case 114u: goto L_0889C6D8;
    case 115u: goto L_0889C6E0;
    case 116u: goto L_0889C6F8;
    case 117u: goto L_0889C708;
    case 118u: goto L_0889C720;
    case 119u: goto L_0889C72C;
    case 120u: goto L_0889C744;
    case 121u: goto L_0889C750;
    case 122u: goto L_0889C758;
    case 123u: goto L_0889C764;
    case 124u: goto L_0889C768;
    case 125u: goto L_0889C770;
    case 126u: goto L_0889C77C;
    case 127u: goto L_0889C780;
    case 128u: goto L_0889C788;
    case 129u: goto L_0889C794;
    case 130u: goto L_0889C79C;
    case 131u: goto L_0889C7A8;
    case 132u: goto L_0889C7B0;
    case 133u: goto L_0889C7BC;
    case 134u: goto L_0889C7C4;
    case 135u: goto L_0889C7D0;
    case 136u: goto L_0889C7D8;
    case 137u: goto L_0889C7E4;
    case 138u: goto L_0889C7EC;
    case 139u: goto L_0889C7F8;
    case 140u: goto L_0889C800;
    case 141u: goto L_0889C80C;
    case 142u: goto L_0889C814;
    case 143u: goto L_0889C820;
    case 144u: goto L_0889C824;
    case 145u: goto L_0889C82C;
    case 146u: goto L_0889C840;
    case 147u: goto L_0889C84C;
    case 148u: goto L_0889C854;
    case 149u: goto L_0889C860;
    case 150u: goto L_0889C86C;
    case 151u: goto L_0889C870;
    case 152u: goto L_0889C88C;
    case 153u: goto L_0889C8B0;
    case 154u: goto L_0889C8BC;
    case 155u: goto L_0889C8D0;
    case 156u: goto L_0889C8D8;
    case 157u: goto L_0889C8E0;
    case 158u: goto L_0889C8EC;
    case 159u: goto L_0889C8F4;
    case 160u: goto L_0889C8FC;
    case 161u: goto L_0889C904;
    case 162u: goto L_0889C910;
    case 163u: goto L_0889C91C;
    case 164u: goto L_0889C924;
    case 165u: goto L_0889C92C;
    case 166u: goto L_0889C938;
    case 167u: goto L_0889C940;
    case 168u: goto L_0889C950;
    case 169u: goto L_0889C958;
    case 170u: goto L_0889C964;
    case 171u: goto L_0889C96C;
    case 172u: goto L_0889C974;
    case 173u: goto L_0889C984;
    case 174u: goto L_0889C994;
    case 175u: goto L_0889C9B4;
    case 176u: goto L_0889C9E4;
    case 177u: goto L_0889C9F0;
    case 178u: goto L_0889CA0C;
    case 179u: goto L_0889CA28;
    case 180u: goto L_0889CA44;
    case 181u: goto L_0889CA50;
    case 182u: goto L_0889CA64;
    case 183u: goto L_0889CA6C;
    case 184u: goto L_0889CA78;
    case 185u: goto L_0889CA80;
    case 186u: goto L_0889CA88;
    case 187u: goto L_0889CA90;
    case 188u: goto L_0889CA9C;
    case 189u: goto L_0889CAA4;
    case 190u: goto L_0889CAAC;
    case 191u: goto L_0889CAB4;
    case 192u: goto L_0889CAC0;
    case 193u: goto L_0889CACC;
    case 194u: goto L_0889CAD4;
    case 195u: goto L_0889CADC;
    case 196u: goto L_0889CAE4;
    case 197u: goto L_0889CAE8;
    case 198u: goto L_0889CAF0;
    case 199u: goto L_0889CB04;
    case 200u: goto L_0889CB14;
    case 201u: goto L_0889CB24;
    case 202u: goto L_0889CB2C;
    case 203u: goto L_0889CB34;
    case 204u: goto L_0889CB38;
    case 205u: goto L_0889CB40;
    case 206u: goto L_0889CB78;
    case 207u: goto L_0889CB80;
    case 208u: goto L_0889CB88;
    case 209u: goto L_0889CB90;
    case 210u: goto L_0889CB98;
    case 211u: goto L_0889CBB8;
    case 212u: goto L_0889CBBC;
    case 213u: goto L_0889CBC8;
    case 214u: goto L_0889CBD8;
    case 215u: goto L_0889CC28;
    case 216u: goto L_0889CC48;
    case 217u: goto L_0889CC50;
    case 218u: goto L_0889CC58;
    case 219u: goto L_0889CC68;
    case 220u: goto L_0889CC70;
    case 221u: goto L_0889CC78;
    case 222u: goto L_0889CC80;
    case 223u: goto L_0889CC88;
    case 224u: goto L_0889CC90;
    case 225u: goto L_0889CCA0;
    case 226u: goto L_0889CCB8;
    case 227u: goto L_0889CCBC;
    case 228u: goto L_0889CCC8;
    case 229u: goto L_0889CCD8;
    case 230u: goto L_0889CD34;
    case 231u: goto L_0889CD54;
    case 232u: goto L_0889CD60;
    case 233u: goto L_0889CD80;
    case 234u: goto L_0889CDA8;
    case 235u: goto L_0889CDC4;
    case 236u: goto L_0889CDD8;
    case 237u: goto L_0889CDE4;
    case 238u: goto L_0889CDEC;
    case 239u: goto L_0889CE00;
    case 240u: goto L_0889CE18;
    case 241u: goto L_0889CE44;
    case 242u: goto L_0889CE60;
    case 243u: goto L_0889CE68;
    case 244u: goto L_0889CE70;
    case 245u: goto L_0889CE88;
    case 246u: goto L_0889CEB4;
    case 247u: goto L_0889CEC0;
    case 248u: goto L_0889CED4;
    case 249u: goto L_0889CEE8;
    case 250u: goto L_0889CEF8;
    case 251u: goto L_0889CF00;
    case 252u: goto L_0889CF0C;
    case 253u: goto L_0889CF3C;
    case 254u: goto L_0889CF68;
    case 255u: goto L_0889CF74;
    case 256u: goto L_0889CF84;
    case 257u: goto L_0889CF90;
    case 258u: goto L_0889CF98;
    case 259u: goto L_0889CFB4;
    case 260u: goto L_0889CFB8;
    case 261u: goto L_0889CFC4;
    case 262u: goto L_0889CFCC;
    case 263u: goto L_0889CFE8;
    case 264u: goto L_0889CFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889C004:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-7));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_0889C13C;
      }
      goto L_0889C018;
    }
L_0889C018:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15280)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C030:
    aot_gpr[4] = (0u | 183u);
    aot_gpr[31] = (0x0889C03Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C03Cu) goto L_0889C03C;
    return;
L_0889C03C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C048u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889C048u) goto L_0889C048;
    return;
L_0889C048:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C054u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0889C054u) goto L_0889C054;
    return;
L_0889C054:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889C068u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x0889C068u) goto L_0889C068;
    return;
L_0889C068:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (17214u << 16u);
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[20] - aot_fpr[12];
    aot_gpr[4] = (17076u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0889C0C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 108u, 0x0889488Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C0C0u) goto L_0889C0C0;
    return;
L_0889C0C0:
    aot_gpr[4] = (17184u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0889C0D0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 103u, 0x0889A594u>(ctx, &aot_mem) && ctx.pc == 0x0889C0D0u) goto L_0889C0D0;
    return;
L_0889C0D0:
    aot_gpr[4] = (17116u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0889C0E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C0E8u) goto L_0889C0E8;
    return;
L_0889C0E8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 5u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[31] = (0x0889C0FCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889C0FCu) goto L_0889C0FC;
    return;
L_0889C0FC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C108u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0889C108u) goto L_0889C108;
    return;
L_0889C108:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 34u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889C13Cu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0889C13Cu) goto L_0889C13C;
    return;
L_0889C13C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0889C32C;
      }
      goto L_0889C150;
    }
L_0889C150:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C32C;
      }
      goto L_0889C160;
    }
L_0889C160:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26520)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889C230;
      }
      goto L_0889C178;
    }
L_0889C178:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15400)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C190:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14508));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C1A4;
    }
L_0889C1A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14532));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C1B8;
    }
L_0889C1B8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14548));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C1CC;
    }
L_0889C1CC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14564));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C1E0;
    }
L_0889C1E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14580));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C1F4;
    }
L_0889C1F4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14600));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C208;
    }
L_0889C208:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14620));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C21C;
    }
L_0889C21C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2200)));
    aot_gpr[4] = (2214u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14636));
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C230;
    }
L_0889C230:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14656));
    goto L_0889C23C;
L_0889C23C:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(26524)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x0889C25Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14672));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0889C25Cu) goto L_0889C25C;
    return;
L_0889C25C:
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16800u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0889C27Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889C27Cu) goto L_0889C27C;
    return;
L_0889C27C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2D4;
      }
      goto L_0889C284;
    }
L_0889C284:
    aot_gpr[31] = (0x0889C28Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889C28Cu) goto L_0889C28C;
    return;
L_0889C28C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C298u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0889C298u) goto L_0889C298;
    return;
L_0889C298:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(280));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 34u);
    aot_gpr[31] = (0x0889C2CCu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0889C2CCu) goto L_0889C2CC;
    return;
L_0889C2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C32C;
      }
      goto L_0889C2D4;
    }
L_0889C2D4:
    aot_gpr[31] = (0x0889C2DCu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889C2DCu) goto L_0889C2DC;
    return;
L_0889C2DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C32C;
      }
      goto L_0889C2E4;
    }
L_0889C2E4:
    aot_gpr[31] = (0x0889C2ECu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088300D4u>(ctx, &aot_mem) && ctx.pc == 0x0889C2ECu) goto L_0889C2EC;
    return;
L_0889C2EC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C2F8u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x0889C2F8u) goto L_0889C2F8;
    return;
L_0889C2F8:
    aot_gpr[11] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(280));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 34u);
    aot_gpr[31] = (0x0889C32Cu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x0889C32Cu) goto L_0889C32C;
    return;
L_0889C32C:
    aot_gpr[31] = (0x0889C334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C334u) goto L_0889C334;
    return;
L_0889C334:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C36C;
      }
      goto L_0889C340;
    }
L_0889C340:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C36C;
      }
      goto L_0889C34C;
    }
L_0889C34C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 7u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889C36C;
      }
      goto L_0889C35C;
    }
L_0889C35C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 11u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C390;
      }
      goto L_0889C36C;
    }
L_0889C36C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C398;
      }
      goto L_0889C388;
    }
L_0889C388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C3A4;
      }
      goto L_0889C390;
    }
L_0889C390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C3A4;
      }
      goto L_0889C398;
    }
L_0889C398:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889C3A4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 35u, 0x088A12BCu>(ctx, &aot_mem) && ctx.pc == 0x0889C3A4u) goto L_0889C3A4;
    return;
L_0889C3A4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C3BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26528)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0889C41C;
      }
      goto L_0889C3F0;
    }
L_0889C3F0:
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), 0u);
      if (branch_taken) {
          goto L_0889C854;
      }
      goto L_0889C404;
    }
L_0889C404:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15440)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C424;
    }
L_0889C424:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C43Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14704));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C43Cu) goto L_0889C43C;
    return;
L_0889C43C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -958 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -947 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C488;
      }
      goto L_0889C448;
    }
L_0889C448:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -984 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-975));
      if (branch_taken) {
          goto L_0889C478;
      }
      goto L_0889C454;
    }
L_0889C454:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -997 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(997));
      if (branch_taken) {
          goto L_0889C4F0;
      }
      goto L_0889C460;
    }
L_0889C460:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15480)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C478:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C4F0;
      }
      goto L_0889C480;
    }
L_0889C480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C488;
    }
L_0889C488:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-931));
      if (branch_taken) {
          goto L_0889C4AC;
      }
      goto L_0889C490;
    }
L_0889C490:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -957 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -948 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C4BC;
      }
      goto L_0889C49C;
    }
L_0889C49C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C4F0;
      }
      goto L_0889C4A4;
    }
L_0889C4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4AC;
    }
L_0889C4AC:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C4F0;
      }
      goto L_0889C4B4;
    }
L_0889C4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4BC;
    }
L_0889C4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4C4;
    }
L_0889C4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4CC;
    }
L_0889C4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4D4;
    }
L_0889C4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4DC;
    }
L_0889C4DC:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C4E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C4E8u) goto L_0889C4E8;
    return;
L_0889C4E8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C500;
      }
      goto L_0889C4F0;
    }
L_0889C4F0:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C4FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C4FCu) goto L_0889C4FC;
    return;
L_0889C4FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C500;
L_0889C500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C508;
    }
L_0889C508:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C520u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14768));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C520u) goto L_0889C520;
    return;
L_0889C520:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < -4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C54C;
      }
      goto L_0889C52C;
    }
L_0889C52C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-997));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C59C;
      }
      goto L_0889C538;
    }
L_0889C538:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x0889C544u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C544u) goto L_0889C544;
    return;
L_0889C544:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C5AC;
      }
      goto L_0889C54C;
    }
L_0889C54C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0889C59C;
      }
      goto L_0889C554;
    }
L_0889C554:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15536)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C56C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C578u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C578u) goto L_0889C578;
    return;
L_0889C578:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C5AC;
      }
      goto L_0889C580;
    }
L_0889C580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5AC;
      }
      goto L_0889C588;
    }
L_0889C588:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C594u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C594u) goto L_0889C594;
    return;
L_0889C594:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C5AC;
      }
      goto L_0889C59C;
    }
L_0889C59C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C5A8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C5A8u) goto L_0889C5A8;
    return;
L_0889C5A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C5AC;
L_0889C5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C5B4;
    }
L_0889C5B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C5CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14828));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C5CCu) goto L_0889C5CC;
    return;
L_0889C5CC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 18 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 4512u);
      if (branch_taken) {
          goto L_0889C5FC;
      }
      goto L_0889C5D8;
    }
L_0889C5D8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C5E4;
    }
L_0889C5E4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15584)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C5FC:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C604;
    }
L_0889C604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C660;
      }
      goto L_0889C60C;
    }
L_0889C60C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C660;
      }
      goto L_0889C614;
    }
L_0889C614:
    aot_gpr[4] = (0u | 13u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C630;
      }
      goto L_0889C620;
    }
L_0889C620:
    aot_gpr[4] = (0u | 98u);
    aot_gpr[31] = (0x0889C62Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C62Cu) goto L_0889C62C;
    return;
L_0889C62C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C630;
L_0889C630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C660;
      }
      goto L_0889C638;
    }
L_0889C638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C660;
      }
      goto L_0889C640;
    }
L_0889C640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C660;
      }
      goto L_0889C648;
    }
L_0889C648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C660;
      }
      goto L_0889C650;
    }
L_0889C650:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C65Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C65Cu) goto L_0889C65C;
    return;
L_0889C65C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C660;
L_0889C660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C668;
    }
L_0889C668:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889C67Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14884));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C67Cu) goto L_0889C67C;
    return;
L_0889C67C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C688u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C688u) goto L_0889C688;
    return;
L_0889C688:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C690;
    }
L_0889C690:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889C6A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14940));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C6A4u) goto L_0889C6A4;
    return;
L_0889C6A4:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C6B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C6B0u) goto L_0889C6B0;
    return;
L_0889C6B0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C6B8;
    }
L_0889C6B8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889C6CCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15000));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C6CCu) goto L_0889C6CC;
    return;
L_0889C6CC:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C6D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C6D8u) goto L_0889C6D8;
    return;
L_0889C6D8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C6E0;
    }
L_0889C6E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889C6F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15064));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C6F8u) goto L_0889C6F8;
    return;
L_0889C6F8:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-6));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C814;
      }
      goto L_0889C708;
    }
L_0889C708:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15648)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C720:
    aot_gpr[4] = (0u | 24u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C770;
      }
      goto L_0889C72C;
    }
L_0889C72C:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24880));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-997));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889C758;
      }
      goto L_0889C744;
    }
L_0889C744:
    aot_gpr[4] = (0u | 118u);
    aot_gpr[31] = (0x0889C750u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C750u) goto L_0889C750;
    return;
L_0889C750:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C768;
      }
      goto L_0889C758;
    }
L_0889C758:
    aot_gpr[4] = (0u | 117u);
    aot_gpr[31] = (0x0889C764u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C764u) goto L_0889C764;
    return;
L_0889C764:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C768;
L_0889C768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C780;
      }
      goto L_0889C770;
    }
L_0889C770:
    aot_gpr[4] = (0u | 96u);
    aot_gpr[31] = (0x0889C77Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C77Cu) goto L_0889C77C;
    return;
L_0889C77C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C780;
L_0889C780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C788;
    }
L_0889C788:
    aot_gpr[4] = (0u | 104u);
    aot_gpr[31] = (0x0889C794u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C794u) goto L_0889C794;
    return;
L_0889C794:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C79C;
    }
L_0889C79C:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C7A8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C7A8u) goto L_0889C7A8;
    return;
L_0889C7A8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C7B0;
    }
L_0889C7B0:
    aot_gpr[4] = (0u | 99u);
    aot_gpr[31] = (0x0889C7BCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C7BCu) goto L_0889C7BC;
    return;
L_0889C7BC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C7C4;
    }
L_0889C7C4:
    aot_gpr[4] = (0u | 99u);
    aot_gpr[31] = (0x0889C7D0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C7D0u) goto L_0889C7D0;
    return;
L_0889C7D0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C7D8;
    }
L_0889C7D8:
    aot_gpr[4] = (0u | 104u);
    aot_gpr[31] = (0x0889C7E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C7E4u) goto L_0889C7E4;
    return;
L_0889C7E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C7EC;
    }
L_0889C7EC:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C7F8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C7F8u) goto L_0889C7F8;
    return;
L_0889C7F8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C800;
    }
L_0889C800:
    aot_gpr[4] = (0u | 96u);
    aot_gpr[31] = (0x0889C80Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C80Cu) goto L_0889C80C;
    return;
L_0889C80C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C824;
      }
      goto L_0889C814;
    }
L_0889C814:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C820u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C820u) goto L_0889C820;
    return;
L_0889C820:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C824;
L_0889C824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C82C;
    }
L_0889C82C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889C840u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15124));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C840u) goto L_0889C840;
    return;
L_0889C840:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C84Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C84Cu) goto L_0889C84C;
    return;
L_0889C84C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
      if (branch_taken) {
          goto L_0889C870;
      }
      goto L_0889C854;
    }
L_0889C854:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889C860u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15184));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889C860u) goto L_0889C860;
    return;
L_0889C860:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[31] = (0x0889C86Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0889C86Cu) goto L_0889C86C;
    return;
L_0889C86C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(26532), aot_gpr[2]);
    goto L_0889C870;
L_0889C870:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26520), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x0889C88Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2200));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0889C88Cu) goto L_0889C88C;
    return;
L_0889C88C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26524), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889C8B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889C8B0u) goto L_0889C8B0;
    return;
L_0889C8B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(26532)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C8BC;
    }
L_0889C8BC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26652)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C8EC;
      }
      goto L_0889C8D0;
    }
L_0889C8D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889C924;
      }
      goto L_0889C8D8;
    }
L_0889C8D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889C904;
      }
      goto L_0889C8E0;
    }
L_0889C8E0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0889C924;
      }
      goto L_0889C8EC;
    }
L_0889C8EC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C910;
      }
      goto L_0889C8F4;
    }
L_0889C8F4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C91C;
      }
      goto L_0889C8FC;
    }
L_0889C8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C924;
      }
      goto L_0889C904;
    }
L_0889C904:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0889C924;
      }
      goto L_0889C910;
    }
L_0889C910:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0889C924;
      }
      goto L_0889C91C;
    }
L_0889C91C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0889C924;
L_0889C924:
    aot_gpr[31] = (0x0889C92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C92Cu) goto L_0889C92C;
    return;
L_0889C92C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C940;
      }
      goto L_0889C938;
    }
L_0889C938:
    aot_gpr[31] = (0x0889C940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 260u, 0x0895FF60u>(ctx, &aot_mem) && ctx.pc == 0x0889C940u) goto L_0889C940;
    return;
L_0889C940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26528)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C950;
    }
L_0889C950:
    aot_gpr[31] = (0x0889C958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889C958u) goto L_0889C958;
    return;
L_0889C958:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C964;
    }
L_0889C964:
    aot_gpr[31] = (0x0889C96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 138u, 0x089FE928u>(ctx, &aot_mem) && ctx.pc == 0x0889C96Cu) goto L_0889C96C;
    return;
L_0889C96C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C974;
    }
L_0889C974:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28400)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C994;
      }
      goto L_0889C984;
    }
L_0889C984:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28400), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x0889C994u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 195u, 0x0895ECC8u>(ctx, &aot_mem) && ctx.pc == 0x0889C994u) goto L_0889C994;
    return;
L_0889C994:
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
L_0889C9B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9944));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889C9E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0889CD80;
L_0889C9E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889C9F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26560));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C9F0u) goto L_0889C9F0;
    return;
L_0889C9F0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5808));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(9976), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889CA0Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26572));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CA0Cu) goto L_0889CA0C;
    return;
L_0889CA0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5536));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(9980), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889CA28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26584));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CA28u) goto L_0889CA28;
    return;
L_0889CA28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5940));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(9984), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889CA44u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26596));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CA44u) goto L_0889CA44;
    return;
L_0889CA44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CA50:
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 65 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889CA6C;
      }
      goto L_0889CA64;
    }
L_0889CA64:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CA80;
      }
      goto L_0889CA6C;
    }
L_0889CA6C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889CA88;
      }
      goto L_0889CA78;
    }
L_0889CA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CA90;
      }
      goto L_0889CA80;
    }
L_0889CA80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CA88;
    }
L_0889CA88:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CAA4;
      }
      goto L_0889CA90;
    }
L_0889CA90:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889CAAC;
      }
      goto L_0889CA9C;
    }
L_0889CA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CAB4;
      }
      goto L_0889CAA4;
    }
L_0889CAA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CAAC;
    }
L_0889CAAC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CADC;
      }
      goto L_0889CAB4;
    }
L_0889CAB4:
    aot_gpr[5] = (0u | 43u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAD4;
      }
      goto L_0889CAC0;
    }
L_0889CAC0:
    aot_gpr[5] = (0u | 47u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAE4;
      }
      goto L_0889CACC;
    }
L_0889CACC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CAD4;
    }
L_0889CAD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CADC;
    }
L_0889CADC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CAE4;
    }
L_0889CAE4:
    aot_gpr[2] = (0u | 0u);
    goto L_0889CAE8;
L_0889CAE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CAF0:
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(15736));
    goto L_0889CB04;
L_0889CB04:
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889CB2C;
      }
      goto L_0889CB14;
    }
L_0889CB14:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB04;
      }
      goto L_0889CB24;
    }
L_0889CB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB34;
      }
      goto L_0889CB2C;
    }
L_0889CB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB38;
      }
      goto L_0889CB34;
    }
L_0889CB34:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0889CB38;
L_0889CB38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CB40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[14] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[24] = (0u | 0u);
    aot_gpr[15] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[13] = (0u | 61u);
    aot_gpr[12] = (0u | 4u);
    aot_gpr[3] = (0u | 13u);
    aot_gpr[11] = (0u | 10u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_0889CB78;
L_0889CB78:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC88;
      }
      goto L_0889CB80;
    }
L_0889CB80:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[13];
    // nop
      if (branch_taken) {
          goto L_0889CC88;
      }
      goto L_0889CB88;
    }
L_0889CB88:
    aot_gpr[31] = (0x0889CB90u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0889CA50;
L_0889CB90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC50;
      }
      goto L_0889CB98;
    }
L_0889CB98:
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[24]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[12];
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[24]);
      if (branch_taken) {
          goto L_0889CC80;
      }
      goto L_0889CBB8;
    }
L_0889CBB8:
    aot_gpr[9] = (0u | 0u);
    goto L_0889CBBC;
L_0889CBBC:
    aot_gpr[25] = (aot_gpr[29] + aot_gpr[9]);
    aot_gpr[31] = (0x0889CBC8u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[25] + static_cast<std::uint32_t>(0))))));
    goto L_0889CAF0;
L_0889CBC8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_0889CBBC;
      }
      goto L_0889CBD8;
    }
L_0889CBD8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[5] & 48u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 4u));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 15u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[9] & 60u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    aot_gpr[5] = (aot_gpr[9] & 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[9] = (0u | 0u);
    goto L_0889CC28;
L_0889CC28:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[9]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889CC28;
      }
      goto L_0889CC48;
    }
L_0889CC48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0889CC80;
      }
      goto L_0889CC50;
    }
L_0889CC50:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_0889CC68;
      }
      goto L_0889CC58;
    }
L_0889CC58:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[15] = (aot_gpr[24] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[15]);
      if (branch_taken) {
          goto L_0889CC80;
      }
      goto L_0889CC68;
    }
L_0889CC68:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_0889CC80;
      }
      goto L_0889CC70;
    }
L_0889CC70:
    { const bool branch_taken = aot_gpr[24] != aot_gpr[15];
    // nop
      if (branch_taken) {
          goto L_0889CC80;
      }
      goto L_0889CC78;
    }
L_0889CC78:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[24]);
    goto L_0889CC80;
L_0889CC80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0889CB78;
      }
      goto L_0889CC88;
    }
L_0889CC88:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CD54;
      }
      goto L_0889CC90;
    }
L_0889CC90:
    aot_gpr[10] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889CCB8;
      }
      goto L_0889CCA0;
    }
L_0889CCA0:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CCA0;
      }
      goto L_0889CCB8;
    }
L_0889CCB8:
    aot_gpr[10] = (0u | 0u);
    goto L_0889CCBC;
L_0889CCBC:
    aot_gpr[11] = (aot_gpr[29] + aot_gpr[10]);
    aot_gpr[31] = (0x0889CCC8u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0))))));
    goto L_0889CAF0;
L_0889CCC8:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_0889CCBC;
      }
      goto L_0889CCD8;
    }
L_0889CCD8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[5] & 48u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 4u));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] & 15u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    aot_gpr[5] = (aot_gpr[10] & 60u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    aot_gpr[5] = (aot_gpr[10] & 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CD54;
      }
      goto L_0889CD34;
    }
L_0889CD34:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[10]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889CD34;
      }
      goto L_0889CD54;
    }
L_0889CD54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CD60:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26608), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CD80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6260));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889CDA8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = 0x08A5B0B4u;
    return;
L_0889CDA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CDC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889CDD8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 59u, 0x08A39290u>(ctx, &aot_mem) && ctx.pc == 0x0889CDD8u) goto L_0889CDD8;
    return;
L_0889CDD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CDE4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CDEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889CE00u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5B0B4u;
    return;
L_0889CE00:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15804)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15800)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x0889CE18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 75u, 0x08A3E668u>(ctx, &aot_mem) && ctx.pc == 0x0889CE18u) goto L_0889CE18;
    return;
L_0889CE18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CE44:
    aot_gpr[4] = (17392u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17288u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CE60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CE68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CE70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0889CE88u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 5u, 0x0896402Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CE88u) goto L_0889CE88;
    return;
L_0889CE88:
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24828));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 16384u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[31] = (0x0889CEB4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 276u, 0x08963F94u>(ctx, &aot_mem) && ctx.pc == 0x0889CEB4u) goto L_0889CEB4;
    return;
L_0889CEB4:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x0889CEC0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 141u, 0x0896682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CEC0u) goto L_0889CEC0;
    return;
L_0889CEC0:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[16]));
    aot_gpr[4] = (2u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[31] = (0x0889CED4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 143u, 0x0896684Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CED4u) goto L_0889CED4;
    return;
L_0889CED4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CEE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889CEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 164u, 0x08966964u>(ctx, &aot_mem) && ctx.pc == 0x0889CEF8u) goto L_0889CEF8;
    return;
L_0889CEF8:
    aot_gpr[31] = (0x0889CF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 284u, 0x08963FFCu>(ctx, &aot_mem) && ctx.pc == 0x0889CF00u) goto L_0889CF00;
    return;
L_0889CF00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CF0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x0889CF3Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 5u, 0x0896402Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CF3Cu) goto L_0889CF3C;
    return;
L_0889CF3C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24828));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 16384u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[31] = (0x0889CF68u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 276u, 0x08963F94u>(ctx, &aot_mem) && ctx.pc == 0x0889CF68u) goto L_0889CF68;
    return;
L_0889CF68:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x0889CF74u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 110u, 0x0896972Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CF74u) goto L_0889CF74;
    return;
L_0889CF74:
    aot_gpr[4] = (2u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x0889CF84u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 82u, 0x08969554u>(ctx, &aot_mem) && ctx.pc == 0x0889CF84u) goto L_0889CF84;
    return;
L_0889CF84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFB8;
      }
      goto L_0889CF90;
    }
L_0889CF90:
    aot_gpr[31] = (0x0889CF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 79u, 0x08A2660Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CF98u) goto L_0889CF98;
    return;
L_0889CF98:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (0u | 60000u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(15808));
    aot_gpr[31] = (0x0889CFB4u);
    aot_gpr[6] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 80u, 0x08A26618u>(ctx, &aot_mem) && ctx.pc == 0x0889CFB4u) goto L_0889CFB4;
    return;
L_0889CFB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_0889CFB8;
L_0889CFB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFEC;
      }
      goto L_0889CFC4;
    }
L_0889CFC4:
    aot_gpr[31] = (0x0889CFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 79u, 0x08A2660Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CFCCu) goto L_0889CFCC;
    return;
L_0889CFCC:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[8] = (0u | 60000u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[31] = (0x0889CFE8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(15808));
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 80u, 0x08A26618u>(ctx, &aot_mem) && ctx.pc == 0x0889CFE8u) goto L_0889CFE8;
    return;
L_0889CFE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0889CFEC;
L_0889CFEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0152(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0152_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_152(Runtime &runtime) {
    runtime.register_generated_unit(152u, 0x0889C000u, 4096u, &recomp_unit_0152, &recomp_unit_0152_entry);
    runtime.register_function(0x0889C004u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C018u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C030u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C03Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C048u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C054u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C068u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C0C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C0D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C0E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C0FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C108u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C13Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C150u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C160u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C178u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C190u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C1A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C1B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C1CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C1E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C1F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C208u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C21Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C230u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C23Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C25Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C27Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C284u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C28Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C298u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C2CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C2D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C2DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C2E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C2ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C2F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C32Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C334u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C340u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C34Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C35Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C36Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C388u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C390u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C398u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C3A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C3BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C3F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C404u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C41Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C424u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C43Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C448u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C454u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C460u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C478u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C480u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C488u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C490u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C49Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C4FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C500u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C508u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C520u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C52Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C538u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C544u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C54Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C56Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C578u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C588u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C594u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C59Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C5FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C604u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C60Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C614u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C620u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C62Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C630u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C638u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C640u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C648u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C650u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C65Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C660u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C668u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C67Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C688u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C690u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C6F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C708u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C720u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C72Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C744u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C750u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C758u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C764u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C768u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C770u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C77Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C780u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C788u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C794u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C79Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C7F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C800u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C80Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C814u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C820u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C824u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C82Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C840u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C84Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C854u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C860u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C86Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C870u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C88Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C8FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C904u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C910u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C91Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C924u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C92Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C938u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C940u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C950u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C958u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C964u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C96Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C974u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C984u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C994u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C9B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C9E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889C9F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CA9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CACCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CADCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CAF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CB98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CBB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CBBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CBC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CBD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CC90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CCA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CCB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CCBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CCC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CCD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CD34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CD54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CD60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CD80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CDA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CDC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CDD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CDE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CDECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CE88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CEB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CEC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CED4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CEE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CEF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CF98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CFB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CFB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CFC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CFCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CFE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x0889CFECu, &recomp_unit_0152, "recomp_unit_0152");
}
} // namespace psprecomp
