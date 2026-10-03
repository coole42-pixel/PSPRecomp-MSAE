#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0395[1024] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0,
    0, 7, 8, 0, 0, 9, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 17, 18, 0, 19, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51,
    0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 65, 0, 0, 0, 66, 0, 0, 0, 67, 68, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 74, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 79,
    0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 92, 0, 0, 0, 0, 0, 0,
    93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123,
    0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133,
    0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143,
    0, 144, 0, 145, 146, 147, 0, 148, 0, 149, 150, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 155, 0, 0,
    0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 171, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0,
    0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 226, 0, 0, 0, 0,
    227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 238, 0,
    239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 245, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 251, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261,
};
void recomp_unit_0395_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0898F000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0395[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898F000;
    case 2u: goto L_0898F008;
    case 3u: goto L_0898F044;
    case 4u: goto L_0898F050;
    case 5u: goto L_0898F064;
    case 6u: goto L_0898F074;
    case 7u: goto L_0898F084;
    case 8u: goto L_0898F088;
    case 9u: goto L_0898F094;
    case 10u: goto L_0898F098;
    case 11u: goto L_0898F0A8;
    case 12u: goto L_0898F0B0;
    case 13u: goto L_0898F0B8;
    case 14u: goto L_0898F0CC;
    case 15u: goto L_0898F0E4;
    case 16u: goto L_0898F104;
    case 17u: goto L_0898F110;
    case 18u: goto L_0898F114;
    case 19u: goto L_0898F11C;
    case 20u: goto L_0898F128;
    case 21u: goto L_0898F12C;
    case 22u: goto L_0898F160;
    case 23u: goto L_0898F168;
    case 24u: goto L_0898F170;
    case 25u: goto L_0898F178;
    case 26u: goto L_0898F198;
    case 27u: goto L_0898F1A0;
    case 28u: goto L_0898F1B0;
    case 29u: goto L_0898F1C0;
    case 30u: goto L_0898F1D8;
    case 31u: goto L_0898F1E0;
    case 32u: goto L_0898F1F0;
    case 33u: goto L_0898F200;
    case 34u: goto L_0898F214;
    case 35u: goto L_0898F224;
    case 36u: goto L_0898F238;
    case 37u: goto L_0898F240;
    case 38u: goto L_0898F250;
    case 39u: goto L_0898F258;
    case 40u: goto L_0898F26C;
    case 41u: goto L_0898F27C;
    case 42u: goto L_0898F290;
    case 43u: goto L_0898F298;
    case 44u: goto L_0898F2A0;
    case 45u: goto L_0898F2B0;
    case 46u: goto L_0898F2C0;
    case 47u: goto L_0898F2CC;
    case 48u: goto L_0898F2D4;
    case 49u: goto L_0898F2DC;
    case 50u: goto L_0898F2EC;
    case 51u: goto L_0898F2FC;
    case 52u: goto L_0898F30C;
    case 53u: goto L_0898F314;
    case 54u: goto L_0898F320;
    case 55u: goto L_0898F330;
    case 56u: goto L_0898F33C;
    case 57u: goto L_0898F348;
    case 58u: goto L_0898F358;
    case 59u: goto L_0898F36C;
    case 60u: goto L_0898F374;
    case 61u: goto L_0898F378;
    case 62u: goto L_0898F3AC;
    case 63u: goto L_0898F3B4;
    case 64u: goto L_0898F3BC;
    case 65u: goto L_0898F3C0;
    case 66u: goto L_0898F3D0;
    case 67u: goto L_0898F3E0;
    case 68u: goto L_0898F3E4;
    case 69u: goto L_0898F3F0;
    case 70u: goto L_0898F400;
    case 71u: goto L_0898F418;
    case 72u: goto L_0898F430;
    case 73u: goto L_0898F440;
    case 74u: goto L_0898F444;
    case 75u: goto L_0898F448;
    case 76u: goto L_0898F458;
    case 77u: goto L_0898F470;
    case 78u: goto L_0898F478;
    case 79u: goto L_0898F47C;
    case 80u: goto L_0898F488;
    case 81u: goto L_0898F4A0;
    case 82u: goto L_0898F4A8;
    case 83u: goto L_0898F4B4;
    case 84u: goto L_0898F4C4;
    case 85u: goto L_0898F500;
    case 86u: goto L_0898F508;
    case 87u: goto L_0898F538;
    case 88u: goto L_0898F540;
    case 89u: goto L_0898F54C;
    case 90u: goto L_0898F558;
    case 91u: goto L_0898F560;
    case 92u: goto L_0898F564;
    case 93u: goto L_0898F580;
    case 94u: goto L_0898F588;
    case 95u: goto L_0898F5A8;
    case 96u: goto L_0898F5B0;
    case 97u: goto L_0898F5D0;
    case 98u: goto L_0898F5E0;
    case 99u: goto L_0898F604;
    case 100u: goto L_0898F610;
    case 101u: goto L_0898F618;
    case 102u: goto L_0898F624;
    case 103u: goto L_0898F630;
    case 104u: goto L_0898F644;
    case 105u: goto L_0898F670;
    case 106u: goto L_0898F67C;
    case 107u: goto L_0898F6BC;
    case 108u: goto L_0898F6C8;
    case 109u: goto L_0898F6F4;
    case 110u: goto L_0898F700;
    case 111u: goto L_0898F72C;
    case 112u: goto L_0898F738;
    case 113u: goto L_0898F758;
    case 114u: goto L_0898F794;
    case 115u: goto L_0898F7A0;
    case 116u: goto L_0898F7A8;
    case 117u: goto L_0898F7B4;
    case 118u: goto L_0898F7CC;
    case 119u: goto L_0898F7DC;
    case 120u: goto L_0898F7E4;
    case 121u: goto L_0898F7EC;
    case 122u: goto L_0898F7F4;
    case 123u: goto L_0898F7FC;
    case 124u: goto L_0898F804;
    case 125u: goto L_0898F810;
    case 126u: goto L_0898F81C;
    case 127u: goto L_0898F824;
    case 128u: goto L_0898F82C;
    case 129u: goto L_0898F834;
    case 130u: goto L_0898F860;
    case 131u: goto L_0898F868;
    case 132u: goto L_0898F870;
    case 133u: goto L_0898F87C;
    case 134u: goto L_0898F888;
    case 135u: goto L_0898F898;
    case 136u: goto L_0898F8A0;
    case 137u: goto L_0898F8A8;
    case 138u: goto L_0898F8B4;
    case 139u: goto L_0898F8BC;
    case 140u: goto L_0898F8C4;
    case 141u: goto L_0898F8CC;
    case 142u: goto L_0898F8F0;
    case 143u: goto L_0898F8FC;
    case 144u: goto L_0898F904;
    case 145u: goto L_0898F90C;
    case 146u: goto L_0898F910;
    case 147u: goto L_0898F914;
    case 148u: goto L_0898F91C;
    case 149u: goto L_0898F924;
    case 150u: goto L_0898F928;
    case 151u: goto L_0898F930;
    case 152u: goto L_0898F938;
    case 153u: goto L_0898F944;
    case 154u: goto L_0898F970;
    case 155u: goto L_0898F974;
    case 156u: goto L_0898F98C;
    case 157u: goto L_0898F994;
    case 158u: goto L_0898F9A8;
    case 159u: goto L_0898F9B4;
    case 160u: goto L_0898F9D0;
    case 161u: goto L_0898F9E4;
    case 162u: goto L_0898F9F4;
    case 163u: goto L_0898FA08;
    case 164u: goto L_0898FA1C;
    case 165u: goto L_0898FA28;
    case 166u: goto L_0898FA30;
    case 167u: goto L_0898FA38;
    case 168u: goto L_0898FA40;
    case 169u: goto L_0898FA4C;
    case 170u: goto L_0898FA58;
    case 171u: goto L_0898FA5C;
    case 172u: goto L_0898FA64;
    case 173u: goto L_0898FA80;
    case 174u: goto L_0898FA90;
    case 175u: goto L_0898FA9C;
    case 176u: goto L_0898FAA8;
    case 177u: goto L_0898FAB4;
    case 178u: goto L_0898FAC4;
    case 179u: goto L_0898FAD0;
    case 180u: goto L_0898FADC;
    case 181u: goto L_0898FAE8;
    case 182u: goto L_0898FAF8;
    case 183u: goto L_0898FB08;
    case 184u: goto L_0898FB20;
    case 185u: goto L_0898FB40;
    case 186u: goto L_0898FB50;
    case 187u: goto L_0898FB58;
    case 188u: goto L_0898FB64;
    case 189u: goto L_0898FB80;
    case 190u: goto L_0898FBB0;
    case 191u: goto L_0898FBD0;
    case 192u: goto L_0898FBD8;
    case 193u: goto L_0898FBE4;
    case 194u: goto L_0898FBF0;
    case 195u: goto L_0898FC14;
    case 196u: goto L_0898FC34;
    case 197u: goto L_0898FC54;
    case 198u: goto L_0898FC64;
    case 199u: goto L_0898FC6C;
    case 200u: goto L_0898FC78;
    case 201u: goto L_0898FC94;
    case 202u: goto L_0898FCC8;
    case 203u: goto L_0898FCE0;
    case 204u: goto L_0898FCE8;
    case 205u: goto L_0898FCF4;
    case 206u: goto L_0898FD00;
    case 207u: goto L_0898FD28;
    case 208u: goto L_0898FD48;
    case 209u: goto L_0898FD68;
    case 210u: goto L_0898FD70;
    case 211u: goto L_0898FD78;
    case 212u: goto L_0898FD8C;
    case 213u: goto L_0898FD94;
    case 214u: goto L_0898FD9C;
    case 215u: goto L_0898FDB0;
    case 216u: goto L_0898FDD0;
    case 217u: goto L_0898FDD8;
    case 218u: goto L_0898FDE0;
    case 219u: goto L_0898FDF4;
    case 220u: goto L_0898FDFC;
    case 221u: goto L_0898FE18;
    case 222u: goto L_0898FE38;
    case 223u: goto L_0898FE50;
    case 224u: goto L_0898FE60;
    case 225u: goto L_0898FE68;
    case 226u: goto L_0898FE6C;
    case 227u: goto L_0898FE80;
    case 228u: goto L_0898FE88;
    case 229u: goto L_0898FE90;
    case 230u: goto L_0898FEA8;
    case 231u: goto L_0898FEB8;
    case 232u: goto L_0898FEC4;
    case 233u: goto L_0898FECC;
    case 234u: goto L_0898FED4;
    case 235u: goto L_0898FEDC;
    case 236u: goto L_0898FEE4;
    case 237u: goto L_0898FEF4;
    case 238u: goto L_0898FEF8;
    case 239u: goto L_0898FF00;
    case 240u: goto L_0898FF0C;
    case 241u: goto L_0898FF14;
    case 242u: goto L_0898FF1C;
    case 243u: goto L_0898FF24;
    case 244u: goto L_0898FF2C;
    case 245u: goto L_0898FF3C;
    case 246u: goto L_0898FF40;
    case 247u: goto L_0898FF48;
    case 248u: goto L_0898FF58;
    case 249u: goto L_0898FF64;
    case 250u: goto L_0898FF6C;
    case 251u: goto L_0898FF74;
    case 252u: goto L_0898FF7C;
    case 253u: goto L_0898FF9C;
    case 254u: goto L_0898FFA0;
    case 255u: goto L_0898FFA8;
    case 256u: goto L_0898FFB8;
    case 257u: goto L_0898FFC4;
    case 258u: goto L_0898FFCC;
    case 259u: goto L_0898FFD4;
    case 260u: goto L_0898FFDC;
    case 261u: goto L_0898FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898F000:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(540), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 178u, 0x0898ED24u>(ctx, &aot_mem); return;
L_0898F008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(13064)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[20] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898F128;
      }
      goto L_0898F044;
    }
L_0898F044:
    aot_gpr[18] = ((aot_gpr[4] >> 1u) & 0x00000001u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F098;
      }
      goto L_0898F050;
    }
L_0898F050:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(13864));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0898F098;
      }
      goto L_0898F064;
    }
L_0898F064:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(13868));
    aot_gpr[31] = (0x0898F074u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F074u) goto L_0898F074;
    return;
L_0898F074:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(13864)));
      if (branch_taken) {
          goto L_0898F178;
      }
      goto L_0898F084;
    }
L_0898F084:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(540)));
    goto L_0898F088;
L_0898F088:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F258;
      }
      goto L_0898F094;
    }
L_0898F094:
    aot_gpr[16] = (2217u << 16u);
    goto L_0898F098;
L_0898F098:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F0A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F0A8u) goto L_0898F0A8;
    return;
L_0898F0A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898F12C;
      }
      goto L_0898F0B0;
    }
L_0898F0B0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (aot_gpr[20] & 1u);
      if (branch_taken) {
          goto L_0898F114;
      }
      goto L_0898F0B8;
    }
L_0898F0B8:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(13864));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0898F110;
      }
      goto L_0898F0CC;
    }
L_0898F0CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2804)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F0E4u);
    aot_gpr[21] = (2217u << 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F0E4u) goto L_0898F0E4;
    return;
L_0898F0E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(13864)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[7] = (aot_gpr[21] + static_cast<std::uint32_t>(13204));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0898F104u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 90u, 0x0898E62Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F104u) goto L_0898F104;
    return;
L_0898F104:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[22] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F1B0;
      }
      goto L_0898F110;
    }
L_0898F110:
    aot_gpr[2] = (aot_gpr[20] & 1u);
    goto L_0898F114;
L_0898F114:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F128;
      }
      goto L_0898F11C;
    }
L_0898F11C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(13852)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F160;
      }
      goto L_0898F128;
    }
L_0898F128:
    aot_gpr[3] = (0u + 0u);
    goto L_0898F12C;
L_0898F12C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F160:
    aot_gpr[31] = (0x0898F168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 80u, 0x0898E584u>(ctx, &aot_mem) && ctx.pc == 0x0898F168u) goto L_0898F168;
    return;
L_0898F168:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898F12C;
      }
      goto L_0898F170;
    }
L_0898F170:
    aot_gpr[3] = (0u + 0u);
    goto L_0898F12C;
L_0898F178:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(532)));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(13876));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(13884));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(53));
    aot_gpr[31] = (0x0898F198u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F198u) goto L_0898F198;
    return;
L_0898F198:
    aot_gpr[31] = (0x0898F1A0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(13868));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x0898F1A0u) goto L_0898F1A0;
    return;
L_0898F1A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(540)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(540), aot_gpr[3]);
    goto L_0898F088;
L_0898F1B0:
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(13068));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898F1C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F1C0u) goto L_0898F1C0;
    return;
L_0898F1C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2804)));
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F1D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(13876));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F1D8u) goto L_0898F1D8;
    return;
L_0898F1D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[20] & 1u);
      if (branch_taken) {
          goto L_0898F114;
      }
      goto L_0898F1E0;
    }
L_0898F1E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(53));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[20] & 1u);
      if (branch_taken) {
          goto L_0898F114;
      }
      goto L_0898F1F0;
    }
L_0898F1F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[20] & 1u);
      if (branch_taken) {
          goto L_0898F114;
      }
      goto L_0898F200;
    }
L_0898F200:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[21] + static_cast<std::uint32_t>(13204));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x0898F214u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F214u) goto L_0898F214;
    return;
L_0898F214:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(536)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u | 50009u);
      if (branch_taken) {
          goto L_0898F2A0;
      }
      goto L_0898F224;
    }
L_0898F224:
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(13864));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(13068));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F238u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F238u) goto L_0898F238;
    return;
L_0898F238:
    aot_gpr[31] = (0x0898F240u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(13864)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x0898F240u) goto L_0898F240;
    return;
L_0898F240:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898F250u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F250u) goto L_0898F250;
    return;
L_0898F250:
    aot_gpr[2] = (aot_gpr[20] & 1u);
    goto L_0898F114;
L_0898F258:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(13716));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(136));
    aot_gpr[31] = (0x0898F26Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F26Cu) goto L_0898F26C;
    return;
L_0898F26C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(13864)));
    aot_gpr[2] = (0u | 50008u);
    aot_gpr[31] = (0x0898F27Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x0898F27Cu) goto L_0898F27C;
    return;
L_0898F27C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(544)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898F290u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(548));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F290u) goto L_0898F290;
    return;
L_0898F290:
    jump_target = aot_gpr[17];
    aot_gpr[31] = (0x0898F298u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F298u) goto L_0898F298;
    return;
L_0898F298:
    aot_gpr[16] = (2217u << 16u);
    goto L_0898F098;
L_0898F2A0:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13206));
    aot_gpr[31] = (0x0898F2B0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F2B0u) goto L_0898F2B0;
    return;
L_0898F2B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[2] & 15u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[2]))));
      if (branch_taken) {
          goto L_0898F2D4;
      }
      goto L_0898F2C0;
    }
L_0898F2C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u | 50012u);
      if (branch_taken) {
          goto L_0898F224;
      }
      goto L_0898F2CC;
    }
L_0898F2CC:
    aot_gpr[5] = (0u | 50011u);
    goto L_0898F224;
L_0898F2D4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[5] = (0u | 50011u);
      if (branch_taken) {
          goto L_0898F224;
      }
      goto L_0898F2DC;
    }
L_0898F2DC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13208));
    aot_gpr[31] = (0x0898F2ECu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F2ECu) goto L_0898F2EC;
    return;
L_0898F2EC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13210));
    aot_gpr[31] = (0x0898F2FCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F2FCu) goto L_0898F2FC;
    return;
L_0898F2FC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0898F36C;
      }
      goto L_0898F30C;
    }
L_0898F30C:
    aot_gpr[18] = (0u + 0u);
    aot_gpr[2] = (2217u << 16u);
    goto L_0898F314;
L_0898F314:
    aot_gpr[21] = (aot_gpr[2] + static_cast<std::uint32_t>(13204));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0898F330;
L_0898F320:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u | 50010u);
      if (branch_taken) {
          goto L_0898F224;
      }
      goto L_0898F330;
    }
L_0898F330:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[21]);
    aot_gpr[31] = (0x0898F33Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_0898FF1C;
L_0898F33C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[17]);
      if (branch_taken) {
          goto L_0898F320;
      }
      goto L_0898F348;
    }
L_0898F348:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (0u | 50010u);
        goto L_0898F224;
    }
    goto L_0898F358;
L_0898F358:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F314;
      }
      goto L_0898F36C;
    }
L_0898F36C:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[23] = (0u + 0u);
      if (branch_taken) {
          goto L_0898F488;
      }
      goto L_0898F374;
    }
L_0898F374:
    aot_gpr[3] = (2217u << 16u);
    goto L_0898F378;
L_0898F378:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13068));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13068));
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_gpr[21] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898F478;
      }
      goto L_0898F3AC;
    }
L_0898F3AC:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898F3C0;
L_0898F3B4:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[3]);
      if (branch_taken) {
          goto L_0898F3E4;
      }
      goto L_0898F3BC;
    }
L_0898F3BC:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898F3C0;
L_0898F3C0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(13204));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[31] = (0x0898F3D0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_0898FF1C;
L_0898F3D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 192u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898F3B4;
      }
      goto L_0898F3E0;
    }
L_0898F3E0:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    goto L_0898F3E4;
L_0898F3E4:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F458;
      }
      goto L_0898F3F0;
    }
L_0898F3F0:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13204));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[31] = (0x0898F400u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F400u) goto L_0898F400;
    return;
L_0898F400:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(13204));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[31] = (0x0898F418u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F418u) goto L_0898F418;
    return;
L_0898F418:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13204));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[31] = (0x0898F430u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 34u, 0x089903A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F430u) goto L_0898F430;
    return;
L_0898F430:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0898F4A8;
      }
      goto L_0898F440;
    }
L_0898F440:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0898F444;
L_0898F444:
    aot_gpr[2] = (aot_gpr[5] & 65535u);
    goto L_0898F448;
L_0898F448:
    aot_gpr[17] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[17] ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
        goto L_0898F47C;
    }
    goto L_0898F458;
L_0898F458:
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(13864));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(13068));
    aot_gpr[2] = (0u | 50010u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898F470u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F470u) goto L_0898F470;
    return;
L_0898F470:
    // nop
    goto L_0898F238;
L_0898F478:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_0898F47C;
L_0898F47C:
    aot_gpr[2] = (aot_gpr[23] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F378;
      }
      goto L_0898F488;
    }
L_0898F488:
    aot_gpr[16] = (aot_gpr[19] + static_cast<std::uint32_t>(13864));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(544)));
    aot_gpr[2] = (aot_gpr[22] + static_cast<std::uint32_t>(13068));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898F4A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(132), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F4A0u) goto L_0898F4A0;
    return;
L_0898F4A0:
    // nop
    goto L_0898F238;
L_0898F4A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0898F444;
      }
      goto L_0898F4B4;
    }
L_0898F4B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[5] & 65535u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_0898F448;
      }
      goto L_0898F4C4;
    }
L_0898F4C4:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13204));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[4]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(13068));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    goto L_0898F444;
L_0898F500:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0898F008;
L_0898F508:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0898F538u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 186u, 0x0898DD48u>(ctx, &aot_mem) && ctx.pc == 0x0898F538u) goto L_0898F538;
    return;
L_0898F538:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898F588;
      }
      goto L_0898F540;
    }
L_0898F540:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898F5A8;
      }
      goto L_0898F54C;
    }
L_0898F54C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898F564;
      }
      goto L_0898F558;
    }
L_0898F558:
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_0898F604;
    }
    goto L_0898F560;
L_0898F560:
    aot_gpr[2] = (2217u << 16u);
    goto L_0898F564;
L_0898F564:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F580u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F580u) goto L_0898F580;
    return;
L_0898F580:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898F5D0;
      }
      goto L_0898F588;
    }
L_0898F588:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F5A8:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 50005u);
      if (branch_taken) {
          goto L_0898F54C;
      }
      goto L_0898F5B0;
    }
L_0898F5B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F5D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898F5E0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 62u, 0x0898E450u>(ctx, &aot_mem) && ctx.pc == 0x0898F5E0u) goto L_0898F5E0;
    return;
L_0898F5E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F604:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898F610u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 193u, 0x0898DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F610u) goto L_0898F610;
    return;
L_0898F610:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898F588;
      }
      goto L_0898F618;
    }
L_0898F618:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_0898F588;
    }
    goto L_0898F624;
L_0898F624:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0898F560;
L_0898F630:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F670u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F670u) goto L_0898F670;
    return;
L_0898F670:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F67C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F6BCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F6BCu) goto L_0898F6BC;
    return;
L_0898F6BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F6C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F6F4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F6F4u) goto L_0898F6F4;
    return;
L_0898F6F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F700:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898F72Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898F72Cu) goto L_0898F72C;
    return;
L_0898F72C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F738:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(100)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F758:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[10] = (aot_gpr[2] + static_cast<std::uint32_t>(13852));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(13852)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
      if (branch_taken) {
          goto L_0898F7A0;
      }
      goto L_0898F794;
    }
L_0898F794:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F7A0:
    aot_gpr[31] = (0x0898F7A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 120u, 0x0898E85Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F7A8u) goto L_0898F7A8;
    return;
L_0898F7A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F7B4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2804)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(104)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F7CC:
    aot_gpr[4] = ((aot_gpr[4] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    aot_gpr[2] = (16384u << 16u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0898F810;
      }
      goto L_0898F7DC;
    }
L_0898F7DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_0898F7FC;
      }
      goto L_0898F7E4;
    }
L_0898F7E4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (49152u << 16u);
      if (branch_taken) {
          goto L_0898F888;
      }
      goto L_0898F7EC;
    }
L_0898F7EC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_0898F870;
      }
      goto L_0898F7F4;
    }
L_0898F7F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F7FC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_0898F7F4;
      }
      goto L_0898F804;
    }
L_0898F804:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(136));
    goto L_0898F81C;
L_0898F810:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(392));
    goto L_0898F81C;
L_0898F81C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F868;
      }
      goto L_0898F824;
    }
L_0898F824:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0898F87C;
      }
      goto L_0898F82C;
    }
L_0898F82C:
    aot_gpr[7] = (aot_gpr[4] + 0u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    goto L_0898F834;
L_0898F834:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0898F834;
      }
      goto L_0898F860;
    }
L_0898F860:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F868:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F870:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(264));
    goto L_0898F81C;
L_0898F87C:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    (void)rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem); return;
L_0898F888:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(8));
    goto L_0898F81C;
L_0898F898:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898F8BC;
      }
      goto L_0898F8A0;
    }
L_0898F8A0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0898F8A8;
L_0898F8A8:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898F8C4;
      }
      goto L_0898F8B4;
    }
L_0898F8B4:
    if (aot_gpr[3] != aot_gpr[5]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0898F8A8;
    }
    goto L_0898F8BC;
L_0898F8BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F8C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F8CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = ((aot_gpr[4] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    aot_gpr[2] = (16384u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898F9D0;
      }
      goto L_0898F8F0;
    }
L_0898F8F0:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (32768u << 16u);
      if (branch_taken) {
          goto L_0898F98C;
      }
      goto L_0898F8FC;
    }
L_0898F8FC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (49152u << 16u);
      if (branch_taken) {
          goto L_0898F9F4;
      }
      goto L_0898F904;
    }
L_0898F904:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_0898F9E4;
      }
      goto L_0898F90C;
    }
L_0898F90C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0898F910;
L_0898F910:
    aot_gpr[17] = (0u + 0u);
    goto L_0898F914;
L_0898F914:
    aot_gpr[31] = (0x0898F91Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_0898F898;
L_0898F91C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0898F928;
      }
      goto L_0898F924;
    }
L_0898F924:
    if (aot_gpr[16] == 0u) aot_gpr[16] = (aot_gpr[2]);
    goto L_0898F928;
L_0898F928:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898F974;
      }
      goto L_0898F930;
    }
L_0898F930:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898F9A8;
      }
      goto L_0898F938;
    }
L_0898F938:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    goto L_0898F944;
L_0898F944:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0898F944;
      }
      goto L_0898F970;
    }
L_0898F970:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_0898F974;
L_0898F974:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F98C:
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_0898F910;
    }
    goto L_0898F994;
L_0898F994:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(136));
    goto L_0898F914;
L_0898F9A8:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898F9B4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F9B4u) goto L_0898F9B4;
    return;
L_0898F9B4:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F9D0:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(392));
    goto L_0898F914;
L_0898F9E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(264));
    goto L_0898F914;
L_0898F9F4:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[16] = (0u + 0u);
    aot_gpr[17] = (aot_gpr[3] + static_cast<std::uint32_t>(8));
    goto L_0898F914;
L_0898FA08:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0898FA28;
      }
      goto L_0898FA1C;
    }
L_0898FA1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_0898FA30;
    }
    goto L_0898FA28;
L_0898FA28:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FA30:
    if (aot_gpr[3] == aot_gpr[5]) {
    aot_gpr[5] = (0u + 0u);
        goto L_0898FA5C;
    }
    goto L_0898FA38;
L_0898FA38:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA28;
      }
      goto L_0898FA40;
    }
L_0898FA40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898FA28;
      }
      goto L_0898FA4C;
    }
L_0898FA4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898FA38;
      }
      goto L_0898FA58;
    }
L_0898FA58:
    aot_gpr[5] = (0u + 0u);
    goto L_0898FA5C;
L_0898FA5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FA64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0898FA80u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FA80u) goto L_0898FA80;
    return;
L_0898FA80:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FA90u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0898FA90u) goto L_0898FA90;
    return;
L_0898FA90:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FA9Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FA9Cu) goto L_0898FA9C;
    return;
L_0898FA9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FAA8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FAA8u) goto L_0898FAA8;
    return;
L_0898FAA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FAB4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FAB4u) goto L_0898FAB4;
    return;
L_0898FAB4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FAC4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0898FAC4u) goto L_0898FAC4;
    return;
L_0898FAC4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FAD0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FAD0u) goto L_0898FAD0;
    return;
L_0898FAD0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FADCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FADCu) goto L_0898FADC;
    return;
L_0898FADC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898FAE8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FAE8u) goto L_0898FAE8;
    return;
L_0898FAE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x0898FAF8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0898FAF8u) goto L_0898FAF8;
    return;
L_0898FAF8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(132));
    aot_gpr[31] = (0x0898FB08u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x0898FB08u) goto L_0898FB08;
    return;
L_0898FB08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FB20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0898FB40u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    goto L_0898FA64;
L_0898FB40:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898FB64;
      }
      goto L_0898FB50;
    }
L_0898FB50:
    aot_gpr[31] = (0x0898FB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FB58u) goto L_0898FB58;
    return;
L_0898FB58:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0898FB64u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x0898FB64u) goto L_0898FB64;
    return;
L_0898FB64:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FB80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    aot_gpr[31] = (0x0898FBB0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x0898FBB0u) goto L_0898FBB0;
    return;
L_0898FBB0:
    aot_gpr[2] = (2220u << 16u);
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(-27856));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(180));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898FC14;
      }
      goto L_0898FBD0;
    }
L_0898FBD0:
    aot_gpr[31] = (0x0898FBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x0898FBD8u) goto L_0898FBD8;
    return;
L_0898FBD8:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0898FBE4u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_0898FB20;
L_0898FBE4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0898FBF0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x0898FBF0u) goto L_0898FBF0;
    return;
L_0898FBF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0898FC14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898FC14u) goto L_0898FC14;
    return;
L_0898FC14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0898FC54u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    goto L_0898FA64;
L_0898FC54:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0898FC78;
      }
      goto L_0898FC64;
    }
L_0898FC64:
    aot_gpr[31] = (0x0898FC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x0898FC6Cu) goto L_0898FC6C;
    return;
L_0898FC6C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x0898FC78u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x0898FC78u) goto L_0898FC78;
    return;
L_0898FC78:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FC94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[18] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    aot_gpr[31] = (0x0898FCC8u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x0898FCC8u) goto L_0898FCC8;
    return;
L_0898FCC8:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(180));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27856)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898FD28;
      }
      goto L_0898FCE0;
    }
L_0898FCE0:
    aot_gpr[31] = (0x0898FCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x0898FCE8u) goto L_0898FCE8;
    return;
L_0898FCE8:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x0898FCF4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_0898FC34;
L_0898FCF4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898FD00u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x0898FD00u) goto L_0898FD00;
    return;
L_0898FD00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(-27856));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27856)));
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898FD28u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898FD28u) goto L_0898FD28;
    return;
L_0898FD28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FD48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15136)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0898FD8C;
      }
      goto L_0898FD68;
    }
L_0898FD68:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898FD70u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898FD70u) goto L_0898FD70;
    return;
L_0898FD70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898FD9C;
      }
      goto L_0898FD78;
    }
L_0898FD78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FD8C:
    aot_gpr[31] = (0x0898FD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0898FD94u) goto L_0898FD94;
    return;
L_0898FD94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898FD78;
      }
      goto L_0898FD9C;
    }
L_0898FD9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FDB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_0898FE18;
      }
      goto L_0898FDD0;
    }
L_0898FDD0:
    aot_gpr[31] = (0x0898FDD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898FD48;
L_0898FDD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898FDFC;
      }
      goto L_0898FDE0;
    }
L_0898FDE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898FE18;
      }
      goto L_0898FDF4;
    }
L_0898FDF4:
    aot_gpr[31] = (0x0898FDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898FDFCu) goto L_0898FDFC;
    return;
L_0898FDFC:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FE18:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FE38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898FE6C;
      }
      goto L_0898FE50;
    }
L_0898FE50:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15128)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0898FE80;
      }
      goto L_0898FE60;
    }
L_0898FE60:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898FE68u);
    aot_gpr[4] = (aot_gpr[3] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898FE68u) goto L_0898FE68;
    return;
L_0898FE68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898FE6C;
L_0898FE6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FE80:
    aot_gpr[31] = (0x0898FE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0898FE88u) goto L_0898FE88;
    return;
L_0898FE88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898FE6C;
L_0898FE90:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(15136), aot_gpr[4]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(15128), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FEA8:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(15132), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FEB8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[5]))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FECC;
      }
      goto L_0898FEC4;
    }
L_0898FEC4:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[2] = (0u + 0u);
    goto L_0898FECC;
L_0898FECC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FED4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FEF8;
      }
      goto L_0898FEDC;
    }
L_0898FEDC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898FEF4;
      }
      goto L_0898FEE4;
    }
L_0898FEE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FEF4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898FEF8;
L_0898FEF8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF00:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FF14;
      }
      goto L_0898FF0C;
    }
L_0898FF0C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[2] = (0u + 0u);
    goto L_0898FF14;
L_0898FF14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FF40;
      }
      goto L_0898FF24;
    }
L_0898FF24:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898FF3C;
      }
      goto L_0898FF2C;
    }
L_0898FF2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF3C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898FF40;
L_0898FF40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF48:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[5]))));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 8u));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FF64;
      }
      goto L_0898FF58;
    }
L_0898FF58:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0898FF64;
L_0898FF64:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FFA0;
      }
      goto L_0898FF74;
    }
L_0898FF74:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_0898FF9C;
      }
      goto L_0898FF7C;
    }
L_0898FF7C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF9C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_0898FFA0;
L_0898FFA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FFA8:
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (aot_gpr[5] >> 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898FFC4;
      }
      goto L_0898FFB8;
    }
L_0898FFB8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0898FFC4;
L_0898FFC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FFCC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 1u, 0x08990000u>(ctx, &aot_mem); return;
      }
      goto L_0898FFD4;
    }
L_0898FFD4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_0898FFFC;
      }
      goto L_0898FFDC;
    }
L_0898FFDC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FFFC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    ctx.pc = 0x08990000u; return;
}

void recomp_unit_0395(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0395_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_395(Runtime &runtime) {
    runtime.register_generated_unit(395u, 0x0898F000u, 4096u, &recomp_unit_0395, &recomp_unit_0395_entry);
    runtime.register_function(0x0898F000u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F008u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F044u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F050u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F064u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F074u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F084u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F088u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F094u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F098u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F0A8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F0B0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F0B8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F0CCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F0E4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F104u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F110u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F114u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F11Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F128u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F12Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F160u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F168u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F170u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F178u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F198u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F1A0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F1B0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F1C0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F1D8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F1E0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F1F0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F200u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F214u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F224u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F238u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F240u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F250u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F258u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F26Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F27Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F290u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F298u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2A0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2B0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2C0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2CCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2D4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2DCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2ECu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F2FCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F30Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F314u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F320u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F330u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F33Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F348u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F358u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F36Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F374u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F378u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3ACu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3B4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3BCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3C0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3D0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3E0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3E4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F3F0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F400u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F418u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F430u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F440u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F444u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F448u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F458u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F470u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F478u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F47Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F488u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F4A0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F4A8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F4B4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F4C4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F500u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F508u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F538u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F540u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F54Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F558u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F560u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F564u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F580u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F588u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F5A8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F5B0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F5D0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F5E0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F604u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F610u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F618u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F624u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F630u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F644u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F670u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F67Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F6BCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F6C8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F6F4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F700u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F72Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F738u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F758u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F794u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7A0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7A8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7B4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7CCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7DCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7E4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7ECu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7F4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F7FCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F804u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F810u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F81Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F824u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F82Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F834u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F860u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F868u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F870u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F87Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F888u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F898u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8A0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8A8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8B4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8BCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8C4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8CCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8F0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F8FCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F904u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F90Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F910u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F914u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F91Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F924u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F928u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F930u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F938u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F944u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F970u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F974u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F98Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F994u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F9A8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F9B4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F9D0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F9E4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898F9F4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA08u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA1Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA28u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA30u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA38u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA40u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA4Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA58u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA5Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA64u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA80u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA90u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FA9Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FAA8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FAB4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FAC4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FAD0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FADCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FAE8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FAF8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB08u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB20u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB40u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB50u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB58u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB64u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FB80u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FBB0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FBD0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FBD8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FBE4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FBF0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC14u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC34u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC54u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC64u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC6Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC78u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FC94u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FCC8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FCE0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FCE8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FCF4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD00u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD28u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD48u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD68u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD70u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD78u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD8Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD94u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FD9Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FDB0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FDD0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FDD8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FDE0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FDF4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FDFCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE18u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE38u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE50u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE60u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE68u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE6Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE80u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE88u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FE90u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEA8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEB8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEC4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FECCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FED4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEDCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEE4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEF4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FEF8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF00u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF0Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF14u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF1Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF24u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF2Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF3Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF40u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF48u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF58u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF64u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF6Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF74u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF7Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FF9Cu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFA0u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFA8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFB8u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFC4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFCCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFD4u, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFDCu, &recomp_unit_0395, "recomp_unit_0395");
    runtime.register_function(0x0898FFFCu, &recomp_unit_0395, "recomp_unit_0395");
}
} // namespace psprecomp
