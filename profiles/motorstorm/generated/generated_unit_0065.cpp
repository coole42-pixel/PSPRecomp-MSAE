#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0065[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0,
    18, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0,
    25, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36,
    0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0,
    48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64,
    0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0,
    114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0,
    0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148, 0,
    149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0,
    0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0,
    172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0,
    220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0,
    0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
};
void recomp_unit_0065_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08845000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0065[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08845000;
    case 2u: goto L_08845010;
    case 3u: goto L_08845024;
    case 4u: goto L_0884504C;
    case 5u: goto L_08845054;
    case 6u: goto L_0884505C;
    case 7u: goto L_08845070;
    case 8u: goto L_088450A8;
    case 9u: goto L_088450B8;
    case 10u: goto L_088450C0;
    case 11u: goto L_088450C8;
    case 12u: goto L_088450D0;
    case 13u: goto L_088450D8;
    case 14u: goto L_088450E0;
    case 15u: goto L_088450E8;
    case 16u: goto L_088450F0;
    case 17u: goto L_088450F8;
    case 18u: goto L_08845100;
    case 19u: goto L_08845108;
    case 20u: goto L_0884511C;
    case 21u: goto L_08845124;
    case 22u: goto L_08845140;
    case 23u: goto L_08845164;
    case 24u: goto L_0884516C;
    case 25u: goto L_08845180;
    case 26u: goto L_08845188;
    case 27u: goto L_08845190;
    case 28u: goto L_0884519C;
    case 29u: goto L_088451A8;
    case 30u: goto L_088451BC;
    case 31u: goto L_088451C4;
    case 32u: goto L_088451D8;
    case 33u: goto L_088451E0;
    case 34u: goto L_088451EC;
    case 35u: goto L_088451F4;
    case 36u: goto L_088451FC;
    case 37u: goto L_08845204;
    case 38u: goto L_08845210;
    case 39u: goto L_08845218;
    case 40u: goto L_08845220;
    case 41u: goto L_08845234;
    case 42u: goto L_08845248;
    case 43u: goto L_08845250;
    case 44u: goto L_08845258;
    case 45u: goto L_08845268;
    case 46u: goto L_08845270;
    case 47u: goto L_08845278;
    case 48u: goto L_08845280;
    case 49u: goto L_08845290;
    case 50u: goto L_0884529C;
    case 51u: goto L_088452B0;
    case 52u: goto L_088452C4;
    case 53u: goto L_088452D8;
    case 54u: goto L_088452E4;
    case 55u: goto L_088452F0;
    case 56u: goto L_08845304;
    case 57u: goto L_0884531C;
    case 58u: goto L_08845324;
    case 59u: goto L_08845330;
    case 60u: goto L_08845338;
    case 61u: goto L_08845348;
    case 62u: goto L_0884535C;
    case 63u: goto L_08845374;
    case 64u: goto L_0884537C;
    case 65u: goto L_0884538C;
    case 66u: goto L_088453A0;
    case 67u: goto L_088453A8;
    case 68u: goto L_088453B0;
    case 69u: goto L_088453B8;
    case 70u: goto L_088453C4;
    case 71u: goto L_088453CC;
    case 72u: goto L_088453D4;
    case 73u: goto L_088453E8;
    case 74u: goto L_08845400;
    case 75u: goto L_08845408;
    case 76u: goto L_08845418;
    case 77u: goto L_08845420;
    case 78u: goto L_08845428;
    case 79u: goto L_08845434;
    case 80u: goto L_0884543C;
    case 81u: goto L_08845444;
    case 82u: goto L_08845450;
    case 83u: goto L_08845458;
    case 84u: goto L_0884546C;
    case 85u: goto L_08845488;
    case 86u: goto L_088454A4;
    case 87u: goto L_088454C4;
    case 88u: goto L_088454D4;
    case 89u: goto L_088454E0;
    case 90u: goto L_088454F8;
    case 91u: goto L_08845508;
    case 92u: goto L_0884551C;
    case 93u: goto L_08845540;
    case 94u: goto L_0884555C;
    case 95u: goto L_08845570;
    case 96u: goto L_08845580;
    case 97u: goto L_08845588;
    case 98u: goto L_08845590;
    case 99u: goto L_08845598;
    case 100u: goto L_088455A8;
    case 101u: goto L_088455B4;
    case 102u: goto L_088455BC;
    case 103u: goto L_088455C4;
    case 104u: goto L_088455D0;
    case 105u: goto L_088455D8;
    case 106u: goto L_0884565C;
    case 107u: goto L_08845660;
    case 108u: goto L_08845680;
    case 109u: goto L_088456A0;
    case 110u: goto L_088456C0;
    case 111u: goto L_088456C8;
    case 112u: goto L_088456F0;
    case 113u: goto L_088456F8;
    case 114u: goto L_08845700;
    case 115u: goto L_0884570C;
    case 116u: goto L_08845720;
    case 117u: goto L_0884572C;
    case 118u: goto L_08845738;
    case 119u: goto L_0884574C;
    case 120u: goto L_08845758;
    case 121u: goto L_0884576C;
    case 122u: goto L_08845778;
    case 123u: goto L_08845788;
    case 124u: goto L_08845790;
    case 125u: goto L_0884579C;
    case 126u: goto L_088457A4;
    case 127u: goto L_088457AC;
    case 128u: goto L_088457BC;
    case 129u: goto L_088457D0;
    case 130u: goto L_088457E0;
    case 131u: goto L_088457F0;
    case 132u: goto L_088457F8;
    case 133u: goto L_0884584C;
    case 134u: goto L_08845858;
    case 135u: goto L_08845864;
    case 136u: goto L_08845870;
    case 137u: goto L_08845878;
    case 138u: goto L_08845880;
    case 139u: goto L_08845894;
    case 140u: goto L_088458A4;
    case 141u: goto L_088458B0;
    case 142u: goto L_088458BC;
    case 143u: goto L_088458C8;
    case 144u: goto L_088458D0;
    case 145u: goto L_088458D8;
    case 146u: goto L_088458E4;
    case 147u: goto L_088458F0;
    case 148u: goto L_088458F8;
    case 149u: goto L_08845900;
    case 150u: goto L_0884590C;
    case 151u: goto L_08845918;
    case 152u: goto L_08845920;
    case 153u: goto L_0884592C;
    case 154u: goto L_08845940;
    case 155u: goto L_08845950;
    case 156u: goto L_08845958;
    case 157u: goto L_08845964;
    case 158u: goto L_08845970;
    case 159u: goto L_08845978;
    case 160u: goto L_08845984;
    case 161u: goto L_08845990;
    case 162u: goto L_0884599C;
    case 163u: goto L_088459A4;
    case 164u: goto L_088459AC;
    case 165u: goto L_088459B8;
    case 166u: goto L_088459C4;
    case 167u: goto L_088459CC;
    case 168u: goto L_088459D4;
    case 169u: goto L_088459E0;
    case 170u: goto L_088459EC;
    case 171u: goto L_088459F4;
    case 172u: goto L_08845A00;
    case 173u: goto L_08845A14;
    case 174u: goto L_08845A24;
    case 175u: goto L_08845A38;
    case 176u: goto L_08845A40;
    case 177u: goto L_08845A4C;
    case 178u: goto L_08845A60;
    case 179u: goto L_08845A70;
    case 180u: goto L_08845A84;
    case 181u: goto L_08845A8C;
    case 182u: goto L_08845AA0;
    case 183u: goto L_08845AA8;
    case 184u: goto L_08845AB4;
    case 185u: goto L_08845AC8;
    case 186u: goto L_08845AF0;
    case 187u: goto L_08845B38;
    case 188u: goto L_08845B50;
    case 189u: goto L_08845B5C;
    case 190u: goto L_08845B68;
    case 191u: goto L_08845B70;
    case 192u: goto L_08845B8C;
    case 193u: goto L_08845B98;
    case 194u: goto L_08845BA4;
    case 195u: goto L_08845BAC;
    case 196u: goto L_08845BB4;
    case 197u: goto L_08845BCC;
    case 198u: goto L_08845BD8;
    case 199u: goto L_08845BE0;
    case 200u: goto L_08845BF8;
    case 201u: goto L_08845C00;
    case 202u: goto L_08845C0C;
    case 203u: goto L_08845C14;
    case 204u: goto L_08845C2C;
    case 205u: goto L_08845C34;
    case 206u: goto L_08845C4C;
    case 207u: goto L_08845C58;
    case 208u: goto L_08845C60;
    case 209u: goto L_08845C68;
    case 210u: goto L_08845C70;
    case 211u: goto L_08845C8C;
    case 212u: goto L_08845C98;
    case 213u: goto L_08845CA4;
    case 214u: goto L_08845CAC;
    case 215u: goto L_08845CB4;
    case 216u: goto L_08845CCC;
    case 217u: goto L_08845CD8;
    case 218u: goto L_08845CE0;
    case 219u: goto L_08845CF8;
    case 220u: goto L_08845D00;
    case 221u: goto L_08845D0C;
    case 222u: goto L_08845D14;
    case 223u: goto L_08845D2C;
    case 224u: goto L_08845D34;
    case 225u: goto L_08845D4C;
    case 226u: goto L_08845D60;
    case 227u: goto L_08845D68;
    case 228u: goto L_08845D74;
    case 229u: goto L_08845D8C;
    case 230u: goto L_08845D9C;
    case 231u: goto L_08845DB8;
    case 232u: goto L_08845DE8;
    case 233u: goto L_08845DFC;
    case 234u: goto L_08845E10;
    case 235u: goto L_08845E30;
    case 236u: goto L_08845E4C;
    case 237u: goto L_08845E5C;
    case 238u: goto L_08845E70;
    case 239u: goto L_08845E80;
    case 240u: goto L_08845E90;
    case 241u: goto L_08845EC8;
    case 242u: goto L_08845EE8;
    case 243u: goto L_08845F10;
    case 244u: goto L_08845F24;
    case 245u: goto L_08845F38;
    case 246u: goto L_08845F4C;
    case 247u: goto L_08845F60;
    case 248u: goto L_08845F74;
    case 249u: goto L_08845F84;
    case 250u: goto L_08845F94;
    case 251u: goto L_08845FA4;
    case 252u: goto L_08845FB4;
    case 253u: goto L_08845FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08845000:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08845010u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26536), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 135u, 0x0889B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08845010u) goto L_08845010;
    return;
L_08845010:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845024:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0884504Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 200u, 0x08893D68u>(ctx, &aot_mem) && ctx.pc == 0x0884504Cu) goto L_0884504C;
    return;
L_0884504C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884505C;
      }
      goto L_08845054;
    }
L_08845054:
    aot_gpr[31] = (0x0884505Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 135u, 0x08899F18u>(ctx, &aot_mem) && ctx.pc == 0x0884505Cu) goto L_0884505C;
    return;
L_0884505C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26528)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088450C0;
      }
      goto L_088450A8;
    }
L_088450A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(5)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088450C8;
      }
      goto L_088450B8;
    }
L_088450B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088450E0;
      }
      goto L_088450C0;
    }
L_088450C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_088450C8;
    }
L_088450C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_088450D0;
    }
L_088450D0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088450F8;
      }
      goto L_088450D8;
    }
L_088450D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845250;
      }
      goto L_088450E0;
    }
L_088450E0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884543C;
      }
      goto L_088450E8;
    }
L_088450E8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088451C4;
      }
      goto L_088450F0;
    }
L_088450F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_088450F8;
    }
L_088450F8:
    aot_gpr[31] = (0x08845100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x08845100u) goto L_08845100;
    return;
L_08845100:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845124;
      }
      goto L_08845108;
    }
L_08845108:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[18]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[31] = (0x0884511Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 157u, 0x0889A978u>(ctx, &aot_mem) && ctx.pc == 0x0884511Cu) goto L_0884511C;
    return;
L_0884511C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_088451BC;
      }
      goto L_08845124;
    }
L_08845124:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08845140u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4756));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08845140u) goto L_08845140;
    return;
L_08845140:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088451BC;
      }
      goto L_08845164;
    }
L_08845164:
    aot_gpr[31] = (0x0884516Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x0884516Cu) goto L_0884516C;
    return;
L_0884516C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08845180u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08845180u) goto L_08845180;
    return;
L_08845180:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884519C;
      }
      goto L_08845188;
    }
L_08845188:
    aot_gpr[31] = (0x08845190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x08845190u) goto L_08845190;
    return;
L_08845190:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088451BC;
      }
      goto L_0884519C;
    }
L_0884519C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088451A8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088451A8u) goto L_088451A8;
    return;
L_088451A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_088451BC;
L_088451BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_088451C4;
    }
L_088451C4:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08845248;
      }
      goto L_088451D8;
    }
L_088451D8:
    aot_gpr[31] = (0x088451E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088451E0u) goto L_088451E0;
    return;
L_088451E0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08845248;
      }
      goto L_088451EC;
    }
L_088451EC:
    aot_gpr[31] = (0x088451F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(2196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x088451F4u) goto L_088451F4;
    return;
L_088451F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845210;
      }
      goto L_088451FC;
    }
L_088451FC:
    aot_gpr[31] = (0x08845204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x08845204u) goto L_08845204;
    return;
L_08845204:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08845248;
      }
      goto L_08845210;
    }
L_08845210:
    aot_gpr[31] = (0x08845218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 122u, 0x0889A810u>(ctx, &aot_mem) && ctx.pc == 0x08845218u) goto L_08845218;
    return;
L_08845218:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845248;
      }
      goto L_08845220;
    }
L_08845220:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08845234u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08845234u) goto L_08845234;
    return;
L_08845234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08845248;
L_08845248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_08845250;
    }
L_08845250:
    aot_gpr[31] = (0x08845258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08845258u) goto L_08845258;
    return;
L_08845258:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_08845278;
    }
    goto L_08845268;
L_08845268:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08845434;
      }
      goto L_08845270;
    }
L_08845270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845428;
      }
      goto L_08845278;
    }
L_08845278:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845434;
      }
      goto L_08845280;
    }
L_08845280:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26538)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088452C4;
      }
      goto L_08845290;
    }
L_08845290:
    aot_gpr[4] = (0u | 392u);
    aot_gpr[31] = (0x0884529Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884529Cu) goto L_0884529C;
    return;
L_0884529C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088452B0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088452B0u) goto L_088452B0;
    return;
L_088452B0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08845420;
      }
      goto L_088452C4;
    }
L_088452C4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26652)));
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088452E4;
      }
      goto L_088452D8;
    }
L_088452D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26537)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884531C;
      }
      goto L_088452E4;
    }
L_088452E4:
    aot_gpr[4] = (0u | 69u);
    aot_gpr[31] = (0x088452F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088452F0u) goto L_088452F0;
    return;
L_088452F0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845304u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08845304u) goto L_08845304;
    return;
L_08845304:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08845420;
      }
      goto L_0884531C;
    }
L_0884531C:
    aot_gpr[31] = (0x08845324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08845324u) goto L_08845324;
    return;
L_08845324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845374;
      }
      goto L_08845330;
    }
L_08845330:
    aot_gpr[31] = (0x08845338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08845338u) goto L_08845338;
    return;
L_08845338:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 99u);
    aot_gpr[31] = (0x08845348u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845348u) goto L_08845348;
    return;
L_08845348:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884535Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884535Cu) goto L_0884535C;
    return;
L_0884535C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08845420;
      }
      goto L_08845374;
    }
L_08845374:
    aot_gpr[31] = (0x0884537Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884537Cu) goto L_0884537C;
    return;
L_0884537C:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088453A0;
      }
      goto L_0884538C;
    }
L_0884538C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3032));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08845400;
      }
      goto L_088453A0;
    }
L_088453A0:
    aot_gpr[31] = (0x088453A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x088453A8u) goto L_088453A8;
    return;
L_088453A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088453C4;
      }
      goto L_088453B0;
    }
L_088453B0:
    aot_gpr[31] = (0x088453B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x088453B8u) goto L_088453B8;
    return;
L_088453B8:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08845420;
      }
      goto L_088453C4;
    }
L_088453C4:
    aot_gpr[31] = (0x088453CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 122u, 0x0889A810u>(ctx, &aot_mem) && ctx.pc == 0x088453CCu) goto L_088453CC;
    return;
L_088453CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845420;
      }
      goto L_088453D4;
    }
L_088453D4:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088453E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088453E8u) goto L_088453E8;
    return;
L_088453E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08845420;
      }
      goto L_08845400;
    }
L_08845400:
    aot_gpr[31] = (0x08845408u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x08845408u) goto L_08845408;
    return;
L_08845408:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08845418u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 154u, 0x08962B58u>(ctx, &aot_mem) && ctx.pc == 0x08845418u) goto L_08845418;
    return;
L_08845418:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08845420;
L_08845420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845434;
      }
      goto L_08845428;
    }
L_08845428:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_08845434;
L_08845434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_0884543C;
    }
L_0884543C:
    aot_gpr[31] = (0x08845444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08845444u) goto L_08845444;
    return;
L_08845444:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_08845450;
    }
L_08845450:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845488;
      }
      goto L_08845458;
    }
L_08845458:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884546Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884546Cu) goto L_0884546C;
    return;
L_0884546C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08845488u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08845488u) goto L_08845488;
    return;
L_08845488:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088454A4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23912), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088454C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088454D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 65u, 0x08827960u>(ctx, &aot_mem) && ctx.pc == 0x088454D4u) goto L_088454D4;
    return;
L_088454D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088454E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088454F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088454F8u) goto L_088454F8;
    return;
L_088454F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845508u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845508u) goto L_08845508;
    return;
L_08845508:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884551C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08845540u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845540u) goto L_08845540;
    return;
L_08845540:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0884555Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4744));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884555Cu) goto L_0884555C;
    return;
L_0884555C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08845660;
      }
      goto L_08845570;
    }
L_08845570:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088455C4;
      }
      goto L_08845580;
    }
L_08845580:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088455D8;
      }
      goto L_08845588;
    }
L_08845588:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088455D8;
      }
      goto L_08845590;
    }
L_08845590:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088455D8;
      }
      goto L_08845598;
    }
L_08845598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088455A8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 93u, 0x088D96D0u>(ctx, &aot_mem) && ctx.pc == 0x088455A8u) goto L_088455A8;
    return;
L_088455A8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088455BC;
      }
      goto L_088455B4;
    }
L_088455B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088455BC;
L_088455BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845660;
      }
      goto L_088455C4;
    }
L_088455C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088455D0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 180u, 0x088D9CA8u>(ctx, &aot_mem) && ctx.pc == 0x088455D0u) goto L_088455D0;
    return;
L_088455D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08845660;
      }
      goto L_088455D8;
    }
L_088455D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (16704u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (16976u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (16752u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16888u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (16988u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16864u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884565Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 185u, 0x088D9CF8u>(ctx, &aot_mem) && ctx.pc == 0x0884565Cu) goto L_0884565C;
    return;
L_0884565C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08845660;
L_08845660:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[2] = (0u < aot_gpr[17] ? 1u : 0u);
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
L_08845680:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23920), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088456A0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23928), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088456C0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088456C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3096)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_08845720;
      }
      goto L_088456F0;
    }
L_088456F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884576C;
      }
      goto L_088456F8;
    }
L_088456F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0884574C;
      }
      goto L_08845700;
    }
L_08845700:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0884570Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4712));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884570Cu) goto L_0884570C;
    return;
L_0884570C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08845788;
      }
      goto L_08845720;
    }
L_08845720:
    aot_gpr[6] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0884576C;
      }
      goto L_0884572C;
    }
L_0884572C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08845738u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4676));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08845738u) goto L_08845738;
    return;
L_08845738:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08845788;
      }
      goto L_0884574C;
    }
L_0884574C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08845758u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08845758u) goto L_08845758;
    return;
L_08845758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08845788;
      }
      goto L_0884576C;
    }
L_0884576C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08845778u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4652));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08845778u) goto L_08845778;
    return;
L_08845778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24916)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_08845788;
L_08845788:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088457E0;
      }
      goto L_08845790;
    }
L_08845790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2268)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088457E0;
      }
      goto L_0884579C;
    }
L_0884579C:
    aot_gpr[31] = (0x088457A4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 228u, 0x08889DD0u>(ctx, &aot_mem) && ctx.pc == 0x088457A4u) goto L_088457A4;
    return;
L_088457A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088457E0;
      }
      goto L_088457AC;
    }
L_088457AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088457D0;
      }
      goto L_088457BC;
    }
L_088457BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088457E0;
      }
      goto L_088457D0;
    }
L_088457D0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088457E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088457E0u) goto L_088457E0;
    return;
L_088457E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088457F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088457F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2416)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    aot_gpr[31] = (0x0884584Cu);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0884584Cu) goto L_0884584C;
    return;
L_0884584C:
    aot_gpr[18] = (0u | 2u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[18];
    aot_gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_08845878;
      }
      goto L_08845858;
    }
L_08845858:
    aot_gpr[4] = (0u | 17u);
    aot_gpr[31] = (0x08845864u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845864u) goto L_08845864;
    return;
L_08845864:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845870u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08845870u) goto L_08845870;
    return;
L_08845870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_08845878;
    }
L_08845878:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08845920;
      }
      goto L_08845880;
    }
L_08845880:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08845894u);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-4636));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845894u) goto L_08845894;
    return;
L_08845894:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088458A4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088458A4u) goto L_088458A4;
    return;
L_088458A4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088458D0;
      }
      goto L_088458B0;
    }
L_088458B0:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x088458BCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088458BCu) goto L_088458BC;
    return;
L_088458BC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088458C8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088458C8u) goto L_088458C8;
    return;
L_088458C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_088458D0;
    }
L_088458D0:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088458F8;
      }
      goto L_088458D8;
    }
L_088458D8:
    aot_gpr[4] = (0u | 214u);
    aot_gpr[31] = (0x088458E4u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088458E4u) goto L_088458E4;
    return;
L_088458E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088458F0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088458F0u) goto L_088458F0;
    return;
L_088458F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_088458F8;
    }
L_088458F8:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_08845900;
    }
L_08845900:
    aot_gpr[4] = (0u | 102u);
    aot_gpr[31] = (0x0884590Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0884590Cu) goto L_0884590C;
    return;
L_0884590C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845918u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08845918u) goto L_08845918;
    return;
L_08845918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_08845920;
    }
L_08845920:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088459F4;
      }
      goto L_0884592C;
    }
L_0884592C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08845940u);
    aot_gpr[20] = (aot_gpr[6] + static_cast<std::uint32_t>(-4636));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845940u) goto L_08845940;
    return;
L_08845940:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08845950u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845950u) goto L_08845950;
    return;
L_08845950:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08845978;
      }
      goto L_08845958;
    }
L_08845958:
    aot_gpr[4] = (0u | 283u);
    aot_gpr[31] = (0x08845964u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845964u) goto L_08845964;
    return;
L_08845964:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845970u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08845970u) goto L_08845970;
    return;
L_08845970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_08845978;
    }
L_08845978:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[21] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088459A4;
      }
      goto L_08845984;
    }
L_08845984:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x08845990u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845990u) goto L_08845990;
    return;
L_08845990:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884599Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x0884599Cu) goto L_0884599C;
    return;
L_0884599C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_088459A4;
    }
L_088459A4:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088459CC;
      }
      goto L_088459AC;
    }
L_088459AC:
    aot_gpr[4] = (0u | 102u);
    aot_gpr[31] = (0x088459B8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088459B8u) goto L_088459B8;
    return;
L_088459B8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088459C4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088459C4u) goto L_088459C4;
    return;
L_088459C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_088459CC;
    }
L_088459CC:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_088459D4;
    }
L_088459D4:
    aot_gpr[4] = (0u | 214u);
    aot_gpr[31] = (0x088459E0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088459E0u) goto L_088459E0;
    return;
L_088459E0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088459ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088459ECu) goto L_088459EC;
    return;
L_088459EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_088459F4;
    }
L_088459F4:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08845A40;
      }
      goto L_08845A00;
    }
L_08845A00:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 18u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08845A14u);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(-4628));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845A14u) goto L_08845A14;
    return;
L_08845A14:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 8u);
    aot_gpr[31] = (0x08845A24u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845A24u) goto L_08845A24;
    return;
L_08845A24:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08845A38u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845A38u) goto L_08845A38;
    return;
L_08845A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_08845A40;
    }
L_08845A40:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08845A8C;
      }
      goto L_08845A4C;
    }
L_08845A4C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (0u | 18u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[31] = (0x08845A60u);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(-4628));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845A60u) goto L_08845A60;
    return;
L_08845A60:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 102u);
    aot_gpr[31] = (0x08845A70u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845A70u) goto L_08845A70;
    return;
L_08845A70:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08845A84u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845A84u) goto L_08845A84;
    return;
L_08845A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AA0;
      }
      goto L_08845A8C;
    }
L_08845A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (0u | 0u);
    goto L_08845AA0;
L_08845AA0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845AC8;
      }
      goto L_08845AA8;
    }
L_08845AA8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08845AB4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08845AB4u) goto L_08845AB4;
    return;
L_08845AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08845AC8;
L_08845AC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[8] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2416)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2852)));
      if (branch_taken) {
          goto L_08845B50;
      }
      goto L_08845B38;
    }
L_08845B38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845B50;
    }
L_08845B50:
    aot_gpr[9] = (0u | 3u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_08845C4C;
      }
      goto L_08845B5C;
    }
L_08845B5C:
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08845C34;
      }
      goto L_08845B68;
    }
L_08845B68:
    aot_gpr[31] = (0x08845B70u);
    aot_gpr[19] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845B70u) goto L_08845B70;
    return;
L_08845B70:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(3008));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08845BAC;
      }
      goto L_08845B8C;
    }
L_08845B8C:
    aot_gpr[4] = (0u | 374u);
    aot_gpr[31] = (0x08845B98u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845B98u) goto L_08845B98;
    return;
L_08845B98:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845BA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08845BA4u) goto L_08845BA4;
    return;
L_08845BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845BAC;
    }
L_08845BAC:
    aot_gpr[31] = (0x08845BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845BB4u) goto L_08845BB4;
    return;
L_08845BB4:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845C00;
      }
      goto L_08845BCC;
    }
L_08845BCC:
    aot_gpr[4] = (0u | 391u);
    aot_gpr[31] = (0x08845BD8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845BD8u) goto L_08845BD8;
    return;
L_08845BD8:
    aot_gpr[31] = (0x08845BE0u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845BE0u) goto L_08845BE0;
    return;
L_08845BE0:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845BF8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845BF8u) goto L_08845BF8;
    return;
L_08845BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845C00;
    }
L_08845C00:
    aot_gpr[4] = (0u | 369u);
    aot_gpr[31] = (0x08845C0Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845C0Cu) goto L_08845C0C;
    return;
L_08845C0C:
    aot_gpr[31] = (0x08845C14u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845C14u) goto L_08845C14;
    return;
L_08845C14:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845C2Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845C2Cu) goto L_08845C2C;
    return;
L_08845C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845C34;
    }
L_08845C34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845C4C;
    }
L_08845C4C:
    aot_gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08845D4C;
      }
      goto L_08845C58;
    }
L_08845C58:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08845C68;
      }
      goto L_08845C60;
    }
L_08845C60:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08845D34;
      }
      goto L_08845C68;
    }
L_08845C68:
    aot_gpr[31] = (0x08845C70u);
    aot_gpr[19] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845C70u) goto L_08845C70;
    return;
L_08845C70:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(3008));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08845CAC;
      }
      goto L_08845C8C;
    }
L_08845C8C:
    aot_gpr[4] = (0u | 374u);
    aot_gpr[31] = (0x08845C98u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845C98u) goto L_08845C98;
    return;
L_08845C98:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845CA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08845CA4u) goto L_08845CA4;
    return;
L_08845CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845CAC;
    }
L_08845CAC:
    aot_gpr[31] = (0x08845CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845CB4u) goto L_08845CB4;
    return;
L_08845CB4:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845D00;
      }
      goto L_08845CCC;
    }
L_08845CCC:
    aot_gpr[4] = (0u | 391u);
    aot_gpr[31] = (0x08845CD8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845CD8u) goto L_08845CD8;
    return;
L_08845CD8:
    aot_gpr[31] = (0x08845CE0u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845CE0u) goto L_08845CE0;
    return;
L_08845CE0:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845CF8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845CF8u) goto L_08845CF8;
    return;
L_08845CF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845D00;
    }
L_08845D00:
    aot_gpr[4] = (0u | 369u);
    aot_gpr[31] = (0x08845D0Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08845D0Cu) goto L_08845D0C;
    return;
L_08845D0C:
    aot_gpr[31] = (0x08845D14u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08845D14u) goto L_08845D14;
    return;
L_08845D14:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08845D2Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08845D2Cu) goto L_08845D2C;
    return;
L_08845D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845D34;
    }
L_08845D34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08845D60;
      }
      goto L_08845D4C;
    }
L_08845D4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    goto L_08845D60;
L_08845D60:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D8C;
      }
      goto L_08845D68;
    }
L_08845D68:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08845D74u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08845D74u) goto L_08845D74;
    return;
L_08845D74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08845D9C;
      }
      goto L_08845D8C;
    }
L_08845D8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08845D9C;
L_08845D9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845DB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08845DE8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4712));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08845DE8u) goto L_08845DE8;
    return;
L_08845DE8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08845DFCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4620));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845DFCu) goto L_08845DFC;
    return;
L_08845DFC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08845E10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4604));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845E10u) goto L_08845E10;
    return;
L_08845E10:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[16] = (57344u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7918)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (8192u << 16u);
      if (branch_taken) {
          goto L_08845E4C;
      }
      goto L_08845E30;
    }
L_08845E30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08845EC8;
      }
      goto L_08845E4C;
    }
L_08845E4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08845E5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4584));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845E5Cu) goto L_08845E5C;
    return;
L_08845E5C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845E70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4568));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845E70u) goto L_08845E70;
    return;
L_08845E70:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845E80u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845E80u) goto L_08845E80;
    return;
L_08845E80:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845E90u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845E90u) goto L_08845E90;
    return;
L_08845E90:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08845EC8;
L_08845EC8:
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
L_08845EE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7919)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845FF4;
      }
      goto L_08845F10;
    }
L_08845F10:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08845F24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4712));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08845F24u) goto L_08845F24;
    return;
L_08845F24:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08845F38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4560));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845F38u) goto L_08845F38;
    return;
L_08845F38:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08845F4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4552));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845F4Cu) goto L_08845F4C;
    return;
L_08845F4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08845F60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4544));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845F60u) goto L_08845F60;
    return;
L_08845F60:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845F74u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4532));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08845F74u) goto L_08845F74;
    return;
L_08845F74:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845F84u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845F84u) goto L_08845F84;
    return;
L_08845F84:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845F94u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845F94u) goto L_08845F94;
    return;
L_08845F94:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845FA4u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845FA4u) goto L_08845FA4;
    return;
L_08845FA4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08845FB4u);
    aot_gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08845FB4u) goto L_08845FB4;
    return;
L_08845FB4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[19]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_08845FF4;
L_08845FF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08846000u; return;
}

void recomp_unit_0065(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0065_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_65(Runtime &runtime) {
    runtime.register_generated_unit(65u, 0x08845000u, 4096u, &recomp_unit_0065, &recomp_unit_0065_entry);
    runtime.register_function(0x08845000u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845010u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845024u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884504Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845054u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884505Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845070u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088450F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845100u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845108u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884511Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845124u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845140u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845164u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884516Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845180u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845188u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845190u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884519Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088451FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845204u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845210u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845218u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845220u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845234u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845248u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845250u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845258u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845268u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845270u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845278u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845280u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845290u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884529Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088452B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088452C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088452D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088452E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088452F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845304u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884531Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845324u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845330u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845338u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845348u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884535Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845374u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884537Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884538Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088453E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845400u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845408u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845418u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845420u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845428u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845434u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884543Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845444u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845450u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845458u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884546Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845488u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088454A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088454C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088454D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088454E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088454F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845508u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884551Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845540u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884555Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845570u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845580u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845588u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845590u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845598u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088455A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088455B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088455BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088455C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088455D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088455D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884565Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845660u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088456A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088456C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088456C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088456F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088456F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845700u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884570Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845720u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884572Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845738u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884574Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845758u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884576Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845778u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845788u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845790u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884579Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088457F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884584Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845858u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845864u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845870u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845878u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845880u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845894u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088458F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845900u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884590Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845918u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845920u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884592Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845940u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845950u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845958u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845964u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845970u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845978u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845984u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845990u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0884599Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x088459F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845A8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845AA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845AA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845AB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845AC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845AF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845B98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845BF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845C98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845CF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845D9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845DB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845DE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845DFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845E90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845EC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845EE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845F94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845FA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845FB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08845FF4u, &recomp_unit_0065, "recomp_unit_0065");
}
} // namespace psprecomp
