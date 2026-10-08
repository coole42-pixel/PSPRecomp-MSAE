#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0600[1023] = {
    1, 2, 0, 3, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 11, 12, 0, 0, 0, 13,
    0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 18, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 33, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0,
    51, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 56, 0, 0, 0, 0, 57, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68,
    0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79,
    0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110,
    0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 120, 0, 121, 0,
    0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 126, 127, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0,
    0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 149, 0, 0, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0,
    0, 159, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0,
    0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 176, 0, 0, 177, 0, 0, 0, 178, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0,
    185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 212, 0, 0, 213, 0, 214, 215, 0, 0, 0, 216, 0, 217, 218, 0, 0, 219, 0, 220, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224,
    0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0,
    234, 0, 235, 236, 0, 0, 0, 237, 0, 238, 239, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 243, 0, 244, 245, 0, 0, 0, 246, 0, 247, 248,
    0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 259,
};
void recomp_unit_0600_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A5C000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0600[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5C000;
    case 2u: goto L_08A5C004;
    case 3u: goto L_08A5C00C;
    case 4u: goto L_08A5C014;
    case 5u: goto L_08A5C018;
    case 6u: goto L_08A5C028;
    case 7u: goto L_08A5C040;
    case 8u: goto L_08A5C04C;
    case 9u: goto L_08A5C054;
    case 10u: goto L_08A5C060;
    case 11u: goto L_08A5C068;
    case 12u: goto L_08A5C06C;
    case 13u: goto L_08A5C07C;
    case 14u: goto L_08A5C090;
    case 15u: goto L_08A5C09C;
    case 16u: goto L_08A5C0A4;
    case 17u: goto L_08A5C0A8;
    case 18u: goto L_08A5C0B0;
    case 19u: goto L_08A5C0B4;
    case 20u: goto L_08A5C0C0;
    case 21u: goto L_08A5C0C8;
    case 22u: goto L_08A5C0CC;
    case 23u: goto L_08A5C108;
    case 24u: goto L_08A5C118;
    case 25u: goto L_08A5C128;
    case 26u: goto L_08A5C130;
    case 27u: goto L_08A5C144;
    case 28u: goto L_08A5C154;
    case 29u: goto L_08A5C164;
    case 30u: goto L_08A5C170;
    case 31u: goto L_08A5C180;
    case 32u: goto L_08A5C198;
    case 33u: goto L_08A5C1A0;
    case 34u: goto L_08A5C1A4;
    case 35u: goto L_08A5C1B0;
    case 36u: goto L_08A5C1BC;
    case 37u: goto L_08A5C1C4;
    case 38u: goto L_08A5C1D4;
    case 39u: goto L_08A5C1DC;
    case 40u: goto L_08A5C1F0;
    case 41u: goto L_08A5C200;
    case 42u: goto L_08A5C210;
    case 43u: goto L_08A5C220;
    case 44u: goto L_08A5C230;
    case 45u: goto L_08A5C238;
    case 46u: goto L_08A5C240;
    case 47u: goto L_08A5C24C;
    case 48u: goto L_08A5C250;
    case 49u: goto L_08A5C264;
    case 50u: goto L_08A5C274;
    case 51u: goto L_08A5C280;
    case 52u: goto L_08A5C288;
    case 53u: goto L_08A5C298;
    case 54u: goto L_08A5C2A4;
    case 55u: goto L_08A5C500;
    case 56u: goto L_08A5C504;
    case 57u: goto L_08A5C518;
    case 58u: goto L_08A5C520;
    case 59u: goto L_08A5C524;
    case 60u: goto L_08A5C52C;
    case 61u: goto L_08A5C5A8;
    case 62u: goto L_08A5C5B4;
    case 63u: goto L_08A5C5C4;
    case 64u: goto L_08A5C5D0;
    case 65u: goto L_08A5C5D8;
    case 66u: goto L_08A5C5E0;
    case 67u: goto L_08A5C5EC;
    case 68u: goto L_08A5C5FC;
    case 69u: goto L_08A5C60C;
    case 70u: goto L_08A5C614;
    case 71u: goto L_08A5C620;
    case 72u: goto L_08A5C630;
    case 73u: goto L_08A5C63C;
    case 74u: goto L_08A5C644;
    case 75u: goto L_08A5C64C;
    case 76u: goto L_08A5C658;
    case 77u: goto L_08A5C668;
    case 78u: goto L_08A5C674;
    case 79u: goto L_08A5C67C;
    case 80u: goto L_08A5C684;
    case 81u: goto L_08A5C690;
    case 82u: goto L_08A5C6A0;
    case 83u: goto L_08A5C6AC;
    case 84u: goto L_08A5C6B4;
    case 85u: goto L_08A5C6BC;
    case 86u: goto L_08A5C6C8;
    case 87u: goto L_08A5C6D8;
    case 88u: goto L_08A5C6E4;
    case 89u: goto L_08A5C6EC;
    case 90u: goto L_08A5C6F4;
    case 91u: goto L_08A5C700;
    case 92u: goto L_08A5C710;
    case 93u: goto L_08A5C720;
    case 94u: goto L_08A5C728;
    case 95u: goto L_08A5C734;
    case 96u: goto L_08A5C744;
    case 97u: goto L_08A5C754;
    case 98u: goto L_08A5C75C;
    case 99u: goto L_08A5C768;
    case 100u: goto L_08A5C778;
    case 101u: goto L_08A5C788;
    case 102u: goto L_08A5C790;
    case 103u: goto L_08A5C79C;
    case 104u: goto L_08A5C7AC;
    case 105u: goto L_08A5C7BC;
    case 106u: goto L_08A5C7C4;
    case 107u: goto L_08A5C7D0;
    case 108u: goto L_08A5C7E0;
    case 109u: goto L_08A5C7F4;
    case 110u: goto L_08A5C7FC;
    case 111u: goto L_08A5C808;
    case 112u: goto L_08A5C818;
    case 113u: goto L_08A5C82C;
    case 114u: goto L_08A5C834;
    case 115u: goto L_08A5C840;
    case 116u: goto L_08A5C850;
    case 117u: goto L_08A5C858;
    case 118u: goto L_08A5C864;
    case 119u: goto L_08A5C86C;
    case 120u: goto L_08A5C870;
    case 121u: goto L_08A5C878;
    case 122u: goto L_08A5C888;
    case 123u: goto L_08A5C890;
    case 124u: goto L_08A5C89C;
    case 125u: goto L_08A5C8A4;
    case 126u: goto L_08A5C8A8;
    case 127u: goto L_08A5C8AC;
    case 128u: goto L_08A5C8B0;
    case 129u: goto L_08A5C8B8;
    case 130u: goto L_08A5C8D0;
    case 131u: goto L_08A5C8DC;
    case 132u: goto L_08A5C8F0;
    case 133u: goto L_08A5C908;
    case 134u: goto L_08A5C938;
    case 135u: goto L_08A5C950;
    case 136u: goto L_08A5C964;
    case 137u: goto L_08A5C968;
    case 138u: goto L_08A5C988;
    case 139u: goto L_08A5C98C;
    case 140u: goto L_08A5C9B8;
    case 141u: goto L_08A5C9CC;
    case 142u: goto L_08A5C9D0;
    case 143u: goto L_08A5C9F8;
    case 144u: goto L_08A5CA0C;
    case 145u: goto L_08A5CA14;
    case 146u: goto L_08A5CA44;
    case 147u: goto L_08A5CA64;
    case 148u: goto L_08A5CA6C;
    case 149u: goto L_08A5CA70;
    case 150u: goto L_08A5CA84;
    case 151u: goto L_08A5CA90;
    case 152u: goto L_08A5CAA4;
    case 153u: goto L_08A5CAB0;
    case 154u: goto L_08A5CAC4;
    case 155u: goto L_08A5CAD0;
    case 156u: goto L_08A5CAE4;
    case 157u: goto L_08A5CAF0;
    case 158u: goto L_08A5CAF8;
    case 159u: goto L_08A5CB04;
    case 160u: goto L_08A5CB08;
    case 161u: goto L_08A5CB10;
    case 162u: goto L_08A5CB20;
    case 163u: goto L_08A5CB34;
    case 164u: goto L_08A5CB3C;
    case 165u: goto L_08A5CB5C;
    case 166u: goto L_08A5CB6C;
    case 167u: goto L_08A5CB78;
    case 168u: goto L_08A5CB88;
    case 169u: goto L_08A5CB94;
    case 170u: goto L_08A5CBA8;
    case 171u: goto L_08A5CBB8;
    case 172u: goto L_08A5CBC0;
    case 173u: goto L_08A5CBCC;
    case 174u: goto L_08A5CBE0;
    case 175u: goto L_08A5CBF0;
    case 176u: goto L_08A5CC04;
    case 177u: goto L_08A5CC10;
    case 178u: goto L_08A5CC20;
    case 179u: goto L_08A5CC24;
    case 180u: goto L_08A5CC34;
    case 181u: goto L_08A5CC44;
    case 182u: goto L_08A5CC4C;
    case 183u: goto L_08A5CC5C;
    case 184u: goto L_08A5CC70;
    case 185u: goto L_08A5CC80;
    case 186u: goto L_08A5CC88;
    case 187u: goto L_08A5CC90;
    case 188u: goto L_08A5CC9C;
    case 189u: goto L_08A5CCB8;
    case 190u: goto L_08A5CCD0;
    case 191u: goto L_08A5CCDC;
    case 192u: goto L_08A5CCE4;
    case 193u: goto L_08A5CCFC;
    case 194u: goto L_08A5CD08;
    case 195u: goto L_08A5CD28;
    case 196u: goto L_08A5CD30;
    case 197u: goto L_08A5CD38;
    case 198u: goto L_08A5CD40;
    case 199u: goto L_08A5CD48;
    case 200u: goto L_08A5CD50;
    case 201u: goto L_08A5CD58;
    case 202u: goto L_08A5CD60;
    case 203u: goto L_08A5CD68;
    case 204u: goto L_08A5CD70;
    case 205u: goto L_08A5CDB8;
    case 206u: goto L_08A5CDC4;
    case 207u: goto L_08A5CDCC;
    case 208u: goto L_08A5CDD4;
    case 209u: goto L_08A5CDE0;
    case 210u: goto L_08A5CDF0;
    case 211u: goto L_08A5CE00;
    case 212u: goto L_08A5CE08;
    case 213u: goto L_08A5CE14;
    case 214u: goto L_08A5CE1C;
    case 215u: goto L_08A5CE20;
    case 216u: goto L_08A5CE30;
    case 217u: goto L_08A5CE38;
    case 218u: goto L_08A5CE3C;
    case 219u: goto L_08A5CE48;
    case 220u: goto L_08A5CE50;
    case 221u: goto L_08A5CE54;
    case 222u: goto L_08A5CE5C;
    case 223u: goto L_08A5CE68;
    case 224u: goto L_08A5CE7C;
    case 225u: goto L_08A5CE84;
    case 226u: goto L_08A5CE8C;
    case 227u: goto L_08A5CE98;
    case 228u: goto L_08A5CEA0;
    case 229u: goto L_08A5CEAC;
    case 230u: goto L_08A5CEBC;
    case 231u: goto L_08A5CED8;
    case 232u: goto L_08A5CEE4;
    case 233u: goto L_08A5CEF0;
    case 234u: goto L_08A5CF00;
    case 235u: goto L_08A5CF08;
    case 236u: goto L_08A5CF0C;
    case 237u: goto L_08A5CF1C;
    case 238u: goto L_08A5CF24;
    case 239u: goto L_08A5CF28;
    case 240u: goto L_08A5CF38;
    case 241u: goto L_08A5CF40;
    case 242u: goto L_08A5CF44;
    case 243u: goto L_08A5CF54;
    case 244u: goto L_08A5CF5C;
    case 245u: goto L_08A5CF60;
    case 246u: goto L_08A5CF70;
    case 247u: goto L_08A5CF78;
    case 248u: goto L_08A5CF7C;
    case 249u: goto L_08A5CF8C;
    case 250u: goto L_08A5CF94;
    case 251u: goto L_08A5CFA4;
    case 252u: goto L_08A5CFAC;
    case 253u: goto L_08A5CFB4;
    case 254u: goto L_08A5CFC4;
    case 255u: goto L_08A5CFCC;
    case 256u: goto L_08A5CFD4;
    case 257u: goto L_08A5CFE4;
    case 258u: goto L_08A5CFEC;
    case 259u: goto L_08A5CFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5C000:
    rt.unsupported(0x08A5C000u, 0x004E4941u, "special? not lowered yet"); return;
L_08A5C004:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A5C008u, 0x494E415Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 16u, 0x08A700C0u>(ctx, &aot_mem); return;
    }
    goto L_08A5C00C;
L_08A5C00C:
    rt.unsupported(0x08A5C00Cu, 0x414D5F4Du, "unknown not lowered yet"); return;
L_08A5C014:
    rt.unsupported(0x08A5C014u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5C018:
    rt.unsupported(0x08A5C018u, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A5C028:
    rt.unsupported(0x08A5C028u, 0x616C6176u, "vfpu0 not lowered yet"); return;
L_08A5C040:
    rt.unsupported(0x08A5C040u, 0x63257325u, "vfpu0 not lowered yet"); return;
L_08A5C04C:
    rt.unsupported(0x08A5C04Cu, 0x4D5F4C45u, "unknown not lowered yet"); return;
L_08A5C054:
    rt.unsupported(0x08A5C054u, 0x63257325u, "vfpu0 not lowered yet"); return;
L_08A5C060:
    rt.unsupported(0x08A5C060u, 0x414D5F4Du, "unknown not lowered yet"); return;
L_08A5C068:
    rt.unsupported(0x08A5C068u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5C06C:
    rt.unsupported(0x08A5C06Cu, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A5C07C:
    rt.unsupported(0x08A5C07Cu, 0x616C6176u, "vfpu0 not lowered yet"); return;
L_08A5C090:
    rt.unsupported(0x08A5C090u, 0x63257325u, "vfpu0 not lowered yet"); return;
L_08A5C09C:
    if (aot_gpr[26] == aot_gpr[3]) {
    rt.unsupported(0x08A5C0A0u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0618_entry, 618u, 98u, 0x08A6E5ECu>(ctx, &aot_mem); return;
    }
    goto L_08A5C0A4;
L_08A5C0A4:
    rt.unsupported(0x08A5C0A4u, 0x0000004Eu, "special? not lowered yet"); return;
L_08A5C0A8:
    if (aot_gpr[2] == aot_gpr[19]) {
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator + product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 48u, 0x08A7021Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5C0B0;
L_08A5C0B0:
    // nop
    goto L_08A5C0B4;
L_08A5C0B4:
    rt.unsupported(0x08A5C0B4u, 0x206C6C41u, "unknown not lowered yet"); return;
L_08A5C0C0:
    if (aot_gpr[26] == aot_gpr[21]) {
    aot_gpr[23] = (aot_gpr[1] | 14393u);
        (void)rt.invoke_chained_direct<&recomp_unit_0616_entry, 616u, 153u, 0x08A6CE18u>(ctx, &aot_mem); return;
    }
    goto L_08A5C0C8;
L_08A5C0C8:
    rt.unsupported(0x08A5C0C8u, 0x00000033u, "special? not lowered yet"); return;
L_08A5C0CC:
    ctx.execute_vfpu_compare3(77u, 111u, 116u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 83u, 116u, 1u, 6u);
    rt.unsupported(0x08A5C0D4u, 0x203A6D72u, "unknown not lowered yet"); return;
L_08A5C108:
    rt.unsupported(0x08A5C108u, 0x425C7325u, "unknown not lowered yet"); return;
L_08A5C118:
    rt.unsupported(0x08A5C118u, 0x4B414552u, "cop2/vfpu not lowered yet"); return;
L_08A5C128:
    // nop
    // nop
    goto L_08A5C130;
L_08A5C130:
    rt.unsupported(0x08A5C130u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C144:
    rt.unsupported(0x08A5C144u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C154:
    rt.unsupported(0x08A5C154u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C164:
    rt.unsupported(0x08A5C164u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5C170:
    rt.unsupported(0x08A5C170u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C180:
    rt.unsupported(0x08A5C180u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5C198:
    ctx.execute_vfpu_vhdp(46u, 115u, 116u, 1u);
    // nop
    goto L_08A5C1A0;
L_08A5C1A0:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    goto L_08A5C1A4;
L_08A5C1A4:
    rt.unsupported(0x08A5C1A4u, 0x61437972u, "vfpu0 not lowered yet"); return;
L_08A5C1B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[27] == aot_gpr[7]) {
    ctx.execute_vfpu_vscl_ct<99u, 114u, 101u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 97u, 0x08A77B5Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5C1BC;
L_08A5C1BC:
    rt.unsupported(0x08A5C1BCu, 0x6E654D6Eu, "vfpu3 not lowered yet"); return;
L_08A5C1C4:
    rt.unsupported(0x08A5C1C4u, 0x6167654Cu, "vfpu0 not lowered yet"); return;
L_08A5C1D4:
    rt.unsupported(0x08A5C1D4u, 0x6167654Cu, "vfpu0 not lowered yet"); return;
L_08A5C1DC:
    rt.unsupported(0x08A5C1DCu, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C1F0:
    rt.unsupported(0x08A5C1F0u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C200:
    rt.unsupported(0x08A5C200u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C210:
    rt.unsupported(0x08A5C210u, 0x676E614Cu, "vfpu1 not lowered yet"); return;
L_08A5C220:
    rt.unsupported(0x08A5C220u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5C230:
    rt.unsupported(0x08A5C230u, 0x72746E65u, "unknown not lowered yet"); return;
L_08A5C238:
    rt.unsupported(0x08A5C238u, 0x72746E65u, "unknown not lowered yet"); return;
L_08A5C240:
    rt.unsupported(0x08A5C240u, 0x41544144u, "unknown not lowered yet"); return;
L_08A5C24C:
    // nop
    goto L_08A5C250;
L_08A5C250:
    rt.unsupported(0x08A5C250u, 0x45454353u, "cop1? not lowered yet"); return;
L_08A5C264:
    rt.unsupported(0x08A5C264u, 0x45454353u, "cop1? not lowered yet"); return;
L_08A5C274:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[27] == aot_gpr[7]) {
    ctx.execute_vfpu_vscl_ct<99u, 114u, 101u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 105u, 0x08A77C20u>(ctx, &aot_mem); return;
    }
    goto L_08A5C280;
L_08A5C280:
    rt.unsupported(0x08A5C280u, 0x6E654D6Eu, "vfpu3 not lowered yet"); return;
L_08A5C288:
    rt.unsupported(0x08A5C288u, 0x72746E49u, "unknown not lowered yet"); return;
L_08A5C298:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[27] == aot_gpr[7]) {
    ctx.execute_vfpu_vscl_ct<99u, 114u, 101u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0627_entry, 627u, 107u, 0x08A77C44u>(ctx, &aot_mem); return;
    }
    goto L_08A5C2A4;
L_08A5C2A4:
    rt.unsupported(0x08A5C2A4u, 0x6E654D6Eu, "vfpu3 not lowered yet"); return;
L_08A5C500:
    // nop
    goto L_08A5C504;
L_08A5C504:
    rt.unsupported(0x08A5C504u, 0x68437325u, "unknown not lowered yet"); return;
L_08A5C518:
    rt.unsupported(0x08A5C518u, 0x414D5F4Eu, "unknown not lowered yet"); return;
L_08A5C520:
    rt.unsupported(0x08A5C520u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5C524:
    rt.unsupported(0x08A5C524u, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A5C52C:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08A5C530u, 0x74206465u, "unknown not lowered yet"); return;
L_08A5C5A8:
    rt.unsupported(0x08A5C5A8u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C5B4:
    rt.unsupported(0x08A5C5B4u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C5C4:
    rt.unsupported(0x08A5C5C4u, 0x495F656Cu, "cop2/vfpu not lowered yet"); return;
L_08A5C5D0:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5C5D4u, 0x4D494E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 39u, 0x08A71314u>(ctx, &aot_mem); return;
    }
    goto L_08A5C5D8;
L_08A5C5D8:
    rt.unsupported(0x08A5C5D8u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5C5E0:
    rt.unsupported(0x08A5C5E0u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C5EC:
    rt.unsupported(0x08A5C5ECu, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C5FC:
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C608u, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 278u, 0x08A67ED0u>(ctx, &aot_mem); return;
    }
    goto L_08A5C60C;
L_08A5C60C:
    rt.unsupported(0x08A5C60Cu, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C614:
    rt.unsupported(0x08A5C614u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C620:
    rt.unsupported(0x08A5C620u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C630:
    rt.unsupported(0x08A5C630u, 0x495F656Cu, "cop2/vfpu not lowered yet"); return;
L_08A5C63C:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5C640u, 0x4D494E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 45u, 0x08A71380u>(ctx, &aot_mem); return;
    }
    goto L_08A5C644;
L_08A5C644:
    rt.unsupported(0x08A5C644u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5C64C:
    rt.unsupported(0x08A5C64Cu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C658:
    rt.unsupported(0x08A5C658u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C668:
    rt.unsupported(0x08A5C668u, 0x495F656Cu, "cop2/vfpu not lowered yet"); return;
L_08A5C674:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5C678u, 0x4D494E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 48u, 0x08A713B8u>(ctx, &aot_mem); return;
    }
    goto L_08A5C67C;
L_08A5C67C:
    rt.unsupported(0x08A5C67Cu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5C684:
    rt.unsupported(0x08A5C684u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C690:
    rt.unsupported(0x08A5C690u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C6A0:
    rt.unsupported(0x08A5C6A0u, 0x495F656Cu, "cop2/vfpu not lowered yet"); return;
L_08A5C6AC:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5C6B0u, 0x4D494E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 50u, 0x08A713F0u>(ctx, &aot_mem); return;
    }
    goto L_08A5C6B4;
L_08A5C6B4:
    rt.unsupported(0x08A5C6B4u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5C6BC:
    rt.unsupported(0x08A5C6BCu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C6C8:
    rt.unsupported(0x08A5C6C8u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C6D8:
    rt.unsupported(0x08A5C6D8u, 0x495F656Cu, "cop2/vfpu not lowered yet"); return;
L_08A5C6E4:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5C6E8u, 0x4D494E41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 52u, 0x08A71428u>(ctx, &aot_mem); return;
    }
    goto L_08A5C6EC;
L_08A5C6EC:
    rt.unsupported(0x08A5C6ECu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5C6F4:
    rt.unsupported(0x08A5C6F4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C700:
    rt.unsupported(0x08A5C700u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C710:
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C71Cu, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 287u, 0x08A67FE0u>(ctx, &aot_mem); return;
    }
    goto L_08A5C720;
L_08A5C720:
    rt.unsupported(0x08A5C720u, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C728:
    rt.unsupported(0x08A5C728u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C734:
    rt.unsupported(0x08A5C734u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C744:
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C750u, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 6u, 0x08A6801Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5C754;
L_08A5C754:
    rt.unsupported(0x08A5C754u, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C75C:
    rt.unsupported(0x08A5C75Cu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C768:
    rt.unsupported(0x08A5C768u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C778:
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C784u, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 10u, 0x08A68054u>(ctx, &aot_mem); return;
    }
    goto L_08A5C788;
L_08A5C788:
    rt.unsupported(0x08A5C788u, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C790:
    rt.unsupported(0x08A5C790u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C79C:
    rt.unsupported(0x08A5C79Cu, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C7AC:
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C7B8u, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 16u, 0x08A6808Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5C7BC;
L_08A5C7BC:
    rt.unsupported(0x08A5C7BCu, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C7C4:
    rt.unsupported(0x08A5C7C4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C7D0:
    rt.unsupported(0x08A5C7D0u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C7E0:
    ctx.execute_vfpu_vscl_ct<122u, 111u, 110u, 1u>();
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C7F0u, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 17u, 0x08A680B4u>(ctx, &aot_mem); return;
    }
    goto L_08A5C7F4;
L_08A5C7F4:
    rt.unsupported(0x08A5C7F4u, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C7FC:
    rt.unsupported(0x08A5C7FCu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C808:
    rt.unsupported(0x08A5C808u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C818:
    ctx.execute_vfpu_vscl_ct<122u, 111u, 110u, 1u>();
    ctx.execute_vfpu_vcmp_ct<73u, 100u, 1u, 15u>();
    aot_gpr[16] = (aot_gpr[1] & 24421u);
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5C828u, 0x4E415F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 18u, 0x08A680F0u>(ctx, &aot_mem); return;
    }
    goto L_08A5C82C;
L_08A5C82C:
    rt.unsupported(0x08A5C82Cu, 0x4D5F4D49u, "unknown not lowered yet"); return;
L_08A5C834:
    rt.unsupported(0x08A5C834u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C840:
    rt.unsupported(0x08A5C840u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C850:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<73u, 100u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 18u, 0x08A755F8u>(ctx, &aot_mem); return;
    }
    goto L_08A5C858;
L_08A5C858:
    aot_gpr[16] = (aot_gpr[9] & 12383u);
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A5C860u, 0x494E415Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 174u, 0x08A70918u>(ctx, &aot_mem); return;
    }
    goto L_08A5C864;
L_08A5C864:
    rt.unsupported(0x08A5C864u, 0x414D5F4Du, "unknown not lowered yet"); return;
L_08A5C86C:
    rt.unsupported(0x08A5C86Cu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5C870:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A5C874u, 0x6E654D5Cu, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 188u, 0x08A709F0u>(ctx, &aot_mem); return;
    }
    goto L_08A5C878;
L_08A5C878:
    rt.unsupported(0x08A5C878u, 0x465C7375u, "cop1? not lowered yet"); return;
L_08A5C888:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<73u, 100u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 19u, 0x08A75630u>(ctx, &aot_mem); return;
    }
    goto L_08A5C890;
L_08A5C890:
    aot_gpr[16] = (aot_gpr[17] & 12383u);
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A5C898u, 0x494E415Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 177u, 0x08A70950u>(ctx, &aot_mem); return;
    }
    goto L_08A5C89C;
L_08A5C89C:
    rt.unsupported(0x08A5C89Cu, 0x414D5F4Du, "unknown not lowered yet"); return;
L_08A5C8A4:
    rt.unsupported(0x08A5C8A4u, 0x616D6546u, "vfpu0 not lowered yet"); return;
L_08A5C8A8:
    aot_gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5C8AC;
L_08A5C8AC:
    if (0u != 0u) aot_gpr[11] = (0u);
    goto L_08A5C8B0;
L_08A5C8B0:
    rt.unsupported(0x08A5C8B0u, 0x756B6159u, "unknown not lowered yet"); return;
L_08A5C8B8:
    rt.unsupported(0x08A5C8B8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5C8D0:
    rt.unsupported(0x08A5C8D0u, 0x41524148u, "unknown not lowered yet"); return;
L_08A5C8DC:
    rt.unsupported(0x08A5C8DCu, 0x74732E64u, "unknown not lowered yet"); return;
L_08A5C8F0:
    rt.unsupported(0x08A5C8F0u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C908:
    rt.unsupported(0x08A5C908u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C938:
    rt.unsupported(0x08A5C938u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C950:
    rt.unsupported(0x08A5C950u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C964:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5C968;
L_08A5C968:
    rt.unsupported(0x08A5C968u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C988:
    rt.unsupported(0x08A5C988u, 0x006D7569u, "special? not lowered yet"); return;
L_08A5C98C:
    rt.unsupported(0x08A5C98Cu, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C9B8:
    rt.unsupported(0x08A5C9B8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C9CC:
    aot_gpr[13] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5C9D0;
L_08A5C9D0:
    rt.unsupported(0x08A5C9D0u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5C9F8:
    rt.unsupported(0x08A5C9F8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CA0C:
    ctx.execute_vfpu_compare3(103u, 83u, 110u, 1u, 6u);
    rt.unsupported(0x08A5CA10u, 0x00000077u, "special? not lowered yet"); return;
L_08A5CA14:
    rt.unsupported(0x08A5CA14u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CA44:
    rt.unsupported(0x08A5CA44u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CA64:
    if (aot_gpr[27] == aot_gpr[7]) {
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23]))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 37u, 0x08A7840Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5CA6C;
L_08A5CA6C:
    // nop
    goto L_08A5CA70;
L_08A5CA70:
    rt.unsupported(0x08A5CA70u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CA84:
    rt.unsupported(0x08A5CA84u, 0x626D696Cu, "vfpu0 not lowered yet"); return;
L_08A5CA90:
    rt.unsupported(0x08A5CA90u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CAA4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<111u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5CAA8u, 0x00676E69u, "special? not lowered yet"); return;
L_08A5CAB0:
    rt.unsupported(0x08A5CAB0u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CAC4:
    rt.unsupported(0x08A5CAC4u, 0x00676E69u, "special? not lowered yet"); return;
L_08A5CAD0:
    rt.unsupported(0x08A5CAD0u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5CAE4:
    rt.unsupported(0x08A5CAE4u, 0x47676E69u, "cop1? not lowered yet"); return;
L_08A5CAF0:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A5CAF4u, 0x435F5053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 40u, 0x08A79788u>(ctx, &aot_mem); return;
    }
    goto L_08A5CAF8;
L_08A5CAF8:
    rt.unsupported(0x08A5CAF8u, 0x43535455u, "unknown not lowered yet"); return;
L_08A5CB04:
    // nop
    goto L_08A5CB08;
L_08A5CB08:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A5CB0Cu, 0x415F5053u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 41u, 0x08A797A0u>(ctx, &aot_mem); return;
    }
    goto L_08A5CB10;
L_08A5CB10:
    rt.unsupported(0x08A5CB10u, 0x424D494Eu, "unknown not lowered yet"); return;
L_08A5CB20:
    rt.unsupported(0x08A5CB20u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5CB34:
    rt.unsupported(0x08A5CB34u, 0x61526572u, "vfpu0 not lowered yet"); return;
L_08A5CB3C:
    rt.unsupported(0x08A5CB3Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5CB5C:
    ctx.execute_vfpu_vscl_ct<117u, 109u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    if (aot_gpr[18] == aot_gpr[31]) {
    rt.unsupported(0x08A5CB68u, 0x49656361u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 59u, 0x08A798FCu>(ctx, &aot_mem); return;
    }
    goto L_08A5CB6C;
L_08A5CB6C:
    ctx.execute_vfpu_compare3(110u, 116u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08A5CB74u, 0x00006172u, "special? not lowered yet"); return;
L_08A5CB78:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08A5CB7Cu, 0x72546172u, "unknown not lowered yet"); return;
L_08A5CB88:
    rt.unsupported(0x08A5CB88u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A5CB94:
    rt.unsupported(0x08A5CB94u, 0x63616C50u, "vfpu0 not lowered yet"); return;
L_08A5CBA8:
    rt.unsupported(0x08A5CBA8u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5CBB8:
    rt.unsupported(0x08A5CBB8u, 0x74736552u, "unknown not lowered yet"); return;
L_08A5CBC0:
    rt.unsupported(0x08A5CBC0u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A5CBCC:
    rt.unsupported(0x08A5CBCCu, 0x69647541u, "unknown not lowered yet"); return;
L_08A5CBE0:
    rt.unsupported(0x08A5CBE0u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A5CBF0:
    rt.unsupported(0x08A5CBF0u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A5CC04:
    rt.unsupported(0x08A5CC04u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5CC10:
    rt.unsupported(0x08A5CC10u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5CC20:
    rt.unsupported(0x08A5CC20u, 0x00657275u, "special? not lowered yet"); return;
L_08A5CC24:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    rt.unsupported(0x08A5CC28u, 0x676E6972u, "vfpu1 not lowered yet"); return;
L_08A5CC34:
    ctx.execute_vfpu_vscl_ct<77u, 111u, 118u, 1u>();
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08A5CC3Cu, 0x4D5F6172u, "unknown not lowered yet"); return;
L_08A5CC44:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    rt.unsupported(0x08A5CC48u, 0x00000072u, "special? not lowered yet"); return;
L_08A5CC4C:
    rt.unsupported(0x08A5CC4Cu, 0x7466654Cu, "unknown not lowered yet"); return;
L_08A5CC5C:
    rt.unsupported(0x08A5CC5Cu, 0x7466654Cu, "unknown not lowered yet"); return;
L_08A5CC70:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A5CC74u, 0x6172426Cu, "vfpu0 not lowered yet"); return;
L_08A5CC80:
    rt.unsupported(0x08A5CC80u, 0x6B617242u, "unknown not lowered yet"); return;
L_08A5CC88:
    rt.unsupported(0x08A5CC88u, 0x6E726F48u, "vfpu3 not lowered yet"); return;
L_08A5CC90:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A5CC94u, 0x6172656Cu, "vfpu0 not lowered yet"); return;
L_08A5CC9C:
    rt.unsupported(0x08A5CC9Cu, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A5CCB8:
    rt.unsupported(0x08A5CCB8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5CCD0:
    rt.unsupported(0x08A5CCD0u, 0x415F7365u, "unknown not lowered yet"); return;
L_08A5CCDC:
    rt.unsupported(0x08A5CCDCu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5CCE4:
    rt.unsupported(0x08A5CCE4u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5CCFC:
    rt.unsupported(0x08A5CCFCu, 0x425F7365u, "unknown not lowered yet"); return;
L_08A5CD08:
    rt.unsupported(0x08A5CD08u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5CD28:
    aot_gpr[16] = (aot_gpr[9] & 19266u);
    // nop
    goto L_08A5CD30;
L_08A5CD30:
    aot_gpr[22] = (aot_gpr[2] & 21569u);
    rt.unsupported(0x08A5CD34u, 0x00000031u, "special? not lowered yet"); return;
L_08A5CD38:
    aot_gpr[16] = (aot_gpr[9] & 19795u);
    // nop
    goto L_08A5CD40;
L_08A5CD40:
    aot_gpr[16] = (aot_gpr[9] & 16978u);
    // nop
    goto L_08A5CD48;
L_08A5CD48:
    aot_gpr[16] = (aot_gpr[9] & 17234u);
    // nop
    goto L_08A5CD50;
L_08A5CD50:
    aot_gpr[16] = (aot_gpr[9] & 20563u);
    // nop
    goto L_08A5CD58;
L_08A5CD58:
    aot_gpr[16] = (aot_gpr[9] & 17235u);
    // nop
    goto L_08A5CD60;
L_08A5CD60:
    aot_gpr[16] = (aot_gpr[9] & 21058u);
    // nop
    goto L_08A5CD68;
L_08A5CD68:
    aot_gpr[16] = (aot_gpr[9] & 18753u);
    // nop
    goto L_08A5CD70;
L_08A5CD70:
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(0u & 0u);
    rt.unsupported(0x08A5CD7Cu, 0x0882D2BCu, "control flow in delay slot"); return;
L_08A5CDB8:
    rt.unsupported(0x08A5CDB8u, 0x6172545Cu, "vfpu0 not lowered yet"); return;
L_08A5CDC4:
    if (aot_gpr[26] == aot_gpr[4]) {
    rt.unsupported(0x08A5CDC8u, 0x45504143u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0620_entry, 620u, 129u, 0x08A706CCu>(ctx, &aot_mem); return;
    }
    goto L_08A5CDCC;
L_08A5CDCC:
    rt.unsupported(0x08A5CDCCu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A5CDD4:
    rt.unsupported(0x08A5CDD4u, 0x6172545Cu, "vfpu0 not lowered yet"); return;
L_08A5CDE0:
    rt.unsupported(0x08A5CDE0u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
L_08A5CDF0:
    ctx.execute_vfpu_vscl_ct<92u, 83u, 99u, 1u>();
    rt.unsupported(0x08A5CDF4u, 0x7972656Eu, "unknown not lowered yet"); return;
L_08A5CE00:
    rt.unsupported(0x08A5CE00u, 0x4D5F4C45u, "unknown not lowered yet"); return;
L_08A5CE08:
    rt.unsupported(0x08A5CE08u, 0x616F525Cu, "vfpu0 not lowered yet"); return;
L_08A5CE14:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5CE18u, 0x4E49414Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0618_entry, 618u, 39u, 0x08A6E328u>(ctx, &aot_mem); return;
    }
    goto L_08A5CE1C;
L_08A5CE1C:
    // nop
    goto L_08A5CE20;
L_08A5CE20:
    ctx.execute_vfpu_compare3(92u, 71u, 108u, 1u, 6u);
    aot_gpr[12] = (aot_gpr[19] < static_cast<std::uint32_t>(24930) ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A5CE2Cu, 0x45444F4Du, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 101u, 0x08A71B6Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5CE30;
L_08A5CE30:
    rt.unsupported(0x08A5CE30u, 0x414D5F4Cu, "unknown not lowered yet"); return;
L_08A5CE38:
    rt.unsupported(0x08A5CE38u, 0x4C59435Cu, "unknown not lowered yet"); return;
L_08A5CE3C:
    rt.unsupported(0x08A5CE3Cu, 0x45444E49u, "cop1? not lowered yet"); return;
L_08A5CE48:
    rt.unsupported(0x08A5CE48u, 0x414D5F58u, "unknown not lowered yet"); return;
L_08A5CE50:
    rt.unsupported(0x08A5CE50u, 0x6172545Cu, "vfpu0 not lowered yet"); return;
L_08A5CE54:
    rt.unsupported(0x08A5CE58u, 0x505F5053u, "control flow in delay slot"); return;
L_08A5CE5C:
    rt.unsupported(0x08A5CE5Cu, 0x49535948u, "cop2/vfpu not lowered yet"); return;
L_08A5CE68:
    rt.unsupported(0x08A5CE68u, 0x626D415Cu, "vfpu0 not lowered yet"); return;
L_08A5CE7C:
    rt.unsupported(0x08A5CE7Cu, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A5CE84:
    rt.unsupported(0x08A5CE84u, 0x6172545Cu, "vfpu0 not lowered yet"); return;
L_08A5CE8C:
    ctx.execute_vfpu_vcmp_ct<101u, 102u, 1u, 2u>();
    rt.unsupported(0x08A5CE90u, 0x69746365u, "unknown not lowered yet"); return;
L_08A5CE98:
    rt.unsupported(0x08A5CE98u, 0x776F6E53u, "unknown not lowered yet"); return;
L_08A5CEA0:
    ctx.execute_vfpu_compare3(71u, 114u, 111u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 6u>();
    (void)(0u | 0u);
    goto L_08A5CEAC;
L_08A5CEAC:
    ctx.execute_vfpu_vhdp(83u, 117u, 114u, 1u);
    rt.unsupported(0x08A5CEB0u, 0x42656361u, "unknown not lowered yet"); return;
L_08A5CEBC:
    rt.unsupported(0x08A5CEBCu, 0x43656349u, "unknown not lowered yet"); return;
L_08A5CED8:
    rt.unsupported(0x08A5CED8u, 0x796B535Cu, "unknown not lowered yet"); return;
L_08A5CEE4:
    rt.unsupported(0x08A5CEE4u, 0x4D5F4C45u, "unknown not lowered yet"); return;
L_08A5CEF0:
    rt.unsupported(0x08A5CEF0u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CF00:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CF04u, 0x6B636F52u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 63u, 0x08A75C88u>(ctx, &aot_mem); return;
    }
    goto L_08A5CF08;
L_08A5CF08:
    // nop
    goto L_08A5CF0C;
L_08A5CF0C:
    rt.unsupported(0x08A5CF0Cu, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CF1C:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CF20u, 0x76617247u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 64u, 0x08A75CA4u>(ctx, &aot_mem); return;
    }
    goto L_08A5CF24;
L_08A5CF24:
    aot_gpr[13] = (0u | 0u);
    goto L_08A5CF28;
L_08A5CF28:
    rt.unsupported(0x08A5CF28u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CF38:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 65u, 0x08A75CC0u>(ctx, &aot_mem); return;
    }
    goto L_08A5CF40;
L_08A5CF40:
    (void)(0u | 0u);
    goto L_08A5CF44;
L_08A5CF44:
    rt.unsupported(0x08A5CF44u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CF54:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CF58u, 0x74726944u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 66u, 0x08A75CDCu>(ctx, &aot_mem); return;
    }
    goto L_08A5CF5C;
L_08A5CF5C:
    // nop
    goto L_08A5CF60;
L_08A5CF60:
    rt.unsupported(0x08A5CF60u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CF70:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<87u, 97u, 116u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 68u, 0x08A75CF8u>(ctx, &aot_mem); return;
    }
    goto L_08A5CF78;
L_08A5CF78:
    rt.unsupported(0x08A5CF78u, 0x00000072u, "special? not lowered yet"); return;
L_08A5CF7C:
    rt.unsupported(0x08A5CF7Cu, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CF8C:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CF90u, 0x0064754Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 69u, 0x08A75D14u>(ctx, &aot_mem); return;
    }
    goto L_08A5CF94;
L_08A5CF94:
    rt.unsupported(0x08A5CF94u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CFA4:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CFA8u, 0x7A6F7246u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 70u, 0x08A75D2Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5CFAC;
L_08A5CFAC:
    rt.unsupported(0x08A5CFACu, 0x754D6E65u, "unknown not lowered yet"); return;
L_08A5CFB4:
    rt.unsupported(0x08A5CFB4u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CFC4:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CFC8u, 0x706D6F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 71u, 0x08A75D4Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5CFCC;
L_08A5CFCC:
    if (aot_gpr[27] == aot_gpr[20]) {
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[23]))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 72u, 0x08A75D54u>(ctx, &aot_mem); return;
    }
    goto L_08A5CFD4;
L_08A5CFD4:
    rt.unsupported(0x08A5CFD4u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5CFE4:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5CFE8u, 0x6E617453u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 73u, 0x08A75D6Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5CFEC;
L_08A5CFEC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5CFF0u, 0x776F6E53u, "unknown not lowered yet"); return;
L_08A5CFF8:
    rt.unsupported(0x08A5CFF8u, 0x69766E45u, "unknown not lowered yet"); return;
}

void recomp_unit_0600(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0600_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_600(Runtime &runtime) {
    runtime.register_generated_unit(600u, 0x08A5C000u, 4096u, &recomp_unit_0600, &recomp_unit_0600_entry);
    runtime.register_function(0x08A5C000u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C004u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C00Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C014u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C018u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C028u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C040u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C04Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C054u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C060u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C068u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C06Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C07Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C090u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C09Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0A4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0A8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0B0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0B4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0C0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0C8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C0CCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C108u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C118u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C128u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C130u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C144u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C154u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C164u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C170u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C180u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C198u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1A0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1A4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1B0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1BCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1C4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1D4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1DCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C1F0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C200u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C210u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C220u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C230u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C238u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C240u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C24Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C250u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C264u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C274u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C280u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C288u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C298u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C2A4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C500u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C504u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C518u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C520u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C524u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C52Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5A8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5B4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5C4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5D0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5D8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5E0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5ECu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C5FCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C60Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C614u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C620u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C630u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C63Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C644u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C64Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C658u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C668u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C674u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C67Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C684u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C690u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6A0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6ACu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6B4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6BCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6C8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6D8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6E4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6ECu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C6F4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C700u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C710u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C720u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C728u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C734u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C744u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C754u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C75Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C768u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C778u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C788u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C790u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C79Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7ACu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7BCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7C4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7D0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7E0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7F4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C7FCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C808u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C818u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C82Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C834u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C840u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C850u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C858u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C864u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C86Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C870u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C878u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C888u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C890u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C89Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8A4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8A8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8ACu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8B0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8B8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8D0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8DCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C8F0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C908u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C938u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C950u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C964u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C968u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C988u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C98Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C9B8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C9CCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C9D0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5C9F8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA0Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA14u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA44u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA64u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA6Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA70u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA84u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CA90u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAA4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAB0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAC4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAD0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAE4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAF0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CAF8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB04u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB08u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB10u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB20u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB34u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB3Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB5Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB6Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB78u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB88u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CB94u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CBA8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CBB8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CBC0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CBCCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CBE0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CBF0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC04u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC10u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC20u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC24u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC34u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC44u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC4Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC5Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC70u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC80u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC88u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC90u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CC9Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CCB8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CCD0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CCDCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CCE4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CCFCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD08u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD28u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD30u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD38u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD40u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD48u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD50u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD58u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD60u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD68u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CD70u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CDB8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CDC4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CDCCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CDD4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CDE0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CDF0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE00u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE08u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE14u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE1Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE20u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE30u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE38u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE3Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE48u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE50u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE54u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE5Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE68u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE7Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE84u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE8Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CE98u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CEA0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CEACu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CEBCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CED8u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CEE4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CEF0u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF00u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF08u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF0Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF1Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF24u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF28u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF38u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF40u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF44u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF54u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF5Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF60u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF70u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF78u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF7Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF8Cu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CF94u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFA4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFACu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFB4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFC4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFCCu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFD4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFE4u, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFECu, &recomp_unit_0600, "recomp_unit_0600");
    runtime.register_function(0x08A5CFF8u, &recomp_unit_0600, "recomp_unit_0600");
}
} // namespace psprecomp
