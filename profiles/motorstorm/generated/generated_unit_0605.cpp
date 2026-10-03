#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0605[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7,
    0, 8, 0, 9, 10, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0,
    35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 44, 0,
    45, 0, 0, 0, 46, 0, 47, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0,
    54, 0, 55, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0,
    0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0,
    0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 102, 103, 104, 105, 106, 107, 108, 109, 0,
    0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 115, 0, 0, 116, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 122, 123, 0, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0,
    0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 142, 143, 144, 145, 0, 146, 0, 0, 0,
    147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0,
    159, 0, 160, 0, 161, 0, 162, 0, 163, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0,
    0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185,
    0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 212, 213,
    0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235,
};
void recomp_unit_0605_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A61000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0605[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A61000;
    case 2u: goto L_08A61150;
    case 3u: goto L_08A61158;
    case 4u: goto L_08A61164;
    case 5u: goto L_08A6116C;
    case 6u: goto L_08A61174;
    case 7u: goto L_08A6117C;
    case 8u: goto L_08A61184;
    case 9u: goto L_08A6118C;
    case 10u: goto L_08A61190;
    case 11u: goto L_08A611A4;
    case 12u: goto L_08A611B0;
    case 13u: goto L_08A611B4;
    case 14u: goto L_08A611CC;
    case 15u: goto L_08A611DC;
    case 16u: goto L_08A611F4;
    case 17u: goto L_08A61204;
    case 18u: goto L_08A6121C;
    case 19u: goto L_08A61228;
    case 20u: goto L_08A6122C;
    case 21u: goto L_08A61244;
    case 22u: goto L_08A61254;
    case 23u: goto L_08A6126C;
    case 24u: goto L_08A61290;
    case 25u: goto L_08A6129C;
    case 26u: goto L_08A612A4;
    case 27u: goto L_08A612C0;
    case 28u: goto L_08A61398;
    case 29u: goto L_08A613BC;
    case 30u: goto L_08A613C8;
    case 31u: goto L_08A613CC;
    case 32u: goto L_08A613E0;
    case 33u: goto L_08A613EC;
    case 34u: goto L_08A613F4;
    case 35u: goto L_08A61400;
    case 36u: goto L_08A61404;
    case 37u: goto L_08A61578;
    case 38u: goto L_08A61590;
    case 39u: goto L_08A615A0;
    case 40u: goto L_08A615B8;
    case 41u: goto L_08A615C4;
    case 42u: goto L_08A615DC;
    case 43u: goto L_08A615E0;
    case 44u: goto L_08A615F8;
    case 45u: goto L_08A61600;
    case 46u: goto L_08A61610;
    case 47u: goto L_08A61618;
    case 48u: goto L_08A6161C;
    case 49u: goto L_08A61628;
    case 50u: goto L_08A6163C;
    case 51u: goto L_08A61644;
    case 52u: goto L_08A6165C;
    case 53u: goto L_08A61668;
    case 54u: goto L_08A61680;
    case 55u: goto L_08A61688;
    case 56u: goto L_08A6168C;
    case 57u: goto L_08A61698;
    case 58u: goto L_08A616A4;
    case 59u: goto L_08A616AC;
    case 60u: goto L_08A616B4;
    case 61u: goto L_08A616C8;
    case 62u: goto L_08A616E0;
    case 63u: goto L_08A616EC;
    case 64u: goto L_08A616F8;
    case 65u: goto L_08A61704;
    case 66u: goto L_08A61714;
    case 67u: goto L_08A61724;
    case 68u: goto L_08A61740;
    case 69u: goto L_08A61744;
    case 70u: goto L_08A61754;
    case 71u: goto L_08A61760;
    case 72u: goto L_08A6176C;
    case 73u: goto L_08A61790;
    case 74u: goto L_08A617B4;
    case 75u: goto L_08A617C0;
    case 76u: goto L_08A617DC;
    case 77u: goto L_08A617E8;
    case 78u: goto L_08A617F4;
    case 79u: goto L_08A61800;
    case 80u: goto L_08A6184C;
    case 81u: goto L_08A61864;
    case 82u: goto L_08A6186C;
    case 83u: goto L_08A61884;
    case 84u: goto L_08A61890;
    case 85u: goto L_08A6189C;
    case 86u: goto L_08A618B4;
    case 87u: goto L_08A618B8;
    case 88u: goto L_08A618D0;
    case 89u: goto L_08A618DC;
    case 90u: goto L_08A618F4;
    case 91u: goto L_08A61900;
    case 92u: goto L_08A61918;
    case 93u: goto L_08A61920;
    case 94u: goto L_08A61938;
    case 95u: goto L_08A61954;
    case 96u: goto L_08A6195C;
    case 97u: goto L_08A61978;
    case 98u: goto L_08A61980;
    case 99u: goto L_08A619A0;
    case 100u: goto L_08A619C4;
    case 101u: goto L_08A619D8;
    case 102u: goto L_08A619DC;
    case 103u: goto L_08A619E0;
    case 104u: goto L_08A619E4;
    case 105u: goto L_08A619E8;
    case 106u: goto L_08A619EC;
    case 107u: goto L_08A619F0;
    case 108u: goto L_08A619F4;
    case 109u: goto L_08A619F8;
    case 110u: goto L_08A61A04;
    case 111u: goto L_08A61A10;
    case 112u: goto L_08A61A1C;
    case 113u: goto L_08A61A28;
    case 114u: goto L_08A61A30;
    case 115u: goto L_08A61A34;
    case 116u: goto L_08A61A40;
    case 117u: goto L_08A61A44;
    case 118u: goto L_08A61A4C;
    case 119u: goto L_08A61A54;
    case 120u: goto L_08A61A5C;
    case 121u: goto L_08A61A64;
    case 122u: goto L_08A61A70;
    case 123u: goto L_08A61A74;
    case 124u: goto L_08A61A84;
    case 125u: goto L_08A61A98;
    case 126u: goto L_08A61AA4;
    case 127u: goto L_08A61AB0;
    case 128u: goto L_08A61ABC;
    case 129u: goto L_08A61AC8;
    case 130u: goto L_08A61AD4;
    case 131u: goto L_08A61ADC;
    case 132u: goto L_08A61AE8;
    case 133u: goto L_08A61AF4;
    case 134u: goto L_08A61B04;
    case 135u: goto L_08A61B10;
    case 136u: goto L_08A61B1C;
    case 137u: goto L_08A61B24;
    case 138u: goto L_08A61B2C;
    case 139u: goto L_08A61B34;
    case 140u: goto L_08A61B48;
    case 141u: goto L_08A61B58;
    case 142u: goto L_08A61B5C;
    case 143u: goto L_08A61B60;
    case 144u: goto L_08A61B64;
    case 145u: goto L_08A61B68;
    case 146u: goto L_08A61B70;
    case 147u: goto L_08A61B80;
    case 148u: goto L_08A61B8C;
    case 149u: goto L_08A61B98;
    case 150u: goto L_08A61BA4;
    case 151u: goto L_08A61BAC;
    case 152u: goto L_08A61BB8;
    case 153u: goto L_08A61BC0;
    case 154u: goto L_08A61BC8;
    case 155u: goto L_08A61BD0;
    case 156u: goto L_08A61BDC;
    case 157u: goto L_08A61BE4;
    case 158u: goto L_08A61BF0;
    case 159u: goto L_08A61C00;
    case 160u: goto L_08A61C08;
    case 161u: goto L_08A61C10;
    case 162u: goto L_08A61C18;
    case 163u: goto L_08A61C20;
    case 164u: goto L_08A61C24;
    case 165u: goto L_08A61C30;
    case 166u: goto L_08A61C38;
    case 167u: goto L_08A61C44;
    case 168u: goto L_08A61C50;
    case 169u: goto L_08A61C5C;
    case 170u: goto L_08A61C64;
    case 171u: goto L_08A61C6C;
    case 172u: goto L_08A61C78;
    case 173u: goto L_08A61C84;
    case 174u: goto L_08A61C90;
    case 175u: goto L_08A61C98;
    case 176u: goto L_08A61CA4;
    case 177u: goto L_08A61CE8;
    case 178u: goto L_08A61D38;
    case 179u: goto L_08A61D40;
    case 180u: goto L_08A61D48;
    case 181u: goto L_08A61D54;
    case 182u: goto L_08A61D5C;
    case 183u: goto L_08A61D64;
    case 184u: goto L_08A61D74;
    case 185u: goto L_08A61D7C;
    case 186u: goto L_08A61D84;
    case 187u: goto L_08A61D90;
    case 188u: goto L_08A61D98;
    case 189u: goto L_08A61DA0;
    case 190u: goto L_08A61DA8;
    case 191u: goto L_08A61DBC;
    case 192u: goto L_08A61DC4;
    case 193u: goto L_08A61DCC;
    case 194u: goto L_08A61DD0;
    case 195u: goto L_08A61DD8;
    case 196u: goto L_08A61DE0;
    case 197u: goto L_08A61DE8;
    case 198u: goto L_08A61DF0;
    case 199u: goto L_08A61DF8;
    case 200u: goto L_08A61DFC;
    case 201u: goto L_08A61E20;
    case 202u: goto L_08A61E28;
    case 203u: goto L_08A61E30;
    case 204u: goto L_08A61E38;
    case 205u: goto L_08A61E3C;
    case 206u: goto L_08A61E44;
    case 207u: goto L_08A61E50;
    case 208u: goto L_08A61E58;
    case 209u: goto L_08A61E64;
    case 210u: goto L_08A61E6C;
    case 211u: goto L_08A61E74;
    case 212u: goto L_08A61E78;
    case 213u: goto L_08A61E7C;
    case 214u: goto L_08A61E84;
    case 215u: goto L_08A61E90;
    case 216u: goto L_08A61E9C;
    case 217u: goto L_08A61EB0;
    case 218u: goto L_08A61EC4;
    case 219u: goto L_08A61ED4;
    case 220u: goto L_08A61EEC;
    case 221u: goto L_08A61F04;
    case 222u: goto L_08A61F24;
    case 223u: goto L_08A61F34;
    case 224u: goto L_08A61F44;
    case 225u: goto L_08A61F54;
    case 226u: goto L_08A61F5C;
    case 227u: goto L_08A61F74;
    case 228u: goto L_08A61F84;
    case 229u: goto L_08A61F94;
    case 230u: goto L_08A61FA4;
    case 231u: goto L_08A61FB4;
    case 232u: goto L_08A61FC8;
    case 233u: goto L_08A61FD8;
    case 234u: goto L_08A61FEC;
    case 235u: goto L_08A61FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A61000:
    rt.unsupported(0x08A61000u, 0x00006E6Fu, "special? not lowered yet"); return;
L_08A61150:
    rt.unsupported(0x08A61150u, 0x61476E49u, "vfpu0 not lowered yet"); return;
L_08A61158:
    rt.unsupported(0x08A61158u, 0x6E6F7246u, "vfpu3 not lowered yet"); return;
L_08A61164:
    rt.unsupported(0x08A61164u, 0x746F6F42u, "unknown not lowered yet"); return;
L_08A6116C:
    rt.unsupported(0x08A6116Cu, 0x4C5F4546u, "unknown not lowered yet"); return;
L_08A61174:
    ctx.execute_vfpu_compare3(68u, 101u, 109u, 1u, 6u);
    // nop
    goto L_08A6117C;
L_08A6117C:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A61180u, 0x4E454D5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 8u, 0x08A75238u>(ctx, &aot_mem); return;
    }
    goto L_08A61184;
L_08A61184:
    rt.unsupported(0x08A61184u, 0x414D5F55u, "unknown not lowered yet"); return;
L_08A6118C:
    rt.unsupported(0x08A6118Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61190:
    rt.unsupported(0x08A61190u, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A611A4:
    rt.unsupported(0x08A611A4u, 0x69547473u, "unknown not lowered yet"); return;
L_08A611B0:
    (void)(0u ^ 0u);
    goto L_08A611B4;
L_08A611B4:
    rt.unsupported(0x08A611B4u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A611CC:
    rt.unsupported(0x08A611CCu, 0x6954656Du, "unknown not lowered yet"); return;
L_08A611DC:
    rt.unsupported(0x08A611DCu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A611F4:
    rt.unsupported(0x08A611F4u, 0x706B6365u, "unknown not lowered yet"); return;
L_08A61204:
    rt.unsupported(0x08A61204u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6121C:
    rt.unsupported(0x08A6121Cu, 0x69547473u, "unknown not lowered yet"); return;
L_08A61228:
    (void)(0u ^ 0u);
    goto L_08A6122C;
L_08A6122C:
    rt.unsupported(0x08A6122Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61244:
    rt.unsupported(0x08A61244u, 0x6954656Du, "unknown not lowered yet"); return;
L_08A61254:
    rt.unsupported(0x08A61254u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6126C:
    rt.unsupported(0x08A6126Cu, 0x6E697261u, "vfpu3 not lowered yet"); return;
L_08A61290:
    // nop
    // nop
    if (0u == 0u) (void)(0u);
    goto L_08A6129C;
L_08A6129C:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A612A0u, 0x4441475Fu, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 15u, 0x08A75358u>(ctx, &aot_mem); return;
    }
    goto L_08A612A4;
L_08A612A4:
    rt.unsupported(0x08A612A4u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A612C0:
    rt.unsupported(0x08A612C0u, 0x0000002Eu, "special? not lowered yet"); return;
L_08A61398:
    rt.unsupported(0x08A61398u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A613BC:
    rt.unsupported(0x08A613BCu, 0x4C434953u, "unknown not lowered yet"); return;
L_08A613C8:
    // nop
    goto L_08A613CC;
L_08A613CC:
    rt.unsupported(0x08A613CCu, 0x616D6546u, "vfpu0 not lowered yet"); return;
L_08A613E0:
    rt.unsupported(0x08A613E0u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A613EC:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A613F0u, 0x79616C50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0624_entry, 624u, 84u, 0x08A74908u>(ctx, &aot_mem); return;
    }
    goto L_08A613F4;
L_08A613F4:
    rt.unsupported(0x08A613F4u, 0x4C5F7265u, "unknown not lowered yet"); return;
L_08A61400:
    // nop
    goto L_08A61404;
L_08A61404:
    rt.unsupported(0x08A61404u, 0x4953554Du, "cop2/vfpu not lowered yet"); return;
L_08A61578:
    rt.unsupported(0x08A61578u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61590:
    rt.unsupported(0x08A61590u, 0x45656C63u, "cop1? not lowered yet"); return;
L_08A615A0:
    rt.unsupported(0x08A615A0u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A615B8:
    rt.unsupported(0x08A615B8u, 0x73257265u, "unknown not lowered yet"); return;
L_08A615C4:
    rt.unsupported(0x08A615C4u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A615DC:
    rt.unsupported(0x08A615DCu, 0x00006674u, "special? not lowered yet"); return;
L_08A615E0:
    rt.unsupported(0x08A615E0u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A615F8:
    aot_gpr[19] = (aot_gpr[19] < static_cast<std::uint32_t>(9588) ? 1u : 0u);
    rt.unsupported(0x08A615FCu, 0x00667473u, "special? not lowered yet"); return;
L_08A61600:
    rt.unsupported(0x08A61600u, 0x69686556u, "unknown not lowered yet"); return;
L_08A61610:
    if (aot_gpr[18] != aot_gpr[31]) {
    rt.unsupported(0x08A61614u, 0x4D5F4845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 23u, 0x08A75760u>(ctx, &aot_mem); return;
    }
    goto L_08A61618;
L_08A61618:
    rt.unsupported(0x08A61618u, 0x004E4941u, "special? not lowered yet"); return;
L_08A6161C:
    rt.unsupported(0x08A6161Cu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A61628:
    ctx.execute_vfpu_vscl_ct<105u, 99u, 108u, 1u>();
    rt.unsupported(0x08A6162Cu, 0x73255C73u, "unknown not lowered yet"); return;
L_08A6163C:
    rt.unsupported(0x08A6163Cu, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A61644:
    rt.unsupported(0x08A61644u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A6165C:
    ctx.execute_vfpu_vscl_ct<97u, 99u, 116u, 1u>();
    rt.unsupported(0x08A61660u, 0x74732E72u, "unknown not lowered yet"); return;
L_08A61668:
    rt.unsupported(0x08A61668u, 0x72616843u, "unknown not lowered yet"); return;
L_08A61680:
    rt.unsupported(0x08A61680u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A61688:
    // nop
    goto L_08A6168C;
L_08A6168C:
    rt.unsupported(0x08A6168Cu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A61698:
    rt.unsupported(0x08A61698u, 0x74636172u, "unknown not lowered yet"); return;
L_08A616A4:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A616A8u, 0x4148435Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 23u, 0x08A75760u>(ctx, &aot_mem); return;
    }
    goto L_08A616AC;
L_08A616AC:
    rt.unsupported(0x08A616ACu, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A616B4:
    rt.unsupported(0x08A616B4u, 0x72616843u, "unknown not lowered yet"); return;
L_08A616C8:
    rt.unsupported(0x08A616C8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A616E0:
    rt.unsupported(0x08A616E0u, 0x435F5053u, "unknown not lowered yet"); return;
L_08A616EC:
    rt.unsupported(0x08A616ECu, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A616F8:
    rt.unsupported(0x08A616F8u, 0x74636172u, "unknown not lowered yet"); return;
L_08A61704:
    rt.unsupported(0x08A61704u, 0x73656972u, "unknown not lowered yet"); return;
L_08A61714:
    rt.unsupported(0x08A61714u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A61724:
    rt.unsupported(0x08A61724u, 0x72616843u, "unknown not lowered yet"); return;
L_08A61740:
    rt.unsupported(0x08A61740u, 0x0000005Fu, "special? not lowered yet"); return;
L_08A61744:
    rt.unsupported(0x08A61744u, 0x69686556u, "unknown not lowered yet"); return;
L_08A61754:
    rt.unsupported(0x08A61754u, 0x435F5053u, "unknown not lowered yet"); return;
L_08A61760:
    rt.unsupported(0x08A61760u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A6176C:
    // nop
    // nop
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08A61778u, 0x0000000Du, "special? not lowered yet"); return;
L_08A61790:
    rt.unsupported(0x08A61790u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A617B4:
    rt.unsupported(0x08A617B4u, 0x4C434953u, "unknown not lowered yet"); return;
L_08A617C0:
    // nop
    // nop
    rt.unsupported(0x08A617C8u, 0x00000072u, "special? not lowered yet"); return;
L_08A617DC:
    rt.unsupported(0x08A617DCu, 0x69686556u, "unknown not lowered yet"); return;
L_08A617E8:
    rt.unsupported(0x08A617E8u, 0x73796850u, "unknown not lowered yet"); return;
L_08A617F4:
    rt.unsupported(0x08A617F4u, 0x746E7552u, "unknown not lowered yet"); return;
L_08A61800:
    rt.unsupported(0x08A61800u, 0x425F4941u, "unknown not lowered yet"); return;
L_08A6184C:
    rt.unsupported(0x08A6184Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61864:
    ctx.execute_vfpu_vhdp(46u, 115u, 116u, 1u);
    // nop
    goto L_08A6186C;
L_08A6186C:
    rt.unsupported(0x08A6186Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61884:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vhdp(46u, 115u, 116u, 1u);
    // nop
    goto L_08A61890;
L_08A61890:
    rt.unsupported(0x08A61890u, 0x69647541u, "unknown not lowered yet"); return;
L_08A6189C:
    rt.unsupported(0x08A6189Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A618B4:
    rt.unsupported(0x08A618B4u, 0x00006674u, "special? not lowered yet"); return;
L_08A618B8:
    rt.unsupported(0x08A618B8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A618D0:
    aot_gpr[13] = (aot_gpr[11] + static_cast<std::uint32_t>(29285));
    rt.unsupported(0x08A618D4u, 0x74732E73u, "unknown not lowered yet"); return;
L_08A618DC:
    rt.unsupported(0x08A618DCu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A618F4:
    rt.unsupported(0x08A618F4u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A61900:
    rt.unsupported(0x08A61900u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61918:
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(21327) ? 1u : 0u);
    rt.unsupported(0x08A6191Cu, 0x00667473u, "special? not lowered yet"); return;
L_08A61920:
    rt.unsupported(0x08A61920u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A61938:
    rt.unsupported(0x08A61938u, 0x74732E6Cu, "unknown not lowered yet"); return;
L_08A61954:
    if (static_cast<std::int32_t>(aot_gpr[10]) <= 0) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 47u, 0x08A759D8u>(ctx, &aot_mem); return;
    }
    goto L_08A6195C;
L_08A6195C:
    rt.unsupported(0x08A6195Cu, 0x4D414320u, "unknown not lowered yet"); return;
L_08A61978:
    if (aot_gpr[26] == aot_gpr[7]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0621_entry, 621u, 114u, 0x08A71E98u>(ctx, &aot_mem); return;
    }
    goto L_08A61980;
L_08A61980:
    rt.unsupported(0x08A61980u, 0x00004941u, "special? not lowered yet"); return;
L_08A619A0:
    rt.unsupported(0x08A619A0u, 0x41435F54u, "unknown not lowered yet"); return;
L_08A619C4:
    rt.memory().memory_barrier();
    // nop
    rt.unsupported(0x08A619CCu, 0x454D4143u, "cop1? not lowered yet"); return;
L_08A619D8:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08A619DC;
L_08A619DC:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> (aot_gpr[2] & 31u)));
    goto L_08A619E0;
L_08A619E0:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08A619E4;
L_08A619E4:
    rt.unsupported(0x08A619E4u, 0x0000544Cu, "syscall not lowered yet"); return;
L_08A619E8:
    rt.unsupported(0x08A619E8u, 0x0045544Cu, "syscall not lowered yet"); return;
L_08A619EC:
    rt.unsupported(0x08A619ECu, 0x0000454Cu, "syscall not lowered yet"); return;
L_08A619F0:
    rt.unsupported(0x08A619F0u, 0x00000045u, "special? not lowered yet"); return;
L_08A619F4:
    rt.unsupported(0x08A619F4u, 0x00005145u, "special? not lowered yet"); return;
L_08A619F8:
    rt.unsupported(0x08A619F8u, 0x69616843u, "unknown not lowered yet"); return;
L_08A61A04:
    rt.unsupported(0x08A61A04u, 0x2045544Cu, "unknown not lowered yet"); return;
L_08A61A10:
    rt.unsupported(0x08A61A10u, 0x2045544Cu, "unknown not lowered yet"); return;
L_08A61A1C:
    rt.unsupported(0x08A61A1Cu, 0x2045544Cu, "unknown not lowered yet"); return;
L_08A61A28:
    ctx.execute_vfpu_compare3(69u, 32u, 71u, 1u, 6u);
    aot_gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A61A30;
L_08A61A30:
    aot_gpr[12] = (0u | 0u);
    goto L_08A61A34;
L_08A61A34:
    rt.unsupported(0x08A61A34u, 0x74736944u, "unknown not lowered yet"); return;
L_08A61A40:
    aot_gpr[13] = (0u < 0u ? 1u : 0u);
    goto L_08A61A44;
L_08A61A44:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    // nop
    goto L_08A61A4C;
L_08A61A4C:
    rt.unsupported(0x08A61A4Cu, 0x696C6E4Fu, "unknown not lowered yet"); return;
L_08A61A54:
    rt.unsupported(0x08A61A54u, 0x736E696Du, "unknown not lowered yet"); return;
L_08A61A5C:
    rt.unsupported(0x08A61A5Cu, 0x72756F68u, "unknown not lowered yet"); return;
L_08A61A64:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A61A6Cu, 0x73726946u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 219u, 0x08A73FE8u>(ctx, &aot_mem); return;
    }
    goto L_08A61A70;
L_08A61A70:
    rt.unsupported(0x08A61A70u, 0x00000074u, "special? not lowered yet"); return;
L_08A61A74:
    rt.unsupported(0x08A61A74u, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A61A84:
    rt.unsupported(0x08A61A84u, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A61A98:
    rt.unsupported(0x08A61A98u, 0x676E6F4Cu, "vfpu1 not lowered yet"); return;
L_08A61AA4:
    rt.unsupported(0x08A61AA4u, 0x69445F74u, "unknown not lowered yet"); return;
L_08A61AB0:
    rt.unsupported(0x08A61AB0u, 0x676E6F4Cu, "vfpu1 not lowered yet"); return;
L_08A61ABC:
    rt.unsupported(0x08A61ABCu, 0x7369445Fu, "unknown not lowered yet"); return;
L_08A61AC8:
    rt.unsupported(0x08A61AC8u, 0x676E6F4Cu, "vfpu1 not lowered yet"); return;
L_08A61AD4:
    ctx.execute_vfpu_vminmax(95u, 84u, 105u, 1u, false);
    (void)(0u | 0u);
    goto L_08A61ADC;
L_08A61ADC:
    rt.unsupported(0x08A61ADCu, 0x676E6F4Cu, "vfpu1 not lowered yet"); return;
L_08A61AE8:
    rt.unsupported(0x08A61AE8u, 0x6769656Cu, "vfpu1 not lowered yet"); return;
L_08A61AF4:
    rt.unsupported(0x08A61AF4u, 0x425F6F4Eu, "unknown not lowered yet"); return;
L_08A61B04:
    ctx.execute_vfpu_vcmp_ct<118u, 97u, 1u, 1u>();
    rt.unsupported(0x08A61B08u, 0x68636E61u, "unknown not lowered yet"); return;
L_08A61B10:
    rt.unsupported(0x08A61B10u, 0x42656349u, "unknown not lowered yet"); return;
L_08A61B1C:
    rt.unsupported(0x08A61B1Cu, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A61B24:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A61B28u, 0x00000073u, "special? not lowered yet"); return;
L_08A61B2C:
    rt.unsupported(0x08A61B2Cu, 0x736E6957u, "unknown not lowered yet"); return;
L_08A61B34:
    rt.unsupported(0x08A61B34u, 0x736F6F42u, "unknown not lowered yet"); return;
L_08A61B48:
    rt.unsupported(0x08A61B48u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A61B58:
    // nop
    goto L_08A61B5C;
L_08A61B5C:
    rt.unsupported(0x08A61B5Cu, 0x006C6C41u, "special? not lowered yet"); return;
L_08A61B60:
    rt.unsupported(0x08A61B60u, 0x00006F54u, "special? not lowered yet"); return;
L_08A61B64:
    aot_gpr[4] = (0u ^ 0u);
    goto L_08A61B68;
L_08A61B68:
    rt.unsupported(0x08A61B68u, 0x6B6E6152u, "unknown not lowered yet"); return;
L_08A61B70:
    rt.unsupported(0x08A61B70u, 0x74737543u, "unknown not lowered yet"); return;
L_08A61B80:
    rt.unsupported(0x08A61B80u, 0x436C6C41u, "unknown not lowered yet"); return;
L_08A61B8C:
    rt.unsupported(0x08A61B8Cu, 0x74636950u, "unknown not lowered yet"); return;
L_08A61B98:
    rt.unsupported(0x08A61B98u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A61BA4:
    rt.unsupported(0x08A61BA4u, 0x74617453u, "unknown not lowered yet"); return;
L_08A61BAC:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A61BB0u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A61BB8:
    rt.unsupported(0x08A61BB8u, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A61BC0:
    ctx.execute_vfpu_compare3(85u, 110u, 108u, 1u, 6u);
    aot_gpr[13] = (0u - 0u);
    goto L_08A61BC8;
L_08A61BC8:
    rt.unsupported(0x08A61BC8u, 0x6373694Du, "vfpu0 not lowered yet"); return;
L_08A61BD0:
    rt.unsupported(0x08A61BD0u, 0x6E617473u, "vfpu3 not lowered yet"); return;
L_08A61BDC:
    ctx.execute_vfpu_vscl_ct<115u, 112u, 101u, 1u>();
    (void)(0u & 0u);
    goto L_08A61BE4;
L_08A61BE4:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    rt.unsupported(0x08A61BE8u, 0x6369745Fu, "vfpu0 not lowered yet"); return;
L_08A61BF0:
    rt.unsupported(0x08A61BF0u, 0x69766E69u, "unknown not lowered yet"); return;
L_08A61C00:
    rt.unsupported(0x08A61C00u, 0x69686576u, "unknown not lowered yet"); return;
L_08A61C08:
    ctx.execute_vfpu_vscl_ct<122u, 111u, 110u, 1u>();
    // nop
    goto L_08A61C10;
L_08A61C10:
    rt.unsupported(0x08A61C10u, 0x72776F6Eu, "unknown not lowered yet"); return;
L_08A61C18:
    if (aot_gpr[25] == 0u) {
    ctx.execute_vfpu_vscl_ct<105u, 108u, 118u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 14u, 0x08A73138u>(ctx, &aot_mem); return;
    }
    goto L_08A61C20;
L_08A61C20:
    rt.unsupported(0x08A61C20u, 0x00000072u, "special? not lowered yet"); return;
L_08A61C24:
    rt.unsupported(0x08A61C24u, 0x42204547u, "unknown not lowered yet"); return;
L_08A61C30:
    rt.unsupported(0x08A61C30u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A61C38:
    rt.unsupported(0x08A61C38u, 0x69686556u, "unknown not lowered yet"); return;
L_08A61C44:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 118u, 1u>();
    rt.unsupported(0x08A61C48u, 0x73656972u, "unknown not lowered yet"); return;
L_08A61C50:
    rt.unsupported(0x08A61C50u, 0x72616843u, "unknown not lowered yet"); return;
L_08A61C5C:
    rt.unsupported(0x08A61C5Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A61C64:
    rt.unsupported(0x08A61C64u, 0x756E6F42u, "unknown not lowered yet"); return;
L_08A61C6C:
    rt.unsupported(0x08A61C6Cu, 0x756F7247u, "unknown not lowered yet"); return;
L_08A61C78:
    rt.unsupported(0x08A61C78u, 0x69686556u, "unknown not lowered yet"); return;
L_08A61C84:
    rt.unsupported(0x08A61C84u, 0x76694C5Cu, "unknown not lowered yet"); return;
L_08A61C90:
    // nop
    // nop
    goto L_08A61C98;
L_08A61C98:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A61CA0u, 0x00000073u, "special? not lowered yet"); return;
L_08A61CA4:
    rt.unsupported(0x08A61CA4u, 0x61746F54u, "vfpu0 not lowered yet"); return;
L_08A61CE8:
    rt.unsupported(0x08A61CE8u, 0x41564E49u, "unknown not lowered yet"); return;
L_08A61D38:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61D3Cu, 0x6B634C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 45u, 0x08A73254u>(ctx, &aot_mem); return;
    }
    goto L_08A61D40;
L_08A61D40:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A61D44u, 0x756B6E52u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 123u, 0x08A7AA68u>(ctx, &aot_mem); return;
    }
    goto L_08A61D48;
L_08A61D48:
    rt.unsupported(0x08A61D48u, 0x74735F70u, "unknown not lowered yet"); return;
L_08A61D54:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61D58u, 0x6B634C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 47u, 0x08A73270u>(ctx, &aot_mem); return;
    }
    goto L_08A61D5C;
L_08A61D5C:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<83u, 112u, 101u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 126u, 0x08A7AA84u>(ctx, &aot_mem); return;
    }
    goto L_08A61D64;
L_08A61D64:
    rt.unsupported(0x08A61D64u, 0x63617264u, "vfpu0 not lowered yet"); return;
L_08A61D74:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61D78u, 0x6B634C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 51u, 0x08A73290u>(ctx, &aot_mem); return;
    }
    goto L_08A61D7C;
L_08A61D7C:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 129u, 0x08A7AAA4u>(ctx, &aot_mem); return;
    }
    goto L_08A61D84;
L_08A61D84:
    rt.unsupported(0x08A61D84u, 0x6369545Fu, "vfpu0 not lowered yet"); return;
L_08A61D90:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.hi = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 12u, 0x08A7B340u>(ctx, &aot_mem); return;
    }
    goto L_08A61D98;
L_08A61D98:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61D9Cu, 0x6B634C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 53u, 0x08A732B4u>(ctx, &aot_mem); return;
    }
    goto L_08A61DA0;
L_08A61DA0:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A61DA4u, 0x6964654Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 131u, 0x08A7AAC8u>(ctx, &aot_mem); return;
    }
    goto L_08A61DA8;
L_08A61DA8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<86u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08A61DACu, 0x735F6F65u, "unknown not lowered yet"); return;
L_08A61DBC:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61DC0u, 0x6B636C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 54u, 0x08A732D8u>(ctx, &aot_mem); return;
    }
    goto L_08A61DC4;
L_08A61DC4:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A61DC8u, 0x74534941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 134u, 0x08A7AAECu>(ctx, &aot_mem); return;
    }
    goto L_08A61DCC;
L_08A61DCC:
    rt.unsupported(0x08A61DCCu, 0x00666675u, "special? not lowered yet"); return;
L_08A61DD0:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61DD4u, 0x6B636C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 55u, 0x08A732ECu>(ctx, &aot_mem); return;
    }
    goto L_08A61DD8;
L_08A61DD8:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A61DDCu, 0x694C7845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 137u, 0x08A7AB00u>(ctx, &aot_mem); return;
    }
    goto L_08A61DE0;
L_08A61DE0:
    rt.unsupported(0x08A61DE0u, 0x79726576u, "unknown not lowered yet"); return;
L_08A61DE8:
    if (aot_gpr[10] != aot_gpr[31]) {
    rt.unsupported(0x08A61DECu, 0x6B636C6Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 57u, 0x08A73304u>(ctx, &aot_mem); return;
    }
    goto L_08A61DF0;
L_08A61DF0:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A61DF4u, 0x74726150u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 138u, 0x08A7AB18u>(ctx, &aot_mem); return;
    }
    goto L_08A61DF8;
L_08A61DF8:
    rt.unsupported(0x08A61DF8u, 0x00000073u, "special? not lowered yet"); return;
L_08A61DFC:
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A61E00u, 0x202F2064u, "unknown not lowered yet"); return;
L_08A61E20:
    rt.unsupported(0x08A61E24u, 0x5F585450u, "control flow in delay slot"); return;
L_08A61E28:
    rt.unsupported(0x08A61E28u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A61E30:
    rt.unsupported(0x08A61E34u, 0x5F585450u, "control flow in delay slot"); return;
L_08A61E38:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[21]) >> (aot_gpr[2] & 31u)));
    goto L_08A61E3C;
L_08A61E3C:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A61E40u, 0x42584554u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 56u, 0x08A76B80u>(ctx, &aot_mem); return;
    }
    goto L_08A61E44;
L_08A61E44:
    rt.unsupported(0x08A61E44u, 0x4B434F4Cu, "cop2/vfpu not lowered yet"); return;
L_08A61E50:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A61E54u, 0x42584554u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 57u, 0x08A76B94u>(ctx, &aot_mem); return;
    }
    goto L_08A61E58;
L_08A61E58:
    rt.unsupported(0x08A61E58u, 0x4B434F4Cu, "cop2/vfpu not lowered yet"); return;
L_08A61E64:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A61E68u, 0x45444F4Du, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 58u, 0x08A76BA8u>(ctx, &aot_mem); return;
    }
    goto L_08A61E6C;
L_08A61E6C:
    rt.unsupported(0x08A61E6Cu, 0x414D5F4Cu, "unknown not lowered yet"); return;
L_08A61E74:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A61E78u, 0x45444F4Du, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0626_entry, 626u, 59u, 0x08A76BB8u>(ctx, &aot_mem); return;
    }
    goto L_08A61E7C;
L_08A61E78:
    rt.unsupported(0x08A61E78u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08A61E7C:
    if (aot_gpr[2] == aot_gpr[7]) {
    rt.unsupported(0x08A61E80u, 0x00000055u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 81u, 0x08A79BB0u>(ctx, &aot_mem); return;
    }
    goto L_08A61E84;
L_08A61E84:
    // nop
    // nop
    // nop
    goto L_08A61E90;
L_08A61E90:
    rt.unsupported(0x08A61E90u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A61E9C:
    rt.unsupported(0x08A61E9Cu, 0x69647541u, "unknown not lowered yet"); return;
L_08A61EB0:
    rt.unsupported(0x08A61EB0u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A61EC4:
    rt.unsupported(0x08A61EC4u, 0x74736F50u, "unknown not lowered yet"); return;
L_08A61ED4:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A61ED8u, 0x696E6946u, "unknown not lowered yet"); return;
L_08A61EEC:
    rt.unsupported(0x08A61EECu, 0x69766E49u, "unknown not lowered yet"); return;
L_08A61F04:
    rt.unsupported(0x08A61F04u, 0x69766E49u, "unknown not lowered yet"); return;
L_08A61F24:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A61F28u, 0x75736552u, "unknown not lowered yet"); return;
L_08A61F34:
    rt.unsupported(0x08A61F34u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A61F44:
    rt.unsupported(0x08A61F44u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A61F54:
    rt.unsupported(0x08A61F54u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A61F5C:
    rt.unsupported(0x08A61F5Cu, 0x74697551u, "unknown not lowered yet"); return;
L_08A61F74:
    rt.unsupported(0x08A61F74u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A61F84:
    rt.unsupported(0x08A61F84u, 0x746F6850u, "unknown not lowered yet"); return;
L_08A61F94:
    rt.unsupported(0x08A61F94u, 0x736F6847u, "unknown not lowered yet"); return;
L_08A61FA4:
    rt.unsupported(0x08A61FA4u, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08A61FB4:
    rt.unsupported(0x08A61FB4u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A61FC8:
    rt.unsupported(0x08A61FC8u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A61FD8:
    rt.unsupported(0x08A61FD8u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A61FEC:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A61FF0u, 0x6172426Cu, "vfpu0 not lowered yet"); return;
L_08A61FFC:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    ctx.pc = 0x08A62000u; return;
}

void recomp_unit_0605(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0605_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_605(Runtime &runtime) {
    runtime.register_generated_unit(605u, 0x08A61000u, 4096u, &recomp_unit_0605, &recomp_unit_0605_entry);
    runtime.register_function(0x08A61000u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61150u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61158u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61164u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6116Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61174u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6117Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61184u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6118Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61190u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A611A4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A611B0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A611B4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A611CCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A611DCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A611F4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61204u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6121Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61228u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6122Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61244u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61254u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6126Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61290u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6129Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A612A4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A612C0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61398u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A613BCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A613C8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A613CCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A613E0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A613ECu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A613F4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61400u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61404u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61578u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61590u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A615A0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A615B8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A615C4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A615DCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A615E0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A615F8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61600u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61610u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61618u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6161Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61628u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6163Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61644u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6165Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61668u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61680u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61688u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6168Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61698u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616A4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616ACu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616B4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616C8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616E0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616ECu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A616F8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61704u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61714u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61724u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61740u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61744u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61754u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61760u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6176Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61790u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A617B4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A617C0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A617DCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A617E8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A617F4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61800u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6184Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61864u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6186Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61884u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61890u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6189Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A618B4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A618B8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A618D0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A618DCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A618F4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61900u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61918u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61920u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61938u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61954u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A6195Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61978u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61980u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619A0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619C4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619D8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619DCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619E0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619E4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619E8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619ECu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619F0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619F4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A619F8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A04u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A10u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A1Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A28u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A30u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A34u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A40u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A44u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A4Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A54u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A5Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A64u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A70u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A74u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A84u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61A98u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61AA4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61AB0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61ABCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61AC8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61AD4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61ADCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61AE8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61AF4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B04u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B10u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B1Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B24u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B2Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B34u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B48u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B58u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B5Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B60u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B64u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B68u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B70u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B80u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B8Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61B98u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BA4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BACu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BB8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BC0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BC8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BD0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BDCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BE4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61BF0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C00u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C08u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C10u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C18u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C20u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C24u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C30u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C38u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C44u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C50u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C5Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C64u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C6Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C78u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C84u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C90u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61C98u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61CA4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61CE8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D38u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D40u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D48u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D54u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D5Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D64u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D74u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D7Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D84u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D90u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61D98u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DA0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DA8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DBCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DC4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DCCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DD0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DD8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DE0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DE8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DF0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DF8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61DFCu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E20u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E28u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E30u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E38u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E3Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E44u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E50u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E58u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E64u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E6Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E74u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E78u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E7Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E84u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E90u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61E9Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61EB0u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61EC4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61ED4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61EECu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F04u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F24u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F34u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F44u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F54u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F5Cu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F74u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F84u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61F94u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61FA4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61FB4u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61FC8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61FD8u, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61FECu, &recomp_unit_0605, "recomp_unit_0605");
    runtime.register_function(0x08A61FFCu, &recomp_unit_0605, "recomp_unit_0605");
}
} // namespace psprecomp
