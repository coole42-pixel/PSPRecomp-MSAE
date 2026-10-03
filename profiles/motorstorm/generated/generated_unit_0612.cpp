#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0612[1024] = {
    1, 2, 3, 0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12, 0, 13, 14, 0,
    0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 26, 0, 0, 27, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 31, 0, 32, 33, 0, 34, 35, 0, 36, 37, 0, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0, 48, 49, 0, 0, 50, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0,
    78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 82, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 87, 0, 0, 88, 0, 89,
    0, 0, 0, 90, 91, 0, 0, 0, 92, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0,
    100, 0, 101, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0,
    0, 118, 0, 119, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 128, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0,
    0, 0, 138, 0, 0, 139, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0,
    183, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 192, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0,
    210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250,
};
void recomp_unit_0612_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A68000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0612[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A68000;
    case 2u: goto L_08A68004;
    case 3u: goto L_08A68008;
    case 4u: goto L_08A68010;
    case 5u: goto L_08A68018;
    case 6u: goto L_08A6801C;
    case 7u: goto L_08A68034;
    case 8u: goto L_08A6803C;
    case 9u: goto L_08A68044;
    case 10u: goto L_08A68054;
    case 11u: goto L_08A68068;
    case 12u: goto L_08A6806C;
    case 13u: goto L_08A68074;
    case 14u: goto L_08A68078;
    case 15u: goto L_08A68084;
    case 16u: goto L_08A6808C;
    case 17u: goto L_08A680B4;
    case 18u: goto L_08A680F0;
    case 19u: goto L_08A68100;
    case 20u: goto L_08A68158;
    case 21u: goto L_08A681B0;
    case 22u: goto L_08A68208;
    case 23u: goto L_08A68218;
    case 24u: goto L_08A68228;
    case 25u: goto L_08A68234;
    case 26u: goto L_08A68238;
    case 27u: goto L_08A68244;
    case 28u: goto L_08A68248;
    case 29u: goto L_08A68258;
    case 30u: goto L_08A68268;
    case 31u: goto L_08A68284;
    case 32u: goto L_08A6828C;
    case 33u: goto L_08A68290;
    case 34u: goto L_08A68298;
    case 35u: goto L_08A6829C;
    case 36u: goto L_08A682A4;
    case 37u: goto L_08A682A8;
    case 38u: goto L_08A682C4;
    case 39u: goto L_08A682C8;
    case 40u: goto L_08A682D0;
    case 41u: goto L_08A682F0;
    case 42u: goto L_08A68300;
    case 43u: goto L_08A6830C;
    case 44u: goto L_08A68324;
    case 45u: goto L_08A6833C;
    case 46u: goto L_08A68340;
    case 47u: goto L_08A68348;
    case 48u: goto L_08A68360;
    case 49u: goto L_08A68364;
    case 50u: goto L_08A68370;
    case 51u: goto L_08A68384;
    case 52u: goto L_08A68398;
    case 53u: goto L_08A683A8;
    case 54u: goto L_08A683BC;
    case 55u: goto L_08A683DC;
    case 56u: goto L_08A683FC;
    case 57u: goto L_08A68410;
    case 58u: goto L_08A68424;
    case 59u: goto L_08A6843C;
    case 60u: goto L_08A68444;
    case 61u: goto L_08A6844C;
    case 62u: goto L_08A68460;
    case 63u: goto L_08A68478;
    case 64u: goto L_08A68488;
    case 65u: goto L_08A684A0;
    case 66u: goto L_08A684AC;
    case 67u: goto L_08A684C0;
    case 68u: goto L_08A684D4;
    case 69u: goto L_08A684DC;
    case 70u: goto L_08A684EC;
    case 71u: goto L_08A684F4;
    case 72u: goto L_08A68504;
    case 73u: goto L_08A68524;
    case 74u: goto L_08A68538;
    case 75u: goto L_08A68550;
    case 76u: goto L_08A68568;
    case 77u: goto L_08A68574;
    case 78u: goto L_08A68580;
    case 79u: goto L_08A6858C;
    case 80u: goto L_08A685A0;
    case 81u: goto L_08A685B0;
    case 82u: goto L_08A685B4;
    case 83u: goto L_08A685B8;
    case 84u: goto L_08A685C0;
    case 85u: goto L_08A685D8;
    case 86u: goto L_08A685E4;
    case 87u: goto L_08A685E8;
    case 88u: goto L_08A685F4;
    case 89u: goto L_08A685FC;
    case 90u: goto L_08A6860C;
    case 91u: goto L_08A68610;
    case 92u: goto L_08A68620;
    case 93u: goto L_08A68630;
    case 94u: goto L_08A68634;
    case 95u: goto L_08A68644;
    case 96u: goto L_08A6864C;
    case 97u: goto L_08A68660;
    case 98u: goto L_08A6866C;
    case 99u: goto L_08A68674;
    case 100u: goto L_08A68680;
    case 101u: goto L_08A68688;
    case 102u: goto L_08A68698;
    case 103u: goto L_08A6869C;
    case 104u: goto L_08A686B4;
    case 105u: goto L_08A686C8;
    case 106u: goto L_08A686DC;
    case 107u: goto L_08A686EC;
    case 108u: goto L_08A686F8;
    case 109u: goto L_08A6870C;
    case 110u: goto L_08A6871C;
    case 111u: goto L_08A68738;
    case 112u: goto L_08A68744;
    case 113u: goto L_08A6874C;
    case 114u: goto L_08A68750;
    case 115u: goto L_08A68760;
    case 116u: goto L_08A6876C;
    case 117u: goto L_08A68778;
    case 118u: goto L_08A68784;
    case 119u: goto L_08A6878C;
    case 120u: goto L_08A68790;
    case 121u: goto L_08A68798;
    case 122u: goto L_08A687A0;
    case 123u: goto L_08A687A8;
    case 124u: goto L_08A687B8;
    case 125u: goto L_08A687C8;
    case 126u: goto L_08A687D0;
    case 127u: goto L_08A687E0;
    case 128u: goto L_08A687E4;
    case 129u: goto L_08A687F4;
    case 130u: goto L_08A68804;
    case 131u: goto L_08A68820;
    case 132u: goto L_08A68830;
    case 133u: goto L_08A6883C;
    case 134u: goto L_08A68848;
    case 135u: goto L_08A68858;
    case 136u: goto L_08A68868;
    case 137u: goto L_08A68878;
    case 138u: goto L_08A68888;
    case 139u: goto L_08A68894;
    case 140u: goto L_08A68898;
    case 141u: goto L_08A688A8;
    case 142u: goto L_08A688B8;
    case 143u: goto L_08A688C0;
    case 144u: goto L_08A688DC;
    case 145u: goto L_08A688F4;
    case 146u: goto L_08A68904;
    case 147u: goto L_08A68910;
    case 148u: goto L_08A6891C;
    case 149u: goto L_08A68938;
    case 150u: goto L_08A68944;
    case 151u: goto L_08A6895C;
    case 152u: goto L_08A68974;
    case 153u: goto L_08A68994;
    case 154u: goto L_08A6899C;
    case 155u: goto L_08A689A4;
    case 156u: goto L_08A689AC;
    case 157u: goto L_08A689CC;
    case 158u: goto L_08A689E0;
    case 159u: goto L_08A689F4;
    case 160u: goto L_08A68A08;
    case 161u: goto L_08A68A1C;
    case 162u: goto L_08A68A38;
    case 163u: goto L_08A68A58;
    case 164u: goto L_08A68A60;
    case 165u: goto L_08A68A70;
    case 166u: goto L_08A68A80;
    case 167u: goto L_08A68A94;
    case 168u: goto L_08A68AA4;
    case 169u: goto L_08A68AB4;
    case 170u: goto L_08A68AB8;
    case 171u: goto L_08A68AC8;
    case 172u: goto L_08A68ADC;
    case 173u: goto L_08A68B00;
    case 174u: goto L_08A68B0C;
    case 175u: goto L_08A68B18;
    case 176u: goto L_08A68B24;
    case 177u: goto L_08A68B3C;
    case 178u: goto L_08A68B4C;
    case 179u: goto L_08A68B54;
    case 180u: goto L_08A68B60;
    case 181u: goto L_08A68B6C;
    case 182u: goto L_08A68B78;
    case 183u: goto L_08A68B80;
    case 184u: goto L_08A68B84;
    case 185u: goto L_08A68B94;
    case 186u: goto L_08A68BA0;
    case 187u: goto L_08A68BB8;
    case 188u: goto L_08A68BC4;
    case 189u: goto L_08A68BD8;
    case 190u: goto L_08A68BE8;
    case 191u: goto L_08A68BF4;
    case 192u: goto L_08A68BF8;
    case 193u: goto L_08A68C08;
    case 194u: goto L_08A68C18;
    case 195u: goto L_08A68C24;
    case 196u: goto L_08A68C38;
    case 197u: goto L_08A68C44;
    case 198u: goto L_08A68C58;
    case 199u: goto L_08A68C70;
    case 200u: goto L_08A68C80;
    case 201u: goto L_08A68C88;
    case 202u: goto L_08A68CA0;
    case 203u: goto L_08A68CA8;
    case 204u: goto L_08A68CB0;
    case 205u: goto L_08A68CC4;
    case 206u: goto L_08A68CD8;
    case 207u: goto L_08A68CE0;
    case 208u: goto L_08A68CE8;
    case 209u: goto L_08A68CF4;
    case 210u: goto L_08A68D00;
    case 211u: goto L_08A68D0C;
    case 212u: goto L_08A68D30;
    case 213u: goto L_08A68D54;
    case 214u: goto L_08A68D70;
    case 215u: goto L_08A68D80;
    case 216u: goto L_08A68D9C;
    case 217u: goto L_08A68DAC;
    case 218u: goto L_08A68DCC;
    case 219u: goto L_08A68DD4;
    case 220u: goto L_08A68DE0;
    case 221u: goto L_08A68DE8;
    case 222u: goto L_08A68DF0;
    case 223u: goto L_08A68DFC;
    case 224u: goto L_08A68E10;
    case 225u: goto L_08A68E2C;
    case 226u: goto L_08A68E34;
    case 227u: goto L_08A68E50;
    case 228u: goto L_08A68E54;
    case 229u: goto L_08A68E70;
    case 230u: goto L_08A68E80;
    case 231u: goto L_08A68E8C;
    case 232u: goto L_08A68E9C;
    case 233u: goto L_08A68EB4;
    case 234u: goto L_08A68EBC;
    case 235u: goto L_08A68EC4;
    case 236u: goto L_08A68ED4;
    case 237u: goto L_08A68EE4;
    case 238u: goto L_08A68F58;
    case 239u: goto L_08A68F64;
    case 240u: goto L_08A68F6C;
    case 241u: goto L_08A68F78;
    case 242u: goto L_08A68F90;
    case 243u: goto L_08A68F9C;
    case 244u: goto L_08A68FA8;
    case 245u: goto L_08A68FB4;
    case 246u: goto L_08A68FC8;
    case 247u: goto L_08A68FD0;
    case 248u: goto L_08A68FDC;
    case 249u: goto L_08A68FF0;
    case 250u: goto L_08A68FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A68000:
    rt.unsupported(0x08A68000u, 0x00667473u, "special? not lowered yet"); return;
L_08A68004:
    rt.unsupported(0x08A68004u, 0x0000002Eu, "special? not lowered yet"); return;
L_08A68008:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A6800Cu, 0x4445465Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 2u, 0x08A7C0C4u>(ctx, &aot_mem); return;
    }
    goto L_08A68010;
L_08A68010:
    rt.unsupported(0x08A68010u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A68018:
    rt.unsupported(0x08A68018u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6801C:
    rt.unsupported(0x08A6801Cu, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A68034:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A68038u, 0x444F4D5Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 3u, 0x08A7C0F0u>(ctx, &aot_mem); return;
    }
    goto L_08A6803C;
L_08A6803C:
    rt.unsupported(0x08A6803Cu, 0x4D5F4C45u, "unknown not lowered yet"); return;
L_08A68044:
    ctx.execute_vfpu_vscl_ct<65u, 102u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<114u, 32u, 118u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08A68050u, 0x6E752065u, "vfpu3 not lowered yet"); return;
L_08A68054:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    (void)(0u + 0u);
    // nop
    rt.unsupported(0x08A68060u, 0x414D5F58u, "unknown not lowered yet"); return;
L_08A68068:
    rt.unsupported(0x08A68068u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
L_08A6806C:
    aot_gpr[5] = (aot_gpr[18] < static_cast<std::uint32_t>(19523) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[14] >> 5u);
    goto L_08A68074;
L_08A68074:
    aot_gpr[14] = (0u | 0u);
    goto L_08A68078;
L_08A68078:
    (void)(aot_gpr[17] ^ 29477u);
    rt.unsupported(0x08A6807Cu, 0x73202520u, "unknown not lowered yet"); return;
L_08A68084:
    // nop
    rt.unsupported(0x08A6808Cu, 0x088D9ED0u, "control flow in delay slot"); return;
L_08A6808C:
    rt.unsupported(0x08A68090u, 0x088D9ED8u, "control flow in delay slot"); return;
L_08A680B4:
    rt.unsupported(0x08A680B8u, 0x088E2D68u, "control flow in delay slot"); return;
L_08A680F0:
    rt.unsupported(0x08A680F4u, 0x088E2D68u, "control flow in delay slot"); return;
L_08A68100:
    rt.unsupported(0x08A68104u, 0x088E3480u, "control flow in delay slot"); return;
L_08A68158:
    rt.unsupported(0x08A6815Cu, 0x088E59C8u, "control flow in delay slot"); return;
L_08A681B0:
    rt.unsupported(0x08A681B4u, 0x088E6094u, "control flow in delay slot"); return;
L_08A68208:
    rt.unsupported(0x08A68208u, 0x73257325u, "unknown not lowered yet"); return;
L_08A68218:
    rt.unsupported(0x08A68218u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68228:
    ctx.execute_vfpu_compare3(67u, 77u, 76u, 1u, 6u);
    if (aot_gpr[27] == aot_gpr[12]) {
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 50u, 0x08A807BCu>(ctx, &aot_mem); return;
    }
    goto L_08A68234;
L_08A68234:
    aot_gpr[11] = (0u | 0u);
    goto L_08A68238;
L_08A68238:
    ctx.execute_vfpu_compare3(67u, 77u, 76u, 1u, 6u);
    if (aot_gpr[27] == aot_gpr[12]) {
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 51u, 0x08A807CCu>(ctx, &aot_mem); return;
    }
    goto L_08A68244;
L_08A68244:
    aot_gpr[11] = (0u | 0u);
    goto L_08A68248;
L_08A68248:
    ctx.execute_vfpu_compare3(67u, 77u, 76u, 1u, 6u);
    rt.unsupported(0x08A6824Cu, 0x436C6163u, "unknown not lowered yet"); return;
L_08A68258:
    ctx.execute_vfpu_compare3(67u, 77u, 76u, 1u, 6u);
    rt.unsupported(0x08A6825Cu, 0x436C6163u, "unknown not lowered yet"); return;
L_08A68268:
    rt.unsupported(0x08A68268u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68284:
    rt.unsupported(0x08A68288u, 0x58657A69u, "control flow in delay slot"); return;
L_08A6828C:
    // nop
    goto L_08A68290;
L_08A68290:
    rt.unsupported(0x08A68294u, 0x59657A69u, "control flow in delay slot"); return;
L_08A68298:
    // nop
    goto L_08A6829C;
L_08A6829C:
    rt.unsupported(0x08A682A0u, 0x5A657A69u, "control flow in delay slot"); return;
L_08A682A4:
    // nop
    goto L_08A682A8;
L_08A682A8:
    rt.unsupported(0x08A682A8u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A682C4:
    rt.unsupported(0x08A682C4u, 0x0000746Eu, "special? not lowered yet"); return;
L_08A682C8:
    rt.unsupported(0x08A682C8u, 0x69727053u, "unknown not lowered yet"); return;
L_08A682D0:
    rt.unsupported(0x08A682D0u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A682F0:
    rt.unsupported(0x08A682F0u, 0x69727053u, "unknown not lowered yet"); return;
L_08A68300:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<101u, 100u, 76u, 1u>();
    rt.unsupported(0x08A68308u, 0x0000006Eu, "special? not lowered yet"); return;
L_08A6830C:
    rt.unsupported(0x08A6830Cu, 0x69727053u, "unknown not lowered yet"); return;
L_08A68324:
    rt.unsupported(0x08A68324u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A6833C:
    rt.unsupported(0x08A6833Cu, 0x00000074u, "special? not lowered yet"); return;
L_08A68340:
    rt.unsupported(0x08A68340u, 0x69646152u, "unknown not lowered yet"); return;
L_08A68348:
    rt.unsupported(0x08A68348u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68360:
    // nop
    goto L_08A68364;
L_08A68364:
    ctx.execute_vfpu_compare3(71u, 114u, 111u, 1u, 6u);
    rt.unsupported(0x08A68368u, 0x69576576u, "unknown not lowered yet"); return;
L_08A68370:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68374u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68384:
    rt.unsupported(0x08A68384u, 0x77726F46u, "unknown not lowered yet"); return;
L_08A68398:
    rt.unsupported(0x08A68398u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A683A8:
    ctx.execute_vfpu_vscl_ct<76u, 97u, 116u, 1u>();
    rt.unsupported(0x08A683ACu, 0x466C6172u, "cop1? not lowered yet"); return;
L_08A683BC:
    rt.unsupported(0x08A683BCu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A683DC:
    rt.unsupported(0x08A683DCu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A683FC:
    ctx.execute_vfpu_vscl_ct<83u, 112u, 101u, 1u>();
    rt.unsupported(0x08A68400u, 0x6E614264u, "vfpu3 not lowered yet"); return;
L_08A68410:
    rt.unsupported(0x08A68410u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68424:
    rt.unsupported(0x08A68424u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A6843C:
    if (aot_gpr[27] == aot_gpr[24]) {
    rt.unsupported(0x08A68440u, 0x72656574u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 61u, 0x08A80974u>(ctx, &aot_mem); return;
    }
    goto L_08A68444;
L_08A68444:
    ctx.execute_vfpu_vcmp_ct<110u, 103u, 1u, 1u>();
    (void)(0u | 0u);
    goto L_08A6844C;
L_08A6844C:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<112u, 111u, 1u, 2u>();
    ctx.execute_vfpu_compare3(97u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A68458u, 0x7461526Eu, "unknown not lowered yet"); return;
L_08A68460:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08A68468u, 0x69746375u, "unknown not lowered yet"); return;
L_08A68478:
    rt.unsupported(0x08A68478u, 0x67696C41u, "vfpu1 not lowered yet"); return;
L_08A68488:
    rt.unsupported(0x08A68488u, 0x41776159u, "unknown not lowered yet"); return;
L_08A684A0:
    rt.unsupported(0x08A684A0u, 0x41776159u, "unknown not lowered yet"); return;
L_08A684AC:
    rt.unsupported(0x08A684ACu, 0x41776159u, "unknown not lowered yet"); return;
L_08A684C0:
    rt.unsupported(0x08A684C0u, 0x41776159u, "unknown not lowered yet"); return;
L_08A684D4:
    if (aot_gpr[19] != aot_gpr[7]) {
    rt.unsupported(0x08A684D8u, 0x74536C65u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 86u, 0x08A83DDCu>(ctx, &aot_mem); return;
    }
    goto L_08A684DC;
L_08A684DC:
    rt.unsupported(0x08A684DCu, 0x69726565u, "unknown not lowered yet"); return;
L_08A684EC:
    if (aot_gpr[19] != aot_gpr[7]) {
    rt.unsupported(0x08A684F0u, 0x74536C65u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0639_entry, 639u, 87u, 0x08A83DF4u>(ctx, &aot_mem); return;
    }
    goto L_08A684F4;
L_08A684F4:
    rt.unsupported(0x08A684F4u, 0x45726565u, "cop1? not lowered yet"); return;
L_08A68504:
    rt.unsupported(0x08A68504u, 0x41776159u, "unknown not lowered yet"); return;
L_08A68524:
    rt.unsupported(0x08A68524u, 0x41776159u, "unknown not lowered yet"); return;
L_08A68538:
    rt.unsupported(0x08A68538u, 0x41776159u, "unknown not lowered yet"); return;
L_08A68550:
    rt.unsupported(0x08A68550u, 0x41776159u, "unknown not lowered yet"); return;
L_08A68568:
    rt.unsupported(0x08A68568u, 0x69676E45u, "unknown not lowered yet"); return;
L_08A68574:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 118u, 1u>();
    if (aot_gpr[3] == aot_gpr[5]) {
    rt.unsupported(0x08A6857Cu, 0x7265776Fu, "unknown not lowered yet"); return;
        ctx.pc = 0x08A85344u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A68580;
L_08A68580:
    rt.unsupported(0x08A68580u, 0x69646F4Du, "unknown not lowered yet"); return;
L_08A6858C:
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    rt.unsupported(0x08A68590u, 0x466F5472u, "cop1? not lowered yet"); return;
L_08A685A0:
    rt.unsupported(0x08A685A0u, 0x63697246u, "vfpu0 not lowered yet"); return;
L_08A685B0:
    ctx.execute_vfpu_compare3(84u, 104u, 114u, 1u, 6u);
    goto L_08A685B4;
L_08A685B4:
    ctx.execute_vfpu_vscl_ct<116u, 116u, 108u, 1u>();
    goto L_08A685B8;
L_08A685B8:
    rt.unsupported(0x08A685B8u, 0x69547055u, "unknown not lowered yet"); return;
L_08A685C0:
    rt.unsupported(0x08A685C0u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A685D8:
    rt.unsupported(0x08A685D8u, 0x44726941u, "cop1? not lowered yet"); return;
L_08A685E4:
    // nop
    goto L_08A685E8;
L_08A685E8:
    rt.unsupported(0x08A685E8u, 0x44726941u, "cop1? not lowered yet"); return;
L_08A685F4:
    rt.unsupported(0x08A685F4u, 0x706D754Au, "unknown not lowered yet"); return;
L_08A685FC:
    rt.unsupported(0x08A685FCu, 0x63746950u, "vfpu0 not lowered yet"); return;
L_08A6860C:
    // nop
    goto L_08A68610;
L_08A68610:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    rt.unsupported(0x08A68614u, 0x71726F54u, "unknown not lowered yet"); return;
L_08A68620:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08A68624u, 0x68536172u, "unknown not lowered yet"); return;
L_08A68630:
    // nop
    goto L_08A68634;
L_08A68634:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08A68638u, 0x68536172u, "unknown not lowered yet"); return;
L_08A68644:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    // nop
    goto L_08A6864C;
L_08A6864C:
    rt.unsupported(0x08A6864Cu, 0x69727053u, "unknown not lowered yet"); return;
L_08A68660:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 6u>();
    if (aot_gpr[3] == aot_gpr[6]) {
    rt.unsupported(0x08A68668u, 0x68637469u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 89u, 0x08A81FA4u>(ctx, &aot_mem); return;
    }
    goto L_08A6866C;
L_08A6866C:
    ctx.execute_vfpu_vcmp_ct<110u, 103u, 1u, 1u>();
    (void)(0u | 0u);
    goto L_08A68674;
L_08A68674:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 6u>();
    if (aot_gpr[19] == aot_gpr[6]) {
    rt.unsupported(0x08A6867Cu, 0x416C6C6Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 90u, 0x08A81FB8u>(ctx, &aot_mem); return;
    }
    goto L_08A68680;
L_08A68680:
    ctx.execute_vfpu_vscl_ct<110u, 103u, 108u, 1u>();
    // nop
    goto L_08A68688;
L_08A68688:
    rt.unsupported(0x08A68688u, 0x61746544u, "vfpu0 not lowered yet"); return;
L_08A68698:
    // nop
    goto L_08A6869C;
L_08A6869C:
    ctx.execute_vfpu_compare3(71u, 114u, 111u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 80u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<115u, 84u, 119u, 1u>();
    rt.unsupported(0x08A686A8u, 0x46586B61u, "cop1? not lowered yet"); return;
L_08A686B4:
    ctx.execute_vfpu_compare3(71u, 114u, 111u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 80u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<115u, 84u, 119u, 1u>();
    rt.unsupported(0x08A686C0u, 0x42586B61u, "unknown not lowered yet"); return;
L_08A686C8:
    rt.unsupported(0x08A686C8u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A686DC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    rt.unsupported(0x08A686E0u, 0x6B617242u, "unknown not lowered yet"); return;
L_08A686EC:
    rt.unsupported(0x08A686ECu, 0x6B617242u, "unknown not lowered yet"); return;
L_08A686F8:
    rt.unsupported(0x08A686F8u, 0x6B617242u, "unknown not lowered yet"); return;
L_08A6870C:
    rt.unsupported(0x08A6870Cu, 0x6B617242u, "unknown not lowered yet"); return;
L_08A6871C:
    rt.unsupported(0x08A6871Cu, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68738:
    rt.unsupported(0x08A68738u, 0x44776159u, "cop1? not lowered yet"); return;
L_08A68744:
    if (aot_gpr[3] != aot_gpr[23]) {
    rt.unsupported(0x08A68748u, 0x7571726Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 75u, 0x08A80CACu>(ctx, &aot_mem); return;
    }
    goto L_08A6874C;
L_08A6874C:
    (void)(0u | 0u);
    goto L_08A68750;
L_08A68750:
    rt.unsupported(0x08A68750u, 0x63746950u, "vfpu0 not lowered yet"); return;
L_08A68760:
    rt.unsupported(0x08A68760u, 0x63746950u, "vfpu0 not lowered yet"); return;
L_08A6876C:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    rt.unsupported(0x08A68770u, 0x706D6144u, "unknown not lowered yet"); return;
L_08A68778:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    rt.unsupported(0x08A6877Cu, 0x71726F54u, "unknown not lowered yet"); return;
L_08A68784:
    rt.unsupported(0x08A68784u, 0x67696C41u, "vfpu1 not lowered yet"); return;
L_08A6878C:
    rt.unsupported(0x08A6878Cu, 0x00657571u, "special? not lowered yet"); return;
L_08A68790:
    rt.unsupported(0x08A68790u, 0x72747845u, "unknown not lowered yet"); return;
L_08A68798:
    rt.unsupported(0x08A68798u, 0x67696C46u, "vfpu1 not lowered yet"); return;
L_08A687A0:
    ctx.execute_vfpu_vscl_ct<114u, 108u, 76u, 1u>();
    rt.unsupported(0x08A687A4u, 0x006C6576u, "special? not lowered yet"); return;
L_08A687A8:
    rt.unsupported(0x08A687A8u, 0x67696C46u, "vfpu1 not lowered yet"); return;
L_08A687B8:
    rt.unsupported(0x08A687B8u, 0x67696C46u, "vfpu1 not lowered yet"); return;
L_08A687C8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    // nop
    goto L_08A687D0;
L_08A687D0:
    rt.unsupported(0x08A687D0u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A687E0:
    rt.unsupported(0x08A687E0u, 0x00007473u, "special? not lowered yet"); return;
L_08A687E4:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 6u>();
    rt.unsupported(0x08A687E8u, 0x74616548u, "unknown not lowered yet"); return;
L_08A687F4:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 6u>();
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 3u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    // nop
    goto L_08A68804;
L_08A68804:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vhdp(83u, 117u, 114u, 1u);
    rt.unsupported(0x08A6880Cu, 0x43656361u, "unknown not lowered yet"); return;
L_08A68820:
    rt.unsupported(0x08A68820u, 0x74697243u, "unknown not lowered yet"); return;
L_08A68830:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    ctx.execute_vfpu_compare3(108u, 66u, 111u, 1u, 6u);
    rt.unsupported(0x08A68838u, 0x00007473u, "special? not lowered yet"); return;
L_08A6883C:
    rt.unsupported(0x08A6883Cu, 0x6E726F43u, "vfpu3 not lowered yet"); return;
L_08A68848:
    rt.unsupported(0x08A68848u, 0x69727055u, "unknown not lowered yet"); return;
L_08A68858:
    rt.unsupported(0x08A68858u, 0x69727055u, "unknown not lowered yet"); return;
L_08A68868:
    rt.unsupported(0x08A68868u, 0x75646552u, "unknown not lowered yet"); return;
L_08A68878:
    rt.unsupported(0x08A68878u, 0x75646552u, "unknown not lowered yet"); return;
L_08A68888:
    rt.unsupported(0x08A68888u, 0x61686E45u, "vfpu0 not lowered yet"); return;
L_08A68894:
    // nop
    goto L_08A68898;
L_08A68898:
    rt.unsupported(0x08A68898u, 0x61686E45u, "vfpu0 not lowered yet"); return;
L_08A688A8:
    rt.unsupported(0x08A688A8u, 0x77726F46u, "unknown not lowered yet"); return;
L_08A688B8:
    ctx.execute_vfpu_vhdp(67u, 111u, 101u, 1u);
    (void)(0u ^ 0u);
    goto L_08A688C0;
L_08A688C0:
    rt.unsupported(0x08A688C0u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A688DC:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A688E0u, 0x73796177u, "unknown not lowered yet"); return;
L_08A688F4:
    rt.unsupported(0x08A688F4u, 0x63736956u, "vfpu0 not lowered yet"); return;
L_08A68904:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    if (aot_gpr[19] == aot_gpr[7]) {
    rt.unsupported(0x08A6890Cu, 0x73697365u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 23u, 0x08A842B0u>(ctx, &aot_mem); return;
    }
    goto L_08A68910;
L_08A68910:
    rt.unsupported(0x08A68910u, 0x636E6174u, "vfpu0 not lowered yet"); return;
L_08A6891C:
    ctx.execute_vfpu_vhdp(83u, 117u, 114u, 1u);
    rt.unsupported(0x08A68920u, 0x42656361u, "unknown not lowered yet"); return;
L_08A68938:
    rt.unsupported(0x08A68938u, 0x6B6E6953u, "unknown not lowered yet"); return;
L_08A68944:
    rt.unsupported(0x08A68944u, 0x63726F46u, "vfpu0 not lowered yet"); return;
L_08A6895C:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 3u>();
    rt.unsupported(0x08A68960u, 0x6E776F44u, "vfpu3 not lowered yet"); return;
L_08A68974:
    rt.unsupported(0x08A68974u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68994:
    ctx.execute_vfpu_vscl_ct<76u, 101u, 118u, 1u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A6899C;
L_08A6899C:
    if (aot_gpr[27] == aot_gpr[14]) {
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[16]) ? aot_gpr[3] : aot_gpr[16]);
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 64u, 0x08A82ED4u>(ctx, &aot_mem); return;
    }
    goto L_08A689A4;
L_08A689A4:
    if (aot_gpr[27] == aot_gpr[24]) {
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[16]) ? aot_gpr[3] : aot_gpr[16]);
        (void)rt.invoke_chained_direct<&recomp_unit_0636_entry, 636u, 84u, 0x08A80EDCu>(ctx, &aot_mem); return;
    }
    goto L_08A689AC;
L_08A689AC:
    rt.unsupported(0x08A689ACu, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A689CC:
    ctx.execute_vfpu_vhdp(83u, 104u, 105u, 1u);
    rt.unsupported(0x08A689D0u, 0x72465A74u, "unknown not lowered yet"); return;
L_08A689E0:
    ctx.execute_vfpu_vhdp(83u, 104u, 105u, 1u);
    rt.unsupported(0x08A689E4u, 0x61425A74u, "vfpu0 not lowered yet"); return;
L_08A689F4:
    ctx.execute_vfpu_vhdp(83u, 104u, 105u, 1u);
    rt.unsupported(0x08A689F8u, 0x72465874u, "unknown not lowered yet"); return;
L_08A68A08:
    ctx.execute_vfpu_vhdp(83u, 104u, 105u, 1u);
    rt.unsupported(0x08A68A0Cu, 0x61425874u, "vfpu0 not lowered yet"); return;
L_08A68A1C:
    rt.unsupported(0x08A68A1Cu, 0x67696557u, "vfpu1 not lowered yet"); return;
L_08A68A38:
    rt.unsupported(0x08A68A38u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68A58:
    if (aot_gpr[19] == aot_gpr[18]) {
    rt.unsupported(0x08A68A5Cu, 0x73697365u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0638_entry, 638u, 67u, 0x08A82F60u>(ctx, &aot_mem); return;
    }
    goto L_08A68A60;
L_08A68A60:
    rt.unsupported(0x08A68A60u, 0x636E6174u, "vfpu0 not lowered yet"); return;
L_08A68A70:
    rt.unsupported(0x08A68A70u, 0x41776159u, "unknown not lowered yet"); return;
L_08A68A80:
    rt.unsupported(0x08A68A80u, 0x63697246u, "vfpu0 not lowered yet"); return;
L_08A68A94:
    rt.unsupported(0x08A68A94u, 0x466C6556u, "cop1? not lowered yet"); return;
L_08A68AA4:
    rt.unsupported(0x08A68AA4u, 0x466C6556u, "cop1? not lowered yet"); return;
L_08A68AB4:
    rt.unsupported(0x08A68AB4u, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A68AB8:
    rt.unsupported(0x08A68AB8u, 0x686E4574u, "unknown not lowered yet"); return;
L_08A68AC8:
    rt.unsupported(0x08A68AC8u, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A68ADC:
    rt.unsupported(0x08A68ADCu, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68B00:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 3u>();
    rt.unsupported(0x08A68B04u, 0x786F4265u, "unknown not lowered yet"); return;
L_08A68B0C:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 3u>();
    rt.unsupported(0x08A68B10u, 0x786F4265u, "unknown not lowered yet"); return;
L_08A68B18:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 3u>();
    rt.unsupported(0x08A68B1Cu, 0x786F4265u, "unknown not lowered yet"); return;
L_08A68B24:
    rt.unsupported(0x08A68B24u, 0x6865562Fu, "unknown not lowered yet"); return;
L_08A68B3C:
    rt.unsupported(0x08A68B3Cu, 0x61707845u, "vfpu0 not lowered yet"); return;
L_08A68B4C:
    rt.unsupported(0x08A68B4Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A68B54:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 102u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    // nop
    goto L_08A68B60;
L_08A68B60:
    rt.unsupported(0x08A68B60u, 0x4478614Du, "cop1? not lowered yet"); return;
L_08A68B6C:
    rt.unsupported(0x08A68B6Cu, 0x4678614Du, "cop1? not lowered yet"); return;
L_08A68B78:
    if (aot_gpr[19] == aot_gpr[24]) {
    rt.unsupported(0x08A68B7Cu, 0x75696461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 6u, 0x08A810B0u>(ctx, &aot_mem); return;
    }
    goto L_08A68B80;
L_08A68B80:
    rt.unsupported(0x08A68B80u, 0x00000073u, "special? not lowered yet"); return;
L_08A68B84:
    rt.unsupported(0x08A68B84u, 0x6865562Fu, "unknown not lowered yet"); return;
L_08A68B94:
    rt.unsupported(0x08A68B94u, 0x67756F54u, "vfpu1 not lowered yet"); return;
L_08A68BA0:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    ctx.execute_vfpu_compare3(105u, 115u, 105u, 1u, 6u);
    rt.unsupported(0x08A68BA8u, 0x6767416Eu, "vfpu1 not lowered yet"); return;
L_08A68BB8:
    rt.unsupported(0x08A68BB8u, 0x7361422Fu, "unknown not lowered yet"); return;
L_08A68BC4:
    ctx.execute_vfpu_compare3(47u, 83u, 110u, 1u, 6u);
    rt.unsupported(0x08A68BC8u, 0x74614377u, "unknown not lowered yet"); return;
L_08A68BD8:
    ctx.execute_vfpu_vscl_ct<83u, 112u, 101u, 1u>();
    rt.unsupported(0x08A68BDCu, 0x726F4E64u, "unknown not lowered yet"); return;
L_08A68BE8:
    rt.unsupported(0x08A68BE8u, 0x46676E69u, "cop1? not lowered yet"); return;
L_08A68BF4:
    rt.unsupported(0x08A68BF4u, 0x00007472u, "special? not lowered yet"); return;
L_08A68BF8:
    ctx.execute_vfpu_vscl_ct<83u, 112u, 101u, 1u>();
    rt.unsupported(0x08A68BFCu, 0x726F4E64u, "unknown not lowered yet"); return;
L_08A68C08:
    rt.unsupported(0x08A68C08u, 0x46676E69u, "cop1? not lowered yet"); return;
L_08A68C18:
    rt.unsupported(0x08A68C18u, 0x776F6E53u, "unknown not lowered yet"); return;
L_08A68C24:
    rt.unsupported(0x08A68C24u, 0x74736973u, "unknown not lowered yet"); return;
L_08A68C38:
    rt.unsupported(0x08A68C38u, 0x776F6E53u, "unknown not lowered yet"); return;
L_08A68C44:
    rt.unsupported(0x08A68C44u, 0x74736973u, "unknown not lowered yet"); return;
L_08A68C58:
    rt.unsupported(0x08A68C58u, 0x6857322Fu, "unknown not lowered yet"); return;
L_08A68C70:
    rt.unsupported(0x08A68C70u, 0x7065654Bu, "unknown not lowered yet"); return;
L_08A68C80:
    rt.unsupported(0x08A68C80u, 0x61635365u, "vfpu0 not lowered yet"); return;
L_08A68C88:
    rt.unsupported(0x08A68C88u, 0x7065654Bu, "unknown not lowered yet"); return;
L_08A68CA0:
    if (aot_gpr[27] == aot_gpr[23]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<112u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 18u, 0x08A81208u>(ctx, &aot_mem); return;
    }
    goto L_08A68CA8;
L_08A68CA8:
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    rt.unsupported(0x08A68CACu, 0x00000072u, "special? not lowered yet"); return;
L_08A68CB0:
    rt.unsupported(0x08A68CB0u, 0x44776159u, "cop1? not lowered yet"); return;
L_08A68CC4:
    rt.unsupported(0x08A68CC4u, 0x44776159u, "cop1? not lowered yet"); return;
L_08A68CD8:
    if (aot_gpr[3] != aot_gpr[23]) {
    rt.unsupported(0x08A68CDCu, 0x7571726Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 20u, 0x08A81240u>(ctx, &aot_mem); return;
    }
    goto L_08A68CE0;
L_08A68CE0:
    rt.unsupported(0x08A68CE0u, 0x61635365u, "vfpu0 not lowered yet"); return;
L_08A68CE8:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    rt.unsupported(0x08A68CECu, 0x74615272u, "unknown not lowered yet"); return;
L_08A68CF4:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    rt.unsupported(0x08A68CF8u, 0x706D6144u, "unknown not lowered yet"); return;
L_08A68D00:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 2u>();
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 3u>();
    (void)(0u | 0u);
    goto L_08A68D0C;
L_08A68D0C:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68D10u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68D30:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68D34u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68D54:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68D58u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68D70:
    rt.unsupported(0x08A68D70u, 0x6E697053u, "vfpu3 not lowered yet"); return;
L_08A68D80:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68D84u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68D9C:
    rt.unsupported(0x08A68D9Cu, 0x6E697053u, "vfpu3 not lowered yet"); return;
L_08A68DAC:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68DB0u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68DCC:
    if (aot_gpr[27] == aot_gpr[23]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<112u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 61u, 0x08A84B00u>(ctx, &aot_mem); return;
    }
    goto L_08A68DD4;
L_08A68DD4:
    rt.unsupported(0x08A68DD4u, 0x6E727554u, "vfpu3 not lowered yet"); return;
L_08A68DE0:
    rt.unsupported(0x08A68DE0u, 0x7373656Eu, "unknown not lowered yet"); return;
L_08A68DE8:
    if (aot_gpr[27] == aot_gpr[23]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<112u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0640_entry, 640u, 63u, 0x08A84B1Cu>(ctx, &aot_mem); return;
    }
    goto L_08A68DF0;
L_08A68DF0:
    rt.unsupported(0x08A68DF0u, 0x6E727554u, "vfpu3 not lowered yet"); return;
L_08A68DFC:
    rt.unsupported(0x08A68DFCu, 0x7373656Eu, "unknown not lowered yet"); return;
L_08A68E10:
    ctx.execute_vfpu_vscl_ct<87u, 104u, 101u, 1u>();
    rt.unsupported(0x08A68E14u, 0x6970536Cu, "unknown not lowered yet"); return;
L_08A68E2C:
    rt.unsupported(0x08A68E2Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08A68E34:
    ctx.execute_vfpu_vscl_ct<87u, 104u, 101u, 1u>();
    rt.unsupported(0x08A68E38u, 0x6970536Cu, "unknown not lowered yet"); return;
L_08A68E50:
    rt.unsupported(0x08A68E50u, 0x00646E45u, "special? not lowered yet"); return;
L_08A68E54:
    ctx.execute_vfpu_vscl_ct<87u, 104u, 101u, 1u>();
    rt.unsupported(0x08A68E58u, 0x6970536Cu, "unknown not lowered yet"); return;
L_08A68E70:
    rt.unsupported(0x08A68E70u, 0x696B532Fu, "unknown not lowered yet"); return;
L_08A68E80:
    rt.unsupported(0x08A68E80u, 0x6E61654Cu, "vfpu3 not lowered yet"); return;
L_08A68E8C:
    rt.unsupported(0x08A68E8Cu, 0x4C78614Du, "unknown not lowered yet"); return;
L_08A68E9C:
    rt.unsupported(0x08A68E9Cu, 0x696B532Fu, "unknown not lowered yet"); return;
L_08A68EB4:
    if (aot_gpr[27] == aot_gpr[24]) {
    rt.unsupported(0x08A68EB8u, 0x4164696Bu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0637_entry, 637u, 29u, 0x08A813ECu>(ctx, &aot_mem); return;
    }
    goto L_08A68EBC;
L_08A68EBC:
    ctx.execute_vfpu_vscl_ct<110u, 103u, 108u, 1u>();
    // nop
    goto L_08A68EC4;
L_08A68EC4:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08A68ECCu, 0x71726F54u, "unknown not lowered yet"); return;
L_08A68ED4:
    ctx.execute_vfpu_vscl_ct<83u, 105u, 100u, 1u>();
    rt.unsupported(0x08A68ED8u, 0x73796177u, "unknown not lowered yet"); return;
L_08A68EE4:
    rt.memory().memory_barrier();
    rt.unsupported(0x08A68EECu, 0x088FA2F0u, "control flow in delay slot"); return;
L_08A68F58:
    rt.unsupported(0x08A68F58u, 0x69686556u, "unknown not lowered yet"); return;
L_08A68F64:
    rt.unsupported(0x08A68F64u, 0x61654465u, "vfpu0 not lowered yet"); return;
L_08A68F6C:
    rt.unsupported(0x08A68F6Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A68F78:
    rt.unsupported(0x08A68F78u, 0x69746973u, "unknown not lowered yet"); return;
L_08A68F90:
    rt.unsupported(0x08A68F90u, 0x69686556u, "unknown not lowered yet"); return;
L_08A68F9C:
    rt.unsupported(0x08A68F9Cu, 0x69724465u, "unknown not lowered yet"); return;
L_08A68FA8:
    rt.unsupported(0x08A68FA8u, 0x69686556u, "unknown not lowered yet"); return;
L_08A68FB4:
    rt.unsupported(0x08A68FB4u, 0x69746973u, "unknown not lowered yet"); return;
L_08A68FC8:
    rt.unsupported(0x08A68FC8u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08A68FD0:
    rt.unsupported(0x08A68FD0u, 0x69686556u, "unknown not lowered yet"); return;
L_08A68FDC:
    rt.unsupported(0x08A68FDCu, 0x69746973u, "unknown not lowered yet"); return;
L_08A68FF0:
    rt.unsupported(0x08A68FF0u, 0x69686556u, "unknown not lowered yet"); return;
L_08A68FFC:
    rt.unsupported(0x08A68FFCu, 0x69746973u, "unknown not lowered yet"); return;
}

void recomp_unit_0612(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0612_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_612(Runtime &runtime) {
    runtime.register_generated_unit(612u, 0x08A68000u, 4096u, &recomp_unit_0612, &recomp_unit_0612_entry);
    runtime.register_function(0x08A68000u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68004u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68008u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68010u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68018u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6801Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68034u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6803Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68044u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68054u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68068u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6806Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68074u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68078u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68084u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6808Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A680B4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A680F0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68100u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68158u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A681B0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68208u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68218u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68228u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68234u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68238u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68244u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68248u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68258u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68268u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68284u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6828Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68290u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68298u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6829Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A682A4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A682A8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A682C4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A682C8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A682D0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A682F0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68300u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6830Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68324u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6833Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68340u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68348u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68360u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68364u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68370u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68384u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68398u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A683A8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A683BCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A683DCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A683FCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68410u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68424u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6843Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68444u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6844Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68460u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68478u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68488u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684A0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684ACu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684C0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684D4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684DCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684ECu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A684F4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68504u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68524u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68538u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68550u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68568u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68574u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68580u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6858Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685A0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685B0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685B4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685B8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685C0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685D8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685E4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685E8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685F4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A685FCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6860Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68610u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68620u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68630u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68634u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68644u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6864Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68660u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6866Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68674u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68680u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68688u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68698u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6869Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A686B4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A686C8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A686DCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A686ECu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A686F8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6870Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6871Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68738u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68744u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6874Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68750u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68760u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6876Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68778u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68784u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6878Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68790u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68798u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687A0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687A8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687B8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687C8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687D0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687E0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687E4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A687F4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68804u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68820u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68830u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6883Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68848u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68858u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68868u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68878u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68888u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68894u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68898u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A688A8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A688B8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A688C0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A688DCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A688F4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68904u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68910u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6891Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68938u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68944u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6895Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68974u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68994u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A6899Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A689A4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A689ACu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A689CCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A689E0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A689F4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A08u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A1Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A38u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A58u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A60u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A70u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A80u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68A94u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68AA4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68AB4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68AB8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68AC8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68ADCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B00u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B0Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B18u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B24u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B3Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B4Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B54u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B60u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B6Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B78u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B80u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B84u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68B94u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BA0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BB8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BC4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BD8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BE8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BF4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68BF8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C08u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C18u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C24u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C38u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C44u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C58u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C70u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C80u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68C88u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CA0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CA8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CB0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CC4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CD8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CE0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CE8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68CF4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D00u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D0Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D30u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D54u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D70u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D80u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68D9Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DACu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DCCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DD4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DE0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DE8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DF0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68DFCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E10u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E2Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E34u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E50u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E54u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E70u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E80u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E8Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68E9Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68EB4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68EBCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68EC4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68ED4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68EE4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68F58u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68F64u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68F6Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68F78u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68F90u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68F9Cu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FA8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FB4u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FC8u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FD0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FDCu, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FF0u, &recomp_unit_0612, "recomp_unit_0612");
    runtime.register_function(0x08A68FFCu, &recomp_unit_0612, "recomp_unit_0612");
}
} // namespace psprecomp
