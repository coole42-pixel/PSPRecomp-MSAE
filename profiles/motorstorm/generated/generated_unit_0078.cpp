#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0078[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 42,
    0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0,
    0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81,
    0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0,
    91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 124, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133,
    0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0,
    152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0,
    0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177,
    0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0,
    0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 244,
};
void recomp_unit_0078_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08852004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0078[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08852004;
    case 2u: goto L_0885200C;
    case 3u: goto L_08852058;
    case 4u: goto L_08852068;
    case 5u: goto L_0885207C;
    case 6u: goto L_08852094;
    case 7u: goto L_088520AC;
    case 8u: goto L_088520B4;
    case 9u: goto L_088520C4;
    case 10u: goto L_088520CC;
    case 11u: goto L_088520E4;
    case 12u: goto L_088520F4;
    case 13u: goto L_088520FC;
    case 14u: goto L_08852114;
    case 15u: goto L_08852124;
    case 16u: goto L_0885212C;
    case 17u: goto L_08852144;
    case 18u: goto L_08852150;
    case 19u: goto L_08852174;
    case 20u: goto L_08852188;
    case 21u: goto L_088521B8;
    case 22u: goto L_088521C8;
    case 23u: goto L_088521D8;
    case 24u: goto L_088521E4;
    case 25u: goto L_088521EC;
    case 26u: goto L_088521F8;
    case 27u: goto L_0885220C;
    case 28u: goto L_08852214;
    case 29u: goto L_08852224;
    case 30u: goto L_08852230;
    case 31u: goto L_08852240;
    case 32u: goto L_0885224C;
    case 33u: goto L_08852254;
    case 34u: goto L_08852264;
    case 35u: goto L_08852270;
    case 36u: goto L_08852280;
    case 37u: goto L_0885228C;
    case 38u: goto L_088522BC;
    case 39u: goto L_088522DC;
    case 40u: goto L_088522F0;
    case 41u: goto L_088522F8;
    case 42u: goto L_08852300;
    case 43u: goto L_08852314;
    case 44u: goto L_0885231C;
    case 45u: goto L_08852348;
    case 46u: goto L_08852350;
    case 47u: goto L_08852358;
    case 48u: goto L_08852360;
    case 49u: goto L_08852368;
    case 50u: goto L_08852380;
    case 51u: goto L_088523A4;
    case 52u: goto L_088523C4;
    case 53u: goto L_088523D4;
    case 54u: goto L_088523E4;
    case 55u: goto L_088523EC;
    case 56u: goto L_088523FC;
    case 57u: goto L_08852410;
    case 58u: goto L_08852418;
    case 59u: goto L_08852430;
    case 60u: goto L_08852438;
    case 61u: goto L_08852448;
    case 62u: goto L_0885245C;
    case 63u: goto L_08852474;
    case 64u: goto L_08852494;
    case 65u: goto L_088524A8;
    case 66u: goto L_088524B0;
    case 67u: goto L_088524B8;
    case 68u: goto L_088524CC;
    case 69u: goto L_088524D4;
    case 70u: goto L_08852500;
    case 71u: goto L_08852508;
    case 72u: goto L_08852510;
    case 73u: goto L_08852518;
    case 74u: goto L_0885252C;
    case 75u: goto L_08852534;
    case 76u: goto L_08852540;
    case 77u: goto L_08852554;
    case 78u: goto L_08852564;
    case 79u: goto L_0885256C;
    case 80u: goto L_08852574;
    case 81u: goto L_08852580;
    case 82u: goto L_08852588;
    case 83u: goto L_08852590;
    case 84u: goto L_08852598;
    case 85u: goto L_088525A0;
    case 86u: goto L_088525B0;
    case 87u: goto L_088525BC;
    case 88u: goto L_088525D0;
    case 89u: goto L_088525E4;
    case 90u: goto L_088525F8;
    case 91u: goto L_08852604;
    case 92u: goto L_08852610;
    case 93u: goto L_08852624;
    case 94u: goto L_08852638;
    case 95u: goto L_08852640;
    case 96u: goto L_0885264C;
    case 97u: goto L_08852654;
    case 98u: goto L_08852664;
    case 99u: goto L_08852678;
    case 100u: goto L_0885268C;
    case 101u: goto L_08852694;
    case 102u: goto L_088526A4;
    case 103u: goto L_088526B8;
    case 104u: goto L_088526C8;
    case 105u: goto L_088526DC;
    case 106u: goto L_088526E4;
    case 107u: goto L_088526F4;
    case 108u: goto L_088526FC;
    case 109u: goto L_08852704;
    case 110u: goto L_0885271C;
    case 111u: goto L_0885272C;
    case 112u: goto L_0885273C;
    case 113u: goto L_08852744;
    case 114u: goto L_0885274C;
    case 115u: goto L_0885275C;
    case 116u: goto L_0885276C;
    case 117u: goto L_0885277C;
    case 118u: goto L_08852788;
    case 119u: goto L_08852790;
    case 120u: goto L_088527A8;
    case 121u: goto L_088527B0;
    case 122u: goto L_088527D0;
    case 123u: goto L_08852810;
    case 124u: goto L_0885281C;
    case 125u: goto L_08852820;
    case 126u: goto L_08852828;
    case 127u: goto L_08852834;
    case 128u: goto L_08852840;
    case 129u: goto L_0885284C;
    case 130u: goto L_08852858;
    case 131u: goto L_08852868;
    case 132u: goto L_08852878;
    case 133u: goto L_08852880;
    case 134u: goto L_08852888;
    case 135u: goto L_08852890;
    case 136u: goto L_08852898;
    case 137u: goto L_088528B0;
    case 138u: goto L_088528B8;
    case 139u: goto L_088528EC;
    case 140u: goto L_08852900;
    case 141u: goto L_0885290C;
    case 142u: goto L_08852914;
    case 143u: goto L_08852928;
    case 144u: goto L_08852930;
    case 145u: goto L_0885293C;
    case 146u: goto L_08852944;
    case 147u: goto L_0885294C;
    case 148u: goto L_08852958;
    case 149u: goto L_08852960;
    case 150u: goto L_0885296C;
    case 151u: goto L_08852974;
    case 152u: goto L_08852984;
    case 153u: goto L_08852990;
    case 154u: goto L_088529A0;
    case 155u: goto L_088529B4;
    case 156u: goto L_088529C0;
    case 157u: goto L_088529D0;
    case 158u: goto L_088529F0;
    case 159u: goto L_088529F8;
    case 160u: goto L_08852A04;
    case 161u: goto L_08852A28;
    case 162u: goto L_08852A38;
    case 163u: goto L_08852A40;
    case 164u: goto L_08852A48;
    case 165u: goto L_08852A50;
    case 166u: goto L_08852A5C;
    case 167u: goto L_08852A6C;
    case 168u: goto L_08852A78;
    case 169u: goto L_08852A8C;
    case 170u: goto L_08852A98;
    case 171u: goto L_08852ABC;
    case 172u: goto L_08852ACC;
    case 173u: goto L_08852AD4;
    case 174u: goto L_08852ADC;
    case 175u: goto L_08852AE4;
    case 176u: goto L_08852AF0;
    case 177u: goto L_08852B00;
    case 178u: goto L_08852B0C;
    case 179u: goto L_08852B20;
    case 180u: goto L_08852B28;
    case 181u: goto L_08852B30;
    case 182u: goto L_08852B3C;
    case 183u: goto L_08852B44;
    case 184u: goto L_08852B48;
    case 185u: goto L_08852B50;
    case 186u: goto L_08852B68;
    case 187u: goto L_08852B88;
    case 188u: goto L_08852BF8;
    case 189u: goto L_08852C10;
    case 190u: goto L_08852C28;
    case 191u: goto L_08852C34;
    case 192u: goto L_08852C40;
    case 193u: goto L_08852C4C;
    case 194u: goto L_08852C58;
    case 195u: goto L_08852C60;
    case 196u: goto L_08852C70;
    case 197u: goto L_08852C7C;
    case 198u: goto L_08852C9C;
    case 199u: goto L_08852CB4;
    case 200u: goto L_08852CCC;
    case 201u: goto L_08852CE4;
    case 202u: goto L_08852CFC;
    case 203u: goto L_08852D0C;
    case 204u: goto L_08852D18;
    case 205u: goto L_08852D34;
    case 206u: goto L_08852D4C;
    case 207u: goto L_08852D64;
    case 208u: goto L_08852D7C;
    case 209u: goto L_08852D94;
    case 210u: goto L_08852DA0;
    case 211u: goto L_08852DD0;
    case 212u: goto L_08852DD8;
    case 213u: goto L_08852E10;
    case 214u: goto L_08852E14;
    case 215u: goto L_08852E28;
    case 216u: goto L_08852E3C;
    case 217u: goto L_08852E4C;
    case 218u: goto L_08852E54;
    case 219u: goto L_08852E5C;
    case 220u: goto L_08852E64;
    case 221u: goto L_08852E70;
    case 222u: goto L_08852E7C;
    case 223u: goto L_08852E88;
    case 224u: goto L_08852E90;
    case 225u: goto L_08852E98;
    case 226u: goto L_08852EA0;
    case 227u: goto L_08852EAC;
    case 228u: goto L_08852EB8;
    case 229u: goto L_08852EC8;
    case 230u: goto L_08852ECC;
    case 231u: goto L_08852EE4;
    case 232u: goto L_08852F14;
    case 233u: goto L_08852F28;
    case 234u: goto L_08852F4C;
    case 235u: goto L_08852F54;
    case 236u: goto L_08852F5C;
    case 237u: goto L_08852F8C;
    case 238u: goto L_08852FA0;
    case 239u: goto L_08852FB8;
    case 240u: goto L_08852FC4;
    case 241u: goto L_08852FD4;
    case 242u: goto L_08852FDC;
    case 243u: goto L_08852FE4;
    case 244u: goto L_08852FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08852004:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885200C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(640));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08852058u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08852058u) goto L_08852058;
    return;
L_08852058:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08852068u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x08852068u) goto L_08852068;
    return;
L_08852068:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885207Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(796));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885207Cu) goto L_0885207C;
    return;
L_0885207C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08852094u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(728));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852094u) goto L_08852094;
    return;
L_08852094:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(688));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(700));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_088520B4;
      }
      goto L_088520AC;
    }
L_088520AC:
    aot_gpr[31] = (0x088520B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 44u, 0x0886D2A4u>(ctx, &aot_mem) && ctx.pc == 0x088520B4u) goto L_088520B4;
    return;
L_088520B4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088520C4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(716));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088520C4u) goto L_088520C4;
    return;
L_088520C4:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088520E4;
      }
      goto L_088520CC;
    }
L_088520CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[19]);
      if (branch_taken) {
          goto L_088521E4;
      }
      goto L_088520E4;
    }
L_088520E4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088520F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(676));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088520F4u) goto L_088520F4;
    return;
L_088520F4:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08852114;
      }
      goto L_088520FC;
    }
L_088520FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[19]);
      if (branch_taken) {
          goto L_088521E4;
      }
      goto L_08852114;
    }
L_08852114:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08852124u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(808));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852124u) goto L_08852124;
    return;
L_08852124:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08852144;
      }
      goto L_0885212C;
    }
L_0885212C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[19]);
      if (branch_taken) {
          goto L_088521E4;
      }
      goto L_08852144;
    }
L_08852144:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08852150u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852150u) goto L_08852150;
    return;
L_08852150:
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
          goto L_088521E4;
      }
      goto L_08852174;
    }
L_08852174:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088521C8;
      }
      goto L_08852188;
    }
L_08852188:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088521B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088521B8u) goto L_088521B8;
    return;
L_088521B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088521E4;
      }
      goto L_088521C8;
    }
L_088521C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7917), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088521D8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088521D8u) goto L_088521D8;
    return;
L_088521D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088521E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088521E4u) goto L_088521E4;
    return;
L_088521E4:
    aot_gpr[31] = (0x088521ECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x088521ECu) goto L_088521EC;
    return;
L_088521EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088521F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 33u, 0x0888A274u>(ctx, &aot_mem) && ctx.pc == 0x088521F8u) goto L_088521F8;
    return;
L_088521F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885220Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885220Cu) goto L_0885220C;
    return;
L_0885220C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08852254;
      }
      goto L_08852214;
    }
L_08852214:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08852224u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852224u) goto L_08852224;
    return;
L_08852224:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852230u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08852230u) goto L_08852230;
    return;
L_08852230:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08852240u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852240u) goto L_08852240;
    return;
L_08852240:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885224Cu);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x0885224Cu) goto L_0885224C;
    return;
L_0885224C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885228C;
      }
      goto L_08852254;
    }
L_08852254:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08852264u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852264u) goto L_08852264;
    return;
L_08852264:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852270u);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08852270u) goto L_08852270;
    return;
L_08852270:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08852280u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852280u) goto L_08852280;
    return;
L_08852280:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885228Cu);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x0885228Cu) goto L_0885228C;
    return;
L_0885228C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088522BC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24048), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088522DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088522F0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x088522F0u) goto L_088522F0;
    return;
L_088522F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852300;
      }
      goto L_088522F8;
    }
L_088522F8:
    aot_gpr[31] = (0x08852300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x0889AA30u>(ctx, &aot_mem) && ctx.pc == 0x08852300u) goto L_08852300;
    return;
L_08852300:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852314:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885231C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08852358;
    }
    goto L_08852348;
L_08852348:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885245C;
      }
      goto L_08852350;
    }
L_08852350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852368;
      }
      goto L_08852358;
    }
L_08852358:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08852418;
      }
      goto L_08852360;
    }
L_08852360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885245C;
      }
      goto L_08852368;
    }
L_08852368:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(848));
    aot_gpr[31] = (0x08852380u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(860));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852380u) goto L_08852380;
    return;
L_08852380:
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
          goto L_08852410;
      }
      goto L_088523A4;
    }
L_088523A4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[18] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7921), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088523EC;
      }
      goto L_088523C4;
    }
L_088523C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088523EC;
      }
      goto L_088523D4;
    }
L_088523D4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x088523E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x088523E4u) goto L_088523E4;
    return;
L_088523E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[18]));
      if (branch_taken) {
          goto L_08852410;
      }
      goto L_088523EC;
    }
L_088523EC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088523FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(868));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088523FCu) goto L_088523FC;
    return;
L_088523FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08852410;
L_08852410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885245C;
      }
      goto L_08852418;
    }
L_08852418:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885245C;
      }
      goto L_08852430;
    }
L_08852430:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885245C;
      }
      goto L_08852438;
    }
L_08852438:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852448u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(868));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08852448u) goto L_08852448;
    return;
L_08852448:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0885245C;
L_0885245C:
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
L_08852474:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24056), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088524A8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 117u, 0x0889A7D8u>(ctx, &aot_mem) && ctx.pc == 0x088524A8u) goto L_088524A8;
    return;
L_088524A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088524B8;
      }
      goto L_088524B0;
    }
L_088524B0:
    aot_gpr[31] = (0x088524B8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 157u, 0x0889A978u>(ctx, &aot_mem) && ctx.pc == 0x088524B8u) goto L_088524B8;
    return;
L_088524B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088524CC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088524D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08852510;
      }
      goto L_08852500;
    }
L_08852500:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_08852508;
    }
L_08852508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885256C;
      }
      goto L_08852510;
    }
L_08852510:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_08852518;
    }
L_08852518:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08852564;
      }
      goto L_0885252C;
    }
L_0885252C:
    aot_gpr[31] = (0x08852534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08852534u) goto L_08852534;
    return;
L_08852534:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08852564;
      }
      goto L_08852540;
    }
L_08852540:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08852554u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(888));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08852554u) goto L_08852554;
    return;
L_08852554:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08852564;
L_08852564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_0885256C;
    }
L_0885256C:
    aot_gpr[31] = (0x08852574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08852574u) goto L_08852574;
    return;
L_08852574:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08852590;
      }
      goto L_08852580;
    }
L_08852580:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_08852588;
    }
L_08852588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_08852590;
    }
L_08852590:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08852704;
      }
      goto L_08852598;
    }
L_08852598:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_088525A0;
    }
L_088525A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26538)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088525E4;
      }
      goto L_088525B0;
    }
L_088525B0:
    aot_gpr[4] = (0u | 392u);
    aot_gpr[31] = (0x088525BCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088525BCu) goto L_088525BC;
    return;
L_088525BC:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088525D0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088525D0u) goto L_088525D0;
    return;
L_088525D0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088526FC;
      }
      goto L_088525E4;
    }
L_088525E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26652)));
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088525F8;
    }
L_088525F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26537)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852638;
      }
      goto L_08852604;
    }
L_08852604:
    aot_gpr[4] = (0u | 69u);
    aot_gpr[31] = (0x08852610u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08852610u) goto L_08852610;
    return;
L_08852610:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852624u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08852624u) goto L_08852624;
    return;
L_08852624:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088526FC;
      }
      goto L_08852638;
    }
L_08852638:
    aot_gpr[31] = (0x08852640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08852640u) goto L_08852640;
    return;
L_08852640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885268C;
      }
      goto L_0885264C;
    }
L_0885264C:
    aot_gpr[31] = (0x08852654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08852654u) goto L_08852654;
    return;
L_08852654:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 99u);
    aot_gpr[31] = (0x08852664u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08852664u) goto L_08852664;
    return;
L_08852664:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852678u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08852678u) goto L_08852678;
    return;
L_08852678:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088526FC;
      }
      goto L_0885268C;
    }
L_0885268C:
    aot_gpr[31] = (0x08852694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08852694u) goto L_08852694;
    return;
L_08852694:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088526B8;
      }
      goto L_088526A4;
    }
L_088526A4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3032));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088526DC;
      }
      goto L_088526B8;
    }
L_088526B8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088526C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(888));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088526C8u) goto L_088526C8;
    return;
L_088526C8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088526FC;
      }
      goto L_088526DC;
    }
L_088526DC:
    aot_gpr[31] = (0x088526E4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x088526E4u) goto L_088526E4;
    return;
L_088526E4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x088526F4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 154u, 0x08962B58u>(ctx, &aot_mem) && ctx.pc == 0x088526F4u) goto L_088526F4;
    return;
L_088526F4:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088526FC;
L_088526FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_08852704;
    }
L_08852704:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885273C;
      }
      goto L_0885271C;
    }
L_0885271C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885272Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885272Cu) goto L_0885272C;
    return;
L_0885272C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08852788;
      }
      goto L_0885273C;
    }
L_0885273C:
    aot_gpr[31] = (0x08852744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 52u, 0x0889B3D4u>(ctx, &aot_mem) && ctx.pc == 0x08852744u) goto L_08852744;
    return;
L_08852744:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885276C;
      }
      goto L_0885274C;
    }
L_0885274C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885275Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885275Cu) goto L_0885275C;
    return;
L_0885275C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08852788;
      }
      goto L_0885276C;
    }
L_0885276C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885277Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(932));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0885277Cu) goto L_0885277C;
    return;
L_0885277C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08852788;
L_08852788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852790;
      }
      goto L_08852790;
    }
L_08852790:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088527A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088527B0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24064), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088527D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(952));
    aot_gpr[31] = (0x08852810u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(964));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852810u) goto L_08852810;
    return;
L_08852810:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0885281Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0885281Cu) goto L_0885281C;
    return;
L_0885281C:
    aot_gpr[16] = (0u | 0u);
    goto L_08852820;
L_08852820:
    aot_gpr[31] = (0x08852828u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08852828u) goto L_08852828;
    return;
L_08852828:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852898;
      }
      goto L_08852834;
    }
L_08852834:
    aot_gpr[4] = (aot_gpr[16] << 24u);
    aot_gpr[31] = (0x08852840u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 74u, 0x0889B4F8u>(ctx, &aot_mem) && ctx.pc == 0x08852840u) goto L_08852840;
    return;
L_08852840:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852888;
      }
      goto L_0885284C;
    }
L_0885284C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852888;
      }
      goto L_08852858;
    }
L_08852858:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852868u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08852868u) goto L_08852868;
    return;
L_08852868:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08852878u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08852878u) goto L_08852878;
    return;
L_08852878:
    aot_gpr[31] = (0x08852880u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08852880u) goto L_08852880;
    return;
L_08852880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852890;
      }
      goto L_08852888;
    }
L_08852888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852898;
      }
      goto L_08852890;
    }
L_08852890:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08852820;
      }
      goto L_08852898;
    }
L_08852898:
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
L_088528B0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088528B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(952));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088528ECu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088528ECu) goto L_088528EC;
    return;
L_088528EC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08852900u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(964));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08852900u) goto L_08852900;
    return;
L_08852900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08852930;
      }
      goto L_0885290C;
    }
L_0885290C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885293C;
      }
      goto L_08852914;
    }
L_08852914:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_08852928;
    }
L_08852928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852A04;
      }
      goto L_08852930;
    }
L_08852930:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08852B30;
      }
      goto L_0885293C;
    }
L_0885293C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B50;
      }
      goto L_08852944;
    }
L_08852944:
    aot_gpr[31] = (0x0885294Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x0885294Cu) goto L_0885294C;
    return;
L_0885294C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_0885296C;
    }
    goto L_08852958;
L_08852958:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852960;
    }
L_08852960:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_0885296C;
    }
L_0885296C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852974;
    }
L_08852974:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[31] = (0x08852984u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 74u, 0x0889B4F8u>(ctx, &aot_mem) && ctx.pc == 0x08852984u) goto L_08852984;
    return;
L_08852984:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088529F8;
      }
      goto L_08852990;
    }
L_08852990:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088529C0;
      }
      goto L_088529A0;
    }
L_088529A0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088529B4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 129u, 0x0896F674u>(ctx, &aot_mem) && ctx.pc == 0x088529B4u) goto L_088529B4;
    return;
L_088529B4:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088529F8;
      }
      goto L_088529C0;
    }
L_088529C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088529F8;
      }
      goto L_088529D0;
    }
L_088529D0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088529F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(972));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 109u, 0x0896F548u>(ctx, &aot_mem) && ctx.pc == 0x088529F0u) goto L_088529F0;
    return;
L_088529F0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088529F8;
L_088529F8:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852A04;
    }
L_08852A04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852A98;
      }
      goto L_08852A28;
    }
L_08852A28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852A38;
    }
L_08852A38:
    aot_gpr[31] = (0x08852A40u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08852A40u) goto L_08852A40;
    return;
L_08852A40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852A48;
    }
L_08852A48:
    aot_gpr[31] = (0x08852A50u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08852A50u) goto L_08852A50;
    return;
L_08852A50:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08852A5Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08852A5Cu) goto L_08852A5C;
    return;
L_08852A5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852A6C;
    }
L_08852A6C:
    aot_gpr[4] = (0u | 61u);
    aot_gpr[31] = (0x08852A78u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08852A78u) goto L_08852A78;
    return;
L_08852A78:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852A8Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08852A8Cu) goto L_08852A8C;
    return;
L_08852A8C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852A98;
    }
L_08852A98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852ABC;
    }
L_08852ABC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852ACC;
    }
L_08852ACC:
    aot_gpr[31] = (0x08852AD4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08852AD4u) goto L_08852AD4;
    return;
L_08852AD4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852ADC;
    }
L_08852ADC:
    aot_gpr[31] = (0x08852AE4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08852AE4u) goto L_08852AE4;
    return;
L_08852AE4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08852AF0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08852AF0u) goto L_08852AF0;
    return;
L_08852AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B28;
      }
      goto L_08852B00;
    }
L_08852B00:
    aot_gpr[4] = (0u | 64u);
    aot_gpr[31] = (0x08852B0Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08852B0Cu) goto L_08852B0C;
    return;
L_08852B0C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852B20u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08852B20u) goto L_08852B20;
    return;
L_08852B20:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08852B28;
L_08852B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885293C;
      }
      goto L_08852B30;
    }
L_08852B30:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08852B3Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 232u, 0x0895FDA0u>(ctx, &aot_mem) && ctx.pc == 0x08852B3Cu) goto L_08852B3C;
    return;
L_08852B3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08852B48;
      }
      goto L_08852B44;
    }
L_08852B44:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_08852B48;
L_08852B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885293C;
      }
      goto L_08852B50;
    }
L_08852B50:
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
L_08852B68:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24072), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852B88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1036));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1060));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1084));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1108));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1120));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1132));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (0u | 2u);
        goto L_08852BF8;
    }
    goto L_08852BF8;
L_08852BF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08852C10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08852C10u) goto L_08852C10;
    return;
L_08852C10:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08852C28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C28u) goto L_08852C28;
    return;
L_08852C28:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[30] != aot_gpr[2];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08852C4C;
      }
      goto L_08852C34;
    }
L_08852C34:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08852C40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1004));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C40u) goto L_08852C40;
    return;
L_08852C40:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08852C60;
      }
      goto L_08852C4C;
    }
L_08852C4C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08852C58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C58u) goto L_08852C58;
    return;
L_08852C58:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08852C60;
L_08852C60:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08852D0C;
      }
      goto L_08852C70;
    }
L_08852C70:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852C7Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852C7Cu) goto L_08852C7C;
    return;
L_08852C7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852C9Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852C9Cu) goto L_08852C9C;
    return;
L_08852C9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852CB4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852CB4u) goto L_08852CB4;
    return;
L_08852CB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852CCCu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852CCCu) goto L_08852CCC;
    return;
L_08852CCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852CE4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852CE4u) goto L_08852CE4;
    return;
L_08852CE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852CFCu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852CFCu) goto L_08852CFC;
    return;
L_08852CFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08852DA0;
      }
      goto L_08852D0C;
    }
L_08852D0C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852D18u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852D18u) goto L_08852D18;
    return;
L_08852D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852D34u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852D34u) goto L_08852D34;
    return;
L_08852D34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852D4Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852D4Cu) goto L_08852D4C;
    return;
L_08852D4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852D64u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852D64u) goto L_08852D64;
    return;
L_08852D64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852D7Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852D7Cu) goto L_08852D7C;
    return;
L_08852D7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x08852D94u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852D94u) goto L_08852D94;
    return;
L_08852D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08852DA0;
L_08852DA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852DD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852DD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25244)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(7979)));
    aot_gpr[8] = (aot_gpr[8] << (aot_gpr[5] & 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[18] = (0u < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08852E14;
      }
      goto L_08852E10;
    }
L_08852E10:
    aot_gpr[18] = (0u | 1u);
    goto L_08852E14;
L_08852E14:
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(976));
      if (branch_taken) {
          goto L_08852E64;
      }
      goto L_08852E28;
    }
L_08852E28:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08852E3Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08852E3Cu) goto L_08852E3C;
    return;
L_08852E3C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852E4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1200));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852E4Cu) goto L_08852E4C;
    return;
L_08852E4C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08852E5C;
      }
      goto L_08852E54;
    }
L_08852E54:
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1004));
    goto L_08852E5C;
L_08852E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852E98;
      }
      goto L_08852E64;
    }
L_08852E64:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08852E70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08852E70u) goto L_08852E70;
    return;
L_08852E70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852E98;
      }
      goto L_08852E7C;
    }
L_08852E7C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08852E88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1144));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852E88u) goto L_08852E88;
    return;
L_08852E88:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08852E98;
      }
      goto L_08852E90;
    }
L_08852E90:
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1024));
    goto L_08852E98;
L_08852E98:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852ECC;
      }
      goto L_08852EA0;
    }
L_08852EA0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852EACu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08852EACu) goto L_08852EAC;
    return;
L_08852EAC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08852ECC;
      }
      goto L_08852EB8;
    }
L_08852EB8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08852EC8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08852EC8u) goto L_08852EC8;
    return;
L_08852EC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08852ECC;
L_08852ECC:
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
L_08852EE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08852F14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08852F14u) goto L_08852F14;
    return;
L_08852F14:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08852F28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1144));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08852F28u) goto L_08852F28;
    return;
L_08852F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08852F54;
      }
      goto L_08852F4C;
    }
L_08852F4C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08852F54;
L_08852F54:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08852FB8;
      }
      goto L_08852F5C;
    }
L_08852F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[5] << (aot_gpr[4] & 31u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(7979)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(7979), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08852F8Cu);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 88u, 0x088936C4u>(ctx, &aot_mem) && ctx.pc == 0x08852F8Cu) goto L_08852F8C;
    return;
L_08852F8C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08852FA0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08852DD8;
L_08852FA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 13u, 0x088530ACu>(ctx, &aot_mem); return;
      }
      goto L_08852FB8;
    }
L_08852FB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08852FC4u);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 204u, 0x08893DACu>(ctx, &aot_mem) && ctx.pc == 0x08852FC4u) goto L_08852FC4;
    return;
L_08852FC4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08852FF8;
      }
      goto L_08852FD4;
    }
L_08852FD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 6u, 0x08853040u>(ctx, &aot_mem); return;
      }
      goto L_08852FDC;
    }
L_08852FDC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) > 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 3u, 0x08853014u>(ctx, &aot_mem); return;
      }
      goto L_08852FE4;
    }
L_08852FE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u | 361u);
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 358u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 6u, 0x08853040u>(ctx, &aot_mem); return;
      }
      goto L_08852FF8;
    }
L_08852FF8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 4u, 0x08853024u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 1u, 0x08853004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0078(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0078_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_78(Runtime &runtime) {
    runtime.register_generated_unit(78u, 0x08852000u, 4096u, &recomp_unit_0078, &recomp_unit_0078_entry);
    runtime.register_function(0x08852004u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885200Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852058u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852068u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885207Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852094u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088520FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852114u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852124u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885212Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852144u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852150u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852174u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852188u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088521B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088521C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088521D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088521E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088521ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088521F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885220Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852214u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852224u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852230u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852240u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885224Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852254u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852264u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852270u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852280u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885228Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088522BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088522DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088522F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088522F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852300u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852314u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885231Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852348u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852350u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852358u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852360u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852368u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852380u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088523A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088523C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088523D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088523E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088523ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088523FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852410u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852418u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852430u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852438u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852448u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885245Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852474u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852494u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088524A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088524B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088524B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088524CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088524D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852500u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852508u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852510u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852518u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885252Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852534u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852540u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852554u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852564u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885256Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852574u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852580u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852588u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852590u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852598u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088525A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088525B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088525BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088525D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088525E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088525F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852610u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852624u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852638u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852640u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885264Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852654u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852664u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852678u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885268Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852694u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088526FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852704u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885271Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885272Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885273Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852744u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885274Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885275Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885276Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885277Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852788u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852790u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088527A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088527B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088527D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852810u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885281Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852820u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852828u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852834u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852840u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885284Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852858u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852868u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852878u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852880u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852890u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852898u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088528B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088528B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088528ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852900u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885290Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852914u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852928u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852930u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885293Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852944u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885294Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852958u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852960u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0885296Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852974u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852984u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852990u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088529A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088529B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088529C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088529D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088529F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x088529F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852A98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852ABCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852ACCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852AD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852ADCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852AE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852AF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852B88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852BF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852C9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852CB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852CCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852CE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852CFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852D94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852DA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852DD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852DD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852E98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852EA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852EACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852EB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852EC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852ECCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852EE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852F14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852F28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852F4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852F54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852F5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852F8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x08852FF8u, &recomp_unit_0078, "recomp_unit_0078");
}
} // namespace psprecomp
