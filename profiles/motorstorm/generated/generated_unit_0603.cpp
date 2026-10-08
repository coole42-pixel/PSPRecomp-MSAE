#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0603[1021] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0,
    0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 0, 21, 22, 0, 0, 0, 23,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 0, 28, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 33, 0,
    0, 0, 34, 0, 35, 0, 0, 0, 36, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0,
    0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63,
    0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0,
    0, 0, 79, 80, 0, 81, 0, 0, 0, 82, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 97, 0, 0, 98, 0,
    0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 113, 114, 0,
    0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153,
    0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 194, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    201, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0,
    0, 236, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0,
    0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258,
};
void recomp_unit_0603_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A5F000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0603[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5F000;
    case 2u: goto L_08A5F018;
    case 3u: goto L_08A5F02C;
    case 4u: goto L_08A5F044;
    case 5u: goto L_08A5F054;
    case 6u: goto L_08A5F05C;
    case 7u: goto L_08A5F07C;
    case 8u: goto L_08A5F098;
    case 9u: goto L_08A5F0BC;
    case 10u: goto L_08A5F0CC;
    case 11u: goto L_08A5F0E4;
    case 12u: goto L_08A5F0EC;
    case 13u: goto L_08A5F0F4;
    case 14u: goto L_08A5F104;
    case 15u: goto L_08A5F110;
    case 16u: goto L_08A5F118;
    case 17u: goto L_08A5F12C;
    case 18u: goto L_08A5F144;
    case 19u: goto L_08A5F154;
    case 20u: goto L_08A5F158;
    case 21u: goto L_08A5F168;
    case 22u: goto L_08A5F16C;
    case 23u: goto L_08A5F17C;
    case 24u: goto L_08A5F180;
    case 25u: goto L_08A5F198;
    case 26u: goto L_08A5F1B4;
    case 27u: goto L_08A5F1B8;
    case 28u: goto L_08A5F1C8;
    case 29u: goto L_08A5F1CC;
    case 30u: goto L_08A5F1DC;
    case 31u: goto L_08A5F1E4;
    case 32u: goto L_08A5F1F4;
    case 33u: goto L_08A5F1F8;
    case 34u: goto L_08A5F208;
    case 35u: goto L_08A5F210;
    case 36u: goto L_08A5F220;
    case 37u: goto L_08A5F224;
    case 38u: goto L_08A5F234;
    case 39u: goto L_08A5F23C;
    case 40u: goto L_08A5F24C;
    case 41u: goto L_08A5F250;
    case 42u: goto L_08A5F260;
    case 43u: goto L_08A5F268;
    case 44u: goto L_08A5F278;
    case 45u: goto L_08A5F284;
    case 46u: goto L_08A5F294;
    case 47u: goto L_08A5F2A0;
    case 48u: goto L_08A5F2B0;
    case 49u: goto L_08A5F2BC;
    case 50u: goto L_08A5F2CC;
    case 51u: goto L_08A5F2D8;
    case 52u: goto L_08A5F2E8;
    case 53u: goto L_08A5F2F4;
    case 54u: goto L_08A5F304;
    case 55u: goto L_08A5F310;
    case 56u: goto L_08A5F320;
    case 57u: goto L_08A5F32C;
    case 58u: goto L_08A5F348;
    case 59u: goto L_08A5F34C;
    case 60u: goto L_08A5F35C;
    case 61u: goto L_08A5F364;
    case 62u: goto L_08A5F374;
    case 63u: goto L_08A5F37C;
    case 64u: goto L_08A5F38C;
    case 65u: goto L_08A5F394;
    case 66u: goto L_08A5F3A0;
    case 67u: goto L_08A5F3AC;
    case 68u: goto L_08A5F3C0;
    case 69u: goto L_08A5F3D4;
    case 70u: goto L_08A5F3E8;
    case 71u: goto L_08A5F428;
    case 72u: goto L_08A5F434;
    case 73u: goto L_08A5F444;
    case 74u: goto L_08A5F454;
    case 75u: goto L_08A5F458;
    case 76u: goto L_08A5F464;
    case 77u: goto L_08A5F46C;
    case 78u: goto L_08A5F478;
    case 79u: goto L_08A5F488;
    case 80u: goto L_08A5F48C;
    case 81u: goto L_08A5F494;
    case 82u: goto L_08A5F4A4;
    case 83u: goto L_08A5F4A8;
    case 84u: goto L_08A5F4B4;
    case 85u: goto L_08A5F4BC;
    case 86u: goto L_08A5F4D8;
    case 87u: goto L_08A5F4F0;
    case 88u: goto L_08A5F4FC;
    case 89u: goto L_08A5F508;
    case 90u: goto L_08A5F518;
    case 91u: goto L_08A5F528;
    case 92u: goto L_08A5F538;
    case 93u: goto L_08A5F540;
    case 94u: goto L_08A5F54C;
    case 95u: goto L_08A5F558;
    case 96u: goto L_08A5F568;
    case 97u: goto L_08A5F56C;
    case 98u: goto L_08A5F578;
    case 99u: goto L_08A5F58C;
    case 100u: goto L_08A5F59C;
    case 101u: goto L_08A5F5A8;
    case 102u: goto L_08A5F5D8;
    case 103u: goto L_08A5F5FC;
    case 104u: goto L_08A5F608;
    case 105u: goto L_08A5F610;
    case 106u: goto L_08A5F618;
    case 107u: goto L_08A5F63C;
    case 108u: goto L_08A5F648;
    case 109u: goto L_08A5F658;
    case 110u: goto L_08A5F660;
    case 111u: goto L_08A5F668;
    case 112u: goto L_08A5F66C;
    case 113u: goto L_08A5F674;
    case 114u: goto L_08A5F678;
    case 115u: goto L_08A5F684;
    case 116u: goto L_08A5F690;
    case 117u: goto L_08A5F69C;
    case 118u: goto L_08A5F6A8;
    case 119u: goto L_08A5F6B8;
    case 120u: goto L_08A5F6CC;
    case 121u: goto L_08A5F6D8;
    case 122u: goto L_08A5F6EC;
    case 123u: goto L_08A5F700;
    case 124u: goto L_08A5F714;
    case 125u: goto L_08A5F720;
    case 126u: goto L_08A5F734;
    case 127u: goto L_08A5F748;
    case 128u: goto L_08A5F758;
    case 129u: goto L_08A5F768;
    case 130u: goto L_08A5F778;
    case 131u: goto L_08A5F788;
    case 132u: goto L_08A5F798;
    case 133u: goto L_08A5F7A4;
    case 134u: goto L_08A5F7B4;
    case 135u: goto L_08A5F7C8;
    case 136u: goto L_08A5F7E0;
    case 137u: goto L_08A5F7F4;
    case 138u: goto L_08A5F808;
    case 139u: goto L_08A5F824;
    case 140u: goto L_08A5F840;
    case 141u: goto L_08A5F84C;
    case 142u: goto L_08A5F85C;
    case 143u: goto L_08A5F868;
    case 144u: goto L_08A5F874;
    case 145u: goto L_08A5F888;
    case 146u: goto L_08A5F894;
    case 147u: goto L_08A5F8A4;
    case 148u: goto L_08A5F8B4;
    case 149u: goto L_08A5F8C0;
    case 150u: goto L_08A5F8D0;
    case 151u: goto L_08A5F8E0;
    case 152u: goto L_08A5F8EC;
    case 153u: goto L_08A5F8FC;
    case 154u: goto L_08A5F908;
    case 155u: goto L_08A5F914;
    case 156u: goto L_08A5F920;
    case 157u: goto L_08A5F934;
    case 158u: goto L_08A5F940;
    case 159u: goto L_08A5F954;
    case 160u: goto L_08A5F968;
    case 161u: goto L_08A5F97C;
    case 162u: goto L_08A5F98C;
    case 163u: goto L_08A5F994;
    case 164u: goto L_08A5F9A0;
    case 165u: goto L_08A5F9B4;
    case 166u: goto L_08A5F9C0;
    case 167u: goto L_08A5F9C4;
    case 168u: goto L_08A5F9D8;
    case 169u: goto L_08A5F9E8;
    case 170u: goto L_08A5FA00;
    case 171u: goto L_08A5FA18;
    case 172u: goto L_08A5FA24;
    case 173u: goto L_08A5FA2C;
    case 174u: goto L_08A5FA3C;
    case 175u: goto L_08A5FA4C;
    case 176u: goto L_08A5FA5C;
    case 177u: goto L_08A5FA68;
    case 178u: goto L_08A5FA7C;
    case 179u: goto L_08A5FA88;
    case 180u: goto L_08A5FA9C;
    case 181u: goto L_08A5FAA8;
    case 182u: goto L_08A5FAC0;
    case 183u: goto L_08A5FAD8;
    case 184u: goto L_08A5FAE8;
    case 185u: goto L_08A5FAF8;
    case 186u: goto L_08A5FB08;
    case 187u: goto L_08A5FB1C;
    case 188u: goto L_08A5FB30;
    case 189u: goto L_08A5FB48;
    case 190u: goto L_08A5FB58;
    case 191u: goto L_08A5FB68;
    case 192u: goto L_08A5FB78;
    case 193u: goto L_08A5FB94;
    case 194u: goto L_08A5FBA0;
    case 195u: goto L_08A5FBA4;
    case 196u: goto L_08A5FBB8;
    case 197u: goto L_08A5FBC0;
    case 198u: goto L_08A5FBCC;
    case 199u: goto L_08A5FBD8;
    case 200u: goto L_08A5FBF4;
    case 201u: goto L_08A5FC00;
    case 202u: goto L_08A5FC04;
    case 203u: goto L_08A5FC1C;
    case 204u: goto L_08A5FC38;
    case 205u: goto L_08A5FC44;
    case 206u: goto L_08A5FC54;
    case 207u: goto L_08A5FC6C;
    case 208u: goto L_08A5FC8C;
    case 209u: goto L_08A5FC98;
    case 210u: goto L_08A5FCA4;
    case 211u: goto L_08A5FCB8;
    case 212u: goto L_08A5FCCC;
    case 213u: goto L_08A5FCE0;
    case 214u: goto L_08A5FCF4;
    case 215u: goto L_08A5FD10;
    case 216u: goto L_08A5FD20;
    case 217u: goto L_08A5FD34;
    case 218u: goto L_08A5FD48;
    case 219u: goto L_08A5FD54;
    case 220u: goto L_08A5FD64;
    case 221u: goto L_08A5FD70;
    case 222u: goto L_08A5FD80;
    case 223u: goto L_08A5FD90;
    case 224u: goto L_08A5FDA0;
    case 225u: goto L_08A5FDB0;
    case 226u: goto L_08A5FDD8;
    case 227u: goto L_08A5FDE4;
    case 228u: goto L_08A5FDF0;
    case 229u: goto L_08A5FE08;
    case 230u: goto L_08A5FE24;
    case 231u: goto L_08A5FE38;
    case 232u: goto L_08A5FE50;
    case 233u: goto L_08A5FE5C;
    case 234u: goto L_08A5FE68;
    case 235u: goto L_08A5FE74;
    case 236u: goto L_08A5FE84;
    case 237u: goto L_08A5FE88;
    case 238u: goto L_08A5FE9C;
    case 239u: goto L_08A5FEB4;
    case 240u: goto L_08A5FEC8;
    case 241u: goto L_08A5FED8;
    case 242u: goto L_08A5FEE4;
    case 243u: goto L_08A5FEF8;
    case 244u: goto L_08A5FF08;
    case 245u: goto L_08A5FF10;
    case 246u: goto L_08A5FF18;
    case 247u: goto L_08A5FF28;
    case 248u: goto L_08A5FF3C;
    case 249u: goto L_08A5FF44;
    case 250u: goto L_08A5FF54;
    case 251u: goto L_08A5FF60;
    case 252u: goto L_08A5FF68;
    case 253u: goto L_08A5FF74;
    case 254u: goto L_08A5FF88;
    case 255u: goto L_08A5FF9C;
    case 256u: goto L_08A5FFD0;
    case 257u: goto L_08A5FFE4;
    case 258u: goto L_08A5FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5F000:
    rt.unsupported(0x08A5F000u, 0x79646F42u, "unknown not lowered yet"); return;
L_08A5F018:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5F01Cu, 0x6E4F5F65u, "vfpu3 not lowered yet"); return;
L_08A5F02C:
    rt.unsupported(0x08A5F02Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5F044:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    rt.unsupported(0x08A5F048u, 0x68475F65u, "unknown not lowered yet"); return;
L_08A5F054:
    rt.unsupported(0x08A5F054u, 0x63617474u, "vfpu0 not lowered yet"); return;
L_08A5F05C:
    rt.unsupported(0x08A5F05Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5F07C:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08A5F088u, 0x73754365u, "unknown not lowered yet"); return;
L_08A5F098:
    rt.unsupported(0x08A5F098u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5F0BC:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    ctx.execute_vfpu_vscl_ct<101u, 95u, 87u, 1u>();
    rt.unsupported(0x08A5F0C4u, 0x74697362u, "unknown not lowered yet"); return;
L_08A5F0CC:
    rt.unsupported(0x08A5F0CCu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5F0E4:
    if (aot_gpr[3] != aot_gpr[7]) {
    rt.unsupported(0x08A5F0E8u, 0x6B636172u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 22u, 0x08A795F0u>(ctx, &aot_mem); return;
    }
    goto L_08A5F0EC;
L_08A5F0EC:
    rt.unsupported(0x08A5F0ECu, 0x746F6850u, "unknown not lowered yet"); return;
L_08A5F0F4:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08A5F104;
L_08A5F104:
    rt.unsupported(0x08A5F104u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5F110:
    rt.unsupported(0x08A5F110u, 0x614C5F58u, "vfpu0 not lowered yet"); return;
L_08A5F118:
    rt.unsupported(0x08A5F118u, 0x626D754Eu, "vfpu0 not lowered yet"); return;
L_08A5F12C:
    rt.unsupported(0x08A5F12Cu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F144:
    rt.unsupported(0x08A5F144u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F154:
    // nop
    goto L_08A5F158;
L_08A5F158:
    rt.unsupported(0x08A5F158u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F168:
    // nop
    goto L_08A5F16C;
L_08A5F16C:
    rt.unsupported(0x08A5F16Cu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F17C:
    // nop
    goto L_08A5F180;
L_08A5F180:
    rt.unsupported(0x08A5F180u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F198:
    rt.unsupported(0x08A5F198u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F1B4:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5F1B8;
L_08A5F1B8:
    rt.unsupported(0x08A5F1B8u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F1C8:
    // nop
    goto L_08A5F1CC;
L_08A5F1CC:
    rt.unsupported(0x08A5F1CCu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F1DC:
    rt.unsupported(0x08A5F1DCu, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F1E4:
    rt.unsupported(0x08A5F1E4u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F1F4:
    // nop
    goto L_08A5F1F8;
L_08A5F1F8:
    rt.unsupported(0x08A5F1F8u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F208:
    rt.unsupported(0x08A5F208u, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F210:
    rt.unsupported(0x08A5F210u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F220:
    // nop
    goto L_08A5F224;
L_08A5F224:
    rt.unsupported(0x08A5F224u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F234:
    rt.unsupported(0x08A5F234u, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F23C:
    rt.unsupported(0x08A5F23Cu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F24C:
    // nop
    goto L_08A5F250;
L_08A5F250:
    rt.unsupported(0x08A5F250u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F260:
    rt.unsupported(0x08A5F260u, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F268:
    rt.unsupported(0x08A5F268u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F278:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F27Cu, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F284:
    rt.unsupported(0x08A5F284u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F294:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F298u, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F2A0:
    rt.unsupported(0x08A5F2A0u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F2B0:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F2B4u, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F2BC:
    rt.unsupported(0x08A5F2BCu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F2CC:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F2D0u, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F2D8:
    rt.unsupported(0x08A5F2D8u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F2E8:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F2ECu, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F2F4:
    rt.unsupported(0x08A5F2F4u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F304:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F308u, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F310:
    rt.unsupported(0x08A5F310u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F320:
    ctx.execute_vfpu_vcmp_ct<83u, 101u, 1u, 15u>();
    rt.unsupported(0x08A5F324u, 0x69746365u, "unknown not lowered yet"); return;
L_08A5F32C:
    rt.unsupported(0x08A5F32Cu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F348:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5F34C;
L_08A5F34C:
    rt.unsupported(0x08A5F34Cu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F35C:
    rt.unsupported(0x08A5F35Cu, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F364:
    rt.unsupported(0x08A5F364u, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F374:
    rt.unsupported(0x08A5F374u, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F37C:
    rt.unsupported(0x08A5F37Cu, 0x6E6F6349u, "vfpu3 not lowered yet"); return;
L_08A5F38C:
    rt.unsupported(0x08A5F38Cu, 0x6168535Fu, "vfpu0 not lowered yet"); return;
L_08A5F394:
    rt.unsupported(0x08A5F394u, 0x6E657645u, "vfpu3 not lowered yet"); return;
L_08A5F3A0:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_compare3(95u, 88u, 95u, 1u, 6u);
    aot_gpr[11] = (aot_gpr[2] ^ aot_gpr[25]);
    goto L_08A5F3AC;
L_08A5F3AC:
    rt.unsupported(0x08A5F3ACu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5F3C0:
    rt.unsupported(0x08A5F3C0u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5F3D4:
    rt.unsupported(0x08A5F3D4u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5F3E8:
    rt.unsupported(0x08A5F3ECu, 0x08846508u, "control flow in delay slot"); return;
L_08A5F428:
    rt.unsupported(0x08A5F428u, 0x62626F4Cu, "vfpu0 not lowered yet"); return;
L_08A5F434:
    ctx.execute_vfpu_compare3(73u, 110u, 102u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 121u, 112u, 1u>();
    // nop
    goto L_08A5F444;
L_08A5F444:
    ctx.execute_vfpu_compare3(73u, 110u, 102u, 1u, 6u);
    rt.unsupported(0x08A5F448u, 0x4C6D754Eu, "unknown not lowered yet"); return;
L_08A5F454:
    (void)(~(0u | 0u));
    goto L_08A5F458;
L_08A5F458:
    ctx.execute_vfpu_compare3(73u, 110u, 102u, 1u, 6u);
    if (aot_gpr[3] == aot_gpr[13]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 168u, 0x08A7C998u>(ctx, &aot_mem); return;
    }
    goto L_08A5F464;
L_08A5F464:
    rt.unsupported(0x08A5F464u, 0x61447372u, "vfpu0 not lowered yet"); return;
L_08A5F46C:
    rt.unsupported(0x08A5F46Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08A5F478:
    rt.unsupported(0x08A5F478u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5F488:
    rt.unsupported(0x08A5F488u, 0x00006572u, "special? not lowered yet"); return;
L_08A5F48C:
    rt.unsupported(0x08A5F48Cu, 0x69676542u, "unknown not lowered yet"); return;
L_08A5F494:
    rt.unsupported(0x08A5F494u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5F4A4:
    rt.unsupported(0x08A5F4A4u, 0x00006572u, "special? not lowered yet"); return;
L_08A5F4A8:
    rt.unsupported(0x08A5F4A8u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A5F4B4:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.memory().memory_barrier();
    goto L_08A5F4BC;
L_08A5F4BC:
    rt.unsupported(0x08A5F4BCu, 0x74696157u, "unknown not lowered yet"); return;
L_08A5F4D8:
    rt.unsupported(0x08A5F4D8u, 0x74696157u, "unknown not lowered yet"); return;
L_08A5F4F0:
    rt.unsupported(0x08A5F4F0u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5F4FC:
    rt.unsupported(0x08A5F4FCu, 0x69686556u, "unknown not lowered yet"); return;
L_08A5F508:
    rt.unsupported(0x08A5F508u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5F518:
    rt.unsupported(0x08A5F518u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5F528:
    rt.unsupported(0x08A5F528u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A5F538:
    rt.unsupported(0x08A5F538u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A5F540:
    rt.unsupported(0x08A5F540u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5F54C:
    rt.unsupported(0x08A5F54Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5F558:
    rt.unsupported(0x08A5F558u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5F568:
    rt.unsupported(0x08A5F568u, 0x00657275u, "special? not lowered yet"); return;
L_08A5F56C:
    rt.unsupported(0x08A5F56Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5F578:
    rt.unsupported(0x08A5F578u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5F58C:
    rt.unsupported(0x08A5F58Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5F59C:
    rt.unsupported(0x08A5F59Cu, 0x696C6F50u, "unknown not lowered yet"); return;
L_08A5F5A8:
    rt.unsupported(0x08A5F5A8u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A5F5D8:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5F5DCu, 0x69545C73u, "unknown not lowered yet"); return;
L_08A5F5FC:
    rt.unsupported(0x08A5F5FCu, 0x43534544u, "unknown not lowered yet"); return;
L_08A5F608:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 118u, 1u>();
    rt.unsupported(0x08A5F60Cu, 0x00657372u, "special? not lowered yet"); return;
L_08A5F610:
    ctx.execute_vfpu_vminmax(78u, 111u, 114u, 1u, false);
    aot_gpr[13] = (0u + 0u);
    goto L_08A5F618;
L_08A5F618:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08A5F61Cu, 0x69535C73u, "unknown not lowered yet"); return;
L_08A5F63C:
    rt.unsupported(0x08A5F63Cu, 0x43534544u, "unknown not lowered yet"); return;
L_08A5F648:
    rt.unsupported(0x08A5F648u, 0x75626544u, "unknown not lowered yet"); return;
L_08A5F658:
    rt.unsupported(0x08A5F658u, 0x20732520u, "unknown not lowered yet"); return;
L_08A5F660:
    rt.unsupported(0x08A5F664u, 0x5F766572u, "control flow in delay slot"); return;
L_08A5F668:
    rt.unsupported(0x08A5F668u, 0x00000032u, "special? not lowered yet"); return;
L_08A5F66C:
    rt.unsupported(0x08A5F670u, 0x5F766572u, "control flow in delay slot"); return;
L_08A5F674:
    rt.unsupported(0x08A5F674u, 0x00000031u, "special? not lowered yet"); return;
L_08A5F678:
    rt.unsupported(0x08A5F678u, 0x435F7325u, "unknown not lowered yet"); return;
L_08A5F684:
    rt.unsupported(0x08A5F684u, 0x4E5F7325u, "unknown not lowered yet"); return;
L_08A5F690:
    rt.unsupported(0x08A5F690u, 0x4E5F7325u, "unknown not lowered yet"); return;
L_08A5F69C:
    rt.unsupported(0x08A5F69Cu, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5F6A8:
    rt.unsupported(0x08A5F6A8u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5F6B8:
    rt.unsupported(0x08A5F6B8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5F6CC:
    rt.unsupported(0x08A5F6CCu, 0x69686556u, "unknown not lowered yet"); return;
L_08A5F6D8:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    rt.unsupported(0x08A5F6DCu, 0x4D656C69u, "unknown not lowered yet"); return;
L_08A5F6EC:
    rt.unsupported(0x08A5F6ECu, 0x69647541u, "unknown not lowered yet"); return;
L_08A5F700:
    rt.unsupported(0x08A5F700u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A5F714:
    rt.unsupported(0x08A5F714u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5F720:
    rt.unsupported(0x08A5F720u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A5F734:
    rt.unsupported(0x08A5F734u, 0x74736546u, "unknown not lowered yet"); return;
L_08A5F748:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A5F74Cu, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A5F758:
    rt.unsupported(0x08A5F758u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5F768:
    rt.unsupported(0x08A5F768u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A5F778:
    rt.unsupported(0x08A5F778u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5F788:
    rt.unsupported(0x08A5F788u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5F798:
    rt.unsupported(0x08A5F798u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5F7A4:
    rt.unsupported(0x08A5F7A4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F7B4:
    rt.unsupported(0x08A5F7B4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F7C8:
    rt.unsupported(0x08A5F7C8u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F7E0:
    rt.unsupported(0x08A5F7E0u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F7F4:
    rt.unsupported(0x08A5F7F4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F808:
    rt.unsupported(0x08A5F808u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F824:
    rt.unsupported(0x08A5F824u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5F840:
    rt.unsupported(0x08A5F840u, 0x61726147u, "vfpu0 not lowered yet"); return;
L_08A5F84C:
    rt.unsupported(0x08A5F84Cu, 0x706F7254u, "unknown not lowered yet"); return;
L_08A5F85C:
    rt.unsupported(0x08A5F85Cu, 0x74617453u, "unknown not lowered yet"); return;
L_08A5F868:
    rt.unsupported(0x08A5F868u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5F874:
    rt.unsupported(0x08A5F874u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A5F888:
    rt.unsupported(0x08A5F888u, 0x494E5350u, "cop2/vfpu not lowered yet"); return;
L_08A5F894:
    rt.unsupported(0x08A5F894u, 0x4C4E5350u, "unknown not lowered yet"); return;
L_08A5F8A4:
    rt.unsupported(0x08A5F8A4u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A5F8B4:
    rt.unsupported(0x08A5F8B4u, 0x696C6F50u, "unknown not lowered yet"); return;
L_08A5F8C0:
    rt.unsupported(0x08A5F8C0u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5F8D0:
    rt.unsupported(0x08A5F8D0u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5F8E0:
    rt.unsupported(0x08A5F8E0u, 0x62626F4Cu, "vfpu0 not lowered yet"); return;
L_08A5F8EC:
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08A5F8F0u, 0x74696E75u, "unknown not lowered yet"); return;
L_08A5F8FC:
    ctx.execute_vfpu_vscl_ct<70u, 114u, 105u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 100u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5F908;
L_08A5F908:
    ctx.execute_vfpu_compare3(73u, 103u, 110u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 101u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5F914;
L_08A5F914:
    ctx.execute_vfpu_vscl_ct<82u, 101u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<110u, 116u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5F920;
L_08A5F920:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    rt.unsupported(0x08A5F928u, 0x73647261u, "unknown not lowered yet"); return;
L_08A5F934:
    rt.unsupported(0x08A5F934u, 0x6152424Cu, "vfpu0 not lowered yet"); return;
L_08A5F940:
    rt.unsupported(0x08A5F940u, 0x6954424Cu, "unknown not lowered yet"); return;
L_08A5F954:
    rt.unsupported(0x08A5F954u, 0x6954424Cu, "unknown not lowered yet"); return;
L_08A5F968:
    rt.unsupported(0x08A5F968u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5F97C:
    ctx.execute_vfpu_compare3(85u, 110u, 108u, 1u, 6u);
    rt.unsupported(0x08A5F980u, 0x63536B63u, "vfpu0 not lowered yet"); return;
L_08A5F98C:
    rt.unsupported(0x08A5F990u, 0x5574736Fu, "control flow in delay slot"); return;
L_08A5F994:
    rt.unsupported(0x08A5F994u, 0x636F6C6Eu, "vfpu0 not lowered yet"); return;
L_08A5F9A0:
    rt.unsupported(0x08A5F9A0u, 0x6B636F4Cu, "unknown not lowered yet"); return;
L_08A5F9B4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    if (aot_gpr[19] == aot_gpr[7]) {
    rt.unsupported(0x08A5F9BCu, 0x4D656361u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0631_entry, 631u, 13u, 0x08A7B360u>(ctx, &aot_mem); return;
    }
    goto L_08A5F9C0;
L_08A5F9C0:
    aot_gpr[13] = (aot_gpr[3] | aot_gpr[21]);
    goto L_08A5F9C4;
L_08A5F9C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5F9C8u, 0x43676E69u, "unknown not lowered yet"); return;
L_08A5F9D8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5F9DCu, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A5F9E8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5F9ECu, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08A5FA00:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5FA04u, 0x4D737469u, "unknown not lowered yet"); return;
L_08A5FA18:
    rt.unsupported(0x08A5FA18u, 0x436D654Du, "unknown not lowered yet"); return;
L_08A5FA24:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5FA2C;
L_08A5FA2C:
    ctx.execute_vfpu_vscl_ct<82u, 117u, 108u, 1u>();
    ctx.execute_vfpu_compare3(73u, 110u, 102u, 1u, 6u);
    rt.unsupported(0x08A5FA34u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A5FA3C:
    rt.unsupported(0x08A5FA3Cu, 0x6E756F53u, "vfpu3 not lowered yet"); return;
L_08A5FA4C:
    rt.unsupported(0x08A5FA4Cu, 0x6973754Du, "unknown not lowered yet"); return;
L_08A5FA5C:
    rt.unsupported(0x08A5FA5Cu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5FA68:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08A5FA6Cu, 0x61747441u, "vfpu0 not lowered yet"); return;
L_08A5FA7C:
    rt.unsupported(0x08A5FA7Cu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5FA88:
    rt.unsupported(0x08A5FA88u, 0x676E6953u, "vfpu1 not lowered yet"); return;
L_08A5FA9C:
    rt.unsupported(0x08A5FA9Cu, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5FAA8:
    rt.unsupported(0x08A5FAA8u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5FAC0:
    rt.unsupported(0x08A5FAC0u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5FAD8:
    rt.unsupported(0x08A5FAD8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5FAE8:
    rt.unsupported(0x08A5FAE8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5FAF8:
    rt.unsupported(0x08A5FAF8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5FB08:
    rt.unsupported(0x08A5FB08u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5FB1C:
    rt.unsupported(0x08A5FB1Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08A5FB30:
    rt.unsupported(0x08A5FB30u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5FB48:
    rt.unsupported(0x08A5FB48u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5FB58:
    rt.unsupported(0x08A5FB58u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5FB68:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 118u, 1u>();
    rt.unsupported(0x08A5FB6Cu, 0x77537972u, "unknown not lowered yet"); return;
L_08A5FB78:
    rt.unsupported(0x08A5FB78u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FB94:
    rt.unsupported(0x08A5FB94u, 0x74746150u, "unknown not lowered yet"); return;
L_08A5FBA0:
    rt.unsupported(0x08A5FBA0u, 0x00000068u, "special? not lowered yet"); return;
L_08A5FBA4:
    rt.unsupported(0x08A5FBA4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FBB8:
    rt.unsupported(0x08A5FBB8u, 0x61446E72u, "vfpu0 not lowered yet"); return;
L_08A5FBC0:
    rt.unsupported(0x08A5FBC0u, 0x7265764Fu, "unknown not lowered yet"); return;
L_08A5FBCC:
    rt.unsupported(0x08A5FBCCu, 0x63614268u, "vfpu0 not lowered yet"); return;
L_08A5FBD8:
    rt.unsupported(0x08A5FBD8u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FBF4:
    rt.unsupported(0x08A5FBF4u, 0x7265764Fu, "unknown not lowered yet"); return;
L_08A5FC00:
    rt.unsupported(0x08A5FC00u, 0x00000068u, "special? not lowered yet"); return;
L_08A5FC04:
    rt.unsupported(0x08A5FC04u, 0x61636544u, "vfpu0 not lowered yet"); return;
L_08A5FC1C:
    rt.unsupported(0x08A5FC1Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FC38:
    rt.unsupported(0x08A5FC38u, 0x61636544u, "vfpu0 not lowered yet"); return;
L_08A5FC44:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A5FC48u, 0x77537275u, "unknown not lowered yet"); return;
L_08A5FC54:
    rt.unsupported(0x08A5FC54u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FC6C:
    rt.unsupported(0x08A5FC6Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FC8C:
    rt.unsupported(0x08A5FC8Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FC98:
    rt.unsupported(0x08A5FC98u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FCA4:
    rt.unsupported(0x08A5FCA4u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5FCB8:
    rt.unsupported(0x08A5FCB8u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5FCCC:
    rt.unsupported(0x08A5FCCCu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FCE0:
    rt.unsupported(0x08A5FCE0u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FCF4:
    rt.unsupported(0x08A5FCF4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5FD10:
    rt.unsupported(0x08A5FD10u, 0x696C6548u, "unknown not lowered yet"); return;
L_08A5FD20:
    rt.unsupported(0x08A5FD20u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08A5FD34:
    rt.unsupported(0x08A5FD34u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A5FD48:
    rt.unsupported(0x08A5FD48u, 0x61726147u, "vfpu0 not lowered yet"); return;
L_08A5FD54:
    rt.unsupported(0x08A5FD54u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5FD64:
    rt.unsupported(0x08A5FD64u, 0x74617453u, "unknown not lowered yet"); return;
L_08A5FD70:
    rt.unsupported(0x08A5FD70u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5FD80:
    rt.unsupported(0x08A5FD80u, 0x72617453u, "unknown not lowered yet"); return;
L_08A5FD90:
    rt.unsupported(0x08A5FD90u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5FDA0:
    rt.unsupported(0x08A5FDA0u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5FDB0:
    rt.unsupported(0x08A5FDB0u, 0x74494543u, "unknown not lowered yet"); return;
L_08A5FDD8:
    rt.unsupported(0x08A5FDD8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FDE4:
    rt.unsupported(0x08A5FDE4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FDF0:
    rt.unsupported(0x08A5FDF0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FE08:
    rt.unsupported(0x08A5FE08u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FE24:
    rt.unsupported(0x08A5FE24u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FE38:
    rt.unsupported(0x08A5FE38u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FE50:
    rt.unsupported(0x08A5FE50u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FE5C:
    rt.unsupported(0x08A5FE5Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FE68:
    rt.unsupported(0x08A5FE68u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5FE74:
    rt.unsupported(0x08A5FE74u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5FE84:
    rt.unsupported(0x08A5FE84u, 0x00006572u, "special? not lowered yet"); return;
L_08A5FE88:
    rt.unsupported(0x08A5FE88u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5FE9C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5FEA0u, 0x4D737469u, "unknown not lowered yet"); return;
L_08A5FEB4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5FEB8u, 0x4D737469u, "unknown not lowered yet"); return;
L_08A5FEC8:
    rt.unsupported(0x08A5FEC8u, 0x4D796E41u, "unknown not lowered yet"); return;
L_08A5FED8:
    rt.unsupported(0x08A5FED8u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FEE4:
    rt.unsupported(0x08A5FEE4u, 0x6964654Du, "unknown not lowered yet"); return;
L_08A5FEF8:
    rt.unsupported(0x08A5FEF8u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A5FF08:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    (void)(0u - 0u);
    goto L_08A5FF10;
L_08A5FF10:
    rt.unsupported(0x08A5FF10u, 0x696C6E4Fu, "unknown not lowered yet"); return;
L_08A5FF18:
    rt.unsupported(0x08A5FF18u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A5FF28:
    rt.unsupported(0x08A5FF28u, 0x63657257u, "vfpu0 not lowered yet"); return;
L_08A5FF3C:
    rt.unsupported(0x08A5FF3Cu, 0x696C6E4Fu, "unknown not lowered yet"); return;
L_08A5FF44:
    rt.unsupported(0x08A5FF44u, 0x4C4E5350u, "unknown not lowered yet"); return;
L_08A5FF54:
    rt.unsupported(0x08A5FF54u, 0x494E5350u, "cop2/vfpu not lowered yet"); return;
L_08A5FF60:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    (void)(0u - 0u);
    goto L_08A5FF68;
L_08A5FF68:
    rt.unsupported(0x08A5FF68u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5FF74:
    rt.unsupported(0x08A5FF74u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5FF88:
    ctx.execute_vfpu_vhdp(80u, 114u, 111u, 1u);
    rt.unsupported(0x08A5FF8Cu, 0x4D656C69u, "unknown not lowered yet"); return;
L_08A5FF9C:
    ctx.execute_vfpu_compare3(65u, 117u, 116u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<83u, 97u, 118u, 1u>();
    rt.unsupported(0x08A5FFA4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5FFD0:
    rt.unsupported(0x08A5FFD0u, 0x6973754Du, "unknown not lowered yet"); return;
L_08A5FFE4:
    rt.unsupported(0x08A5FFE4u, 0x79616C50u, "unknown not lowered yet"); return;
L_08A5FFF0:
    rt.unsupported(0x08A5FFF0u, 0x6974704Fu, "unknown not lowered yet"); return;
}

void recomp_unit_0603(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0603_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_603(Runtime &runtime) {
    runtime.register_generated_unit(603u, 0x08A5F000u, 4096u, &recomp_unit_0603, &recomp_unit_0603_entry);
    runtime.register_function(0x08A5F000u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F018u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F02Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F044u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F054u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F05Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F07Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F098u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F0BCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F0CCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F0E4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F0ECu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F0F4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F104u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F110u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F118u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F12Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F144u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F154u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F158u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F168u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F16Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F17Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F180u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F198u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1B4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1B8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1C8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1CCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1DCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1E4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1F4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F1F8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F208u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F210u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F220u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F224u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F234u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F23Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F24Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F250u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F260u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F268u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F278u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F284u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F294u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2A0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2B0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2BCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2CCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2D8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2E8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F2F4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F304u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F310u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F320u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F32Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F348u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F34Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F35Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F364u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F374u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F37Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F38Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F394u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F3A0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F3ACu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F3C0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F3D4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F3E8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F428u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F434u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F444u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F454u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F458u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F464u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F46Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F478u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F488u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F48Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F494u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4A4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4A8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4B4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4BCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4D8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4F0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F4FCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F508u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F518u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F528u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F538u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F540u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F54Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F558u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F568u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F56Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F578u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F58Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F59Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F5A8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F5D8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F5FCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F608u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F610u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F618u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F63Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F648u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F658u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F660u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F668u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F66Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F674u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F678u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F684u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F690u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F69Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F6A8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F6B8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F6CCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F6D8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F6ECu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F700u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F714u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F720u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F734u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F748u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F758u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F768u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F778u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F788u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F798u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F7A4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F7B4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F7C8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F7E0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F7F4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F808u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F824u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F840u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F84Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F85Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F868u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F874u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F888u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F894u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8A4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8B4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8C0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8D0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8E0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8ECu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F8FCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F908u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F914u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F920u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F934u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F940u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F954u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F968u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F97Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F98Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F994u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F9A0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F9B4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F9C0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F9C4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F9D8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5F9E8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA00u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA18u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA24u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA2Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA3Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA4Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA5Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA68u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA7Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA88u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FA9Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FAA8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FAC0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FAD8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FAE8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FAF8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB08u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB1Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB30u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB48u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB58u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB68u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB78u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FB94u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBA0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBA4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBB8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBC0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBCCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBD8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FBF4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC00u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC04u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC1Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC38u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC44u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC54u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC6Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC8Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FC98u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FCA4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FCB8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FCCCu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FCE0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FCF4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD10u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD20u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD34u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD48u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD54u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD64u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD70u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD80u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FD90u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FDA0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FDB0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FDD8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FDE4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FDF0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE08u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE24u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE38u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE50u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE5Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE68u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE74u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE84u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE88u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FE9Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FEB4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FEC8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FED8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FEE4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FEF8u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF08u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF10u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF18u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF28u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF3Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF44u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF54u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF60u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF68u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF74u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF88u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FF9Cu, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FFD0u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FFE4u, &recomp_unit_0603, "recomp_unit_0603");
    runtime.register_function(0x08A5FFF0u, &recomp_unit_0603, "recomp_unit_0603");
}
} // namespace psprecomp
