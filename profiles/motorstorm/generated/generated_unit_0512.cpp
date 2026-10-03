#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0512[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31,
    0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 40, 41, 42, 0, 43, 0, 0, 0, 44,
    0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0,
    56, 0, 0, 57, 0, 58, 0, 59, 60, 0, 61, 0, 62, 0, 63, 64, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0,
    71, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0,
    87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125,
    0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132,
    0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155,
    0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0,
    0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189,
    0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215,
    0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 243, 0, 244, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 261,
};
void recomp_unit_0512_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A04000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0512[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A04000;
    case 2u: goto L_08A04008;
    case 3u: goto L_08A04020;
    case 4u: goto L_08A0403C;
    case 5u: goto L_08A04044;
    case 6u: goto L_08A0404C;
    case 7u: goto L_08A04068;
    case 8u: goto L_08A04070;
    case 9u: goto L_08A04088;
    case 10u: goto L_08A04090;
    case 11u: goto L_08A04098;
    case 12u: goto L_08A040A0;
    case 13u: goto L_08A040BC;
    case 14u: goto L_08A040D0;
    case 15u: goto L_08A040EC;
    case 16u: goto L_08A040F8;
    case 17u: goto L_08A04108;
    case 18u: goto L_08A04110;
    case 19u: goto L_08A04118;
    case 20u: goto L_08A04124;
    case 21u: goto L_08A04134;
    case 22u: goto L_08A0413C;
    case 23u: goto L_08A04140;
    case 24u: goto L_08A04158;
    case 25u: goto L_08A04180;
    case 26u: goto L_08A04190;
    case 27u: goto L_08A04198;
    case 28u: goto L_08A041A0;
    case 29u: goto L_08A041B8;
    case 30u: goto L_08A041F0;
    case 31u: goto L_08A041FC;
    case 32u: goto L_08A0420C;
    case 33u: goto L_08A04214;
    case 34u: goto L_08A04220;
    case 35u: goto L_08A04228;
    case 36u: goto L_08A04230;
    case 37u: goto L_08A0423C;
    case 38u: goto L_08A0424C;
    case 39u: goto L_08A04254;
    case 40u: goto L_08A0425C;
    case 41u: goto L_08A04260;
    case 42u: goto L_08A04264;
    case 43u: goto L_08A0426C;
    case 44u: goto L_08A0427C;
    case 45u: goto L_08A04288;
    case 46u: goto L_08A04294;
    case 47u: goto L_08A042A4;
    case 48u: goto L_08A042B0;
    case 49u: goto L_08A042B8;
    case 50u: goto L_08A042C8;
    case 51u: goto L_08A042D4;
    case 52u: goto L_08A042DC;
    case 53u: goto L_08A042E4;
    case 54u: goto L_08A042EC;
    case 55u: goto L_08A042F4;
    case 56u: goto L_08A04300;
    case 57u: goto L_08A0430C;
    case 58u: goto L_08A04314;
    case 59u: goto L_08A0431C;
    case 60u: goto L_08A04320;
    case 61u: goto L_08A04328;
    case 62u: goto L_08A04330;
    case 63u: goto L_08A04338;
    case 64u: goto L_08A0433C;
    case 65u: goto L_08A04340;
    case 66u: goto L_08A04348;
    case 67u: goto L_08A04358;
    case 68u: goto L_08A04364;
    case 69u: goto L_08A0436C;
    case 70u: goto L_08A04378;
    case 71u: goto L_08A04380;
    case 72u: goto L_08A04388;
    case 73u: goto L_08A04398;
    case 74u: goto L_08A043A4;
    case 75u: goto L_08A043AC;
    case 76u: goto L_08A043B8;
    case 77u: goto L_08A043BC;
    case 78u: goto L_08A043DC;
    case 79u: goto L_08A043F8;
    case 80u: goto L_08A04418;
    case 81u: goto L_08A04424;
    case 82u: goto L_08A0442C;
    case 83u: goto L_08A04440;
    case 84u: goto L_08A04464;
    case 85u: goto L_08A0446C;
    case 86u: goto L_08A04478;
    case 87u: goto L_08A04480;
    case 88u: goto L_08A04488;
    case 89u: goto L_08A044A4;
    case 90u: goto L_08A044AC;
    case 91u: goto L_08A044C0;
    case 92u: goto L_08A044C8;
    case 93u: goto L_08A044E4;
    case 94u: goto L_08A044F4;
    case 95u: goto L_08A04508;
    case 96u: goto L_08A04510;
    case 97u: goto L_08A0451C;
    case 98u: goto L_08A0452C;
    case 99u: goto L_08A04540;
    case 100u: goto L_08A04564;
    case 101u: goto L_08A04580;
    case 102u: goto L_08A04588;
    case 103u: goto L_08A04590;
    case 104u: goto L_08A045AC;
    case 105u: goto L_08A045B4;
    case 106u: goto L_08A045CC;
    case 107u: goto L_08A045D4;
    case 108u: goto L_08A045DC;
    case 109u: goto L_08A045E4;
    case 110u: goto L_08A04600;
    case 111u: goto L_08A04614;
    case 112u: goto L_08A04628;
    case 113u: goto L_08A04634;
    case 114u: goto L_08A04644;
    case 115u: goto L_08A04658;
    case 116u: goto L_08A04694;
    case 117u: goto L_08A046A4;
    case 118u: goto L_08A046B0;
    case 119u: goto L_08A046B8;
    case 120u: goto L_08A046C8;
    case 121u: goto L_08A046D4;
    case 122u: goto L_08A046DC;
    case 123u: goto L_08A046EC;
    case 124u: goto L_08A046F4;
    case 125u: goto L_08A046FC;
    case 126u: goto L_08A04704;
    case 127u: goto L_08A04720;
    case 128u: goto L_08A04748;
    case 129u: goto L_08A0475C;
    case 130u: goto L_08A04768;
    case 131u: goto L_08A04774;
    case 132u: goto L_08A0477C;
    case 133u: goto L_08A04784;
    case 134u: goto L_08A04790;
    case 135u: goto L_08A0479C;
    case 136u: goto L_08A047A8;
    case 137u: goto L_08A047B0;
    case 138u: goto L_08A047BC;
    case 139u: goto L_08A047C0;
    case 140u: goto L_08A047C8;
    case 141u: goto L_08A047D0;
    case 142u: goto L_08A047E0;
    case 143u: goto L_08A047E8;
    case 144u: goto L_08A047F0;
    case 145u: goto L_08A04810;
    case 146u: goto L_08A04854;
    case 147u: goto L_08A04860;
    case 148u: goto L_08A04868;
    case 149u: goto L_08A0487C;
    case 150u: goto L_08A04888;
    case 151u: goto L_08A048A0;
    case 152u: goto L_08A048B0;
    case 153u: goto L_08A048D0;
    case 154u: goto L_08A048F0;
    case 155u: goto L_08A048FC;
    case 156u: goto L_08A04904;
    case 157u: goto L_08A0490C;
    case 158u: goto L_08A04914;
    case 159u: goto L_08A04928;
    case 160u: goto L_08A04934;
    case 161u: goto L_08A0495C;
    case 162u: goto L_08A04964;
    case 163u: goto L_08A04970;
    case 164u: goto L_08A04984;
    case 165u: goto L_08A0498C;
    case 166u: goto L_08A04994;
    case 167u: goto L_08A049B0;
    case 168u: goto L_08A049B8;
    case 169u: goto L_08A04A10;
    case 170u: goto L_08A04A34;
    case 171u: goto L_08A04A44;
    case 172u: goto L_08A04A4C;
    case 173u: goto L_08A04A54;
    case 174u: goto L_08A04A5C;
    case 175u: goto L_08A04A6C;
    case 176u: goto L_08A04A74;
    case 177u: goto L_08A04A9C;
    case 178u: goto L_08A04AA8;
    case 179u: goto L_08A04ACC;
    case 180u: goto L_08A04AD4;
    case 181u: goto L_08A04AE0;
    case 182u: goto L_08A04AE8;
    case 183u: goto L_08A04AF4;
    case 184u: goto L_08A04B00;
    case 185u: goto L_08A04B2C;
    case 186u: goto L_08A04B34;
    case 187u: goto L_08A04B40;
    case 188u: goto L_08A04B6C;
    case 189u: goto L_08A04B7C;
    case 190u: goto L_08A04B8C;
    case 191u: goto L_08A04B94;
    case 192u: goto L_08A04BB0;
    case 193u: goto L_08A04BD0;
    case 194u: goto L_08A04BD4;
    case 195u: goto L_08A04BE0;
    case 196u: goto L_08A04BEC;
    case 197u: goto L_08A04BF4;
    case 198u: goto L_08A04BFC;
    case 199u: goto L_08A04C1C;
    case 200u: goto L_08A04C20;
    case 201u: goto L_08A04C28;
    case 202u: goto L_08A04C34;
    case 203u: goto L_08A04C40;
    case 204u: goto L_08A04C6C;
    case 205u: goto L_08A04C7C;
    case 206u: goto L_08A04C88;
    case 207u: goto L_08A04CA8;
    case 208u: goto L_08A04CC0;
    case 209u: goto L_08A04CC8;
    case 210u: goto L_08A04CD0;
    case 211u: goto L_08A04CD4;
    case 212u: goto L_08A04CE0;
    case 213u: goto L_08A04CE8;
    case 214u: goto L_08A04CF0;
    case 215u: goto L_08A04CFC;
    case 216u: goto L_08A04D04;
    case 217u: goto L_08A04D10;
    case 218u: goto L_08A04D24;
    case 219u: goto L_08A04D38;
    case 220u: goto L_08A04D40;
    case 221u: goto L_08A04D5C;
    case 222u: goto L_08A04D6C;
    case 223u: goto L_08A04D80;
    case 224u: goto L_08A04D88;
    case 225u: goto L_08A04D94;
    case 226u: goto L_08A04DA4;
    case 227u: goto L_08A04DBC;
    case 228u: goto L_08A04DC4;
    case 229u: goto L_08A04DD4;
    case 230u: goto L_08A04DE4;
    case 231u: goto L_08A04DF0;
    case 232u: goto L_08A04E08;
    case 233u: goto L_08A04E28;
    case 234u: goto L_08A04E34;
    case 235u: goto L_08A04E40;
    case 236u: goto L_08A04E58;
    case 237u: goto L_08A04E60;
    case 238u: goto L_08A04E68;
    case 239u: goto L_08A04E7C;
    case 240u: goto L_08A04E90;
    case 241u: goto L_08A04E98;
    case 242u: goto L_08A04EA0;
    case 243u: goto L_08A04EAC;
    case 244u: goto L_08A04EB4;
    case 245u: goto L_08A04EB8;
    case 246u: goto L_08A04ECC;
    case 247u: goto L_08A04EDC;
    case 248u: goto L_08A04F14;
    case 249u: goto L_08A04F34;
    case 250u: goto L_08A04F58;
    case 251u: goto L_08A04F60;
    case 252u: goto L_08A04F7C;
    case 253u: goto L_08A04FA8;
    case 254u: goto L_08A04FB4;
    case 255u: goto L_08A04FC0;
    case 256u: goto L_08A04FD0;
    case 257u: goto L_08A04FD8;
    case 258u: goto L_08A04FE0;
    case 259u: goto L_08A04FEC;
    case 260u: goto L_08A04FF4;
    case 261u: goto L_08A04FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A04000:
    aot_gpr[31] = (0x08A04008u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 296u, 0x089FDFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A04008u) goto L_08A04008;
    return;
L_08A04008:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04020:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A040BC;
      }
      goto L_08A0403C;
    }
L_08A0403C:
    aot_gpr[31] = (0x08A04044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A04044u) goto L_08A04044;
    return;
L_08A04044:
    aot_gpr[31] = (0x08A0404Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0404Cu) goto L_08A0404C;
    return;
L_08A0404C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04068u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04068u) goto L_08A04068;
    return;
L_08A04068:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A040BC;
      }
      goto L_08A04070;
    }
L_08A04070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04088u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04088u) goto L_08A04088;
    return;
L_08A04088:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A040BC;
      }
      goto L_08A04090;
    }
L_08A04090:
    aot_gpr[31] = (0x08A04098u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A04098u) goto L_08A04098;
    return;
L_08A04098:
    aot_gpr[31] = (0x08A040A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A040A0u) goto L_08A040A0;
    return;
L_08A040A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A040BCu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A040BCu) goto L_08A040BC;
    return;
L_08A040BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A040ECu);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A040ECu) goto L_08A040EC;
    return;
L_08A040EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A040F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A040F8u) goto L_08A040F8;
    return;
L_08A040F8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A04108u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5464));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04108u) goto L_08A04108;
    return;
L_08A04108:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 1u);
        goto L_08A04140;
    }
    goto L_08A04110;
L_08A04110:
    aot_gpr[31] = (0x08A04118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04118u) goto L_08A04118;
    return;
L_08A04118:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A04124u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04124u) goto L_08A04124;
    return;
L_08A04124:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A04134u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5456));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04134u) goto L_08A04134;
    return;
L_08A04134:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04140;
      }
      goto L_08A0413C;
    }
L_08A0413C:
    aot_gpr[17] = (0u | 1u);
    goto L_08A04140;
L_08A04140:
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
L_08A04158:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A04180u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5444));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04180u) goto L_08A04180;
    return;
L_08A04180:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04190u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04190u) goto L_08A04190;
    return;
L_08A04190:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A041A0;
      }
      goto L_08A04198;
    }
L_08A04198:
    aot_gpr[31] = (0x08A041A0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A041B8;
L_08A041A0:
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
L_08A041B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-20601));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A041F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A041F0u) goto L_08A041F0;
    return;
L_08A041F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A041FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A041FCu) goto L_08A041FC;
    return;
L_08A041FC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0420Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5464));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0420Cu) goto L_08A0420C;
    return;
L_08A0420C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04228;
      }
      goto L_08A04214;
    }
L_08A04214:
    aot_gpr[18] = (0u | 2u);
    aot_gpr[31] = (0x08A04220u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 2u, 0x089FE010u>(ctx, &aot_mem) && ctx.pc == 0x08A04220u) goto L_08A04220;
    return;
L_08A04220:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A04260;
      }
      goto L_08A04228;
    }
L_08A04228:
    aot_gpr[31] = (0x08A04230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04230u) goto L_08A04230;
    return;
L_08A04230:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0423Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0423Cu) goto L_08A0423C;
    return;
L_08A0423C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0424Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5456));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0424Cu) goto L_08A0424C;
    return;
L_08A0424C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A04264;
      }
      goto L_08A04254;
    }
L_08A04254:
    aot_gpr[31] = (0x08A0425Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 2u, 0x089FE010u>(ctx, &aot_mem) && ctx.pc == 0x08A0425Cu) goto L_08A0425C;
    return;
L_08A0425C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    goto L_08A04260;
L_08A04260:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A04264;
L_08A04264:
    aot_gpr[31] = (0x08A0426Cu);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5436));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0426Cu) goto L_08A0426C;
    return;
L_08A0426C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0427Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0427Cu) goto L_08A0427C;
    return;
L_08A0427C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A04340;
      }
      goto L_08A04288;
    }
L_08A04288:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A04294u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-5428));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04294u) goto L_08A04294;
    return;
L_08A04294:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A042A4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A042A4u) goto L_08A042A4;
    return;
L_08A042A4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A04340;
      }
      goto L_08A042B0;
    }
L_08A042B0:
    aot_gpr[31] = (0x08A042B8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08A042B8u) goto L_08A042B8;
    return;
L_08A042B8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < -20147 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A042F4;
      }
      goto L_08A042C8;
    }
L_08A042C8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < -21002 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < -21005 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A042E4;
      }
      goto L_08A042D4;
    }
L_08A042D4:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04330;
      }
      goto L_08A042DC;
    }
L_08A042DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04320;
      }
      goto L_08A042E4;
    }
L_08A042E4:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A04320;
      }
      goto L_08A042EC;
    }
L_08A042EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04330;
      }
      goto L_08A042F4;
    }
L_08A042F4:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 20600 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < 20601 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A04314;
      }
      goto L_08A04300;
    }
L_08A04300:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < -20145 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04320;
      }
      goto L_08A0430C;
    }
L_08A0430C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04330;
      }
      goto L_08A04314;
    }
L_08A04314:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 20600u);
      if (branch_taken) {
          goto L_08A04330;
      }
      goto L_08A0431C;
    }
L_08A0431C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    goto L_08A04320;
L_08A04320:
    aot_gpr[31] = (0x08A04328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 2u, 0x089FE010u>(ctx, &aot_mem) && ctx.pc == 0x08A04328u) goto L_08A04328;
    return;
L_08A04328:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A0433C;
      }
      goto L_08A04330;
    }
L_08A04330:
    aot_gpr[31] = (0x08A04338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 2u, 0x089FE010u>(ctx, &aot_mem) && ctx.pc == 0x08A04338u) goto L_08A04338;
    return;
L_08A04338:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    goto L_08A0433C;
L_08A0433C:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A04340;
L_08A04340:
    aot_gpr[31] = (0x08A04348u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5424));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04348u) goto L_08A04348;
    return;
L_08A04348:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04358u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04358u) goto L_08A04358;
    return;
L_08A04358:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_08A04380;
    }
    goto L_08A04364;
L_08A04364:
    aot_gpr[31] = (0x08A0436Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08A0436Cu) goto L_08A0436C;
    return;
L_08A0436C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A04378u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 2u, 0x089FE010u>(ctx, &aot_mem) && ctx.pc == 0x08A04378u) goto L_08A04378;
    return;
L_08A04378:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A04380;
L_08A04380:
    aot_gpr[31] = (0x08A04388u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5400));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04388u) goto L_08A04388;
    return;
L_08A04388:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04398u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04398u) goto L_08A04398;
    return;
L_08A04398:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A043BC;
      }
      goto L_08A043A4;
    }
L_08A043A4:
    aot_gpr[31] = (0x08A043ACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08A043ACu) goto L_08A043AC;
    return;
L_08A043AC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A043B8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 2u, 0x089FE010u>(ctx, &aot_mem) && ctx.pc == 0x08A043B8u) goto L_08A043B8;
    return;
L_08A043B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    goto L_08A043BC;
L_08A043BC:
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
L_08A043DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0442C;
      }
      goto L_08A043F8;
    }
L_08A043F8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11928));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18352), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A04418u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04418u) goto L_08A04418;
    return;
L_08A04418:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0442C;
      }
      goto L_08A04424;
    }
L_08A04424:
    aot_gpr[31] = (0x08A0442Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A044F4;
L_08A0442C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04488;
      }
      goto L_08A04464;
    }
L_08A04464:
    aot_gpr[31] = (0x08A0446Cu);
    aot_gpr[4] = (0u | 16u);
    goto L_08A044AC;
L_08A0446C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18352), aot_gpr[17]);
        goto L_08A04488;
    }
    goto L_08A04478;
L_08A04478:
    aot_gpr[31] = (0x08A04480u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0452C;
L_08A04480:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18352), aot_gpr[17]);
    goto L_08A04488;
L_08A04488:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18352)));
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
L_08A044A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A044AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A044C0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A044C0u) goto L_08A044C0;
    return;
L_08A044C0:
    aot_gpr[31] = (0x08A044C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A044C8u) goto L_08A044C8;
    return;
L_08A044C8:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 30u);
    aot_gpr[31] = (0x08A044E4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5384));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A044E4u) goto L_08A044E4;
    return;
L_08A044E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A044F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A04508u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A04508u) goto L_08A04508;
    return;
L_08A04508:
    aot_gpr[31] = (0x08A04510u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04510u) goto L_08A04510;
    return;
L_08A04510:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0451Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0451Cu) goto L_08A0451C;
    return;
L_08A0451C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0452C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A04540u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A04540u) goto L_08A04540;
    return;
L_08A04540:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11928));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04564:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A04600;
      }
      goto L_08A04580;
    }
L_08A04580:
    aot_gpr[31] = (0x08A04588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A04588u) goto L_08A04588;
    return;
L_08A04588:
    aot_gpr[31] = (0x08A04590u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04590u) goto L_08A04590;
    return;
L_08A04590:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A045ACu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A045ACu) goto L_08A045AC;
    return;
L_08A045AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04600;
      }
      goto L_08A045B4;
    }
L_08A045B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A045CCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A045CCu) goto L_08A045CC;
    return;
L_08A045CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04600;
      }
      goto L_08A045D4;
    }
L_08A045D4:
    aot_gpr[31] = (0x08A045DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A045DCu) goto L_08A045DC;
    return;
L_08A045DC:
    aot_gpr[31] = (0x08A045E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A045E4u) goto L_08A045E4;
    return;
L_08A045E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A04600u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04600u) goto L_08A04600;
    return;
L_08A04600:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04614:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A04628u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04628u) goto L_08A04628;
    return;
L_08A04628:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A04634u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04634u) goto L_08A04634;
    return;
L_08A04634:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A04644u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5348));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04644u) goto L_08A04644;
    return;
L_08A04644:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04658:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-20601));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A04694u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-5332));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04694u) goto L_08A04694;
    return;
L_08A04694:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A046A4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A046A4u) goto L_08A046A4;
    return;
L_08A046A4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A04704;
      }
      goto L_08A046B0;
    }
L_08A046B0:
    aot_gpr[31] = (0x08A046B8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-5324));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A046B8u) goto L_08A046B8;
    return;
L_08A046B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A046C8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A046C8u) goto L_08A046C8;
    return;
L_08A046C8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04704;
      }
      goto L_08A046D4;
    }
L_08A046D4:
    aot_gpr[31] = (0x08A046DCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08A046DCu) goto L_08A046DC;
    return;
L_08A046DC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 20600u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A046FC;
      }
      goto L_08A046EC;
    }
L_08A046EC:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-21003));
      if (branch_taken) {
          goto L_08A046FC;
      }
      goto L_08A046F4;
    }
L_08A046F4:
    if (aot_gpr[18] != aot_gpr[4]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
        goto L_08A04704;
    }
    goto L_08A046FC;
L_08A046FC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A04704;
      }
      goto L_08A04704;
    }
L_08A04704:
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
L_08A04720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A047F0;
      }
      goto L_08A04748;
    }
L_08A04748:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11992));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A0475Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A04C88;
L_08A0475C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(1836));
    goto L_08A04768;
L_08A04768:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A0479C;
    }
    goto L_08A04774;
L_08A04774:
    aot_gpr[31] = (0x08A0477Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0477Cu) goto L_08A0477C;
    return;
L_08A0477C:
    aot_gpr[31] = (0x08A04784u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04784u) goto L_08A04784;
    return;
L_08A04784:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[31] = (0x08A04790u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A04790u) goto L_08A04790;
    return;
L_08A04790:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(284), 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A0479C;
L_08A0479C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A04768;
      }
      goto L_08A047A8;
    }
L_08A047A8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(340));
      if (branch_taken) {
          goto L_08A047C0;
      }
      goto L_08A047B0;
    }
L_08A047B0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A047BCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 131u, 0x089F392Cu>(ctx, &aot_mem) && ctx.pc == 0x08A047BCu) goto L_08A047BC;
    return;
L_08A047BC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(340));
    goto L_08A047C0;
L_08A047C0:
    aot_gpr[31] = (0x08A047C8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x08A047C8u) goto L_08A047C8;
    return;
L_08A047C8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A047E0;
      }
      goto L_08A047D0;
    }
L_08A047D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26176));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A047E0;
L_08A047E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A047F0;
      }
      goto L_08A047E8;
    }
L_08A047E8:
    aot_gpr[31] = (0x08A047F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A04D6C;
L_08A047F0:
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
L_08A04810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11992));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(284));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A04854u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-25556));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08A04854u) goto L_08A04854;
    return;
L_08A04854:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(340));
    aot_gpr[31] = (0x08A04860u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 3u, 0x08A46010u>(ctx, &aot_mem) && ctx.pc == 0x08A04860u) goto L_08A04860;
    return;
L_08A04860:
    aot_gpr[31] = (0x08A04868u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1836));
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 162u, 0x08A05AA0u>(ctx, &aot_mem) && ctx.pc == 0x08A04868u) goto L_08A04868;
    return;
L_08A04868:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(264), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0487Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 68u, 0x08A054A4u>(ctx, &aot_mem) && ctx.pc == 0x08A0487Cu) goto L_08A0487C;
    return;
L_08A0487C:
    aot_gpr[6] = (aot_gpr[17] >> 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A04888;
L_08A04888:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(292), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(284), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A04888;
      }
      goto L_08A048A0;
    }
L_08A048A0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(352));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A048B0u);
    aot_gpr[6] = (0u | 1484u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A048B0u) goto L_08A048B0;
    return;
L_08A048B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A048D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-3264));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(3232), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(3236), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(3240), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(3244), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(3248), aot_gpr[31]);
    aot_gpr[31] = (0x08A048F0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 100u, 0x08A05668u>(ctx, &aot_mem) && ctx.pc == 0x08A048F0u) goto L_08A048F0;
    return;
L_08A048F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(1836));
      if (branch_taken) {
          goto L_08A04994;
      }
      goto L_08A048FC;
    }
L_08A048FC:
    aot_gpr[31] = (0x08A04904u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 179u, 0x08A05BACu>(ctx, &aot_mem) && ctx.pc == 0x08A04904u) goto L_08A04904;
    return;
L_08A04904:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A04994;
      }
      goto L_08A0490C;
    }
L_08A0490C:
    aot_gpr[31] = (0x08A04914u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 180u, 0x08A05BB8u>(ctx, &aot_mem) && ctx.pc == 0x08A04914u) goto L_08A04914;
    return;
L_08A04914:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1484));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A04928u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04928u) goto L_08A04928;
    return;
L_08A04928:
    aot_gpr[19] = (0u | 257u);
    aot_gpr[31] = (0x08A04934u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1744), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A04934u) goto L_08A04934;
    return;
L_08A04934:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(1744));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A0495Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0495Cu) goto L_08A0495C;
    return;
L_08A0495C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1221));
      if (branch_taken) {
          goto L_08A04994;
      }
      goto L_08A04964;
    }
L_08A04964:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A04970u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A04970u) goto L_08A04970;
    return;
L_08A04970:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1744)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1480), aot_gpr[5]);
    aot_gpr[31] = (0x08A04984u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 118u, 0x08A0572Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04984u) goto L_08A04984;
    return;
L_08A04984:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1748));
      if (branch_taken) {
          goto L_08A04994;
      }
      goto L_08A0498C;
    }
L_08A0498C:
    aot_gpr[31] = (0x08A04994u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 188u, 0x08A05C48u>(ctx, &aot_mem) && ctx.pc == 0x08A04994u) goto L_08A04994;
    return;
L_08A04994:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(3232)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(3236)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(3240)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(3244)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(3248)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(3264));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A049B0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A049B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1664));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1628), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1632), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1624), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1636), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(352));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1640), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1644), aot_gpr[21]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 185u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(668));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(672));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1648), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1652), aot_gpr[31]);
    goto L_08A04A10;
L_08A04A10:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A04A10;
      }
      goto L_08A04A34;
    }
L_08A04A34:
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(340));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[31] = (0x08A04A44u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04A44u) goto L_08A04A44;
    return;
L_08A04A44:
    aot_gpr[31] = (0x08A04A4Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A04A4Cu) goto L_08A04A4C;
    return;
L_08A04A4C:
    aot_gpr[31] = (0x08A04A54u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A04A54u) goto L_08A04A54;
    return;
L_08A04A54:
    aot_gpr[31] = (0x08A04A5Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 80u, 0x089F143Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04A5Cu) goto L_08A04A5C;
    return;
L_08A04A5C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A04A6Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A04A6Cu) goto L_08A04A6C;
    return;
L_08A04A6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A04B2C;
      }
      goto L_08A04A74;
    }
L_08A04A74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1340), 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1344), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1352));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1221));
    aot_gpr[31] = (0x08A04A9Cu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A04A9Cu) goto L_08A04A9C;
    return;
L_08A04A9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1480)));
    aot_gpr[31] = (0x08A04AA8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1348), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x08A04AA8u) goto L_08A04AA8;
    return;
L_08A04AA8:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x08A04ACCu);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 91u, 0x089F14F4u>(ctx, &aot_mem) && ctx.pc == 0x08A04ACCu) goto L_08A04ACC;
    return;
L_08A04ACC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A04AE8;
      }
      goto L_08A04AD4;
    }
L_08A04AD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04B6C;
      }
      goto L_08A04AE0;
    }
L_08A04AE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04BD4;
      }
      goto L_08A04AE8;
    }
L_08A04AE8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A04AF4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A04AF4u) goto L_08A04AF4;
    return;
L_08A04AF4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A04B00u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A04B00u) goto L_08A04B00;
    return;
L_08A04B00:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1644)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1648)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1652)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1664));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04B2C:
    aot_gpr[31] = (0x08A04B34u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A04B34u) goto L_08A04B34;
    return;
L_08A04B34:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A04B40u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A04B40u) goto L_08A04B40;
    return;
L_08A04B40:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1644)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1648)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1652)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1664));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04B6C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5320));
    goto L_08A04B7C;
L_08A04B7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1620), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1616), aot_gpr[5]);
    aot_gpr[31] = (0x08A04B8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1612), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A04B8Cu) goto L_08A04B8C;
    return;
L_08A04B8C:
    aot_gpr[31] = (0x08A04B94u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04B94u) goto L_08A04B94;
    return;
L_08A04B94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(284)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A04BB0u);
    aot_gpr[7] = (0u | 376u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A04BB0u) goto L_08A04BB0;
    return;
L_08A04BB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1620)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(292), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1612)));
      if (branch_taken) {
          goto L_08A04B7C;
      }
      goto L_08A04BD0;
    }
L_08A04BD0:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08A04BD4;
L_08A04BD4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A04BE0u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A04BE0u) goto L_08A04BE0;
    return;
L_08A04BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A04C20;
      }
      goto L_08A04BEC;
    }
L_08A04BEC:
    aot_gpr[31] = (0x08A04BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A04BF4u) goto L_08A04BF4;
    return;
L_08A04BF4:
    aot_gpr[31] = (0x08A04BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A04BFCu) goto L_08A04BFC;
    return;
L_08A04BFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A04C1Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04C1Cu) goto L_08A04C1C;
    return;
L_08A04C1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A04C20;
L_08A04C20:
    aot_gpr[31] = (0x08A04C28u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 68u, 0x08A054A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04C28u) goto L_08A04C28;
    return;
L_08A04C28:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A04C34u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A04C34u) goto L_08A04C34;
    return;
L_08A04C34:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A04C40u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A04C40u) goto L_08A04C40;
    return;
L_08A04C40:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1624)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1628)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1632)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1636)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1640)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1644)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1648)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1652)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1664));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04C6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A04C7Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1836));
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 164u, 0x08A05AC8u>(ctx, &aot_mem) && ctx.pc == 0x08A04C7Cu) goto L_08A04C7C;
    return;
L_08A04C7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04C88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_08A04CC8;
    }
    goto L_08A04CA8;
L_08A04CA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A04CC0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04CC0u) goto L_08A04CC0;
    return;
L_08A04CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A04CC8;
L_08A04CC8:
    aot_gpr[31] = (0x08A04CD0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 68u, 0x08A054A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04CD0u) goto L_08A04CD0;
    return;
L_08A04CD0:
    aot_gpr[17] = (0u | 0u);
    goto L_08A04CD4;
L_08A04CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A04D04;
    }
    goto L_08A04CE0;
L_08A04CE0:
    aot_gpr[31] = (0x08A04CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A04CE8u) goto L_08A04CE8;
    return;
L_08A04CE8:
    aot_gpr[31] = (0x08A04CF0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04CF0u) goto L_08A04CF0;
    return;
L_08A04CF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[31] = (0x08A04CFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A04CFCu) goto L_08A04CFC;
    return;
L_08A04CFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A04D04;
L_08A04D04:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A04CD4;
      }
      goto L_08A04D10;
    }
L_08A04D10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04D24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A04D38u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A04D38u) goto L_08A04D38;
    return;
L_08A04D38:
    aot_gpr[31] = (0x08A04D40u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04D40u) goto L_08A04D40;
    return;
L_08A04D40:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 43u);
    aot_gpr[31] = (0x08A04D5Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5320));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A04D5Cu) goto L_08A04D5C;
    return;
L_08A04D5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04D6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A04D80u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A04D80u) goto L_08A04D80;
    return;
L_08A04D80:
    aot_gpr[31] = (0x08A04D88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04D88u) goto L_08A04D88;
    return;
L_08A04D88:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A04D94u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A04D94u) goto L_08A04D94;
    return;
L_08A04D94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A04DBCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 68u, 0x08A054A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04DBCu) goto L_08A04DBC;
    return;
L_08A04DBC:
    aot_gpr[31] = (0x08A04DC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A04C88;
L_08A04DC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04DD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A04DE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1836));
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 155u, 0x08A05A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04DE4u) goto L_08A04DE4;
    return;
L_08A04DE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04DF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A04E7C;
      }
      goto L_08A04E08;
    }
L_08A04E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(356));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A04E28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04E28u) goto L_08A04E28;
    return;
L_08A04E28:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A04E34u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 138u, 0x08A00954u>(ctx, &aot_mem) && ctx.pc == 0x08A04E34u) goto L_08A04E34;
    return;
L_08A04E34:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04E68;
      }
      goto L_08A04E40;
    }
L_08A04E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04E58u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04E58u) goto L_08A04E58;
    return;
L_08A04E58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04E90;
      }
      goto L_08A04E60;
    }
L_08A04E60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08A04EB8;
      }
      goto L_08A04E68;
    }
L_08A04E68:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04E7C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04E90:
    aot_gpr[31] = (0x08A04E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A04E98u) goto L_08A04E98;
    return;
L_08A04E98:
    aot_gpr[31] = (0x08A04EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A04EA0u) goto L_08A04EA0;
    return;
L_08A04EA0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_08A04EB4;
      }
      goto L_08A04EAC;
    }
L_08A04EAC:
    aot_gpr[31] = (0x08A04EB4u);
    aot_gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A04EB4u) goto L_08A04EB4;
    return;
L_08A04EB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    goto L_08A04EB8;
L_08A04EB8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A04ECCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04ECCu) goto L_08A04ECC;
    return;
L_08A04ECC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04EDC:
    aot_gpr[5] = (0u | 500u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(272), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(276), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(304), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(312), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(328), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04F14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A04F60;
      }
      goto L_08A04F34;
    }
L_08A04F34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[18];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A04F7C;
      }
      goto L_08A04F58;
    }
L_08A04F58:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(288), 0u);
      if (branch_taken) {
          goto L_08A04FE0;
      }
      goto L_08A04F60;
    }
L_08A04F60:
    aot_gpr[2] = (0u | 0u);
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
L_08A04F7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(288), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(312), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(320), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(328), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04FEC;
      }
      goto L_08A04FA8;
    }
L_08A04FA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04FEC;
      }
      goto L_08A04FB4;
    }
L_08A04FB4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1573));
    aot_gpr[31] = (0x08A04FC0u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A04FC0u) goto L_08A04FC0;
    return;
L_08A04FC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
    aot_gpr[6] = (0u | 200u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04FD8;
      }
      goto L_08A04FD0;
    }
L_08A04FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A04FD8;
L_08A04FD8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1832), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A04FEC;
      }
      goto L_08A04FE0;
    }
L_08A04FE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(300), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    goto L_08A04FEC;
L_08A04FEC:
    aot_gpr[31] = (0x08A04FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A04FF4u) goto L_08A04FF4;
    return;
L_08A04FF4:
    aot_gpr[31] = (0x08A04FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A04FFCu) goto L_08A04FFC;
    return;
L_08A04FFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A05000u; return;
}

void recomp_unit_0512(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0512_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_512(Runtime &runtime) {
    runtime.register_generated_unit(512u, 0x08A04000u, 4096u, &recomp_unit_0512, &recomp_unit_0512_entry);
    runtime.register_function(0x08A04000u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04008u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04020u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0403Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04044u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0404Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04068u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04070u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04088u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04090u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04098u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A040A0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A040BCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A040D0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A040ECu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A040F8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04108u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04110u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04118u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04124u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04134u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0413Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04140u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04158u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04180u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04190u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04198u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A041A0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A041B8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A041F0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A041FCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0420Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04214u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04220u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04228u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04230u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0423Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0424Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04254u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0425Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04260u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04264u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0426Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0427Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04288u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04294u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042A4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042B0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042B8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042C8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042D4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042DCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042E4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042ECu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A042F4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04300u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0430Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04314u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0431Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04320u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04328u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04330u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04338u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0433Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04340u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04348u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04358u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04364u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0436Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04378u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04380u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04388u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04398u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A043A4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A043ACu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A043B8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A043BCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A043DCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A043F8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04418u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04424u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0442Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04440u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04464u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0446Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04478u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04480u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04488u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A044A4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A044ACu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A044C0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A044C8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A044E4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A044F4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04508u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04510u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0451Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0452Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04540u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04564u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04580u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04588u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04590u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A045ACu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A045B4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A045CCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A045D4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A045DCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A045E4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04600u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04614u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04628u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04634u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04644u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04658u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04694u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046A4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046B0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046B8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046C8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046D4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046DCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046ECu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046F4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A046FCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04704u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04720u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04748u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0475Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04768u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04774u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0477Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04784u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04790u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0479Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047A8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047B0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047BCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047C0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047C8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047D0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047E0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047E8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A047F0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04810u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04854u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04860u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04868u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0487Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04888u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A048A0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A048B0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A048D0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A048F0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A048FCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04904u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0490Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04914u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04928u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04934u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0495Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04964u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04970u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04984u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A0498Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04994u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A049B0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A049B8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A10u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A34u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A44u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A4Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A54u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A5Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A6Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A74u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04A9Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04AA8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04ACCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04AD4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04AE0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04AE8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04AF4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B00u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B2Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B34u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B40u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B6Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B7Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B8Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04B94u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BB0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BD0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BD4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BE0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BECu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BF4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04BFCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C1Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C20u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C28u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C34u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C40u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C6Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C7Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04C88u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CA8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CC0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CC8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CD0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CD4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CE0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CE8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CF0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04CFCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D04u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D10u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D24u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D38u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D40u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D5Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D6Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D80u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D88u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04D94u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04DA4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04DBCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04DC4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04DD4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04DE4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04DF0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E08u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E28u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E34u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E40u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E58u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E60u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E68u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E7Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E90u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04E98u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04EA0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04EACu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04EB4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04EB8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04ECCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04EDCu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04F14u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04F34u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04F58u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04F60u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04F7Cu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FA8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FB4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FC0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FD0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FD8u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FE0u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FECu, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FF4u, &recomp_unit_0512, "recomp_unit_0512");
    runtime.register_function(0x08A04FFCu, &recomp_unit_0512, "recomp_unit_0512");
}
} // namespace psprecomp
