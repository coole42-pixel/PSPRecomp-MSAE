#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0506[1022] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0,
    0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0,
    36, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 104, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    109, 110, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 117, 118, 0, 119, 0, 120, 0, 0, 121, 122, 0, 123,
    0, 0, 124, 0, 125, 126, 0, 127, 0, 128, 0, 0, 129, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0,
    151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 156, 0, 157, 0, 158, 159, 0, 160, 0, 161, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 167,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 176, 0, 0, 0, 0, 0, 177,
    0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0,
    0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 230, 0, 231, 0, 0,
    0, 232, 0, 0, 233, 234, 0, 235, 0, 0, 0, 236, 0, 0, 237, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0,
    0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
};
void recomp_unit_0506_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089FE000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0506[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089FE000;
    case 2u: goto L_089FE010;
    case 3u: goto L_089FE018;
    case 4u: goto L_089FE06C;
    case 5u: goto L_089FE088;
    case 6u: goto L_089FE098;
    case 7u: goto L_089FE0AC;
    case 8u: goto L_089FE0C0;
    case 9u: goto L_089FE0CC;
    case 10u: goto L_089FE0DC;
    case 11u: goto L_089FE0F8;
    case 12u: goto L_089FE108;
    case 13u: goto L_089FE114;
    case 14u: goto L_089FE130;
    case 15u: goto L_089FE140;
    case 16u: goto L_089FE14C;
    case 17u: goto L_089FE16C;
    case 18u: goto L_089FE184;
    case 19u: goto L_089FE194;
    case 20u: goto L_089FE1A8;
    case 21u: goto L_089FE1C0;
    case 22u: goto L_089FE1EC;
    case 23u: goto L_089FE1F8;
    case 24u: goto L_089FE210;
    case 25u: goto L_089FE218;
    case 26u: goto L_089FE220;
    case 27u: goto L_089FE22C;
    case 28u: goto L_089FE234;
    case 29u: goto L_089FE23C;
    case 30u: goto L_089FE244;
    case 31u: goto L_089FE24C;
    case 32u: goto L_089FE250;
    case 33u: goto L_089FE258;
    case 34u: goto L_089FE260;
    case 35u: goto L_089FE278;
    case 36u: goto L_089FE280;
    case 37u: goto L_089FE288;
    case 38u: goto L_089FE294;
    case 39u: goto L_089FE29C;
    case 40u: goto L_089FE2A4;
    case 41u: goto L_089FE2AC;
    case 42u: goto L_089FE2B4;
    case 43u: goto L_089FE2D8;
    case 44u: goto L_089FE2E0;
    case 45u: goto L_089FE314;
    case 46u: goto L_089FE324;
    case 47u: goto L_089FE330;
    case 48u: goto L_089FE33C;
    case 49u: goto L_089FE34C;
    case 50u: goto L_089FE354;
    case 51u: goto L_089FE360;
    case 52u: goto L_089FE36C;
    case 53u: goto L_089FE388;
    case 54u: goto L_089FE394;
    case 55u: goto L_089FE3A0;
    case 56u: goto L_089FE3C4;
    case 57u: goto L_089FE3CC;
    case 58u: goto L_089FE3EC;
    case 59u: goto L_089FE408;
    case 60u: goto L_089FE424;
    case 61u: goto L_089FE438;
    case 62u: goto L_089FE454;
    case 63u: goto L_089FE45C;
    case 64u: goto L_089FE474;
    case 65u: goto L_089FE490;
    case 66u: goto L_089FE4A4;
    case 67u: goto L_089FE4C0;
    case 68u: goto L_089FE4F4;
    case 69u: goto L_089FE4FC;
    case 70u: goto L_089FE508;
    case 71u: goto L_089FE534;
    case 72u: goto L_089FE53C;
    case 73u: goto L_089FE568;
    case 74u: goto L_089FE56C;
    case 75u: goto L_089FE574;
    case 76u: goto L_089FE5A0;
    case 77u: goto L_089FE5CC;
    case 78u: goto L_089FE5F8;
    case 79u: goto L_089FE624;
    case 80u: goto L_089FE62C;
    case 81u: goto L_089FE658;
    case 82u: goto L_089FE680;
    case 83u: goto L_089FE698;
    case 84u: goto L_089FE6A0;
    case 85u: goto L_089FE6BC;
    case 86u: goto L_089FE6C4;
    case 87u: goto L_089FE6CC;
    case 88u: goto L_089FE6D4;
    case 89u: goto L_089FE6D8;
    case 90u: goto L_089FE6F0;
    case 91u: goto L_089FE708;
    case 92u: goto L_089FE710;
    case 93u: goto L_089FE72C;
    case 94u: goto L_089FE734;
    case 95u: goto L_089FE738;
    case 96u: goto L_089FE750;
    case 97u: goto L_089FE75C;
    case 98u: goto L_089FE764;
    case 99u: goto L_089FE784;
    case 100u: goto L_089FE790;
    case 101u: goto L_089FE798;
    case 102u: goto L_089FE7A4;
    case 103u: goto L_089FE7C0;
    case 104u: goto L_089FE7C4;
    case 105u: goto L_089FE7C8;
    case 106u: goto L_089FE7D0;
    case 107u: goto L_089FE7D8;
    case 108u: goto L_089FE7E4;
    case 109u: goto L_089FE800;
    case 110u: goto L_089FE804;
    case 111u: goto L_089FE808;
    case 112u: goto L_089FE810;
    case 113u: goto L_089FE81C;
    case 114u: goto L_089FE824;
    case 115u: goto L_089FE830;
    case 116u: goto L_089FE84C;
    case 117u: goto L_089FE850;
    case 118u: goto L_089FE854;
    case 119u: goto L_089FE85C;
    case 120u: goto L_089FE864;
    case 121u: goto L_089FE870;
    case 122u: goto L_089FE874;
    case 123u: goto L_089FE87C;
    case 124u: goto L_089FE888;
    case 125u: goto L_089FE890;
    case 126u: goto L_089FE894;
    case 127u: goto L_089FE89C;
    case 128u: goto L_089FE8A4;
    case 129u: goto L_089FE8B0;
    case 130u: goto L_089FE8B4;
    case 131u: goto L_089FE8C8;
    case 132u: goto L_089FE8DC;
    case 133u: goto L_089FE8E8;
    case 134u: goto L_089FE8F4;
    case 135u: goto L_089FE900;
    case 136u: goto L_089FE90C;
    case 137u: goto L_089FE91C;
    case 138u: goto L_089FE928;
    case 139u: goto L_089FE930;
    case 140u: goto L_089FE94C;
    case 141u: goto L_089FE954;
    case 142u: goto L_089FE95C;
    case 143u: goto L_089FE964;
    case 144u: goto L_089FE998;
    case 145u: goto L_089FE9AC;
    case 146u: goto L_089FE9C4;
    case 147u: goto L_089FE9E0;
    case 148u: goto L_089FE9E8;
    case 149u: goto L_089FE9F0;
    case 150u: goto L_089FE9F8;
    case 151u: goto L_089FEA00;
    case 152u: goto L_089FEA08;
    case 153u: goto L_089FEA10;
    case 154u: goto L_089FEA1C;
    case 155u: goto L_089FEA24;
    case 156u: goto L_089FEA28;
    case 157u: goto L_089FEA30;
    case 158u: goto L_089FEA38;
    case 159u: goto L_089FEA3C;
    case 160u: goto L_089FEA44;
    case 161u: goto L_089FEA4C;
    case 162u: goto L_089FEA50;
    case 163u: goto L_089FEA58;
    case 164u: goto L_089FEA60;
    case 165u: goto L_089FEA68;
    case 166u: goto L_089FEA70;
    case 167u: goto L_089FEA7C;
    case 168u: goto L_089FEA8C;
    case 169u: goto L_089FEAA8;
    case 170u: goto L_089FEAB0;
    case 171u: goto L_089FEAB8;
    case 172u: goto L_089FEAC4;
    case 173u: goto L_089FEAD0;
    case 174u: goto L_089FEAD8;
    case 175u: goto L_089FEAE0;
    case 176u: goto L_089FEAE4;
    case 177u: goto L_089FEAFC;
    case 178u: goto L_089FEB04;
    case 179u: goto L_089FEB14;
    case 180u: goto L_089FEB1C;
    case 181u: goto L_089FEB34;
    case 182u: goto L_089FEB3C;
    case 183u: goto L_089FEB4C;
    case 184u: goto L_089FEB54;
    case 185u: goto L_089FEB5C;
    case 186u: goto L_089FEB64;
    case 187u: goto L_089FEB6C;
    case 188u: goto L_089FEB74;
    case 189u: goto L_089FEB88;
    case 190u: goto L_089FEBBC;
    case 191u: goto L_089FEBE4;
    case 192u: goto L_089FEC00;
    case 193u: goto L_089FEC18;
    case 194u: goto L_089FEC28;
    case 195u: goto L_089FEC34;
    case 196u: goto L_089FEC40;
    case 197u: goto L_089FEC48;
    case 198u: goto L_089FEC54;
    case 199u: goto L_089FEC5C;
    case 200u: goto L_089FEC6C;
    case 201u: goto L_089FEC78;
    case 202u: goto L_089FEC84;
    case 203u: goto L_089FEC8C;
    case 204u: goto L_089FEC9C;
    case 205u: goto L_089FECB8;
    case 206u: goto L_089FECD8;
    case 207u: goto L_089FECE0;
    case 208u: goto L_089FECFC;
    case 209u: goto L_089FED04;
    case 210u: goto L_089FED14;
    case 211u: goto L_089FED3C;
    case 212u: goto L_089FED78;
    case 213u: goto L_089FED88;
    case 214u: goto L_089FED90;
    case 215u: goto L_089FEDA0;
    case 216u: goto L_089FEDB4;
    case 217u: goto L_089FEDD8;
    case 218u: goto L_089FEDE0;
    case 219u: goto L_089FEDF0;
    case 220u: goto L_089FEE00;
    case 221u: goto L_089FEE08;
    case 222u: goto L_089FEE14;
    case 223u: goto L_089FEE24;
    case 224u: goto L_089FEE30;
    case 225u: goto L_089FEE3C;
    case 226u: goto L_089FEE44;
    case 227u: goto L_089FEE4C;
    case 228u: goto L_089FEE5C;
    case 229u: goto L_089FEE68;
    case 230u: goto L_089FEE6C;
    case 231u: goto L_089FEE74;
    case 232u: goto L_089FEE84;
    case 233u: goto L_089FEE90;
    case 234u: goto L_089FEE94;
    case 235u: goto L_089FEE9C;
    case 236u: goto L_089FEEAC;
    case 237u: goto L_089FEEB8;
    case 238u: goto L_089FEEBC;
    case 239u: goto L_089FEEC4;
    case 240u: goto L_089FEED4;
    case 241u: goto L_089FEEE4;
    case 242u: goto L_089FEF28;
    case 243u: goto L_089FEF30;
    case 244u: goto L_089FEF38;
    case 245u: goto L_089FEF40;
    case 246u: goto L_089FEF48;
    case 247u: goto L_089FEF50;
    case 248u: goto L_089FEF58;
    case 249u: goto L_089FEF64;
    case 250u: goto L_089FEF74;
    case 251u: goto L_089FEF84;
    case 252u: goto L_089FEF94;
    case 253u: goto L_089FEFA8;
    case 254u: goto L_089FEFCC;
    case 255u: goto L_089FEFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089FE000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE010:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE018:
    aot_gpr[5] = (17174u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[5] = (17312u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16800u << 16u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (16840u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6736));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FE088u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FE088u) goto L_089FE088;
    return;
L_089FE088:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FE098u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 145u, 0x08A038F4u>(ctx, &aot_mem) && ctx.pc == 0x089FE098u) goto L_089FE098;
    return;
L_089FE098:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE0AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FE0C0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FE0C0u) goto L_089FE0C0;
    return;
L_089FE0C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FE0CCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 156u, 0x08A03988u>(ctx, &aot_mem) && ctx.pc == 0x089FE0CCu) goto L_089FE0CC;
    return;
L_089FE0CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE0DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12440)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FE108;
      }
      goto L_089FE0F8;
    }
L_089FE0F8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089FE108u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x089FE108u) goto L_089FE108;
    return;
L_089FE108:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12440)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FE140;
      }
      goto L_089FE130;
    }
L_089FE130:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089FE140u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE140u) goto L_089FE140;
    return;
L_089FE140:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE14C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089FE1A8;
      }
      goto L_089FE16C;
    }
L_089FE16C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FE184u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE184u) goto L_089FE184;
    return;
L_089FE184:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FE194u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 149u, 0x08A00A14u>(ctx, &aot_mem) && ctx.pc == 0x089FE194u) goto L_089FE194;
    return;
L_089FE194:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE1A8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE1C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FE2B4;
      }
      goto L_089FE1EC;
    }
L_089FE1EC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[20] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
        goto L_089FE250;
    }
    goto L_089FE1F8;
L_089FE1F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE210u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE210u) goto L_089FE210;
    return;
L_089FE210:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    goto L_089FE218;
L_089FE218:
    aot_gpr[31] = (0x089FE220u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x089FE220u) goto L_089FE220;
    return;
L_089FE220:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
        goto L_089FE250;
    }
    goto L_089FE22C;
L_089FE22C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089FE24C;
      }
      goto L_089FE234;
    }
L_089FE234:
    aot_gpr[31] = (0x089FE23Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x089FE23Cu) goto L_089FE23C;
    return;
L_089FE23C:
    if (aot_gpr[2] == aot_gpr[16]) {
    aot_gpr[17] = (0u | 1u);
        goto L_089FE244;
    }
    goto L_089FE244;
L_089FE244:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089FE218;
      }
      goto L_089FE24C;
    }
L_089FE24C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_089FE250;
L_089FE250:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2B4;
      }
      goto L_089FE258;
    }
L_089FE258:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2B4;
      }
      goto L_089FE260;
    }
L_089FE260:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE278u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE278u) goto L_089FE278;
    return;
L_089FE278:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    goto L_089FE280;
L_089FE280:
    aot_gpr[31] = (0x089FE288u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x089FE288u) goto L_089FE288;
    return;
L_089FE288:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE2B4;
      }
      goto L_089FE294;
    }
L_089FE294:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FE2B4;
      }
      goto L_089FE29C;
    }
L_089FE29C:
    aot_gpr[31] = (0x089FE2A4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x089FE2A4u) goto L_089FE2A4;
    return;
L_089FE2A4:
    if (aot_gpr[2] == aot_gpr[16]) {
    aot_gpr[17] = (0u | 2u);
        goto L_089FE2AC;
    }
    goto L_089FE2AC;
L_089FE2AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089FE280;
      }
      goto L_089FE2B4;
    }
L_089FE2B4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089FE2D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12460)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE2E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1120));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1092), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1100), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1088), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1096), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1104), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1108), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1112), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1116), aot_gpr[31]);
    aot_gpr[31] = (0x089FE314u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x089FE314u) goto L_089FE314;
    return;
L_089FE314:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FE324u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6648));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x089FE324u) goto L_089FE324;
    return;
L_089FE324:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FE5F8;
      }
      goto L_089FE330;
    }
L_089FE330:
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-6708));
    aot_gpr[31] = (0x089FE33Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FE33Cu) goto L_089FE33C;
    return;
L_089FE33C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FE34Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x089FE34Cu) goto L_089FE34C;
    return;
L_089FE34C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5CC;
      }
      goto L_089FE354;
    }
L_089FE354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE5A0;
      }
      goto L_089FE360;
    }
L_089FE360:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FE5A0;
      }
      goto L_089FE36C;
    }
L_089FE36C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6632));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089FE388u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 142u, 0x089EEBC0u>(ctx, &aot_mem) && ctx.pc == 0x089FE388u) goto L_089FE388;
    return;
L_089FE388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[19] | 0u);
        goto L_089FE56C;
    }
    goto L_089FE394;
L_089FE394:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_089FE568;
      }
      goto L_089FE3A0;
    }
L_089FE3A0:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-6700));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 772u);
    aot_gpr[31] = (0x089FE3C4u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6604));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 184u, 0x089EEEDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE3C4u) goto L_089FE3C4;
    return;
L_089FE3C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FE534;
      }
      goto L_089FE3CC;
    }
L_089FE3CC:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 780u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6660));
    aot_gpr[31] = (0x089FE3ECu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6600));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089FE3ECu) goto L_089FE3EC;
    return;
L_089FE3EC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(1040));
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-6664));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FE408u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FE408u) goto L_089FE408;
    return;
L_089FE408:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 785u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FE424u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6596));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089FE424u) goto L_089FE424;
    return;
L_089FE424:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1052));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FE438u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FE438u) goto L_089FE438;
    return;
L_089FE438:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 790u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FE454u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6584));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089FE454u) goto L_089FE454;
    return;
L_089FE454:
    aot_gpr[31] = (0x089FE45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE45Cu) goto L_089FE45C;
    return;
L_089FE45C:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(16));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(1064));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FE474u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FE474u) goto L_089FE474;
    return;
L_089FE474:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 799u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089FE490u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6572));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089FE490u) goto L_089FE490;
    return;
L_089FE490:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1076));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FE4A4u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089FE4A4u) goto L_089FE4A4;
    return;
L_089FE4A4:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 804u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FE4C0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-6560));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 176u, 0x089EEE40u>(ctx, &aot_mem) && ctx.pc == 0x089FE4C0u) goto L_089FE4C0;
    return;
L_089FE4C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (0u | 6u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x089FE4F4u);
    aot_gpr[10] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE4F4u) goto L_089FE4F4;
    return;
L_089FE4F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089FE624;
      }
      goto L_089FE4FC;
    }
L_089FE4FC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089FE508u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x089FE508u) goto L_089FE508;
    return;
L_089FE508:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE534:
    aot_gpr[31] = (0x089FE53Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x089FE53Cu) goto L_089FE53C;
    return;
L_089FE53C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-104));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE568:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089FE56C;
L_089FE56C:
    aot_gpr[31] = (0x089FE574u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x089FE574u) goto L_089FE574;
    return;
L_089FE574:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-105));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE5A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-103));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE5CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-101));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE5F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-100));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE624:
    aot_gpr[31] = (0x089FE62Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 144u, 0x089EEBF4u>(ctx, &aot_mem) && ctx.pc == 0x089FE62Cu) goto L_089FE62C;
    return;
L_089FE62C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-102));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1096)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE658:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089FE6F0;
      }
      goto L_089FE680;
    }
L_089FE680:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE698u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE698u) goto L_089FE698;
    return;
L_089FE698:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6D8;
      }
      goto L_089FE6A0;
    }
L_089FE6A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FE6BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE6BCu) goto L_089FE6BC;
    return;
L_089FE6BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6D8;
      }
      goto L_089FE6C4;
    }
L_089FE6C4:
    aot_gpr[31] = (0x089FE6CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 182u, 0x089FBCA8u>(ctx, &aot_mem) && ctx.pc == 0x089FE6CCu) goto L_089FE6CC;
    return;
L_089FE6CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE6D8;
      }
      goto L_089FE6D4;
    }
L_089FE6D4:
    aot_gpr[17] = (0u | 1u);
    goto L_089FE6D8;
L_089FE6D8:
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
L_089FE6F0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE708u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE708u) goto L_089FE708;
    return;
L_089FE708:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE738;
      }
      goto L_089FE710;
    }
L_089FE710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FE72Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE72Cu) goto L_089FE72C;
    return;
L_089FE72C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE738;
      }
      goto L_089FE734;
    }
L_089FE734:
    aot_gpr[17] = (0u | 1u);
    goto L_089FE738;
L_089FE738:
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
L_089FE750:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE75C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FE8B4;
      }
      goto L_089FE784;
    }
L_089FE784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089FE7C8;
    }
    goto L_089FE790;
L_089FE790:
    aot_gpr[31] = (0x089FE798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 125u, 0x08A07744u>(ctx, &aot_mem) && ctx.pc == 0x089FE798u) goto L_089FE798;
    return;
L_089FE798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
        goto L_089FE7C4;
    }
    goto L_089FE7A4;
L_089FE7A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE7C0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE7C0u) goto L_089FE7C0;
    return;
L_089FE7C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_089FE7C4;
L_089FE7C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089FE7C8;
L_089FE7C8:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12436)));
        goto L_089FE808;
    }
    goto L_089FE7D0;
L_089FE7D0:
    aot_gpr[31] = (0x089FE7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 125u, 0x08A07744u>(ctx, &aot_mem) && ctx.pc == 0x089FE7D8u) goto L_089FE7D8;
    return;
L_089FE7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
        goto L_089FE804;
    }
    goto L_089FE7E4;
L_089FE7E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE800u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE800u) goto L_089FE800;
    return;
L_089FE800:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_089FE804;
L_089FE804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12436)));
    goto L_089FE808;
L_089FE808:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12440)));
        goto L_089FE854;
    }
    goto L_089FE810;
L_089FE810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12440)));
        goto L_089FE854;
    }
    goto L_089FE81C;
L_089FE81C:
    aot_gpr[31] = (0x089FE824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 206u, 0x08A04C88u>(ctx, &aot_mem) && ctx.pc == 0x089FE824u) goto L_089FE824;
    return;
L_089FE824:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
        goto L_089FE850;
    }
    goto L_089FE830;
L_089FE830:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FE84Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE84Cu) goto L_089FE84C;
    return;
L_089FE84C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
    goto L_089FE850;
L_089FE850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12440)));
    goto L_089FE854;
L_089FE854:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE874;
      }
      goto L_089FE85C;
    }
L_089FE85C:
    aot_gpr[31] = (0x089FE864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 69u, 0x08A0046Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE864u) goto L_089FE864;
    return;
L_089FE864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12440)));
    aot_gpr[31] = (0x089FE870u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 43u, 0x08A46270u>(ctx, &aot_mem) && ctx.pc == 0x089FE870u) goto L_089FE870;
    return;
L_089FE870:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12440), 0u);
    goto L_089FE874;
L_089FE874:
    aot_gpr[31] = (0x089FE87Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 73u, 0x089FF4F4u>(ctx, &aot_mem) && ctx.pc == 0x089FE87Cu) goto L_089FE87C;
    return;
L_089FE87C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE894;
      }
      goto L_089FE888;
    }
L_089FE888:
    aot_gpr[31] = (0x089FE890u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 36u, 0x08A0E20Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE890u) goto L_089FE890;
    return;
L_089FE890:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12480), 0u);
    goto L_089FE894;
L_089FE894:
    aot_gpr[31] = (0x089FE89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE89Cu) goto L_089FE89C;
    return;
L_089FE89C:
    aot_gpr[31] = (0x089FE8A4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE8A4u) goto L_089FE8A4;
    return;
L_089FE8A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18568)));
    aot_gpr[31] = (0x089FE8B0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x089FE8B0u) goto L_089FE8B0;
    return;
L_089FE8B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-18568), 0u);
    goto L_089FE8B4;
L_089FE8B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE8C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089FE90C;
      }
      goto L_089FE8DC;
    }
L_089FE8DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089FE8E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 110u, 0x08A07684u>(ctx, &aot_mem) && ctx.pc == 0x089FE8E8u) goto L_089FE8E8;
    return;
L_089FE8E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089FE8F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 109u, 0x08A0767Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE8F4u) goto L_089FE8F4;
    return;
L_089FE8F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x089FE900u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 110u, 0x08A07684u>(ctx, &aot_mem) && ctx.pc == 0x089FE900u) goto L_089FE900;
    return;
L_089FE900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x089FE90Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 109u, 0x08A0767Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE90Cu) goto L_089FE90C;
    return;
L_089FE90C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE91C:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE928:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE930:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FE9AC;
      }
      goto L_089FE94C;
    }
L_089FE94C:
    aot_gpr[31] = (0x089FE954u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FE658;
L_089FE954:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FE9AC;
      }
      goto L_089FE95C;
    }
L_089FE95C:
    aot_gpr[31] = (0x089FE964u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 246u, 0x08A07E50u>(ctx, &aot_mem) && ctx.pc == 0x089FE964u) goto L_089FE964;
    return;
L_089FE964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x089FE998u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FE998u) goto L_089FE998;
    return;
L_089FE998:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9AC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FE9C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089FE9E0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FE9E0u) goto L_089FE9E0;
    return;
L_089FE9E0:
    aot_gpr[31] = (0x089FE9E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FE9E8u) goto L_089FE9E8;
    return;
L_089FE9E8:
    aot_gpr[31] = (0x089FE9F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x089FE9F0u) goto L_089FE9F0;
    return;
L_089FE9F0:
    aot_gpr[31] = (0x089FE9F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089FE928;
L_089FE9F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB5C;
      }
      goto L_089FEA00;
    }
L_089FEA00:
    aot_gpr[31] = (0x089FEA08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 239u, 0x08A09F60u>(ctx, &aot_mem) && ctx.pc == 0x089FEA08u) goto L_089FEA08;
    return;
L_089FEA08:
    aot_gpr[31] = (0x089FEA10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 239u, 0x08A09F60u>(ctx, &aot_mem) && ctx.pc == 0x089FEA10u) goto L_089FEA10;
    return;
L_089FEA10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12436)));
        goto L_089FEA28;
    }
    goto L_089FEA1C;
L_089FEA1C:
    aot_gpr[31] = (0x089FEA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0504_entry, 504u, 21u, 0x089FC130u>(ctx, &aot_mem) && ctx.pc == 0x089FEA24u) goto L_089FEA24;
    return;
L_089FEA24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12436)));
    goto L_089FEA28;
L_089FEA28:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12440)));
        goto L_089FEA3C;
    }
    goto L_089FEA30;
L_089FEA30:
    aot_gpr[31] = (0x089FEA38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 153u, 0x08A048D0u>(ctx, &aot_mem) && ctx.pc == 0x089FEA38u) goto L_089FEA38;
    return;
L_089FEA38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12440)));
    goto L_089FEA3C;
L_089FEA3C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12480)));
        goto L_089FEA50;
    }
    goto L_089FEA44;
L_089FEA44:
    aot_gpr[31] = (0x089FEA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 47u, 0x08A4629Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEA4Cu) goto L_089FEA4C;
    return;
L_089FEA4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12480)));
    goto L_089FEA50;
L_089FEA50:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB5C;
      }
      goto L_089FEA58;
    }
L_089FEA58:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089FEA68;
      }
      goto L_089FEA60;
    }
L_089FEA60:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FEAA8;
      }
      goto L_089FEA68;
    }
L_089FEA68:
    aot_gpr[31] = (0x089FEA70u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 80u, 0x089FF57Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEA70u) goto L_089FEA70;
    return;
L_089FEA70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEAA8;
      }
      goto L_089FEA7C;
    }
L_089FEA7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEAA8;
      }
      goto L_089FEA8C;
    }
L_089FEA8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(184));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FEAA8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FEAA8u) goto L_089FEAA8;
    return;
L_089FEAA8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089FEAB8;
      }
      goto L_089FEAB0;
    }
L_089FEAB0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089FEB4C;
      }
      goto L_089FEAB8;
    }
L_089FEAB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB4C;
      }
      goto L_089FEAC4;
    }
L_089FEAC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12436)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089FEAE4;
    }
    goto L_089FEAD0;
L_089FEAD0:
    aot_gpr[31] = (0x089FEAD8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 231u, 0x08A04DF0u>(ctx, &aot_mem) && ctx.pc == 0x089FEAD8u) goto L_089FEAD8;
    return;
L_089FEAD8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB4C;
      }
      goto L_089FEAE0;
    }
L_089FEAE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089FEAE4;
L_089FEAE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FEAFCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FEAFCu) goto L_089FEAFC;
    return;
L_089FEAFC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_089FEB1C;
    }
    goto L_089FEB04;
L_089FEB04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089FEB14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 77u, 0x08A074A0u>(ctx, &aot_mem) && ctx.pc == 0x089FEB14u) goto L_089FEB14;
    return;
L_089FEB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB4C;
      }
      goto L_089FEB1C;
    }
L_089FEB1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FEB34u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FEB34u) goto L_089FEB34;
    return;
L_089FEB34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEB4C;
      }
      goto L_089FEB3C;
    }
L_089FEB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089FEB4Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 77u, 0x08A074A0u>(ctx, &aot_mem) && ctx.pc == 0x089FEB4Cu) goto L_089FEB4C;
    return;
L_089FEB4C:
    aot_gpr[31] = (0x089FEB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FEB54u) goto L_089FEB54;
    return;
L_089FEB54:
    aot_gpr[31] = (0x089FEB5Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 130u, 0x08A037D0u>(ctx, &aot_mem) && ctx.pc == 0x089FEB5Cu) goto L_089FEB5C;
    return;
L_089FEB5C:
    aot_gpr[31] = (0x089FEB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089FEB64u) goto L_089FEB64;
    return;
L_089FEB64:
    aot_gpr[31] = (0x089FEB6Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEB6Cu) goto L_089FEB6C;
    return;
L_089FEB6C:
    aot_gpr[31] = (0x089FEB74u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x089FEB74u) goto L_089FEB74;
    return;
L_089FEB74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEB88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089FED14;
      }
      goto L_089FEBBC;
    }
L_089FEBBC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12476), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12432), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FEBE4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FEBE4u) goto L_089FEBE4;
    return;
L_089FEBE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(152));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FEC00u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FEC00u) goto L_089FEC00;
    return;
L_089FEC00:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x089FEC18u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FEC18u) goto L_089FEC18;
    return;
L_089FEC18:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FEC28u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEC28u) goto L_089FEC28;
    return;
L_089FEC28:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12368));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(12400));
      if (branch_taken) {
          goto L_089FEC48;
      }
      goto L_089FEC34;
    }
L_089FEC34:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089FEC40u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEC40u) goto L_089FEC40;
    return;
L_089FEC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEC54;
      }
      goto L_089FEC48;
    }
L_089FEC48:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FEC54u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEC54u) goto L_089FEC54;
    return;
L_089FEC54:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089FEC78;
      }
      goto L_089FEC5C;
    }
L_089FEC5C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089FEC6Cu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEC6Cu) goto L_089FEC6C;
    return;
L_089FEC6C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089FEC8C;
      }
      goto L_089FEC78;
    }
L_089FEC78:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FEC84u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEC84u) goto L_089FEC84;
    return;
L_089FEC84:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(160));
    goto L_089FEC8C;
L_089FEC8C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089FEC9Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FEC9Cu) goto L_089FEC9C;
    return;
L_089FEC9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FECB8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FECB8u) goto L_089FECB8;
    return;
L_089FECB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12364), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089FECD8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FECD8u) goto L_089FECD8;
    return;
L_089FECD8:
    aot_gpr[31] = (0x089FECE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12360), aot_gpr[2]);
    goto L_089FEE74;
L_089FECE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FECFCu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FECFCu) goto L_089FECFC;
    return;
L_089FECFC:
    aot_gpr[31] = (0x089FED04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FED04u) goto L_089FED04;
    return;
L_089FED04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089FED14u);
    aot_gpr[6] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 139u, 0x08A03874u>(ctx, &aot_mem) && ctx.pc == 0x089FED14u) goto L_089FED14;
    return;
L_089FED14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FED3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12432)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089FED78u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089FED78u) goto L_089FED78;
    return;
L_089FED78:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089FED88u);
    aot_gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FED88u) goto L_089FED88;
    return;
L_089FED88:
    aot_gpr[31] = (0x089FED90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FED90u) goto L_089FED90;
    return;
L_089FED90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12432)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FEDA0u);
    aot_gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 139u, 0x08A03874u>(ctx, &aot_mem) && ctx.pc == 0x089FEDA0u) goto L_089FEDA0;
    return;
L_089FEDA0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEDB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089FEDD8u);
    aot_gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEDD8u) goto L_089FEDD8;
    return;
L_089FEDD8:
    aot_gpr[31] = (0x089FEDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x089FEDE0u) goto L_089FEDE0;
    return;
L_089FEDE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12432)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089FEDF0u);
    aot_gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 139u, 0x08A03874u>(ctx, &aot_mem) && ctx.pc == 0x089FEDF0u) goto L_089FEDF0;
    return;
L_089FEDF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE00:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12476)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE08:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE14:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-18568)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FEE44;
      }
      goto L_089FEE24;
    }
L_089FEE24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE44;
      }
      goto L_089FEE30;
    }
L_089FEE30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089FEE44;
    }
    goto L_089FEE3C;
L_089FEE3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089FEE44;
      }
      goto L_089FEE44;
    }
L_089FEE44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE4C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FEE6C;
      }
      goto L_089FEE5C;
    }
L_089FEE5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE6C;
      }
      goto L_089FEE68;
    }
L_089FEE68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089FEE6C;
L_089FEE6C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FEE94;
      }
      goto L_089FEE84;
    }
L_089FEE84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEE94;
      }
      goto L_089FEE90;
    }
L_089FEE90:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_089FEE94;
L_089FEE94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEE9C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089FEEBC;
      }
      goto L_089FEEAC;
    }
L_089FEEAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEEBC;
      }
      goto L_089FEEB8;
    }
L_089FEEB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089FEEBC;
L_089FEEBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEEC4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEED4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18568)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEEE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1520));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1504), aot_gpr[21]);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1500), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(12436)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1488), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1492), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1496), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1484), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1508), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_089FEFCC;
      }
      goto L_089FEF28;
    }
L_089FEF28:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFCC;
      }
      goto L_089FEF30;
    }
L_089FEF30:
    aot_gpr[31] = (0x089FEF38u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FEF38u) goto L_089FEF38;
    return;
L_089FEF38:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFCC;
      }
      goto L_089FEF40;
    }
L_089FEF40:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089FEFCC;
      }
      goto L_089FEF48;
    }
L_089FEF48:
    aot_gpr[31] = (0x089FEF50u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089FEF50u) goto L_089FEF50;
    return;
L_089FEF50:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089FEFCC;
      }
      goto L_089FEF58;
    }
L_089FEF58:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089FEF64u);
    aot_gpr[6] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF64u) goto L_089FEF64;
    return;
L_089FEF64:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(133));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089FEF74u);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF74u) goto L_089FEF74;
    return;
L_089FEF74:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1157));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089FEF84u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF84u) goto L_089FEF84;
    return;
L_089FEF84:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1189));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089FEF94u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x089FEF94u) goto L_089FEF94;
    return;
L_089FEF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-18568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x089FEFA8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 204u, 0x08A04C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089FEFA8u) goto L_089FEFA8;
    return;
L_089FEFA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1484)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1488)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1492)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1496)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1500)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1504)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1508)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1520));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEFCC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1484)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1488)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1492)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1496)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1500)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1504)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1508)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1520));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089FEFF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    ctx.pc = 0x089FF000u; return;
}

void recomp_unit_0506(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0506_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_506(Runtime &runtime) {
    runtime.register_generated_unit(506u, 0x089FE000u, 4096u, &recomp_unit_0506, &recomp_unit_0506_entry);
    runtime.register_function(0x089FE000u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE010u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE018u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE06Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE088u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE098u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE0ACu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE0C0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE0CCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE0DCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE0F8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE108u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE114u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE130u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE140u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE14Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE16Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE184u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE194u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE1A8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE1C0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE1ECu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE1F8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE210u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE218u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE220u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE22Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE234u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE23Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE244u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE24Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE250u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE258u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE260u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE278u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE280u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE288u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE294u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE29Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE2A4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE2ACu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE2B4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE2D8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE2E0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE314u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE324u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE330u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE33Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE34Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE354u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE360u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE36Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE388u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE394u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE3A0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE3C4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE3CCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE3ECu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE408u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE424u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE438u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE454u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE45Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE474u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE490u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE4A4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE4C0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE4F4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE4FCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE508u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE534u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE53Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE568u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE56Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE574u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE5A0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE5CCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE5F8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE624u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE62Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE658u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE680u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE698u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6A0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6BCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6C4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6CCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6D4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6D8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE6F0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE708u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE710u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE72Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE734u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE738u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE750u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE75Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE764u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE784u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE790u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE798u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7A4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7C0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7C4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7C8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7D0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7D8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE7E4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE800u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE804u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE808u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE810u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE81Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE824u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE830u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE84Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE850u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE854u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE85Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE864u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE870u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE874u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE87Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE888u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE890u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE894u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE89Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8A4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8B0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8B4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8C8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8DCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8E8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE8F4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE900u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE90Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE91Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE928u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE930u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE94Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE954u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE95Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE964u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE998u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE9ACu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE9C4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE9E0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE9E8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE9F0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FE9F8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA00u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA08u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA10u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA1Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA24u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA28u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA30u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA38u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA3Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA44u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA4Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA50u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA58u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA60u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA68u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA70u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA7Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEA8Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAA8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAB0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAB8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAC4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAD0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAD8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAE0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAE4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEAFCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB04u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB14u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB1Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB34u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB3Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB4Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB54u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB5Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB64u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB6Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB74u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEB88u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEBBCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEBE4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC00u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC18u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC28u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC34u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC40u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC48u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC54u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC5Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC6Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC78u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC84u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC8Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEC9Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FECB8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FECD8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FECE0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FECFCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FED04u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FED14u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FED3Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FED78u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FED88u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FED90u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEDA0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEDB4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEDD8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEDE0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEDF0u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE00u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE08u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE14u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE24u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE30u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE3Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE44u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE4Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE5Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE68u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE6Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE74u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE84u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE90u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE94u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEE9Cu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEEACu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEEB8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEEBCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEEC4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEED4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEEE4u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF28u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF30u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF38u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF40u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF48u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF50u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF58u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF64u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF74u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF84u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEF94u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEFA8u, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEFCCu, &recomp_unit_0506, "recomp_unit_0506");
    runtime.register_function(0x089FEFF4u, &recomp_unit_0506, "recomp_unit_0506");
}
} // namespace psprecomp
