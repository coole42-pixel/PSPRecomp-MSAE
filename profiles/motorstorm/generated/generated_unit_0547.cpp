#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0547[1023] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0,
    0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0,
    0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0,
    67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112,
    0, 113, 0, 114, 115, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 126, 0, 127, 0,
    0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 137, 0, 138, 0, 139,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0,
    0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157,
    0, 0, 158, 0, 159, 0, 160, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0,
    0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    0, 181, 0, 182, 0, 0, 0, 0, 183, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196,
    0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0,
    204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 223,
    0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0,
    249, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257,
    0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 268, 269,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280,
};
void recomp_unit_0547_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A27000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0547[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A27000;
    case 2u: goto L_08A2700C;
    case 3u: goto L_08A2701C;
    case 4u: goto L_08A27024;
    case 5u: goto L_08A2702C;
    case 6u: goto L_08A27048;
    case 7u: goto L_08A27058;
    case 8u: goto L_08A27060;
    case 9u: goto L_08A27078;
    case 10u: goto L_08A27088;
    case 11u: goto L_08A27098;
    case 12u: goto L_08A270A8;
    case 13u: goto L_08A270B8;
    case 14u: goto L_08A270C8;
    case 15u: goto L_08A270D8;
    case 16u: goto L_08A270E8;
    case 17u: goto L_08A270F8;
    case 18u: goto L_08A27108;
    case 19u: goto L_08A27118;
    case 20u: goto L_08A27128;
    case 21u: goto L_08A27138;
    case 22u: goto L_08A27148;
    case 23u: goto L_08A27158;
    case 24u: goto L_08A27168;
    case 25u: goto L_08A27178;
    case 26u: goto L_08A27188;
    case 27u: goto L_08A27198;
    case 28u: goto L_08A271A8;
    case 29u: goto L_08A271B8;
    case 30u: goto L_08A271C8;
    case 31u: goto L_08A271D8;
    case 32u: goto L_08A271E8;
    case 33u: goto L_08A271F8;
    case 34u: goto L_08A27208;
    case 35u: goto L_08A27218;
    case 36u: goto L_08A27228;
    case 37u: goto L_08A27234;
    case 38u: goto L_08A27240;
    case 39u: goto L_08A27254;
    case 40u: goto L_08A27280;
    case 41u: goto L_08A27294;
    case 42u: goto L_08A272A8;
    case 43u: goto L_08A272B0;
    case 44u: goto L_08A272C0;
    case 45u: goto L_08A272CC;
    case 46u: goto L_08A27300;
    case 47u: goto L_08A27310;
    case 48u: goto L_08A27318;
    case 49u: goto L_08A27324;
    case 50u: goto L_08A2732C;
    case 51u: goto L_08A2733C;
    case 52u: goto L_08A27348;
    case 53u: goto L_08A27350;
    case 54u: goto L_08A27368;
    case 55u: goto L_08A27394;
    case 56u: goto L_08A273A4;
    case 57u: goto L_08A273AC;
    case 58u: goto L_08A273B4;
    case 59u: goto L_08A273BC;
    case 60u: goto L_08A273C0;
    case 61u: goto L_08A273C8;
    case 62u: goto L_08A273D0;
    case 63u: goto L_08A273D8;
    case 64u: goto L_08A273E0;
    case 65u: goto L_08A273E8;
    case 66u: goto L_08A273F8;
    case 67u: goto L_08A27400;
    case 68u: goto L_08A27408;
    case 69u: goto L_08A27414;
    case 70u: goto L_08A2741C;
    case 71u: goto L_08A27424;
    case 72u: goto L_08A27434;
    case 73u: goto L_08A27444;
    case 74u: goto L_08A27450;
    case 75u: goto L_08A27458;
    case 76u: goto L_08A2747C;
    case 77u: goto L_08A27484;
    case 78u: goto L_08A274A4;
    case 79u: goto L_08A274B8;
    case 80u: goto L_08A274D0;
    case 81u: goto L_08A274DC;
    case 82u: goto L_08A27504;
    case 83u: goto L_08A2750C;
    case 84u: goto L_08A27514;
    case 85u: goto L_08A2753C;
    case 86u: goto L_08A27544;
    case 87u: goto L_08A27550;
    case 88u: goto L_08A27558;
    case 89u: goto L_08A27560;
    case 90u: goto L_08A27568;
    case 91u: goto L_08A27570;
    case 92u: goto L_08A2757C;
    case 93u: goto L_08A27598;
    case 94u: goto L_08A275B8;
    case 95u: goto L_08A275D8;
    case 96u: goto L_08A275E0;
    case 97u: goto L_08A27608;
    case 98u: goto L_08A27634;
    case 99u: goto L_08A2763C;
    case 100u: goto L_08A27644;
    case 101u: goto L_08A2764C;
    case 102u: goto L_08A27658;
    case 103u: goto L_08A27660;
    case 104u: goto L_08A27668;
    case 105u: goto L_08A27690;
    case 106u: goto L_08A27698;
    case 107u: goto L_08A276A0;
    case 108u: goto L_08A276B4;
    case 109u: goto L_08A276C4;
    case 110u: goto L_08A276D0;
    case 111u: goto L_08A276F4;
    case 112u: goto L_08A276FC;
    case 113u: goto L_08A27704;
    case 114u: goto L_08A2770C;
    case 115u: goto L_08A27710;
    case 116u: goto L_08A27718;
    case 117u: goto L_08A27720;
    case 118u: goto L_08A27728;
    case 119u: goto L_08A27734;
    case 120u: goto L_08A27744;
    case 121u: goto L_08A2774C;
    case 122u: goto L_08A27754;
    case 123u: goto L_08A2775C;
    case 124u: goto L_08A27764;
    case 125u: goto L_08A2776C;
    case 126u: goto L_08A27770;
    case 127u: goto L_08A27778;
    case 128u: goto L_08A27788;
    case 129u: goto L_08A27790;
    case 130u: goto L_08A27798;
    case 131u: goto L_08A277A0;
    case 132u: goto L_08A277AC;
    case 133u: goto L_08A277B8;
    case 134u: goto L_08A277C0;
    case 135u: goto L_08A277CC;
    case 136u: goto L_08A277E8;
    case 137u: goto L_08A277EC;
    case 138u: goto L_08A277F4;
    case 139u: goto L_08A277FC;
    case 140u: goto L_08A27814;
    case 141u: goto L_08A27834;
    case 142u: goto L_08A2784C;
    case 143u: goto L_08A2785C;
    case 144u: goto L_08A27868;
    case 145u: goto L_08A27870;
    case 146u: goto L_08A27878;
    case 147u: goto L_08A27884;
    case 148u: goto L_08A2788C;
    case 149u: goto L_08A27894;
    case 150u: goto L_08A278A0;
    case 151u: goto L_08A278A8;
    case 152u: goto L_08A278B0;
    case 153u: goto L_08A278BC;
    case 154u: goto L_08A278C4;
    case 155u: goto L_08A278D0;
    case 156u: goto L_08A278E4;
    case 157u: goto L_08A278FC;
    case 158u: goto L_08A27908;
    case 159u: goto L_08A27910;
    case 160u: goto L_08A27918;
    case 161u: goto L_08A2791C;
    case 162u: goto L_08A27924;
    case 163u: goto L_08A2792C;
    case 164u: goto L_08A27934;
    case 165u: goto L_08A2793C;
    case 166u: goto L_08A2794C;
    case 167u: goto L_08A27954;
    case 168u: goto L_08A2795C;
    case 169u: goto L_08A27968;
    case 170u: goto L_08A27970;
    case 171u: goto L_08A27984;
    case 172u: goto L_08A27994;
    case 173u: goto L_08A2799C;
    case 174u: goto L_08A279A8;
    case 175u: goto L_08A279B0;
    case 176u: goto L_08A279B8;
    case 177u: goto L_08A279C8;
    case 178u: goto L_08A279D8;
    case 179u: goto L_08A279E0;
    case 180u: goto L_08A279E8;
    case 181u: goto L_08A27A04;
    case 182u: goto L_08A27A0C;
    case 183u: goto L_08A27A20;
    case 184u: goto L_08A27A24;
    case 185u: goto L_08A27A38;
    case 186u: goto L_08A27A40;
    case 187u: goto L_08A27A58;
    case 188u: goto L_08A27A60;
    case 189u: goto L_08A27A68;
    case 190u: goto L_08A27A74;
    case 191u: goto L_08A27A78;
    case 192u: goto L_08A27A88;
    case 193u: goto L_08A27AE4;
    case 194u: goto L_08A27AEC;
    case 195u: goto L_08A27AF4;
    case 196u: goto L_08A27AFC;
    case 197u: goto L_08A27B0C;
    case 198u: goto L_08A27B14;
    case 199u: goto L_08A27B34;
    case 200u: goto L_08A27B3C;
    case 201u: goto L_08A27B4C;
    case 202u: goto L_08A27B68;
    case 203u: goto L_08A27B78;
    case 204u: goto L_08A27B80;
    case 205u: goto L_08A27B88;
    case 206u: goto L_08A27B94;
    case 207u: goto L_08A27BA0;
    case 208u: goto L_08A27BAC;
    case 209u: goto L_08A27BB4;
    case 210u: goto L_08A27BCC;
    case 211u: goto L_08A27BD8;
    case 212u: goto L_08A27BE0;
    case 213u: goto L_08A27BFC;
    case 214u: goto L_08A27C18;
    case 215u: goto L_08A27C28;
    case 216u: goto L_08A27C30;
    case 217u: goto L_08A27C48;
    case 218u: goto L_08A27C50;
    case 219u: goto L_08A27C58;
    case 220u: goto L_08A27C60;
    case 221u: goto L_08A27C68;
    case 222u: goto L_08A27C74;
    case 223u: goto L_08A27C7C;
    case 224u: goto L_08A27C84;
    case 225u: goto L_08A27C8C;
    case 226u: goto L_08A27C94;
    case 227u: goto L_08A27C9C;
    case 228u: goto L_08A27CA4;
    case 229u: goto L_08A27CAC;
    case 230u: goto L_08A27CB4;
    case 231u: goto L_08A27CBC;
    case 232u: goto L_08A27CC4;
    case 233u: goto L_08A27CCC;
    case 234u: goto L_08A27CD4;
    case 235u: goto L_08A27CDC;
    case 236u: goto L_08A27CE4;
    case 237u: goto L_08A27CEC;
    case 238u: goto L_08A27CF4;
    case 239u: goto L_08A27D0C;
    case 240u: goto L_08A27D20;
    case 241u: goto L_08A27D2C;
    case 242u: goto L_08A27D50;
    case 243u: goto L_08A27D60;
    case 244u: goto L_08A27D84;
    case 245u: goto L_08A27DA0;
    case 246u: goto L_08A27DDC;
    case 247u: goto L_08A27DE8;
    case 248u: goto L_08A27DF4;
    case 249u: goto L_08A27E00;
    case 250u: goto L_08A27E04;
    case 251u: goto L_08A27E18;
    case 252u: goto L_08A27E20;
    case 253u: goto L_08A27E3C;
    case 254u: goto L_08A27E60;
    case 255u: goto L_08A27E68;
    case 256u: goto L_08A27E70;
    case 257u: goto L_08A27E7C;
    case 258u: goto L_08A27E88;
    case 259u: goto L_08A27E98;
    case 260u: goto L_08A27EAC;
    case 261u: goto L_08A27EB4;
    case 262u: goto L_08A27EBC;
    case 263u: goto L_08A27ECC;
    case 264u: goto L_08A27ED4;
    case 265u: goto L_08A27EDC;
    case 266u: goto L_08A27EEC;
    case 267u: goto L_08A27EF4;
    case 268u: goto L_08A27EF8;
    case 269u: goto L_08A27EFC;
    case 270u: goto L_08A27F1C;
    case 271u: goto L_08A27F48;
    case 272u: goto L_08A27F54;
    case 273u: goto L_08A27F64;
    case 274u: goto L_08A27F6C;
    case 275u: goto L_08A27F90;
    case 276u: goto L_08A27F94;
    case 277u: goto L_08A27FAC;
    case 278u: goto L_08A27FE0;
    case 279u: goto L_08A27FF0;
    case 280u: goto L_08A27FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A27000:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2700Cu);
    aot_gpr[5] = (0u | 1u);
    goto L_08A27254;
L_08A2700C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2701C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27024:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2702C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A27048u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_08A272A8;
L_08A27048:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A27078;
      }
      goto L_08A27058;
    }
L_08A27058:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A27228;
      }
      goto L_08A27060;
    }
L_08A27060:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(3848)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27078:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A27228;
      }
      goto L_08A27088;
    }
L_08A27088:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27098u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3084));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27098u) goto L_08A27098;
    return;
L_08A27098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A270A8;
    }
L_08A270A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A270B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A270B8u) goto L_08A270B8;
    return;
L_08A270B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A270C8;
    }
L_08A270C8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A270D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2732));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A270D8u) goto L_08A270D8;
    return;
L_08A270D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A270E8;
    }
L_08A270E8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A270F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2760));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A270F8u) goto L_08A270F8;
    return;
L_08A270F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27108;
    }
L_08A27108:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27118u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2800));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27118u) goto L_08A27118;
    return;
L_08A27118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27128;
    }
L_08A27128:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27138u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2840));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27138u) goto L_08A27138;
    return;
L_08A27138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27148;
    }
L_08A27148:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27158u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2880));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27158u) goto L_08A27158;
    return;
L_08A27158:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27168;
    }
L_08A27168:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27178u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2916));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27178u) goto L_08A27178;
    return;
L_08A27178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27188;
    }
L_08A27188:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27198u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2952));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27198u) goto L_08A27198;
    return;
L_08A27198:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A271A8;
    }
L_08A271A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A271B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2980));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A271B8u) goto L_08A271B8;
    return;
L_08A271B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A271C8;
    }
L_08A271C8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A271D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3008));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A271D8u) goto L_08A271D8;
    return;
L_08A271D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A271E8;
    }
L_08A271E8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A271F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3036));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A271F8u) goto L_08A271F8;
    return;
L_08A271F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27208;
    }
L_08A27208:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27218u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3064));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27218u) goto L_08A27218;
    return;
L_08A27218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27240;
      }
      goto L_08A27228;
    }
L_08A27228:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27234u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3100));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27234u) goto L_08A27234;
    return;
L_08A27234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A27240;
L_08A27240:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[31]);
    aot_gpr[31] = (0x08A27280u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A2702C;
L_08A27280:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x08A27294u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A2702C;
L_08A27294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A272A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A272B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A272C0u);
    aot_gpr[5] = (0u | 3u);
    goto L_08A27254;
L_08A272C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A272CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A27300u);
    aot_gpr[18] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 238u, 0x089F0D44u>(ctx, &aot_mem) && ctx.pc == 0x08A27300u) goto L_08A27300;
    return;
L_08A27300:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A27310u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27310u) goto L_08A27310;
    return;
L_08A27310:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2732C;
      }
      goto L_08A27318;
    }
L_08A27318:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27324u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27324u) goto L_08A27324;
    return;
L_08A27324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27350;
      }
      goto L_08A2732C;
    }
L_08A2732C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1036), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2733Cu);
    aot_gpr[5] = (0u | 7u);
    goto L_08A27254;
L_08A2733C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
    aot_gpr[31] = (0x08A27348u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27348u) goto L_08A27348;
    return;
L_08A27348:
    aot_gpr[31] = (0x08A27350u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A27350u) goto L_08A27350;
    return;
L_08A27350:
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
L_08A27368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A27394u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27394u) goto L_08A27394;
    return;
L_08A27394:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A273C0;
      }
      goto L_08A273A4;
    }
L_08A273A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A27424;
      }
      goto L_08A273AC;
    }
L_08A273AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A273E0;
      }
      goto L_08A273B4;
    }
L_08A273B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A2741C;
      }
      goto L_08A273BC;
    }
L_08A273BC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    goto L_08A273C0;
L_08A273C0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A27408;
      }
      goto L_08A273C8;
    }
L_08A273C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27424;
      }
      goto L_08A273D0;
    }
L_08A273D0:
    aot_gpr[31] = (0x08A273D8u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A273D8u) goto L_08A273D8;
    return;
L_08A273D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27424;
      }
      goto L_08A273E0;
    }
L_08A273E0:
    aot_gpr[31] = (0x08A273E8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x08A273E8u) goto L_08A273E8;
    return;
L_08A273E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27424;
      }
      goto L_08A273F8;
    }
L_08A273F8:
    aot_gpr[31] = (0x08A27400u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27400u) goto L_08A27400;
    return;
L_08A27400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27424;
      }
      goto L_08A27408;
    }
L_08A27408:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27414u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27414u) goto L_08A27414;
    return;
L_08A27414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27424;
      }
      goto L_08A2741C;
    }
L_08A2741C:
    aot_gpr[31] = (0x08A27424u);
    aot_gpr[5] = (0u | 8u);
    goto L_08A27254;
L_08A27424:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27434:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A27444u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A27254;
L_08A27444:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27450:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A2747Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2747Cu) goto L_08A2747C;
    return;
L_08A2747C:
    aot_gpr[31] = (0x08A27484u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27484u) goto L_08A27484;
    return;
L_08A27484:
    aot_gpr[17] = (0u | 32768u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 1307u);
    aot_gpr[31] = (0x08A274A4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A274A4u) goto L_08A274A4;
    return;
L_08A274A4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A274B8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A274B8u) goto L_08A274B8;
    return;
L_08A274B8:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A274D0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 214u, 0x08A28C54u>(ctx, &aot_mem) && ctx.pc == 0x08A274D0u) goto L_08A274D0;
    return;
L_08A274D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A27504;
      }
      goto L_08A274DC;
    }
L_08A274DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A27504u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27504u) goto L_08A27504;
    return;
L_08A27504:
    aot_gpr[31] = (0x08A2750Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2701C;
L_08A2750C:
    aot_gpr[31] = (0x08A27514u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27024;
L_08A27514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A2753Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2753Cu) goto L_08A2753C;
    return;
L_08A2753C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27558;
      }
      goto L_08A27544;
    }
L_08A27544:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27550u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27550u) goto L_08A27550;
    return;
L_08A27550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27560;
      }
      goto L_08A27558;
    }
L_08A27558:
    aot_gpr[31] = (0x08A27560u);
    aot_gpr[5] = (0u | 9u);
    goto L_08A27254;
L_08A27560:
    aot_gpr[31] = (0x08A27568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A27568u) goto L_08A27568;
    return;
L_08A27568:
    aot_gpr[31] = (0x08A27570u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27570u) goto L_08A27570;
    return;
L_08A27570:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A2757Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2757Cu) goto L_08A2757C;
    return;
L_08A2757C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-7184));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(7172), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(7176), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(7180), aot_gpr[31]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_08A27698;
    }
    goto L_08A275B8;
L_08A275B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A275D8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A275D8u) goto L_08A275D8;
    return;
L_08A275D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27698;
      }
      goto L_08A275E0;
    }
L_08A275E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A27608u);
    aot_gpr[7] = (0u | 7168u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27608u) goto L_08A27608;
    return;
L_08A27608:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(7168), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(7168));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A27634u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27634u) goto L_08A27634;
    return;
L_08A27634:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A2764C;
      }
      goto L_08A2763C;
    }
L_08A2763C:
    aot_gpr[31] = (0x08A27644u);
    aot_gpr[5] = (0u | 10u);
    goto L_08A27254;
L_08A27644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A276A0;
      }
      goto L_08A2764C;
    }
L_08A2764C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(7168)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
      if (branch_taken) {
          goto L_08A27668;
      }
      goto L_08A27658;
    }
L_08A27658:
    aot_gpr[31] = (0x08A27660u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27660u) goto L_08A27660;
    return;
L_08A27660:
    aot_gpr[31] = (0x08A27668u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A27668u) goto L_08A27668;
    return;
L_08A27668:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(7168)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(104));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A27690u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27690u) goto L_08A27690;
    return;
L_08A27690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A276A0;
      }
      goto L_08A27698;
    }
L_08A27698:
    aot_gpr[31] = (0x08A276A0u);
    aot_gpr[5] = (0u | 10u);
    goto L_08A27254;
L_08A276A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(7172)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(7176)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(7180)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(7184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A276B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A276C4u);
    aot_gpr[5] = (0u | 11u);
    goto L_08A27254;
L_08A276C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A276D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(1008));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A27704;
      }
      goto L_08A276F4;
    }
L_08A276F4:
    aot_gpr[31] = (0x08A276FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 63u, 0x08A28430u>(ctx, &aot_mem) && ctx.pc == 0x08A276FCu) goto L_08A276FC;
    return;
L_08A276FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A27710;
      }
      goto L_08A27704;
    }
L_08A27704:
    aot_gpr[31] = (0x08A2770Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27A88;
L_08A2770C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A27710;
L_08A27710:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A27728;
      }
      goto L_08A27718;
    }
L_08A27718:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27764;
      }
      goto L_08A27720;
    }
L_08A27720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27770;
      }
      goto L_08A27728;
    }
L_08A27728:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27764;
      }
      goto L_08A27734;
    }
L_08A27734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[5] = (0u | 404u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27754;
      }
      goto L_08A27744;
    }
L_08A27744:
    aot_gpr[31] = (0x08A2774Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A2774Cu) goto L_08A2774C;
    return;
L_08A2774C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27770;
      }
      goto L_08A27754;
    }
L_08A27754:
    aot_gpr[31] = (0x08A2775Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 23u, 0x08A46134u>(ctx, &aot_mem) && ctx.pc == 0x08A2775Cu) goto L_08A2775C;
    return;
L_08A2775C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A27770;
      }
      goto L_08A27764;
    }
L_08A27764:
    aot_gpr[31] = (0x08A2776Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A2776Cu) goto L_08A2776C;
    return;
L_08A2776C:
    aot_gpr[18] = (0u | 1u);
    goto L_08A27770;
L_08A27770:
    aot_gpr[31] = (0x08A27778u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x08A27778u) goto L_08A27778;
    return;
L_08A27778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27798;
      }
      goto L_08A27788;
    }
L_08A27788:
    aot_gpr[31] = (0x08A27790u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27790u) goto L_08A27790;
    return;
L_08A27790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A277FC;
      }
      goto L_08A27798;
    }
L_08A27798:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A277FC;
      }
      goto L_08A277A0;
    }
L_08A277A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A277F4;
      }
      goto L_08A277AC;
    }
L_08A277AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A277F4;
      }
      goto L_08A277B8;
    }
L_08A277B8:
    aot_gpr[31] = (0x08A277C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 221u, 0x08A26F50u>(ctx, &aot_mem) && ctx.pc == 0x08A277C0u) goto L_08A277C0;
    return;
L_08A277C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
        goto L_08A277EC;
    }
    goto L_08A277CC;
L_08A277CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A277E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A277E8u) goto L_08A277E8;
    return;
L_08A277E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A277EC;
L_08A277EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1080), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A277F4;
L_08A277F4:
    aot_gpr[31] = (0x08A277FCu);
    aot_gpr[5] = (0u | 1u);
    goto L_08A27254;
L_08A277FC:
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
L_08A27814:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A27834u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27834u) goto L_08A27834;
    return;
L_08A27834:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1056))))));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(1057));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A2784Cu);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 59u, 0x08A2940Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2784Cu) goto L_08A2784C;
    return;
L_08A2784C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A278D0;
      }
      goto L_08A2785C;
    }
L_08A2785C:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A27894;
      }
      goto L_08A27868;
    }
L_08A27868:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A278B0;
      }
      goto L_08A27870;
    }
L_08A27870:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A278C4;
      }
      goto L_08A27878;
    }
L_08A27878:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27884u);
    aot_gpr[5] = (0u | 6u);
    goto L_08A27254;
L_08A27884:
    aot_gpr[31] = (0x08A2788Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2788Cu) goto L_08A2788C;
    return;
L_08A2788C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A278D0;
      }
      goto L_08A27894;
    }
L_08A27894:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A278A0u);
    aot_gpr[5] = (0u | 5u);
    goto L_08A27254;
L_08A278A0:
    aot_gpr[31] = (0x08A278A8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A278A8u) goto L_08A278A8;
    return;
L_08A278A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A278D0;
      }
      goto L_08A278B0;
    }
L_08A278B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A278BCu);
    aot_gpr[5] = (0u | 4u);
    goto L_08A27254;
L_08A278BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A278D0;
      }
      goto L_08A278C4;
    }
L_08A278C4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A278D0u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A278D0u) goto L_08A278D0;
    return;
L_08A278D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A278E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A278FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0549_entry, 549u, 102u, 0x08A296D0u>(ctx, &aot_mem) && ctx.pc == 0x08A278FCu) goto L_08A278FC;
    return;
L_08A278FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2791C;
      }
      goto L_08A27908;
    }
L_08A27908:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A279B0;
      }
      goto L_08A27910;
    }
L_08A27910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27934;
      }
      goto L_08A27918;
    }
L_08A27918:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    goto L_08A2791C;
L_08A2791C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2795C;
      }
      goto L_08A27924;
    }
L_08A27924:
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1057))))));
        goto L_08A27970;
    }
    goto L_08A2792C;
L_08A2792C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A279B0;
      }
      goto L_08A27934;
    }
L_08A27934:
    aot_gpr[31] = (0x08A2793Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2793Cu) goto L_08A2793C;
    return;
L_08A2793C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1060)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A279B8;
      }
      goto L_08A2794C;
    }
L_08A2794C:
    aot_gpr[31] = (0x08A27954u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27954u) goto L_08A27954;
    return;
L_08A27954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A279B8;
      }
      goto L_08A2795C;
    }
L_08A2795C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27968u);
    aot_gpr[5] = (0u | 6u);
    goto L_08A27254;
L_08A27968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A279B8;
      }
      goto L_08A27970;
    }
L_08A27970:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1056))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2799C;
      }
      goto L_08A27984;
    }
L_08A27984:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1056), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27994u);
    aot_gpr[5] = (0u | 4u);
    goto L_08A27254;
L_08A27994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A279B8;
      }
      goto L_08A2799C;
    }
L_08A2799C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A279A8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A279A8u) goto L_08A279A8;
    return;
L_08A279A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A279B8;
      }
      goto L_08A279B0;
    }
L_08A279B0:
    aot_gpr[31] = (0x08A279B8u);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A279B8u) goto L_08A279B8;
    return;
L_08A279B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A279C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A279D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A279E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A279E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A27A24;
      }
      goto L_08A27A04;
    }
L_08A27A04:
    aot_gpr[31] = (0x08A27A0Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A27A40;
L_08A27A0C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 1840u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27A20u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2376));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A27A20u) goto L_08A27A20;
    return;
L_08A27A20:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1064), aot_gpr[2]);
    goto L_08A27A24;
L_08A27A24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27A38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1064)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27A40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1064)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A27A78;
      }
      goto L_08A27A58;
    }
L_08A27A58:
    aot_gpr[31] = (0x08A27A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A27A60u) goto L_08A27A60;
    return;
L_08A27A60:
    aot_gpr[31] = (0x08A27A68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27A68u) goto L_08A27A68;
    return;
L_08A27A68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1064)));
    aot_gpr[31] = (0x08A27A74u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A27A74u) goto L_08A27A74;
    return;
L_08A27A74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1064), 0u);
    goto L_08A27A78;
L_08A27A78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27A88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A27AE4u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27AE4u) goto L_08A27AE4;
    return;
L_08A27AE4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27AFC;
      }
      goto L_08A27AEC;
    }
L_08A27AEC:
    aot_gpr[31] = (0x08A27AF4u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 225u, 0x08A26F98u>(ctx, &aot_mem) && ctx.pc == 0x08A27AF4u) goto L_08A27AF4;
    return;
L_08A27AF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A27BE0;
      }
      goto L_08A27AFC;
    }
L_08A27AFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[17] = (0u | 1u);
        goto L_08A27B0C;
    }
    goto L_08A27B0C;
L_08A27B0C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27BE0;
      }
      goto L_08A27B14;
    }
L_08A27B14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1040), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08A27B34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A27B34u) goto L_08A27B34;
    return;
L_08A27B34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A27BE0;
      }
      goto L_08A27B3C;
    }
L_08A27B3C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A27B4Cu);
    aot_gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27B4Cu) goto L_08A27B4C;
    return;
L_08A27B4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27B68u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A27DA0;
L_08A27B68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[5] = (0u | 200u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A27B88;
      }
      goto L_08A27B78;
    }
L_08A27B78:
    aot_gpr[31] = (0x08A27B80u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 45u, 0x08A282DCu>(ctx, &aot_mem) && ctx.pc == 0x08A27B80u) goto L_08A27B80;
    return;
L_08A27B80:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 2u);
        goto L_08A27BE0;
    }
    goto L_08A27B88;
L_08A27B88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x08A27B94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27E3C;
L_08A27B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A27BB4;
    }
    goto L_08A27BA0;
L_08A27BA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27BE0;
      }
      goto L_08A27BAC;
    }
L_08A27BAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A27BE0;
      }
      goto L_08A27BB4;
    }
L_08A27BB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1000), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A27BCCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27BCCu) goto L_08A27BCC;
    return;
L_08A27BCC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A27BD8u);
    aot_gpr[5] = (0u | 1u);
    goto L_08A27254;
L_08A27BD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A27BE0;
      }
      goto L_08A27BE0;
    }
L_08A27BE0:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27BFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A27C18u);
    aot_gpr[17] = (0u | 0u);
    goto L_08A272A8;
L_08A27C18:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C28;
    }
L_08A27C28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C30;
    }
L_08A27C30:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(3896)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27C48:
    aot_gpr[31] = (0x08A27C50u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27434;
L_08A27C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C58;
    }
L_08A27C58:
    aot_gpr[31] = (0x08A27C60u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27450;
L_08A27C60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C68;
    }
L_08A27C68:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1056), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A27C74u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27814;
L_08A27C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C7C;
    }
L_08A27C7C:
    aot_gpr[31] = (0x08A27C84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27814;
L_08A27C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C8C;
    }
L_08A27C8C:
    aot_gpr[31] = (0x08A27C94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A278E4;
L_08A27C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27C9C;
    }
L_08A27C9C:
    aot_gpr[31] = (0x08A27CA4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A272CC;
L_08A27CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27CAC;
    }
L_08A27CAC:
    aot_gpr[31] = (0x08A27CB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27368;
L_08A27CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27CBC;
    }
L_08A27CBC:
    aot_gpr[31] = (0x08A27CC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27458;
L_08A27CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27CCC;
    }
L_08A27CCC:
    aot_gpr[31] = (0x08A27CD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A27598;
L_08A27CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27CDC;
    }
L_08A27CDC:
    aot_gpr[31] = (0x08A27CE4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A276B4;
L_08A27CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27CF4;
      }
      goto L_08A27CEC;
    }
L_08A27CEC:
    aot_gpr[31] = (0x08A27CF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A276D0;
L_08A27CF4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27D0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A27D20u);
    aot_gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A27D20u) goto L_08A27D20;
    return;
L_08A27D20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27D2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1068), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1036), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A27D50u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 134u, 0x089F0784u>(ctx, &aot_mem) && ctx.pc == 0x08A27D50u) goto L_08A27D50;
    return;
L_08A27D50:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(728));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A27D60u);
    aot_gpr[6] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27D60u) goto L_08A27D60;
    return;
L_08A27D60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1040), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1044), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1052), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1028), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1048), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A27D84u);
    aot_gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27D84u) goto L_08A27D84;
    return;
L_08A27D84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1072), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1076), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1080), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27DA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1020)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A27DDCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A27FAC;
L_08A27DDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A27DF4;
      }
      goto L_08A27DE8;
    }
L_08A27DE8:
    aot_gpr[4] = (0u | 600u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1028), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A27E20;
      }
      goto L_08A27DF4;
    }
L_08A27DF4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A27E00u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 16u, 0x08A280B8u>(ctx, &aot_mem) && ctx.pc == 0x08A27E00u) goto L_08A27E00;
    return;
L_08A27E00:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A27E04;
L_08A27E04:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A27E18u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 101u, 0x08A28630u>(ctx, &aot_mem) && ctx.pc == 0x08A27E18u) goto L_08A27E18;
    return;
L_08A27E18:
    if (aot_gpr[2] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A27E04;
    }
    goto L_08A27E20;
L_08A27E20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27E3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A27F94;
      }
      goto L_08A27E60;
    }
L_08A27E60:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
        goto L_08A27EFC;
    }
    goto L_08A27E68;
L_08A27E68:
    aot_gpr[31] = (0x08A27E70u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A27E70u) goto L_08A27E70;
    return;
L_08A27E70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A27E7Cu);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x08A27E7Cu) goto L_08A27E7C;
    return;
L_08A27E7C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A27EF8;
      }
      goto L_08A27E88;
    }
L_08A27E88:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A27E98u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A27E98u) goto L_08A27E98;
    return;
L_08A27E98:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A27EACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3116));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A27EACu) goto L_08A27EAC;
    return;
L_08A27EAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A27EBC;
      }
      goto L_08A27EB4;
    }
L_08A27EB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A27EF8;
      }
      goto L_08A27EBC;
    }
L_08A27EBC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A27ECCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3124));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A27ECCu) goto L_08A27ECC;
    return;
L_08A27ECC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A27EDC;
      }
      goto L_08A27ED4;
    }
L_08A27ED4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_08A27EF8;
      }
      goto L_08A27EDC;
    }
L_08A27EDC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A27EECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3132));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A27EECu) goto L_08A27EEC;
    return;
L_08A27EEC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
        goto L_08A27EFC;
    }
    goto L_08A27EF4;
L_08A27EF4:
    aot_gpr[17] = (0u | 5u);
    goto L_08A27EF8;
L_08A27EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    goto L_08A27EFC;
L_08A27EFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1048)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(732))))));
    aot_gpr[17] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(728));
        goto L_08A27F1C;
    }
    goto L_08A27F1C;
L_08A27F1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1004)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A27F48u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A27F48u) goto L_08A27F48;
    return;
L_08A27F48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A27F94;
      }
      goto L_08A27F54;
    }
L_08A27F54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A27F94;
      }
      goto L_08A27F64;
    }
L_08A27F64:
    aot_gpr[31] = (0x08A27F6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08A27F6Cu) goto L_08A27F6C;
    return;
L_08A27F6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1020)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1024), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[31] = (0x08A27F90u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1040), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A27F90u) goto L_08A27F90;
    return;
L_08A27F90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1044), 0u);
    goto L_08A27F94;
L_08A27F94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A27FAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(3140));
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A27FE0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A27FE0u) goto L_08A27FE0;
    return;
L_08A27FE0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A27FF0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A27FF0u) goto L_08A27FF0;
    return;
L_08A27FF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0548_entry, 548u, 8u, 0x08A28040u>(ctx, &aot_mem); return;
      }
      goto L_08A27FF8;
    }
L_08A27FF8:
    aot_gpr[31] = (0x08A28000u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3148));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0547(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0547_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_547(Runtime &runtime) {
    runtime.register_generated_unit(547u, 0x08A27000u, 4096u, &recomp_unit_0547, &recomp_unit_0547_entry);
    runtime.register_function(0x08A27000u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2700Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2701Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27024u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2702Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27048u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27058u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27060u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27078u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27088u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27098u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A270A8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A270B8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A270C8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A270D8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A270E8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A270F8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27108u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27118u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27128u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27138u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27148u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27158u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27168u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27178u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27188u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27198u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A271A8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A271B8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A271C8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A271D8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A271E8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A271F8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27208u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27218u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27228u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27234u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27240u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27254u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27280u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27294u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A272A8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A272B0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A272C0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A272CCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27300u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27310u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27318u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27324u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2732Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2733Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27348u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27350u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27368u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27394u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273A4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273ACu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273B4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273BCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273C0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273C8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273D0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273D8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273E0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273E8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A273F8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27400u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27408u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27414u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2741Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27424u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27434u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27444u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27450u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27458u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2747Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27484u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A274A4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A274B8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A274D0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A274DCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27504u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2750Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27514u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2753Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27544u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27550u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27558u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27560u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27568u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27570u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2757Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27598u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A275B8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A275D8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A275E0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27608u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27634u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2763Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27644u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2764Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27658u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27660u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27668u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27690u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27698u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A276A0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A276B4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A276C4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A276D0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A276F4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A276FCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27704u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2770Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27710u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27718u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27720u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27728u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27734u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27744u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2774Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27754u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2775Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27764u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2776Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27770u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27778u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27788u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27790u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27798u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277A0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277ACu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277B8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277C0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277CCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277E8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277ECu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277F4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A277FCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27814u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27834u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2784Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2785Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27868u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27870u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27878u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27884u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2788Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27894u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278A0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278A8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278B0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278BCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278C4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278D0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278E4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A278FCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27908u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27910u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27918u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2791Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27924u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2792Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27934u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2793Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2794Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27954u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2795Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27968u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27970u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27984u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27994u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A2799Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279A8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279B0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279B8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279C8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279D8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279E0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A279E8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A04u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A0Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A20u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A24u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A38u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A40u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A58u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A60u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A68u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A74u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A78u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27A88u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27AE4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27AECu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27AF4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27AFCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B0Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B14u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B34u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B3Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B4Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B68u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B78u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B80u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B88u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27B94u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BA0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BACu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BB4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BCCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BD8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BE0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27BFCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C18u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C28u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C30u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C48u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C50u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C58u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C60u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C68u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C74u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C7Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C84u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C8Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C94u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27C9Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CA4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CACu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CB4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CBCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CC4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CCCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CD4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CDCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CE4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CECu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27CF4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27D0Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27D20u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27D2Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27D50u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27D60u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27D84u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27DA0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27DDCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27DE8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27DF4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E00u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E04u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E18u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E20u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E3Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E60u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E68u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E70u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E7Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E88u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27E98u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EACu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EB4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EBCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27ECCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27ED4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EDCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EECu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EF4u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EF8u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27EFCu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F1Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F48u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F54u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F64u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F6Cu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F90u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27F94u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27FACu, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27FE0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27FF0u, &recomp_unit_0547, "recomp_unit_0547");
    runtime.register_function(0x08A27FF8u, &recomp_unit_0547, "recomp_unit_0547");
}
} // namespace psprecomp
