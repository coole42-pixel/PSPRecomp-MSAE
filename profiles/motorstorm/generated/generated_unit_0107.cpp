#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0107[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 11, 0, 0, 12,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 40, 0, 0, 0, 41, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0,
    55, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71,
    0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82,
    0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0,
    94, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0,
    0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 124, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136,
    0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0,
    0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186,
    0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0,
    199, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226,
    0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 236, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246,
    0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 255,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261,
};
void recomp_unit_0107_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0886F000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0107[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886F000;
    case 2u: goto L_0886F018;
    case 3u: goto L_0886F038;
    case 4u: goto L_0886F050;
    case 5u: goto L_0886F068;
    case 6u: goto L_0886F07C;
    case 7u: goto L_0886F094;
    case 8u: goto L_0886F0A0;
    case 9u: goto L_0886F0D8;
    case 10u: goto L_0886F0EC;
    case 11u: goto L_0886F0F0;
    case 12u: goto L_0886F0FC;
    case 13u: goto L_0886F10C;
    case 14u: goto L_0886F124;
    case 15u: goto L_0886F138;
    case 16u: goto L_0886F158;
    case 17u: goto L_0886F16C;
    case 18u: goto L_0886F18C;
    case 19u: goto L_0886F1BC;
    case 20u: goto L_0886F1C0;
    case 21u: goto L_0886F1F0;
    case 22u: goto L_0886F1F8;
    case 23u: goto L_0886F20C;
    case 24u: goto L_0886F214;
    case 25u: goto L_0886F228;
    case 26u: goto L_0886F238;
    case 27u: goto L_0886F254;
    case 28u: goto L_0886F268;
    case 29u: goto L_0886F278;
    case 30u: goto L_0886F290;
    case 31u: goto L_0886F2E0;
    case 32u: goto L_0886F2F4;
    case 33u: goto L_0886F318;
    case 34u: goto L_0886F324;
    case 35u: goto L_0886F32C;
    case 36u: goto L_0886F33C;
    case 37u: goto L_0886F344;
    case 38u: goto L_0886F34C;
    case 39u: goto L_0886F358;
    case 40u: goto L_0886F35C;
    case 41u: goto L_0886F36C;
    case 42u: goto L_0886F374;
    case 43u: goto L_0886F3A4;
    case 44u: goto L_0886F404;
    case 45u: goto L_0886F410;
    case 46u: goto L_0886F42C;
    case 47u: goto L_0886F434;
    case 48u: goto L_0886F438;
    case 49u: goto L_0886F448;
    case 50u: goto L_0886F450;
    case 51u: goto L_0886F45C;
    case 52u: goto L_0886F464;
    case 53u: goto L_0886F46C;
    case 54u: goto L_0886F478;
    case 55u: goto L_0886F480;
    case 56u: goto L_0886F484;
    case 57u: goto L_0886F4A0;
    case 58u: goto L_0886F4AC;
    case 59u: goto L_0886F4B4;
    case 60u: goto L_0886F4C0;
    case 61u: goto L_0886F4D0;
    case 62u: goto L_0886F4E8;
    case 63u: goto L_0886F4FC;
    case 64u: goto L_0886F514;
    case 65u: goto L_0886F530;
    case 66u: goto L_0886F538;
    case 67u: goto L_0886F55C;
    case 68u: goto L_0886F564;
    case 69u: goto L_0886F56C;
    case 70u: goto L_0886F574;
    case 71u: goto L_0886F57C;
    case 72u: goto L_0886F584;
    case 73u: goto L_0886F590;
    case 74u: goto L_0886F598;
    case 75u: goto L_0886F5A8;
    case 76u: goto L_0886F5B4;
    case 77u: goto L_0886F5BC;
    case 78u: goto L_0886F5C0;
    case 79u: goto L_0886F5E0;
    case 80u: goto L_0886F5EC;
    case 81u: goto L_0886F5F4;
    case 82u: goto L_0886F5FC;
    case 83u: goto L_0886F608;
    case 84u: goto L_0886F610;
    case 85u: goto L_0886F62C;
    case 86u: goto L_0886F634;
    case 87u: goto L_0886F63C;
    case 88u: goto L_0886F644;
    case 89u: goto L_0886F650;
    case 90u: goto L_0886F658;
    case 91u: goto L_0886F660;
    case 92u: goto L_0886F668;
    case 93u: goto L_0886F678;
    case 94u: goto L_0886F680;
    case 95u: goto L_0886F684;
    case 96u: goto L_0886F6A4;
    case 97u: goto L_0886F6C4;
    case 98u: goto L_0886F6E8;
    case 99u: goto L_0886F70C;
    case 100u: goto L_0886F730;
    case 101u: goto L_0886F73C;
    case 102u: goto L_0886F760;
    case 103u: goto L_0886F784;
    case 104u: goto L_0886F794;
    case 105u: goto L_0886F7B8;
    case 106u: goto L_0886F7DC;
    case 107u: goto L_0886F7E4;
    case 108u: goto L_0886F7F0;
    case 109u: goto L_0886F7F8;
    case 110u: goto L_0886F810;
    case 111u: goto L_0886F818;
    case 112u: goto L_0886F828;
    case 113u: goto L_0886F844;
    case 114u: goto L_0886F85C;
    case 115u: goto L_0886F864;
    case 116u: goto L_0886F874;
    case 117u: goto L_0886F88C;
    case 118u: goto L_0886F8A8;
    case 119u: goto L_0886F8B0;
    case 120u: goto L_0886F8C0;
    case 121u: goto L_0886F8D4;
    case 122u: goto L_0886F8E0;
    case 123u: goto L_0886F8E8;
    case 124u: goto L_0886F8EC;
    case 125u: goto L_0886F90C;
    case 126u: goto L_0886F918;
    case 127u: goto L_0886F920;
    case 128u: goto L_0886F928;
    case 129u: goto L_0886F934;
    case 130u: goto L_0886F93C;
    case 131u: goto L_0886F944;
    case 132u: goto L_0886F950;
    case 133u: goto L_0886F958;
    case 134u: goto L_0886F968;
    case 135u: goto L_0886F974;
    case 136u: goto L_0886F97C;
    case 137u: goto L_0886F984;
    case 138u: goto L_0886F990;
    case 139u: goto L_0886F998;
    case 140u: goto L_0886F9A0;
    case 141u: goto L_0886F9A8;
    case 142u: goto L_0886F9B0;
    case 143u: goto L_0886F9C0;
    case 144u: goto L_0886F9C8;
    case 145u: goto L_0886F9DC;
    case 146u: goto L_0886F9F4;
    case 147u: goto L_0886FA08;
    case 148u: goto L_0886FA10;
    case 149u: goto L_0886FA18;
    case 150u: goto L_0886FA24;
    case 151u: goto L_0886FA2C;
    case 152u: goto L_0886FA34;
    case 153u: goto L_0886FA44;
    case 154u: goto L_0886FA4C;
    case 155u: goto L_0886FA58;
    case 156u: goto L_0886FA6C;
    case 157u: goto L_0886FA84;
    case 158u: goto L_0886FAA0;
    case 159u: goto L_0886FABC;
    case 160u: goto L_0886FAC4;
    case 161u: goto L_0886FACC;
    case 162u: goto L_0886FAD8;
    case 163u: goto L_0886FAE0;
    case 164u: goto L_0886FAE8;
    case 165u: goto L_0886FAF0;
    case 166u: goto L_0886FB04;
    case 167u: goto L_0886FB0C;
    case 168u: goto L_0886FB14;
    case 169u: goto L_0886FB20;
    case 170u: goto L_0886FB28;
    case 171u: goto L_0886FB30;
    case 172u: goto L_0886FB3C;
    case 173u: goto L_0886FB44;
    case 174u: goto L_0886FB4C;
    case 175u: goto L_0886FB68;
    case 176u: goto L_0886FB74;
    case 177u: goto L_0886FB7C;
    case 178u: goto L_0886FB90;
    case 179u: goto L_0886FBA8;
    case 180u: goto L_0886FBBC;
    case 181u: goto L_0886FBC4;
    case 182u: goto L_0886FBD0;
    case 183u: goto L_0886FBDC;
    case 184u: goto L_0886FBE4;
    case 185u: goto L_0886FBEC;
    case 186u: goto L_0886FBFC;
    case 187u: goto L_0886FC04;
    case 188u: goto L_0886FC0C;
    case 189u: goto L_0886FC18;
    case 190u: goto L_0886FC20;
    case 191u: goto L_0886FC34;
    case 192u: goto L_0886FC3C;
    case 193u: goto L_0886FC44;
    case 194u: goto L_0886FC4C;
    case 195u: goto L_0886FC58;
    case 196u: goto L_0886FC60;
    case 197u: goto L_0886FC70;
    case 198u: goto L_0886FC78;
    case 199u: goto L_0886FC80;
    case 200u: goto L_0886FC8C;
    case 201u: goto L_0886FC94;
    case 202u: goto L_0886FC9C;
    case 203u: goto L_0886FCA4;
    case 204u: goto L_0886FCAC;
    case 205u: goto L_0886FCC4;
    case 206u: goto L_0886FCCC;
    case 207u: goto L_0886FCD4;
    case 208u: goto L_0886FCDC;
    case 209u: goto L_0886FCE8;
    case 210u: goto L_0886FCF0;
    case 211u: goto L_0886FCFC;
    case 212u: goto L_0886FD2C;
    case 213u: goto L_0886FD4C;
    case 214u: goto L_0886FD54;
    case 215u: goto L_0886FD74;
    case 216u: goto L_0886FD98;
    case 217u: goto L_0886FDA0;
    case 218u: goto L_0886FDA8;
    case 219u: goto L_0886FDB8;
    case 220u: goto L_0886FDC0;
    case 221u: goto L_0886FDCC;
    case 222u: goto L_0886FDD4;
    case 223u: goto L_0886FDDC;
    case 224u: goto L_0886FDEC;
    case 225u: goto L_0886FDF4;
    case 226u: goto L_0886FDFC;
    case 227u: goto L_0886FE0C;
    case 228u: goto L_0886FE14;
    case 229u: goto L_0886FE20;
    case 230u: goto L_0886FE28;
    case 231u: goto L_0886FE30;
    case 232u: goto L_0886FE40;
    case 233u: goto L_0886FE48;
    case 234u: goto L_0886FE54;
    case 235u: goto L_0886FE5C;
    case 236u: goto L_0886FE60;
    case 237u: goto L_0886FE78;
    case 238u: goto L_0886FE90;
    case 239u: goto L_0886FE9C;
    case 240u: goto L_0886FEA4;
    case 241u: goto L_0886FEA8;
    case 242u: goto L_0886FEB4;
    case 243u: goto L_0886FEDC;
    case 244u: goto L_0886FEE4;
    case 245u: goto L_0886FEF4;
    case 246u: goto L_0886FEFC;
    case 247u: goto L_0886FF0C;
    case 248u: goto L_0886FF14;
    case 249u: goto L_0886FF1C;
    case 250u: goto L_0886FF34;
    case 251u: goto L_0886FF58;
    case 252u: goto L_0886FF64;
    case 253u: goto L_0886FF6C;
    case 254u: goto L_0886FF78;
    case 255u: goto L_0886FF7C;
    case 256u: goto L_0886FF90;
    case 257u: goto L_0886FFBC;
    case 258u: goto L_0886FFC4;
    case 259u: goto L_0886FFE4;
    case 260u: goto L_0886FFF0;
    case 261u: goto L_0886FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886F000:
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F018:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25400), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F038:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0886F050u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 93u, 0x08A4D714u>(ctx, &aot_mem) && ctx.pc == 0x0886F050u) goto L_0886F050;
    return;
L_0886F050:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0886F094;
      }
      goto L_0886F068;
    }
L_0886F068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[31] = (0x0886F07Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F07Cu) goto L_0886F07C;
    return;
L_0886F07C:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886F068;
      }
      goto L_0886F094;
    }
L_0886F094:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F0A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (0u | 32768u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x0886F0D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6032));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 255u, 0x08876EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886F0D8u) goto L_0886F0D8;
    return;
L_0886F0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886F124;
      }
      goto L_0886F0EC;
    }
L_0886F0EC:
    aot_gpr[6] = (aot_gpr[8] | 0u);
    goto L_0886F0F0;
L_0886F0F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0886F0FCu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F0FCu) goto L_0886F0FC;
    return;
L_0886F0FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x0886F10Cu);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F10Cu) goto L_0886F10C;
    return;
L_0886F10C:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886F0F0;
      }
      goto L_0886F124;
    }
L_0886F124:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F138:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886F158u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0886F158u) goto L_0886F158;
    return;
L_0886F158:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F16C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F18C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F238;
      }
      goto L_0886F1BC;
    }
L_0886F1BC:
    aot_gpr[5] = (2218u << 16u);
    goto L_0886F1C0;
L_0886F1C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(30))))));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x0886F1F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6108));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F1F0u) goto L_0886F1F0;
    return;
L_0886F1F0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886F214;
      }
      goto L_0886F1F8;
    }
L_0886F1F8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886F20Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6120));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F20Cu) goto L_0886F20C;
    return;
L_0886F20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F214;
      }
      goto L_0886F214;
    }
L_0886F214:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886F228u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6132));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F228u) goto L_0886F228;
    return;
L_0886F228:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886F1C0;
      }
      goto L_0886F238;
    }
L_0886F238:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F278;
      }
      goto L_0886F254;
    }
L_0886F254:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886F268u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6144));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F268u) goto L_0886F268;
    return;
L_0886F268:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886F254;
      }
      goto L_0886F278;
    }
L_0886F278:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(5264)));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 4u);
      if (branch_taken) {
          goto L_0886F36C;
      }
      goto L_0886F2E0;
    }
L_0886F2E0:
    aot_gpr[21] = (0u | 5u);
    aot_gpr[19] = (0u | 2u);
    aot_gpr[18] = (0u | 3u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[20] = (2218u << 16u);
    goto L_0886F2F4;
L_0886F2F4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F35C;
      }
      goto L_0886F318;
    }
L_0886F318:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0886F35C;
      }
      goto L_0886F324;
    }
L_0886F324:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0886F35C;
      }
      goto L_0886F32C;
    }
L_0886F32C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886F34C;
      }
      goto L_0886F33C;
    }
L_0886F33C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_0886F34C;
      }
      goto L_0886F344;
    }
L_0886F344:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0886F35C;
      }
      goto L_0886F34C;
    }
L_0886F34C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0886F358u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 118u, 0x0885F788u>(ctx, &aot_mem) && ctx.pc == 0x0886F358u) goto L_0886F358;
    return;
L_0886F358:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(5264)));
    goto L_0886F35C;
L_0886F35C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886F2F4;
      }
      goto L_0886F36C;
    }
L_0886F36C:
    aot_gpr[31] = (0x0886F374u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 113u, 0x0885F734u>(ctx, &aot_mem) && ctx.pc == 0x0886F374u) goto L_0886F374;
    return;
L_0886F374:
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
L_0886F3A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-896));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(868), aot_gpr[20]);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(856), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(864), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(876), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(852), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(860), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(872), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(884), aot_gpr[30]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2696));
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(5112));
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[21] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(880), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(888), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886F438;
      }
      goto L_0886F404;
    }
L_0886F404:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(848), aot_gpr[23]);
    aot_gpr[31] = (0x0886F410u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 75u, 0x08943584u>(ctx, &aot_mem) && ctx.pc == 0x0886F410u) goto L_0886F410;
    return;
L_0886F410:
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28680)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[31] = (0x0886F42Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-28676)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 44u, 0x0891D348u>(ctx, &aot_mem) && ctx.pc == 0x0886F42Cu) goto L_0886F42C;
    return;
L_0886F42C:
    aot_gpr[31] = (0x0886F434u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 31u, 0x0891D244u>(ctx, &aot_mem) && ctx.pc == 0x0886F434u) goto L_0886F434;
    return;
L_0886F434:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(848)));
    goto L_0886F438;
L_0886F438:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[31] = (0x0886F448u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5256), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 109u, 0x088798A0u>(ctx, &aot_mem) && ctx.pc == 0x0886F448u) goto L_0886F448;
    return;
L_0886F448:
    aot_gpr[31] = (0x0886F450u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 146u, 0x08872B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F450u) goto L_0886F450;
    return;
L_0886F450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F464;
      }
      goto L_0886F45C;
    }
L_0886F45C:
    aot_gpr[31] = (0x0886F464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F464u) goto L_0886F464;
    return;
L_0886F464:
    aot_gpr[31] = (0x0886F46Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 243u, 0x08873EF0u>(ctx, &aot_mem) && ctx.pc == 0x0886F46Cu) goto L_0886F46C;
    return;
L_0886F46C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7512)));
        goto L_0886F484;
    }
    goto L_0886F478;
L_0886F478:
    aot_gpr[31] = (0x0886F480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F480u) goto L_0886F480;
    return;
L_0886F480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7512)));
    goto L_0886F484;
L_0886F484:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F4A0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F4A0u) goto L_0886F4A0;
    return;
L_0886F4A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F4B4;
      }
      goto L_0886F4AC;
    }
L_0886F4AC:
    aot_gpr[31] = (0x0886F4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F4B4u) goto L_0886F4B4;
    return;
L_0886F4B4:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x0886F4C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 186u, 0x088C5C84u>(ctx, &aot_mem) && ctx.pc == 0x0886F4C0u) goto L_0886F4C0;
    return;
L_0886F4C0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886F4D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6220));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F4D0u) goto L_0886F4D0;
    return;
L_0886F4D0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886F4E8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886F4E8u) goto L_0886F4E8;
    return;
L_0886F4E8:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(5112), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886F4FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6252));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F4FCu) goto L_0886F4FC;
    return;
L_0886F4FC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886F514u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886F514u) goto L_0886F514;
    return;
L_0886F514:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
      if (branch_taken) {
          goto L_0886F538;
      }
      goto L_0886F530;
    }
L_0886F530:
    aot_gpr[31] = (0x0886F538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F538u) goto L_0886F538;
    return;
L_0886F538:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F55Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F55Cu) goto L_0886F55C;
    return;
L_0886F55C:
    aot_gpr[31] = (0x0886F564u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7512)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 49u, 0x088BF420u>(ctx, &aot_mem) && ctx.pc == 0x0886F564u) goto L_0886F564;
    return;
L_0886F564:
    aot_gpr[31] = (0x0886F56Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x0886F56Cu) goto L_0886F56C;
    return;
L_0886F56C:
    aot_gpr[31] = (0x0886F574u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x0886F574u) goto L_0886F574;
    return;
L_0886F574:
    aot_gpr[31] = (0x0886F57Cu);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x0886F57Cu) goto L_0886F57C;
    return;
L_0886F57C:
    aot_gpr[31] = (0x0886F584u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x0886F584u) goto L_0886F584;
    return;
L_0886F584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F598;
      }
      goto L_0886F590;
    }
L_0886F590:
    aot_gpr[31] = (0x0886F598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F598u) goto L_0886F598;
    return;
L_0886F598:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0886F5A8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6288));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 67u, 0x08863480u>(ctx, &aot_mem) && ctx.pc == 0x0886F5A8u) goto L_0886F5A8;
    return;
L_0886F5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886F5C0;
      }
      goto L_0886F5B4;
    }
L_0886F5B4:
    aot_gpr[31] = (0x0886F5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F5BCu) goto L_0886F5BC;
    return;
L_0886F5BC:
    aot_gpr[4] = (2218u << 16u);
    goto L_0886F5C0;
L_0886F5C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (0u | 440u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F5E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F5E0u) goto L_0886F5E0;
    return;
L_0886F5E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F5F4;
      }
      goto L_0886F5EC;
    }
L_0886F5EC:
    aot_gpr[31] = (0x0886F5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F5F4u) goto L_0886F5F4;
    return;
L_0886F5F4:
    aot_gpr[31] = (0x0886F5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 79u, 0x0882BC40u>(ctx, &aot_mem) && ctx.pc == 0x0886F5FCu) goto L_0886F5FC;
    return;
L_0886F5FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F610;
      }
      goto L_0886F608;
    }
L_0886F608:
    aot_gpr[31] = (0x0886F610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F610u) goto L_0886F610;
    return;
L_0886F610:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0886F634;
      }
      goto L_0886F62C;
    }
L_0886F62C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(306)));
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(0u));
    goto L_0886F634;
L_0886F634:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F658;
      }
      goto L_0886F63C;
    }
L_0886F63C:
    aot_gpr[31] = (0x0886F644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 82u, 0x088B7530u>(ctx, &aot_mem) && ctx.pc == 0x0886F644u) goto L_0886F644;
    return;
L_0886F644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F658;
      }
      goto L_0886F650;
    }
L_0886F650:
    aot_gpr[31] = (0x0886F658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F658u) goto L_0886F658;
    return;
L_0886F658:
    aot_gpr[31] = (0x0886F660u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5112)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 219u, 0x08877FB4u>(ctx, &aot_mem) && ctx.pc == 0x0886F660u) goto L_0886F660;
    return;
L_0886F660:
    aot_gpr[31] = (0x0886F668u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F668u) goto L_0886F668;
    return;
L_0886F668:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886F684;
      }
      goto L_0886F678;
    }
L_0886F678:
    aot_gpr[31] = (0x0886F680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F680u) goto L_0886F680;
    return;
L_0886F680:
    aot_gpr[4] = (2218u << 16u);
    goto L_0886F684;
L_0886F684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5268)));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F6A4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F6A4u) goto L_0886F6A4;
    return;
L_0886F6A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F6C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F6C4u) goto L_0886F6C4;
    return;
L_0886F6C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[5] = (0u | 48u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F6E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F6E8u) goto L_0886F6E8;
    return;
L_0886F6E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5236)));
    aot_gpr[5] = (0u | 128u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F70Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F70Cu) goto L_0886F70C;
    return;
L_0886F70C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5240)));
    aot_gpr[5] = (0u | 64u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F730u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F730u) goto L_0886F730;
    return;
L_0886F730:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886F73Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 139u, 0x08809C60u>(ctx, &aot_mem) && ctx.pc == 0x0886F73Cu) goto L_0886F73C;
    return;
L_0886F73C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F760u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F760u) goto L_0886F760;
    return;
L_0886F760:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5244)));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F784u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F784u) goto L_0886F784;
    return;
L_0886F784:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[31] = (0x0886F794u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x0882D71Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F794u) goto L_0886F794;
    return;
L_0886F794:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F7B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F7B8u) goto L_0886F7B8;
    return;
L_0886F7B8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (0u | 20u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F7DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F7DCu) goto L_0886F7DC;
    return;
L_0886F7DC:
    aot_gpr[31] = (0x0886F7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 153u, 0x0886ECA4u>(ctx, &aot_mem) && ctx.pc == 0x0886F7E4u) goto L_0886F7E4;
    return;
L_0886F7E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F7F8;
      }
      goto L_0886F7F0;
    }
L_0886F7F0:
    aot_gpr[31] = (0x0886F7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F7F8u) goto L_0886F7F8;
    return;
L_0886F7F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(25352)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6300));
      if (branch_taken) {
          goto L_0886F818;
      }
      goto L_0886F810;
    }
L_0886F810:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7408));
    goto L_0886F818;
L_0886F818:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0886F828u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F828u) goto L_0886F828;
    return;
L_0886F828:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886F844u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886F844u) goto L_0886F844;
    return;
L_0886F844:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(25352)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6328));
      if (branch_taken) {
          goto L_0886F864;
      }
      goto L_0886F85C;
    }
L_0886F85C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7408));
    goto L_0886F864;
L_0886F864:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0886F874u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F874u) goto L_0886F874;
    return;
L_0886F874:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886F88Cu);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886F88Cu) goto L_0886F88C;
    return;
L_0886F88C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
      if (branch_taken) {
          goto L_0886F8B0;
      }
      goto L_0886F8A8;
    }
L_0886F8A8:
    aot_gpr[31] = (0x0886F8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F8B0u) goto L_0886F8B0;
    return;
L_0886F8B0:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7476)));
    aot_gpr[31] = (0x0886F8C0u);
    aot_gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 2u, 0x08810010u>(ctx, &aot_mem) && ctx.pc == 0x0886F8C0u) goto L_0886F8C0;
    return;
L_0886F8C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x0886F8D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 88u, 0x08884A44u>(ctx, &aot_mem) && ctx.pc == 0x0886F8D4u) goto L_0886F8D4;
    return;
L_0886F8D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886F8EC;
      }
      goto L_0886F8E0;
    }
L_0886F8E0:
    aot_gpr[31] = (0x0886F8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F8E8u) goto L_0886F8E8;
    return;
L_0886F8E8:
    aot_gpr[4] = (2218u << 16u);
    goto L_0886F8EC;
L_0886F8EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0886F90Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886F90Cu) goto L_0886F90C;
    return;
L_0886F90C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F920;
      }
      goto L_0886F918;
    }
L_0886F918:
    aot_gpr[31] = (0x0886F920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F920u) goto L_0886F920;
    return;
L_0886F920:
    aot_gpr[31] = (0x0886F928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 95u, 0x088B9978u>(ctx, &aot_mem) && ctx.pc == 0x0886F928u) goto L_0886F928;
    return;
L_0886F928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F93C;
      }
      goto L_0886F934;
    }
L_0886F934:
    aot_gpr[31] = (0x0886F93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F93Cu) goto L_0886F93C;
    return;
L_0886F93C:
    aot_gpr[31] = (0x0886F944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 5u, 0x0882E06Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F944u) goto L_0886F944;
    return;
L_0886F944:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F958;
      }
      goto L_0886F950;
    }
L_0886F950:
    aot_gpr[31] = (0x0886F958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F958u) goto L_0886F958;
    return;
L_0886F958:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[31] = (0x0886F968u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 77u, 0x088266F4u>(ctx, &aot_mem) && ctx.pc == 0x0886F968u) goto L_0886F968;
    return;
L_0886F968:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F97C;
      }
      goto L_0886F974;
    }
L_0886F974:
    aot_gpr[31] = (0x0886F97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F97Cu) goto L_0886F97C;
    return;
L_0886F97C:
    aot_gpr[31] = (0x0886F984u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5264)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 216u, 0x0885BF30u>(ctx, &aot_mem) && ctx.pc == 0x0886F984u) goto L_0886F984;
    return;
L_0886F984:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F998;
      }
      goto L_0886F990;
    }
L_0886F990:
    aot_gpr[31] = (0x0886F998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F998u) goto L_0886F998;
    return;
L_0886F998:
    aot_gpr[31] = (0x0886F9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 134u, 0x088B9C60u>(ctx, &aot_mem) && ctx.pc == 0x0886F9A0u) goto L_0886F9A0;
    return;
L_0886F9A0:
    aot_gpr[31] = (0x0886F9A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 219u, 0x08877FB4u>(ctx, &aot_mem) && ctx.pc == 0x0886F9A8u) goto L_0886F9A8;
    return;
L_0886F9A8:
    aot_gpr[31] = (0x0886F9B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886F9B0u) goto L_0886F9B0;
    return;
L_0886F9B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F9C8;
      }
      goto L_0886F9C0;
    }
L_0886F9C0:
    aot_gpr[31] = (0x0886F9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F9C8u) goto L_0886F9C8;
    return;
L_0886F9C8:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886F9DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6364));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886F9DCu) goto L_0886F9DC;
    return;
L_0886F9DC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886F9F4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886F9F4u) goto L_0886F9F4;
    return;
L_0886F9F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FA10;
      }
      goto L_0886FA08;
    }
L_0886FA08:
    aot_gpr[31] = (0x0886FA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FA10u) goto L_0886FA10;
    return;
L_0886FA10:
    aot_gpr[31] = (0x0886FA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 73u, 0x088786DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FA18u) goto L_0886FA18;
    return;
L_0886FA18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FA2C;
      }
      goto L_0886FA24;
    }
L_0886FA24:
    aot_gpr[31] = (0x0886FA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FA2Cu) goto L_0886FA2C;
    return;
L_0886FA2C:
    aot_gpr[31] = (0x0886FA34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886FA34u) goto L_0886FA34;
    return;
L_0886FA34:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FA4C;
      }
      goto L_0886FA44;
    }
L_0886FA44:
    aot_gpr[31] = (0x0886FA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FA4Cu) goto L_0886FA4C;
    return;
L_0886FA4C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    aot_gpr[31] = (0x0886FA58u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 79u, 0x0886255Cu>(ctx, &aot_mem) && ctx.pc == 0x0886FA58u) goto L_0886FA58;
    return;
L_0886FA58:
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0886FA6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6400));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FA6Cu) goto L_0886FA6C;
    return;
L_0886FA6C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886FA84u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886FA84u) goto L_0886FA84;
    return;
L_0886FA84:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886FAA0u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886FAA0u) goto L_0886FAA0;
    return;
L_0886FAA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), aot_gpr[4]);
      if (branch_taken) {
          goto L_0886FAC4;
      }
      goto L_0886FABC;
    }
L_0886FABC:
    aot_gpr[31] = (0x0886FAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FAC4u) goto L_0886FAC4;
    return;
L_0886FAC4:
    aot_gpr[31] = (0x0886FACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 170u, 0x088B0DD8u>(ctx, &aot_mem) && ctx.pc == 0x0886FACCu) goto L_0886FACC;
    return;
L_0886FACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FAE0;
      }
      goto L_0886FAD8;
    }
L_0886FAD8:
    aot_gpr[31] = (0x0886FAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FAE0u) goto L_0886FAE0;
    return;
L_0886FAE0:
    aot_gpr[31] = (0x0886FAE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 219u, 0x08877FB4u>(ctx, &aot_mem) && ctx.pc == 0x0886FAE8u) goto L_0886FAE8;
    return;
L_0886FAE8:
    aot_gpr[31] = (0x0886FAF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886FAF0u) goto L_0886FAF0;
    return;
L_0886FAF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FB0C;
      }
      goto L_0886FB04;
    }
L_0886FB04:
    aot_gpr[31] = (0x0886FB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FB0Cu) goto L_0886FB0C;
    return;
L_0886FB0C:
    aot_gpr[31] = (0x0886FB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 152u, 0x08872B74u>(ctx, &aot_mem) && ctx.pc == 0x0886FB14u) goto L_0886FB14;
    return;
L_0886FB14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FB28;
      }
      goto L_0886FB20;
    }
L_0886FB20:
    aot_gpr[31] = (0x0886FB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FB28u) goto L_0886FB28;
    return;
L_0886FB28:
    aot_gpr[31] = (0x0886FB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 30u, 0x0882E1B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FB30u) goto L_0886FB30;
    return;
L_0886FB30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FB44;
      }
      goto L_0886FB3C;
    }
L_0886FB3C:
    aot_gpr[31] = (0x0886FB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FB44u) goto L_0886FB44;
    return;
L_0886FB44:
    aot_gpr[31] = (0x0886FB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 198u, 0x08880D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0886FB4Cu) goto L_0886FB4C;
    return;
L_0886FB4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0886FB68u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0886FB68u) goto L_0886FB68;
    return;
L_0886FB68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FB7C;
      }
      goto L_0886FB74;
    }
L_0886FB74:
    aot_gpr[31] = (0x0886FB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FB7Cu) goto L_0886FB7C;
    return;
L_0886FB7C:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(640));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886FB90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6432));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FB90u) goto L_0886FB90;
    return;
L_0886FB90:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0886FBA8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0886FBA8u) goto L_0886FBA8;
    return;
L_0886FBA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FBC4;
      }
      goto L_0886FBBC;
    }
L_0886FBBC:
    aot_gpr[31] = (0x0886FBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FBC4u) goto L_0886FBC4;
    return;
L_0886FBC4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886FBD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 57u, 0x088C7570u>(ctx, &aot_mem) && ctx.pc == 0x0886FBD0u) goto L_0886FBD0;
    return;
L_0886FBD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FBE4;
      }
      goto L_0886FBDC;
    }
L_0886FBDC:
    aot_gpr[31] = (0x0886FBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FBE4u) goto L_0886FBE4;
    return;
L_0886FBE4:
    aot_gpr[31] = (0x0886FBECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 219u, 0x08877FB4u>(ctx, &aot_mem) && ctx.pc == 0x0886FBECu) goto L_0886FBEC;
    return;
L_0886FBEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FC04;
      }
      goto L_0886FBFC;
    }
L_0886FBFC:
    aot_gpr[31] = (0x0886FC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FC04u) goto L_0886FC04;
    return;
L_0886FC04:
    aot_gpr[31] = (0x0886FC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 35u, 0x0882E224u>(ctx, &aot_mem) && ctx.pc == 0x0886FC0Cu) goto L_0886FC0C;
    return;
L_0886FC0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FC20;
      }
      goto L_0886FC18;
    }
L_0886FC18:
    aot_gpr[31] = (0x0886FC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 91u, 0x0889A4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886FC20u) goto L_0886FC20;
    return;
L_0886FC20:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[31] = (0x0886FC34u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26112), static_cast<std::uint8_t>(aot_gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 78u, 0x088BA720u>(ctx, &aot_mem) && ctx.pc == 0x0886FC34u) goto L_0886FC34;
    return;
L_0886FC34:
    aot_gpr[31] = (0x0886FC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 79u, 0x08863548u>(ctx, &aot_mem) && ctx.pc == 0x0886FC3Cu) goto L_0886FC3C;
    return;
L_0886FC3C:
    aot_gpr[31] = (0x0886FC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 79u, 0x08884934u>(ctx, &aot_mem) && ctx.pc == 0x0886FC44u) goto L_0886FC44;
    return;
L_0886FC44:
    aot_gpr[31] = (0x0886FC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 46u, 0x089114F4u>(ctx, &aot_mem) && ctx.pc == 0x0886FC4Cu) goto L_0886FC4C;
    return;
L_0886FC4C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886FC58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 129u, 0x08809B68u>(ctx, &aot_mem) && ctx.pc == 0x0886FC58u) goto L_0886FC58;
    return;
L_0886FC58:
    aot_gpr[31] = (0x0886FC60u);
    // nop
    goto L_0886F290;
L_0886FC60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5264)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x0886FC70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5264)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 167u, 0x0885FB64u>(ctx, &aot_mem) && ctx.pc == 0x0886FC70u) goto L_0886FC70;
    return;
L_0886FC70:
    aot_gpr[31] = (0x0886FC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 44u, 0x088C1628u>(ctx, &aot_mem) && ctx.pc == 0x0886FC78u) goto L_0886FC78;
    return;
L_0886FC78:
    aot_gpr[31] = (0x0886FC80u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 11u, 0x088170E8u>(ctx, &aot_mem) && ctx.pc == 0x0886FC80u) goto L_0886FC80;
    return;
L_0886FC80:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0886FC8Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0259_entry, 259u, 119u, 0x08907C10u>(ctx, &aot_mem) && ctx.pc == 0x0886FC8Cu) goto L_0886FC8C;
    return;
L_0886FC8C:
    aot_gpr[31] = (0x0886FC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 5u, 0x08863064u>(ctx, &aot_mem) && ctx.pc == 0x0886FC94u) goto L_0886FC94;
    return;
L_0886FC94:
    aot_gpr[31] = (0x0886FC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 222u, 0x08873D34u>(ctx, &aot_mem) && ctx.pc == 0x0886FC9Cu) goto L_0886FC9C;
    return;
L_0886FC9C:
    aot_gpr[31] = (0x0886FCA4u);
    // nop
    goto L_0886FD4C;
L_0886FCA4:
    aot_gpr[31] = (0x0886FCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 113u, 0x0887E8B8u>(ctx, &aot_mem) && ctx.pc == 0x0886FCACu) goto L_0886FCAC;
    return;
L_0886FCAC:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7476)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6480), aot_gpr[4]);
    aot_gpr[31] = (0x0886FCC4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 35u, 0x08810288u>(ctx, &aot_mem) && ctx.pc == 0x0886FCC4u) goto L_0886FCC4;
    return;
L_0886FCC4:
    aot_gpr[31] = (0x0886FCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 58u, 0x08862380u>(ctx, &aot_mem) && ctx.pc == 0x0886FCCCu) goto L_0886FCCC;
    return;
L_0886FCCC:
    aot_gpr[31] = (0x0886FCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 70u, 0x088BA680u>(ctx, &aot_mem) && ctx.pc == 0x0886FCD4u) goto L_0886FCD4;
    return;
L_0886FCD4:
    aot_gpr[31] = (0x0886FCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 50u, 0x088622E8u>(ctx, &aot_mem) && ctx.pc == 0x0886FCDCu) goto L_0886FCDC;
    return;
L_0886FCDC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886FCE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 149u, 0x088B5CBCu>(ctx, &aot_mem) && ctx.pc == 0x0886FCE8u) goto L_0886FCE8;
    return;
L_0886FCE8:
    aot_gpr[31] = (0x0886FCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 197u, 0x0886EFB4u>(ctx, &aot_mem) && ctx.pc == 0x0886FCF0u) goto L_0886FCF0;
    return;
L_0886FCF0:
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0886FCFCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    goto L_0886F18C;
L_0886FCFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(852)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(856)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(860)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(864)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(868)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(872)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(876)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(880)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(884)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(888)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FD2C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25416), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FD4C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FD54:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FD74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0886FD98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6616));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FD98u) goto L_0886FD98;
    return;
L_0886FD98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FDA8;
      }
      goto L_0886FDA0;
    }
L_0886FDA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0886FE60;
      }
      goto L_0886FDA8;
    }
L_0886FDA8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FDB8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6620));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FDB8u) goto L_0886FDB8;
    return;
L_0886FDB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_0886FDD4;
      }
      goto L_0886FDC0;
    }
L_0886FDC0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FDCCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6624));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FDCCu) goto L_0886FDCC;
    return;
L_0886FDCC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FDDC;
      }
      goto L_0886FDD4;
    }
L_0886FDD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_0886FE60;
      }
      goto L_0886FDDC;
    }
L_0886FDDC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FDECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6628));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FDECu) goto L_0886FDEC;
    return;
L_0886FDEC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FDFC;
      }
      goto L_0886FDF4;
    }
L_0886FDF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_0886FE60;
      }
      goto L_0886FDFC;
    }
L_0886FDFC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FE0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6632));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FE0Cu) goto L_0886FE0C;
    return;
L_0886FE0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_0886FE28;
      }
      goto L_0886FE14;
    }
L_0886FE14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FE20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6636));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FE20u) goto L_0886FE20;
    return;
L_0886FE20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FE30;
      }
      goto L_0886FE28;
    }
L_0886FE28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_0886FE60;
      }
      goto L_0886FE30;
    }
L_0886FE30:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FE40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6640));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FE40u) goto L_0886FE40;
    return;
L_0886FE40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_0886FE5C;
      }
      goto L_0886FE48;
    }
L_0886FE48:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FE54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6644));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FE54u) goto L_0886FE54;
    return;
L_0886FE54:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FE60;
      }
      goto L_0886FE5C;
    }
L_0886FE5C:
    aot_gpr[17] = (0u | 5u);
    goto L_0886FE60;
L_0886FE60:
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
L_0886FE78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886FE90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6648));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x0886FE90u) goto L_0886FE90;
    return;
L_0886FE90:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886FEA4;
      }
      goto L_0886FE9C;
    }
L_0886FE9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0886FEA8;
      }
      goto L_0886FEA4;
    }
L_0886FEA4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0886FEA8;
L_0886FEA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FEB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0886FEDCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6660));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FEDCu) goto L_0886FEDC;
    return;
L_0886FEDC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FF34;
      }
      goto L_0886FEE4;
    }
L_0886FEE4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FEF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6672));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FEF4u) goto L_0886FEF4;
    return;
L_0886FEF4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FF1C;
      }
      goto L_0886FEFC;
    }
L_0886FEFC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FF0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6684));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FF0Cu) goto L_0886FF0C;
    return;
L_0886FF0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FF6C;
      }
      goto L_0886FF14;
    }
L_0886FF14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_0886FF58;
      }
      goto L_0886FF1C;
    }
L_0886FF1C:
    aot_gpr[4] = (aot_gpr[17] ^ 1u);
    aot_gpr[5] = (aot_gpr[17] ^ 2u);
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0886FF7C;
      }
      goto L_0886FF34;
    }
L_0886FF34:
    aot_gpr[4] = (aot_gpr[17] ^ 1u);
    aot_gpr[5] = (aot_gpr[17] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[17] ^ 3u);
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0886FF7C;
      }
      goto L_0886FF58;
    }
L_0886FF58:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886FF64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6696));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0886FF64u) goto L_0886FF64;
    return;
L_0886FF64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886FF78;
      }
      goto L_0886FF6C;
    }
L_0886FF6C:
    aot_gpr[2] = (aot_gpr[17] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886FF7C;
      }
      goto L_0886FF78;
    }
L_0886FF78:
    aot_gpr[2] = (0u | 0u);
    goto L_0886FF7C;
L_0886FF7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FF90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0886FFBCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0886FD74;
L_0886FFBC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886FFF0;
      }
      goto L_0886FFC4;
    }
L_0886FFC4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4808));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886FFE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x0886FFE4u) goto L_0886FFE4;
    return;
L_0886FFE4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886FFF8;
      }
      goto L_0886FFF0;
    }
L_0886FFF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 99u, 0x08870574u>(ctx, &aot_mem); return;
      }
      goto L_0886FFF8;
    }
L_0886FFF8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08870000u; return;
}

void recomp_unit_0107(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0107_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_107(Runtime &runtime) {
    runtime.register_generated_unit(107u, 0x0886F000u, 4096u, &recomp_unit_0107, &recomp_unit_0107_entry);
    runtime.register_function(0x0886F000u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F018u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F038u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F050u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F068u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F07Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F094u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F0A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F0D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F0ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F0F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F0FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F10Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F124u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F138u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F158u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F16Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F18Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F1BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F1C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F1F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F1F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F20Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F214u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F228u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F238u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F254u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F268u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F278u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F290u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F2E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F2F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F318u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F324u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F32Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F33Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F344u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F34Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F35Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F36Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F3A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F404u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F410u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F42Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F434u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F438u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F448u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F450u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F45Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F464u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F46Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F478u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F480u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F484u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F4FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F514u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F530u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F538u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F55Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F564u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F56Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F574u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F57Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F590u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F598u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F5FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F608u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F610u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F62Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F634u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F63Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F644u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F650u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F660u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F668u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F678u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F680u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F684u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F6A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F6C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F6E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F70Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F730u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F73Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F760u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F784u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F794u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F7B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F7DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F7E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F7F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F7F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F810u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F818u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F828u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F844u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F85Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F864u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F874u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F88Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F8ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F90Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F918u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F920u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F928u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F934u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F93Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F944u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F950u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F958u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F968u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F974u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F97Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F984u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F990u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886F9F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FA84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FAA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FAC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FACCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FAD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FAE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FAE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FAF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FB90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FBFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FC9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FCFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FD2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FD4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FD54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FD74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FD98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FDFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FE9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FEFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FF90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FFBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FFC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FFE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FFF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x0886FFF8u, &recomp_unit_0107, "recomp_unit_0107");
}
} // namespace psprecomp
