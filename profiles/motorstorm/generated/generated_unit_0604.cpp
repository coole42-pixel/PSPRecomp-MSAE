#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0604[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 10,
    0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 24, 0, 0, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 29, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 80, 0, 0, 81, 0, 0, 82, 0,
    83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 97, 98, 0, 0, 99, 0, 100, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    0, 105, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0,
    0, 0, 122, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 136, 137, 0,
    0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 149, 0, 0, 0, 150, 151, 0, 0, 0, 152, 153, 0, 0, 0, 154, 155, 0,
    0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0,
    0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0,
    0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 203, 0, 0, 204, 0, 0, 0, 0,
    205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 245, 246, 0, 0, 0, 0, 0,
    247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 255,
};
void recomp_unit_0604_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A60000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0604[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A60000;
    case 2u: goto L_08A60014;
    case 3u: goto L_08A60020;
    case 4u: goto L_08A60030;
    case 5u: goto L_08A60034;
    case 6u: goto L_08A60040;
    case 7u: goto L_08A60058;
    case 8u: goto L_08A6006C;
    case 9u: goto L_08A60074;
    case 10u: goto L_08A6007C;
    case 11u: goto L_08A6008C;
    case 12u: goto L_08A60098;
    case 13u: goto L_08A600D0;
    case 14u: goto L_08A600E4;
    case 15u: goto L_08A600F4;
    case 16u: goto L_08A60104;
    case 17u: goto L_08A60118;
    case 18u: goto L_08A60128;
    case 19u: goto L_08A60138;
    case 20u: goto L_08A60148;
    case 21u: goto L_08A60154;
    case 22u: goto L_08A60160;
    case 23u: goto L_08A6016C;
    case 24u: goto L_08A60170;
    case 25u: goto L_08A60180;
    case 26u: goto L_08A60194;
    case 27u: goto L_08A601A4;
    case 28u: goto L_08A601AC;
    case 29u: goto L_08A601B8;
    case 30u: goto L_08A601BC;
    case 31u: goto L_08A601C4;
    case 32u: goto L_08A601CC;
    case 33u: goto L_08A601D4;
    case 34u: goto L_08A601E0;
    case 35u: goto L_08A60208;
    case 36u: goto L_08A60214;
    case 37u: goto L_08A6021C;
    case 38u: goto L_08A60230;
    case 39u: goto L_08A60238;
    case 40u: goto L_08A6024C;
    case 41u: goto L_08A6025C;
    case 42u: goto L_08A6026C;
    case 43u: goto L_08A60280;
    case 44u: goto L_08A60294;
    case 45u: goto L_08A602A4;
    case 46u: goto L_08A602B0;
    case 47u: goto L_08A602BC;
    case 48u: goto L_08A602CC;
    case 49u: goto L_08A602D8;
    case 50u: goto L_08A602E4;
    case 51u: goto L_08A602F0;
    case 52u: goto L_08A60304;
    case 53u: goto L_08A60310;
    case 54u: goto L_08A6031C;
    case 55u: goto L_08A60328;
    case 56u: goto L_08A60338;
    case 57u: goto L_08A60344;
    case 58u: goto L_08A60350;
    case 59u: goto L_08A6035C;
    case 60u: goto L_08A60364;
    case 61u: goto L_08A60378;
    case 62u: goto L_08A60388;
    case 63u: goto L_08A60398;
    case 64u: goto L_08A603A4;
    case 65u: goto L_08A603B8;
    case 66u: goto L_08A603C4;
    case 67u: goto L_08A603CC;
    case 68u: goto L_08A603D0;
    case 69u: goto L_08A603E0;
    case 70u: goto L_08A603EC;
    case 71u: goto L_08A60400;
    case 72u: goto L_08A6040C;
    case 73u: goto L_08A6041C;
    case 74u: goto L_08A60424;
    case 75u: goto L_08A60434;
    case 76u: goto L_08A6043C;
    case 77u: goto L_08A6044C;
    case 78u: goto L_08A60454;
    case 79u: goto L_08A6045C;
    case 80u: goto L_08A60460;
    case 81u: goto L_08A6046C;
    case 82u: goto L_08A60478;
    case 83u: goto L_08A60480;
    case 84u: goto L_08A60494;
    case 85u: goto L_08A604A4;
    case 86u: goto L_08A604B0;
    case 87u: goto L_08A604E8;
    case 88u: goto L_08A604F8;
    case 89u: goto L_08A60510;
    case 90u: goto L_08A60520;
    case 91u: goto L_08A60534;
    case 92u: goto L_08A6054C;
    case 93u: goto L_08A60568;
    case 94u: goto L_08A6057C;
    case 95u: goto L_08A60598;
    case 96u: goto L_08A605B0;
    case 97u: goto L_08A605B4;
    case 98u: goto L_08A605B8;
    case 99u: goto L_08A605C4;
    case 100u: goto L_08A605CC;
    case 101u: goto L_08A605D0;
    case 102u: goto L_08A605D8;
    case 103u: goto L_08A605E0;
    case 104u: goto L_08A605F8;
    case 105u: goto L_08A60604;
    case 106u: goto L_08A60608;
    case 107u: goto L_08A6061C;
    case 108u: goto L_08A60630;
    case 109u: goto L_08A60648;
    case 110u: goto L_08A6064C;
    case 111u: goto L_08A60658;
    case 112u: goto L_08A60668;
    case 113u: goto L_08A60674;
    case 114u: goto L_08A60688;
    case 115u: goto L_08A6069C;
    case 116u: goto L_08A606B0;
    case 117u: goto L_08A606C8;
    case 118u: goto L_08A606CC;
    case 119u: goto L_08A606D8;
    case 120u: goto L_08A606E8;
    case 121u: goto L_08A606F8;
    case 122u: goto L_08A60708;
    case 123u: goto L_08A6070C;
    case 124u: goto L_08A60720;
    case 125u: goto L_08A60730;
    case 126u: goto L_08A60744;
    case 127u: goto L_08A60758;
    case 128u: goto L_08A6076C;
    case 129u: goto L_08A60780;
    case 130u: goto L_08A60794;
    case 131u: goto L_08A607A8;
    case 132u: goto L_08A607BC;
    case 133u: goto L_08A607D0;
    case 134u: goto L_08A607E0;
    case 135u: goto L_08A607F0;
    case 136u: goto L_08A607F4;
    case 137u: goto L_08A607F8;
    case 138u: goto L_08A60808;
    case 139u: goto L_08A60818;
    case 140u: goto L_08A60828;
    case 141u: goto L_08A6083C;
    case 142u: goto L_08A6084C;
    case 143u: goto L_08A6085C;
    case 144u: goto L_08A60864;
    case 145u: goto L_08A60884;
    case 146u: goto L_08A60894;
    case 147u: goto L_08A608A8;
    case 148u: goto L_08A608B8;
    case 149u: goto L_08A608BC;
    case 150u: goto L_08A608CC;
    case 151u: goto L_08A608D0;
    case 152u: goto L_08A608E0;
    case 153u: goto L_08A608E4;
    case 154u: goto L_08A608F4;
    case 155u: goto L_08A608F8;
    case 156u: goto L_08A60908;
    case 157u: goto L_08A60910;
    case 158u: goto L_08A6091C;
    case 159u: goto L_08A60938;
    case 160u: goto L_08A60958;
    case 161u: goto L_08A60968;
    case 162u: goto L_08A60978;
    case 163u: goto L_08A60984;
    case 164u: goto L_08A6098C;
    case 165u: goto L_08A60998;
    case 166u: goto L_08A609AC;
    case 167u: goto L_08A609BC;
    case 168u: goto L_08A609CC;
    case 169u: goto L_08A609E4;
    case 170u: goto L_08A609F8;
    case 171u: goto L_08A60A08;
    case 172u: goto L_08A60A10;
    case 173u: goto L_08A60A20;
    case 174u: goto L_08A60A28;
    case 175u: goto L_08A60A38;
    case 176u: goto L_08A60A40;
    case 177u: goto L_08A60A50;
    case 178u: goto L_08A60A5C;
    case 179u: goto L_08A60A64;
    case 180u: goto L_08A60A70;
    case 181u: goto L_08A60A7C;
    case 182u: goto L_08A60A8C;
    case 183u: goto L_08A60AB8;
    case 184u: goto L_08A60AC8;
    case 185u: goto L_08A60AD8;
    case 186u: goto L_08A60AE8;
    case 187u: goto L_08A60AF4;
    case 188u: goto L_08A60B04;
    case 189u: goto L_08A60B10;
    case 190u: goto L_08A60B24;
    case 191u: goto L_08A60B34;
    case 192u: goto L_08A60B44;
    case 193u: goto L_08A60B54;
    case 194u: goto L_08A60B60;
    case 195u: goto L_08A60B74;
    case 196u: goto L_08A60B8C;
    case 197u: goto L_08A60B9C;
    case 198u: goto L_08A60BB0;
    case 199u: goto L_08A60BB4;
    case 200u: goto L_08A60BC0;
    case 201u: goto L_08A60BCC;
    case 202u: goto L_08A60BDC;
    case 203u: goto L_08A60BE0;
    case 204u: goto L_08A60BEC;
    case 205u: goto L_08A60C00;
    case 206u: goto L_08A60C0C;
    case 207u: goto L_08A60C20;
    case 208u: goto L_08A60C30;
    case 209u: goto L_08A60C44;
    case 210u: goto L_08A60C50;
    case 211u: goto L_08A60C60;
    case 212u: goto L_08A60C74;
    case 213u: goto L_08A60C8C;
    case 214u: goto L_08A60C9C;
    case 215u: goto L_08A60CB0;
    case 216u: goto L_08A60CC0;
    case 217u: goto L_08A60CD4;
    case 218u: goto L_08A60CE8;
    case 219u: goto L_08A60CF8;
    case 220u: goto L_08A60D0C;
    case 221u: goto L_08A60D20;
    case 222u: goto L_08A60D2C;
    case 223u: goto L_08A60D40;
    case 224u: goto L_08A60D48;
    case 225u: goto L_08A60D50;
    case 226u: goto L_08A60D70;
    case 227u: goto L_08A60D7C;
    case 228u: goto L_08A60D80;
    case 229u: goto L_08A60E28;
    case 230u: goto L_08A60E3C;
    case 231u: goto L_08A60E48;
    case 232u: goto L_08A60E5C;
    case 233u: goto L_08A60E70;
    case 234u: goto L_08A60E80;
    case 235u: goto L_08A60EA0;
    case 236u: goto L_08A60EA4;
    case 237u: goto L_08A60EC8;
    case 238u: goto L_08A60EE0;
    case 239u: goto L_08A60EE8;
    case 240u: goto L_08A60F20;
    case 241u: goto L_08A60F28;
    case 242u: goto L_08A60F2C;
    case 243u: goto L_08A60F48;
    case 244u: goto L_08A60F5C;
    case 245u: goto L_08A60F64;
    case 246u: goto L_08A60F68;
    case 247u: goto L_08A60F80;
    case 248u: goto L_08A60F88;
    case 249u: goto L_08A60FC8;
    case 250u: goto L_08A60FD4;
    case 251u: goto L_08A60FE0;
    case 252u: goto L_08A60FE8;
    case 253u: goto L_08A60FF0;
    case 254u: goto L_08A60FF8;
    case 255u: goto L_08A60FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A60000:
    rt.unsupported(0x08A60000u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60014:
    rt.unsupported(0x08A60014u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60020:
    rt.unsupported(0x08A60020u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60030:
    rt.unsupported(0x08A60030u, 0x00657275u, "special? not lowered yet"); return;
L_08A60034:
    rt.unsupported(0x08A60034u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60040:
    rt.unsupported(0x08A60040u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60058:
    rt.unsupported(0x08A60058u, 0x6B636F4Cu, "unknown not lowered yet"); return;
L_08A6006C:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A60070u, 0x00007470u, "special? not lowered yet"); return;
L_08A60074:
    ctx.execute_vfpu_vcmp_ct<101u, 99u, 1u, 4u>();
    rt.unsupported(0x08A60078u, 0x00656E69u, "special? not lowered yet"); return;
L_08A6007C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A60080u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A6008C:
    rt.unsupported(0x08A6008Cu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A60098:
    rt.unsupported(0x08A60098u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A600D0:
    rt.unsupported(0x08A600D0u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A600E4:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A600E8u, 0x6172426Cu, "vfpu0 not lowered yet"); return;
L_08A600F4:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 101u, 1u>();
    rt.unsupported(0x08A600F8u, 0x676E6972u, "vfpu1 not lowered yet"); return;
L_08A60104:
    rt.unsupported(0x08A60104u, 0x69647541u, "unknown not lowered yet"); return;
L_08A60118:
    rt.unsupported(0x08A60118u, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08A60128:
    rt.unsupported(0x08A60128u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A60138:
    rt.unsupported(0x08A60138u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A60148:
    rt.unsupported(0x08A60148u, 0x74617453u, "unknown not lowered yet"); return;
L_08A60154:
    rt.unsupported(0x08A60154u, 0x74617453u, "unknown not lowered yet"); return;
L_08A60160:
    rt.unsupported(0x08A60160u, 0x74617453u, "unknown not lowered yet"); return;
L_08A6016C:
    rt.unsupported(0x08A6016Cu, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60170:
    rt.unsupported(0x08A60170u, 0x41736E6Fu, "unknown not lowered yet"); return;
L_08A60180:
    rt.unsupported(0x08A60180u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60194:
    rt.unsupported(0x08A60194u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A601A4:
    rt.unsupported(0x08A601A4u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A601AC:
    rt.unsupported(0x08A601ACu, 0x776F7272u, "unknown not lowered yet"); return;
L_08A601B8:
    aot_gpr[12] = (0u | 0u);
    goto L_08A601BC;
L_08A601BC:
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08A601C0u, 0x00000073u, "special? not lowered yet"); return;
L_08A601C4:
    (void)(aot_gpr[25] < static_cast<std::uint32_t>(25637) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 3u, 4u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A601C8u, 0x00642520u); return; } }
    goto L_08A601CC;
L_08A601CC:
    (void)(aot_gpr[25] < static_cast<std::uint32_t>(25637) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(6u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A601D0u, 0x00003520u); return; } }
    goto L_08A601D4;
L_08A601D4:
    aot_gpr[16] = (aot_gpr[9] & 11813u);
    rt.unsupported(0x08A601D8u, 0x73252066u, "unknown not lowered yet"); return;
L_08A601E0:
    aot_gpr[16] = (aot_gpr[17] & 11813u);
    (void)(0u ^ 0u);
    rt.unsupported(0x08A601ECu, 0x0884FE98u, "control flow in delay slot"); return;
L_08A60208:
    rt.unsupported(0x08A60208u, 0x696C6F50u, "unknown not lowered yet"); return;
L_08A60214:
    rt.unsupported(0x08A60214u, 0x616C7545u, "vfpu0 not lowered yet"); return;
L_08A6021C:
    rt.unsupported(0x08A6021Cu, 0x69766E49u, "unknown not lowered yet"); return;
L_08A60230:
    rt.unsupported(0x08A60230u, 0x69746341u, "unknown not lowered yet"); return;
L_08A60238:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    rt.unsupported(0x08A60240u, 0x73647261u, "unknown not lowered yet"); return;
L_08A6024C:
    rt.unsupported(0x08A6024Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A6025C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A60260u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A6026C:
    rt.unsupported(0x08A6026Cu, 0x746C754Du, "unknown not lowered yet"); return;
L_08A60280:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    rt.unsupported(0x08A60284u, 0x4D656C69u, "unknown not lowered yet"); return;
L_08A60294:
    rt.unsupported(0x08A60294u, 0x72617453u, "unknown not lowered yet"); return;
L_08A602A4:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    if (aot_gpr[27] == aot_gpr[5]) {
    aot_gpr[14] = (aot_gpr[3] + aot_gpr[5]);
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 14u, 0x08A7B450u>(ctx, &aot_mem); return;
    }
    goto L_08A602B0;
L_08A602B0:
    ctx.execute_vfpu_compare3(65u, 117u, 116u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<83u, 97u, 118u, 1u>();
    // nop
    goto L_08A602BC;
L_08A602BC:
    ctx.execute_vfpu_compare3(65u, 117u, 116u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<83u, 97u, 118u, 1u>();
    rt.unsupported(0x08A602C4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A602CC:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    rt.unsupported(0x08A602D0u, 0x4C656C69u, "unknown not lowered yet"); return;
L_08A602D8:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    rt.unsupported(0x08A602DCu, 0x4E656C69u, "unknown not lowered yet"); return;
L_08A602E4:
    rt.unsupported(0x08A602E4u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A602F0:
    rt.unsupported(0x08A602F0u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60304:
    rt.unsupported(0x08A60304u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60310:
    rt.unsupported(0x08A60310u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A6031C:
    rt.unsupported(0x08A6031Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A60328:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    rt.unsupported(0x08A6032Cu, 0x44656C69u, "cop1? not lowered yet"); return;
L_08A60338:
    rt.unsupported(0x08A60338u, 0x436D654Du, "unknown not lowered yet"); return;
L_08A60344:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    // nop
    goto L_08A60350;
L_08A60350:
    rt.unsupported(0x08A60350u, 0x494E5350u, "cop2/vfpu not lowered yet"); return;
L_08A6035C:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08A60360u, 0x00007470u, "special? not lowered yet"); return;
L_08A60364:
    rt.unsupported(0x08A60364u, 0x4C4E5350u, "unknown not lowered yet"); return;
L_08A60378:
    rt.unsupported(0x08A60378u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A60388:
    rt.unsupported(0x08A60388u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A60398:
    rt.unsupported(0x08A60398u, 0x696C6F50u, "unknown not lowered yet"); return;
L_08A603A4:
    rt.unsupported(0x08A603A4u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A603B8:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 116u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A603C4;
L_08A603C4:
    rt.unsupported(0x08A603C4u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A603CC:
    // nop
    goto L_08A603D0;
L_08A603D0:
    ctx.execute_vfpu_vscl_ct<82u, 117u, 108u, 1u>();
    ctx.execute_vfpu_compare3(73u, 110u, 102u, 1u, 6u);
    rt.unsupported(0x08A603D8u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A603E0:
    rt.unsupported(0x08A603E0u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A603EC:
    rt.unsupported(0x08A603ECu, 0x74736546u, "unknown not lowered yet"); return;
L_08A60400:
    rt.unsupported(0x08A60400u, 0x69686556u, "unknown not lowered yet"); return;
L_08A6040C:
    rt.unsupported(0x08A6040Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A6041C:
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 3u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A60424;
L_08A60424:
    rt.unsupported(0x08A60424u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A60434:
    ctx.execute_vfpu_vminmax(101u, 114u, 83u, 1u, false);
    aot_gpr[13] = (aot_gpr[3] + aot_gpr[12]);
    goto L_08A6043C;
L_08A6043C:
    rt.unsupported(0x08A6043Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A6044C:
    ctx.execute_vfpu_vminmax(122u, 101u, 83u, 1u, false);
    aot_gpr[13] = (aot_gpr[3] + aot_gpr[12]);
    goto L_08A60454;
L_08A60454:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<71u, 1u>(vfpu_d); }
    rt.unsupported(0x08A60458u, 0x74786554u, "unknown not lowered yet"); return;
L_08A6045C:
    // nop
    goto L_08A60460;
L_08A60460:
    rt.unsupported(0x08A60460u, 0x766C6953u, "unknown not lowered yet"); return;
L_08A6046C:
    rt.unsupported(0x08A6046Cu, 0x6E6F7242u, "vfpu3 not lowered yet"); return;
L_08A60478:
    rt.unsupported(0x08A60478u, 0x74496F47u, "unknown not lowered yet"); return;
L_08A60480:
    rt.unsupported(0x08A60480u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A60494:
    rt.unsupported(0x08A60494u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A604A4:
    rt.unsupported(0x08A604A4u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A604B0:
    rt.unsupported(0x08A604B0u, 0x74736546u, "unknown not lowered yet"); return;
L_08A604E8:
    rt.unsupported(0x08A604E8u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A604F8:
    rt.unsupported(0x08A604F8u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A60510:
    rt.unsupported(0x08A60510u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A60520:
    rt.unsupported(0x08A60520u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A60534:
    rt.unsupported(0x08A60534u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A6054C:
    rt.unsupported(0x08A6054Cu, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A60568:
    rt.unsupported(0x08A60568u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A6057C:
    rt.unsupported(0x08A6057Cu, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A60598:
    rt.unsupported(0x08A60598u, 0x75706E49u, "unknown not lowered yet"); return;
L_08A605B0:
    rt.unsupported(0x08A605B0u, 0x0000005Fu, "special? not lowered yet"); return;
L_08A605B4:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A605B4u, 0x00000020u); return; } }
    goto L_08A605B8;
L_08A605B8:
    rt.unsupported(0x08A605B8u, 0x72657355u, "unknown not lowered yet"); return;
L_08A605C4:
    rt.unsupported(0x08A605C4u, 0x73727543u, "unknown not lowered yet"); return;
L_08A605CC:
    rt.unsupported(0x08A605CCu, 0x00000041u, "special? not lowered yet"); return;
L_08A605D0:
    rt.unsupported(0x08A605D0u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08A605D8:
    ctx.execute_vfpu_vhdp(67u, 111u, 110u, 1u);
    rt.unsupported(0x08A605DCu, 0x006D7269u, "special? not lowered yet"); return;
L_08A605E0:
    rt.unsupported(0x08A605E0u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A605F8:
    rt.unsupported(0x08A605F8u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60604:
    // nop
    goto L_08A60608;
L_08A60608:
    rt.unsupported(0x08A60608u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A6061C:
    rt.unsupported(0x08A6061Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A60630:
    rt.unsupported(0x08A60630u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A60648:
    // nop
    goto L_08A6064C;
L_08A6064C:
    rt.unsupported(0x08A6064Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A60658:
    rt.unsupported(0x08A60658u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60668:
    rt.unsupported(0x08A60668u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A60674:
    rt.unsupported(0x08A60674u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A60688:
    rt.unsupported(0x08A60688u, 0x72616843u, "unknown not lowered yet"); return;
L_08A6069C:
    rt.unsupported(0x08A6069Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A606B0:
    rt.unsupported(0x08A606B0u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A606C8:
    // nop
    goto L_08A606CC;
L_08A606CC:
    rt.unsupported(0x08A606CCu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A606D8:
    rt.unsupported(0x08A606D8u, 0x69686556u, "unknown not lowered yet"); return;
L_08A606E8:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A606ECu, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A606F8:
    rt.unsupported(0x08A606F8u, 0x74617453u, "unknown not lowered yet"); return;
L_08A60708:
    // nop
    goto L_08A6070C;
L_08A6070C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A60710u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A60720:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A60728u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A60730:
    rt.unsupported(0x08A60730u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A60744:
    rt.unsupported(0x08A60744u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A60758:
    rt.unsupported(0x08A60758u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A6076C:
    rt.unsupported(0x08A6076Cu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A60780:
    rt.unsupported(0x08A60780u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A60794:
    rt.unsupported(0x08A60794u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A607A8:
    rt.unsupported(0x08A607A8u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A607BC:
    rt.unsupported(0x08A607BCu, 0x6B636954u, "unknown not lowered yet"); return;
L_08A607D0:
    rt.unsupported(0x08A607D0u, 0x74617453u, "unknown not lowered yet"); return;
L_08A607E0:
    rt.unsupported(0x08A607E0u, 0x74617453u, "unknown not lowered yet"); return;
L_08A607F0:
    // nop
    goto L_08A607F4;
L_08A607F4:
    if (0u == 0u) (void)(0u);
    goto L_08A607F8;
L_08A607F8:
    rt.unsupported(0x08A607F8u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A60808:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A60810u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A60818:
    rt.unsupported(0x08A60818u, 0x706F7254u, "unknown not lowered yet"); return;
L_08A60828:
    rt.unsupported(0x08A60828u, 0x706F7254u, "unknown not lowered yet"); return;
L_08A6083C:
    rt.unsupported(0x08A6083Cu, 0x706F7254u, "unknown not lowered yet"); return;
L_08A6084C:
    rt.unsupported(0x08A6084Cu, 0x706F7254u, "unknown not lowered yet"); return;
L_08A6085C:
    ctx.execute_vfpu_vscl_ct<117u, 102u, 102u, 1u>();
    rt.unsupported(0x08A60860u, 0x00000072u, "special? not lowered yet"); return;
L_08A60864:
    rt.unsupported(0x08A60864u, 0x706F7254u, "unknown not lowered yet"); return;
L_08A60884:
    ctx.execute_vfpu_vscl_ct<66u, 108u, 117u, 1u>();
    rt.unsupported(0x08A60888u, 0x70616853u, "unknown not lowered yet"); return;
L_08A60894:
    rt.unsupported(0x08A60894u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A608A8:
    rt.unsupported(0x08A608A8u, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A608B8:
    (void)(0u | 0u);
    goto L_08A608BC;
L_08A608BC:
    rt.unsupported(0x08A608BCu, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A608CC:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A608D0;
L_08A608D0:
    rt.unsupported(0x08A608D0u, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A608E0:
    rt.unsupported(0x08A608E0u, 0x00006172u, "special? not lowered yet"); return;
L_08A608E4:
    rt.unsupported(0x08A608E4u, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A608F4:
    rt.unsupported(0x08A608F4u, 0x00007374u, "special? not lowered yet"); return;
L_08A608F8:
    rt.unsupported(0x08A608F8u, 0x67646142u, "vfpu1 not lowered yet"); return;
L_08A60908:
    ctx.execute_vfpu_vscl_ct<69u, 100u, 103u, 1u>();
    // nop
    goto L_08A60910;
L_08A60910:
    rt.unsupported(0x08A60910u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A6091C:
    rt.unsupported(0x08A6091Cu, 0x706F7254u, "unknown not lowered yet"); return;
L_08A60938:
    rt.unsupported(0x08A60938u, 0x706F7254u, "unknown not lowered yet"); return;
L_08A60958:
    // nop
    // nop
    // nop
    // nop
    goto L_08A60968;
L_08A60968:
    ctx.execute_vfpu_compare3(85u, 110u, 108u, 1u, 6u);
    rt.unsupported(0x08A6096Cu, 0x63536B63u, "vfpu0 not lowered yet"); return;
L_08A60978:
    ctx.execute_vfpu_compare3(85u, 110u, 108u, 1u, 6u);
    rt.unsupported(0x08A6097Cu, 0x63496B63u, "vfpu0 not lowered yet"); return;
L_08A60984:
    rt.unsupported(0x08A60988u, 0x5574736Fu, "control flow in delay slot"); return;
L_08A6098C:
    rt.unsupported(0x08A6098Cu, 0x636F6C6Eu, "vfpu0 not lowered yet"); return;
L_08A60998:
    rt.unsupported(0x08A60998u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A609AC:
    ctx.execute_vfpu_vscl_ct<111u, 118u, 105u, 1u>();
    rt.unsupported(0x08A609B0u, 0x74754F5Fu, "unknown not lowered yet"); return;
L_08A609BC:
    rt.unsupported(0x08A609BCu, 0x4D796E41u, "unknown not lowered yet"); return;
L_08A609CC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08A609D0u, 0x4D737469u, "unknown not lowered yet"); return;
L_08A609E4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08A609E8u, 0x4D737469u, "unknown not lowered yet"); return;
L_08A609F8:
    rt.unsupported(0x08A609F8u, 0x74786554u, "unknown not lowered yet"); return;
L_08A60A08:
    rt.unsupported(0x08A60A08u, 0x7469546Bu, "unknown not lowered yet"); return;
L_08A60A10:
    rt.unsupported(0x08A60A10u, 0x74786554u, "unknown not lowered yet"); return;
L_08A60A20:
    ctx.execute_vfpu_vminmax(107u, 78u, 97u, 1u, false);
    (void)(0u | 0u);
    goto L_08A60A28;
L_08A60A28:
    rt.unsupported(0x08A60A28u, 0x74786554u, "unknown not lowered yet"); return;
L_08A60A38:
    rt.unsupported(0x08A60A38u, 0x7365446Bu, "unknown not lowered yet"); return;
L_08A60A40:
    rt.unsupported(0x08A60A40u, 0x74786554u, "unknown not lowered yet"); return;
L_08A60A50:
    ctx.execute_vfpu_compare3(107u, 80u, 114u, 1u, 6u);
    rt.unsupported(0x08A60A54u, 0x73657267u, "unknown not lowered yet"); return;
L_08A60A5C:
    rt.unsupported(0x08A60A60u, 0x5854505Fu, "control flow in delay slot"); return;
L_08A60A64:
    rt.unsupported(0x08A60A64u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
L_08A60A70:
    rt.unsupported(0x08A60A70u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60A7C:
    rt.unsupported(0x08A60A7Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A60A8C:
    rt.unsupported(0x08A60A8Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A60AB8:
    rt.unsupported(0x08A60AB8u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A60AC8:
    rt.unsupported(0x08A60AC8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A60AD8:
    rt.unsupported(0x08A60AD8u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60AE8:
    rt.unsupported(0x08A60AE8u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60AF4:
    rt.unsupported(0x08A60AF4u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60B04:
    rt.unsupported(0x08A60B04u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60B10:
    rt.unsupported(0x08A60B10u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60B24:
    rt.unsupported(0x08A60B24u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60B34:
    rt.unsupported(0x08A60B34u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60B44:
    rt.unsupported(0x08A60B44u, 0x74737543u, "unknown not lowered yet"); return;
L_08A60B54:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vminmax(73u, 116u, 101u, 1u, false);
    // nop
    goto L_08A60B60;
L_08A60B60:
    rt.unsupported(0x08A60B60u, 0x74737543u, "unknown not lowered yet"); return;
L_08A60B74:
    rt.unsupported(0x08A60B74u, 0x74737543u, "unknown not lowered yet"); return;
L_08A60B8C:
    rt.unsupported(0x08A60B8Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A60B9C:
    rt.unsupported(0x08A60B9Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60BB0:
    rt.unsupported(0x08A60BB0u, 0x00006572u, "special? not lowered yet"); return;
L_08A60BB4:
    rt.unsupported(0x08A60BB4u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60BC0:
    rt.unsupported(0x08A60BC0u, 0x62626F4Cu, "vfpu0 not lowered yet"); return;
L_08A60BCC:
    rt.unsupported(0x08A60BCCu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60BDC:
    rt.unsupported(0x08A60BDCu, 0x00006572u, "special? not lowered yet"); return;
L_08A60BE0:
    rt.unsupported(0x08A60BE0u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60BEC:
    rt.unsupported(0x08A60BECu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60C00:
    rt.unsupported(0x08A60C00u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A60C0C:
    rt.unsupported(0x08A60C0Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A60C20:
    ctx.execute_vfpu_vscl_ct<82u, 117u, 108u, 1u>();
    ctx.execute_vfpu_compare3(73u, 110u, 102u, 1u, 6u);
    rt.unsupported(0x08A60C28u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A60C30:
    rt.unsupported(0x08A60C30u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A60C44:
    rt.unsupported(0x08A60C44u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A60C50:
    rt.unsupported(0x08A60C50u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A60C60:
    rt.unsupported(0x08A60C60u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60C74:
    rt.unsupported(0x08A60C74u, 0x69686556u, "unknown not lowered yet"); return;
L_08A60C8C:
    rt.unsupported(0x08A60C8Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A60C9C:
    rt.unsupported(0x08A60C9Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A60CB0:
    ctx.execute_vfpu_vscl_ct<83u, 101u, 108u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A60CB8u, 0x7269436Eu, "unknown not lowered yet"); return;
L_08A60CC0:
    rt.unsupported(0x08A60CC0u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60CD4:
    rt.unsupported(0x08A60CD4u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60CE8:
    rt.unsupported(0x08A60CE8u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60CF8:
    rt.unsupported(0x08A60CF8u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A60D0C:
    rt.unsupported(0x08A60D0Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A60D20:
    (void)(aot_gpr[17] ^ 29477u);
    rt.unsupported(0x08A60D24u, 0x73202520u, "unknown not lowered yet"); return;
L_08A60D2C:
    rt.unsupported(0x08A60D2Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A60D40:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.memory().memory_barrier();
    goto L_08A60D48;
L_08A60D48:
    rt.unsupported(0x08A60D48u, 0x63736544u, "vfpu0 not lowered yet"); return;
L_08A60D50:
    rt.unsupported(0x08A60D50u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A60D70:
    rt.unsupported(0x08A60D70u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A60D7C:
    // nop
    goto L_08A60D80;
L_08A60D80:
    rt.unsupported(0x08A60D80u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A60E28:
    rt.unsupported(0x08A60E28u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A60E3C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A60E40u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A60E48:
    rt.unsupported(0x08A60E48u, 0x6B636F4Cu, "unknown not lowered yet"); return;
L_08A60E5C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A60E60u, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A60E70:
    rt.unsupported(0x08A60E70u, 0x74737543u, "unknown not lowered yet"); return;
L_08A60E80:
    rt.unsupported(0x08A60E80u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A60EA0:
    aot_gpr[12] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[19]) ? aot_gpr[3] : aot_gpr[19]);
    goto L_08A60EA4;
L_08A60EA4:
    rt.unsupported(0x08A60EA4u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A60EC8:
    ctx.execute_vfpu_vscl_ct<101u, 102u, 108u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A60ED0u, 0x70614D6Eu, "unknown not lowered yet"); return;
L_08A60EE0:
    rt.unsupported(0x08A60EE0u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A60EE8:
    rt.unsupported(0x08A60EE8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A60F20:
    rt.unsupported(0x08A60F20u, 0x414D5F58u, "unknown not lowered yet"); return;
L_08A60F28:
    rt.unsupported(0x08A60F28u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A60F2C:
    rt.unsupported(0x08A60F2Cu, 0x7073705Fu, "unknown not lowered yet"); return;
L_08A60F48:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 83u, 1u>();
    rt.unsupported(0x08A60F4Cu, 0x7463656Cu, "unknown not lowered yet"); return;
L_08A60F5C:
    if (static_cast<std::int32_t>(aot_gpr[26]) > 0) {
    rt.unsupported(0x08A60F60u, 0x4E49414Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0622_entry, 622u, 21u, 0x08A72470u>(ctx, &aot_mem); return;
    }
    goto L_08A60F64;
L_08A60F64:
    // nop
    goto L_08A60F68;
L_08A60F68:
    rt.unsupported(0x08A60F68u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A60F80:
    aot_gpr[19] = (aot_gpr[19] < static_cast<std::uint32_t>(28015) ? 1u : 0u);
    rt.unsupported(0x08A60F84u, 0x00667473u, "special? not lowered yet"); return;
L_08A60F88:
    rt.unsupported(0x08A60F88u, 0x76204546u, "unknown not lowered yet"); return;
L_08A60FC8:
    rt.unsupported(0x08A60FC8u, 0x73257325u, "unknown not lowered yet"); return;
L_08A60FD4:
    rt.unsupported(0x08A60FD4u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A60FE0:
    rt.unsupported(0x08A60FE0u, 0x73676147u, "unknown not lowered yet"); return;
L_08A60FE8:
    if (aot_gpr[2] == aot_gpr[19]) {
    rt.unsupported(0x08A60FECu, 0x4741475Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 3u, 0x08A750A4u>(ctx, &aot_mem); return;
    }
    goto L_08A60FF0;
L_08A60FF0:
    if (aot_gpr[2] != aot_gpr[19]) {
    rt.unsupported(0x08A60FF4u, 0x49414D5Fu, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0623_entry, 623u, 79u, 0x08A73524u>(ctx, &aot_mem); return;
    }
    goto L_08A60FF8;
L_08A60FF8:
    rt.unsupported(0x08A60FF8u, 0x0000004Eu, "special? not lowered yet"); return;
L_08A60FFC:
    rt.unsupported(0x08A60FFCu, 0x69746341u, "unknown not lowered yet"); return;
}

void recomp_unit_0604(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0604_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_604(Runtime &runtime) {
    runtime.register_generated_unit(604u, 0x08A60000u, 4096u, &recomp_unit_0604, &recomp_unit_0604_entry);
    runtime.register_function(0x08A60000u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60014u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60020u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60030u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60034u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60040u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60058u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6006Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60074u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6007Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6008Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60098u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A600D0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A600E4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A600F4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60104u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60118u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60128u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60138u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60148u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60154u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60160u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6016Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60170u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60180u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60194u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601A4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601ACu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601B8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601BCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601C4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601D4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A601E0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60208u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60214u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6021Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60230u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60238u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6024Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6025Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6026Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60280u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60294u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602A4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602B0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602BCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602D8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602E4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A602F0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60304u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60310u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6031Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60328u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60338u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60344u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60350u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6035Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60364u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60378u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60388u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60398u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603A4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603B8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603C4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603D0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603E0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A603ECu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60400u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6040Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6041Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60424u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60434u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6043Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6044Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60454u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6045Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60460u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6046Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60478u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60480u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60494u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A604A4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A604B0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A604E8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A604F8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60510u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60520u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60534u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6054Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60568u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6057Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60598u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605B0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605B4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605B8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605C4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605D0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605D8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605E0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A605F8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60604u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60608u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6061Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60630u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60648u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6064Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60658u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60668u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60674u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60688u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6069Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A606B0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A606C8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A606CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A606D8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A606E8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A606F8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60708u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6070Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60720u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60730u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60744u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60758u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6076Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60780u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60794u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607A8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607BCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607D0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607E0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607F0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607F4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A607F8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60808u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60818u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60828u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6083Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6084Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6085Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60864u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60884u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60894u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608A8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608B8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608BCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608D0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608E0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608E4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608F4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A608F8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60908u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60910u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6091Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60938u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60958u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60968u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60978u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60984u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A6098Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60998u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A609ACu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A609BCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A609CCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A609E4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A609F8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A08u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A10u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A20u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A28u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A38u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A40u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A50u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A5Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A64u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A70u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A7Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60A8Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60AB8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60AC8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60AD8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60AE8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60AF4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B04u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B10u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B24u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B34u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B44u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B54u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B60u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B74u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B8Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60B9Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BB0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BB4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BC0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BCCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BDCu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BE0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60BECu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C00u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C0Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C20u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C30u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C44u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C50u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C60u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C74u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C8Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60C9Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60CB0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60CC0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60CD4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60CE8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60CF8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D0Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D20u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D2Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D40u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D48u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D50u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D70u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D7Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60D80u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60E28u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60E3Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60E48u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60E5Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60E70u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60E80u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60EA0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60EA4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60EC8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60EE0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60EE8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F20u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F28u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F2Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F48u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F5Cu, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F64u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F68u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F80u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60F88u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FC8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FD4u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FE0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FE8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FF0u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FF8u, &recomp_unit_0604, "recomp_unit_0604");
    runtime.register_function(0x08A60FFCu, &recomp_unit_0604, "recomp_unit_0604");
}
} // namespace psprecomp
