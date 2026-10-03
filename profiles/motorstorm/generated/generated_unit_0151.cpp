#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0151[1024] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 63, 0, 0, 0, 0,
    64, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 73, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0,
    93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100,
    101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 147, 0, 148, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163,
    0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0,
    0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184,
    0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 196, 197, 0, 0, 0, 0, 198, 0, 0,
    199, 0, 200, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 230, 0, 0, 0, 231, 0, 0, 232, 233, 0, 0, 234, 0, 235, 0, 236,
};
void recomp_unit_0151_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0889B000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0151[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889B000;
    case 2u: goto L_0889B00C;
    case 3u: goto L_0889B024;
    case 4u: goto L_0889B030;
    case 5u: goto L_0889B040;
    case 6u: goto L_0889B04C;
    case 7u: goto L_0889B074;
    case 8u: goto L_0889B080;
    case 9u: goto L_0889B090;
    case 10u: goto L_0889B0A0;
    case 11u: goto L_0889B0AC;
    case 12u: goto L_0889B0BC;
    case 13u: goto L_0889B0D4;
    case 14u: goto L_0889B0E0;
    case 15u: goto L_0889B0FC;
    case 16u: goto L_0889B104;
    case 17u: goto L_0889B10C;
    case 18u: goto L_0889B114;
    case 19u: goto L_0889B120;
    case 20u: goto L_0889B138;
    case 21u: goto L_0889B140;
    case 22u: goto L_0889B148;
    case 23u: goto L_0889B150;
    case 24u: goto L_0889B158;
    case 25u: goto L_0889B160;
    case 26u: goto L_0889B168;
    case 27u: goto L_0889B170;
    case 28u: goto L_0889B17C;
    case 29u: goto L_0889B1C0;
    case 30u: goto L_0889B1C8;
    case 31u: goto L_0889B1E4;
    case 32u: goto L_0889B208;
    case 33u: goto L_0889B210;
    case 34u: goto L_0889B218;
    case 35u: goto L_0889B224;
    case 36u: goto L_0889B244;
    case 37u: goto L_0889B254;
    case 38u: goto L_0889B26C;
    case 39u: goto L_0889B29C;
    case 40u: goto L_0889B2E0;
    case 41u: goto L_0889B2E8;
    case 42u: goto L_0889B304;
    case 43u: goto L_0889B314;
    case 44u: goto L_0889B32C;
    case 45u: goto L_0889B338;
    case 46u: goto L_0889B358;
    case 47u: goto L_0889B368;
    case 48u: goto L_0889B380;
    case 49u: goto L_0889B3B0;
    case 50u: goto L_0889B3C0;
    case 51u: goto L_0889B3C8;
    case 52u: goto L_0889B3D4;
    case 53u: goto L_0889B3F8;
    case 54u: goto L_0889B408;
    case 55u: goto L_0889B410;
    case 56u: goto L_0889B420;
    case 57u: goto L_0889B428;
    case 58u: goto L_0889B434;
    case 59u: goto L_0889B450;
    case 60u: goto L_0889B458;
    case 61u: goto L_0889B460;
    case 62u: goto L_0889B468;
    case 63u: goto L_0889B46C;
    case 64u: goto L_0889B480;
    case 65u: goto L_0889B488;
    case 66u: goto L_0889B48C;
    case 67u: goto L_0889B4AC;
    case 68u: goto L_0889B4C0;
    case 69u: goto L_0889B4C8;
    case 70u: goto L_0889B4D0;
    case 71u: goto L_0889B4DC;
    case 72u: goto L_0889B4E4;
    case 73u: goto L_0889B4E8;
    case 74u: goto L_0889B4F8;
    case 75u: goto L_0889B50C;
    case 76u: goto L_0889B524;
    case 77u: goto L_0889B528;
    case 78u: goto L_0889B530;
    case 79u: goto L_0889B544;
    case 80u: goto L_0889B550;
    case 81u: goto L_0889B564;
    case 82u: goto L_0889B57C;
    case 83u: goto L_0889B598;
    case 84u: goto L_0889B5A0;
    case 85u: goto L_0889B5A8;
    case 86u: goto L_0889B5C4;
    case 87u: goto L_0889B5C8;
    case 88u: goto L_0889B5D0;
    case 89u: goto L_0889B5D8;
    case 90u: goto L_0889B5E0;
    case 91u: goto L_0889B5F0;
    case 92u: goto L_0889B5F8;
    case 93u: goto L_0889B600;
    case 94u: goto L_0889B610;
    case 95u: goto L_0889B61C;
    case 96u: goto L_0889B634;
    case 97u: goto L_0889B650;
    case 98u: goto L_0889B658;
    case 99u: goto L_0889B660;
    case 100u: goto L_0889B67C;
    case 101u: goto L_0889B680;
    case 102u: goto L_0889B688;
    case 103u: goto L_0889B690;
    case 104u: goto L_0889B698;
    case 105u: goto L_0889B6A8;
    case 106u: goto L_0889B6B0;
    case 107u: goto L_0889B6B8;
    case 108u: goto L_0889B6C8;
    case 109u: goto L_0889B6D4;
    case 110u: goto L_0889B6E4;
    case 111u: goto L_0889B6EC;
    case 112u: goto L_0889B6F4;
    case 113u: goto L_0889B6FC;
    case 114u: goto L_0889B728;
    case 115u: goto L_0889B734;
    case 116u: goto L_0889B740;
    case 117u: goto L_0889B748;
    case 118u: goto L_0889B770;
    case 119u: goto L_0889B784;
    case 120u: goto L_0889B79C;
    case 121u: goto L_0889B7B4;
    case 122u: goto L_0889B7C8;
    case 123u: goto L_0889B7D0;
    case 124u: goto L_0889B7D8;
    case 125u: goto L_0889B7F8;
    case 126u: goto L_0889B80C;
    case 127u: goto L_0889B824;
    case 128u: goto L_0889B828;
    case 129u: goto L_0889B838;
    case 130u: goto L_0889B85C;
    case 131u: goto L_0889B870;
    case 132u: goto L_0889B87C;
    case 133u: goto L_0889B8AC;
    case 134u: goto L_0889B8C4;
    case 135u: goto L_0889B8D8;
    case 136u: goto L_0889B8F8;
    case 137u: goto L_0889B948;
    case 138u: goto L_0889B954;
    case 139u: goto L_0889B988;
    case 140u: goto L_0889B994;
    case 141u: goto L_0889B99C;
    case 142u: goto L_0889B9A0;
    case 143u: goto L_0889BA00;
    case 144u: goto L_0889BA28;
    case 145u: goto L_0889BA30;
    case 146u: goto L_0889BA38;
    case 147u: goto L_0889BA3C;
    case 148u: goto L_0889BA44;
    case 149u: goto L_0889BA54;
    case 150u: goto L_0889BA58;
    case 151u: goto L_0889BA70;
    case 152u: goto L_0889BADC;
    case 153u: goto L_0889BAE8;
    case 154u: goto L_0889BAFC;
    case 155u: goto L_0889BB04;
    case 156u: goto L_0889BB1C;
    case 157u: goto L_0889BB34;
    case 158u: goto L_0889BB3C;
    case 159u: goto L_0889BB4C;
    case 160u: goto L_0889BB54;
    case 161u: goto L_0889BB64;
    case 162u: goto L_0889BB6C;
    case 163u: goto L_0889BB7C;
    case 164u: goto L_0889BB84;
    case 165u: goto L_0889BB94;
    case 166u: goto L_0889BB9C;
    case 167u: goto L_0889BBAC;
    case 168u: goto L_0889BBB4;
    case 169u: goto L_0889BBC4;
    case 170u: goto L_0889BBD4;
    case 171u: goto L_0889BBDC;
    case 172u: goto L_0889BBEC;
    case 173u: goto L_0889BBF4;
    case 174u: goto L_0889BC04;
    case 175u: goto L_0889BC0C;
    case 176u: goto L_0889BC1C;
    case 177u: goto L_0889BC24;
    case 178u: goto L_0889BC34;
    case 179u: goto L_0889BC3C;
    case 180u: goto L_0889BC4C;
    case 181u: goto L_0889BC54;
    case 182u: goto L_0889BC64;
    case 183u: goto L_0889BC6C;
    case 184u: goto L_0889BC7C;
    case 185u: goto L_0889BC84;
    case 186u: goto L_0889BC94;
    case 187u: goto L_0889BC98;
    case 188u: goto L_0889BCD4;
    case 189u: goto L_0889BD08;
    case 190u: goto L_0889BD10;
    case 191u: goto L_0889BD1C;
    case 192u: goto L_0889BD38;
    case 193u: goto L_0889BD44;
    case 194u: goto L_0889BD4C;
    case 195u: goto L_0889BD54;
    case 196u: goto L_0889BD5C;
    case 197u: goto L_0889BD60;
    case 198u: goto L_0889BD74;
    case 199u: goto L_0889BD80;
    case 200u: goto L_0889BD88;
    case 201u: goto L_0889BD8C;
    case 202u: goto L_0889BDA0;
    case 203u: goto L_0889BDAC;
    case 204u: goto L_0889BDB4;
    case 205u: goto L_0889BDBC;
    case 206u: goto L_0889BE44;
    case 207u: goto L_0889BE54;
    case 208u: goto L_0889BE60;
    case 209u: goto L_0889BEA0;
    case 210u: goto L_0889BEA8;
    case 211u: goto L_0889BEB4;
    case 212u: goto L_0889BEBC;
    case 213u: goto L_0889BEC4;
    case 214u: goto L_0889BECC;
    case 215u: goto L_0889BED4;
    case 216u: goto L_0889BEDC;
    case 217u: goto L_0889BEE4;
    case 218u: goto L_0889BEEC;
    case 219u: goto L_0889BEF4;
    case 220u: goto L_0889BF0C;
    case 221u: goto L_0889BF48;
    case 222u: goto L_0889BF60;
    case 223u: goto L_0889BF84;
    case 224u: goto L_0889BF94;
    case 225u: goto L_0889BF9C;
    case 226u: goto L_0889BFA4;
    case 227u: goto L_0889BFAC;
    case 228u: goto L_0889BFB4;
    case 229u: goto L_0889BFBC;
    case 230u: goto L_0889BFC0;
    case 231u: goto L_0889BFD0;
    case 232u: goto L_0889BFDC;
    case 233u: goto L_0889BFE0;
    case 234u: goto L_0889BFEC;
    case 235u: goto L_0889BFF4;
    case 236u: goto L_0889BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889B000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B00C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889B024u);
    aot_gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889B024u) goto L_0889B024;
    return;
L_0889B024:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B030:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889B040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 195u, 0x0896B9D8u>(ctx, &aot_mem) && ctx.pc == 0x0889B040u) goto L_0889B040;
    return;
L_0889B040:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B04C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889B074u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10232));
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x0889B074u) goto L_0889B074;
    return;
L_0889B074:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B080:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889B090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 201u, 0x0896BA4Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B090u) goto L_0889B090;
    return;
L_0889B090:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    aot_gpr[31] = (0x0889B0A0u);
    aot_gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889B0A0u) goto L_0889B0A0;
    return;
L_0889B0A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B0AC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(316)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B0BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889B0D4u);
    aot_gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889B0D4u) goto L_0889B0D4;
    return;
L_0889B0D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B0E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26512)));
      if (branch_taken) {
          goto L_0889B10C;
      }
      goto L_0889B0FC;
    }
L_0889B0FC:
    aot_gpr[31] = (0x0889B104u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889B104u) goto L_0889B104;
    return;
L_0889B104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B114;
      }
      goto L_0889B10C;
    }
L_0889B10C:
    aot_gpr[31] = (0x0889B114u);
    aot_gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x0889D6A8u>(ctx, &aot_mem) && ctx.pc == 0x0889B114u) goto L_0889B114;
    return;
L_0889B114:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B158;
      }
      goto L_0889B138;
    }
L_0889B138:
    aot_gpr[31] = (0x0889B140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 139u, 0x089699A0u>(ctx, &aot_mem) && ctx.pc == 0x0889B140u) goto L_0889B140;
    return;
L_0889B140:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B170;
      }
      goto L_0889B148;
    }
L_0889B148:
    aot_gpr[31] = (0x0889B150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 119u, 0x08969808u>(ctx, &aot_mem) && ctx.pc == 0x0889B150u) goto L_0889B150;
    return;
L_0889B150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B170;
      }
      goto L_0889B158;
    }
L_0889B158:
    aot_gpr[31] = (0x0889B160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 85u, 0x08965688u>(ctx, &aot_mem) && ctx.pc == 0x0889B160u) goto L_0889B160;
    return;
L_0889B160:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B170;
      }
      goto L_0889B168;
    }
L_0889B168:
    aot_gpr[31] = (0x0889B170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0353_entry, 353u, 92u, 0x08965748u>(ctx, &aot_mem) && ctx.pc == 0x0889B170u) goto L_0889B170;
    return;
L_0889B170:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B17C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889B1C0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14364));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889B1C0u) goto L_0889B1C0;
    return;
L_0889B1C0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0889B1C8;
L_0889B1C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(10104)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_0889B1C8;
      }
      goto L_0889B1E4;
    }
L_0889B1E4:
    aot_gpr[23] = (aot_gpr[21] | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[23] + static_cast<std::uint32_t>(308));
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[22] = (0u | 1u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(14392));
    goto L_0889B208;
L_0889B208:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889B26C;
      }
      goto L_0889B210;
    }
L_0889B210:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B26C;
      }
      goto L_0889B218;
    }
L_0889B218:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889B224u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889B224u) goto L_0889B224;
    return;
L_0889B224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(10104)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[30] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0889B244u);
    aot_gpr[6] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0889B244u) goto L_0889B244;
    return;
L_0889B244:
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(308));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0889B254u);
    aot_gpr[6] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0889B254u) goto L_0889B254;
    return;
L_0889B254:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(500));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(500));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889B208;
      }
      goto L_0889B26C;
    }
L_0889B26C:
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
L_0889B29C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889B2E0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14408));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889B2E0u) goto L_0889B2E0;
    return;
L_0889B2E0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    goto L_0889B2E8;
L_0889B2E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(10104)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_0889B2E8;
      }
      goto L_0889B304;
    }
L_0889B304:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0889B380;
      }
      goto L_0889B314;
    }
L_0889B314:
    aot_gpr[21] = (aot_gpr[23] + static_cast<std::uint32_t>(308));
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[22] = (0u | 1u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(14392));
    goto L_0889B32C;
L_0889B32C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889B338u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889B338u) goto L_0889B338;
    return;
L_0889B338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(10104)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[30] = (aot_gpr[4] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0889B358u);
    aot_gpr[6] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0889B358u) goto L_0889B358;
    return;
L_0889B358:
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(308));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0889B368u);
    aot_gpr[6] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0889B368u) goto L_0889B368;
    return;
L_0889B368:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(500));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(500));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(500));
      if (branch_taken) {
          goto L_0889B32C;
      }
      goto L_0889B380;
    }
L_0889B380:
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
L_0889B3B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889B3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x0889B3C0u) goto L_0889B3C0;
    return;
L_0889B3C0:
    aot_gpr[31] = (0x0889B3C8u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1212));
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 29u, 0x0889F234u>(ctx, &aot_mem) && ctx.pc == 0x0889B3C8u) goto L_0889B3C8;
    return;
L_0889B3C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B3D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0889B3F8u);
    // nop
    goto L_0889B3B0;
L_0889B3F8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x0889B408u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889B408u) goto L_0889B408;
    return;
L_0889B408:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B46C;
      }
      goto L_0889B410;
    }
L_0889B410:
    aot_gpr[16] = (4096u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (61440u << 16u);
    goto L_0889B420;
L_0889B420:
    aot_gpr[31] = (0x0889B428u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889B428u) goto L_0889B428;
    return;
L_0889B428:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B460;
      }
      goto L_0889B434;
    }
L_0889B434:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[19] = (aot_gpr[19] << 4u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] & aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_0889B458;
      }
      goto L_0889B450;
    }
L_0889B450:
    aot_gpr[19] = (aot_gpr[19] ^ aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] & aot_gpr[16]);
    goto L_0889B458;
L_0889B458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889B420;
      }
      goto L_0889B460;
    }
L_0889B460:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B46C;
      }
      goto L_0889B468;
    }
L_0889B468:
    aot_gpr[19] = (0u | 1u);
    goto L_0889B46C;
L_0889B46C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7964)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889B488;
      }
      goto L_0889B480;
    }
L_0889B480:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889B48C;
      }
      goto L_0889B488;
    }
L_0889B488:
    aot_gpr[2] = (0u | 1u);
    goto L_0889B48C;
L_0889B48C:
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
L_0889B4AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889B4C0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889B4C0u) goto L_0889B4C0;
    return;
L_0889B4C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B4E4;
      }
      goto L_0889B4C8;
    }
L_0889B4C8:
    aot_gpr[31] = (0x0889B4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0889B4D0u) goto L_0889B4D0;
    return;
L_0889B4D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889B4DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 196u, 0x08964DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889B4DCu) goto L_0889B4DC;
    return;
L_0889B4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B4E8;
      }
      goto L_0889B4E4;
    }
L_0889B4E4:
    aot_gpr[2] = (0u | 0u);
    goto L_0889B4E8;
L_0889B4E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B4F8:
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_0889B524;
      }
      goto L_0889B50C;
    }
L_0889B50C:
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889B528;
      }
      goto L_0889B524;
    }
L_0889B524:
    aot_gpr[2] = (0u | 0u);
    goto L_0889B528;
L_0889B528:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B530:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889B544u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 45u, 0x088A22A4u>(ctx, &aot_mem) && ctx.pc == 0x0889B544u) goto L_0889B544;
    return;
L_0889B544:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B564:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B5A0;
      }
      goto L_0889B57C;
    }
L_0889B57C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889B5A8;
      }
      goto L_0889B598;
    }
L_0889B598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B5C8;
      }
      goto L_0889B5A0;
    }
L_0889B5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B610;
      }
      goto L_0889B5A8;
    }
L_0889B5A8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(26536)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889B5C8;
      }
      goto L_0889B5C4;
    }
L_0889B5C4:
    aot_gpr[4] = (0u | 0u);
    goto L_0889B5C8;
L_0889B5C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B610;
      }
      goto L_0889B5D0;
    }
L_0889B5D0:
    aot_gpr[31] = (0x0889B5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 203u, 0x0896FBFCu>(ctx, &aot_mem) && ctx.pc == 0x0889B5D8u) goto L_0889B5D8;
    return;
L_0889B5D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B5F8;
      }
      goto L_0889B5E0;
    }
L_0889B5E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26652)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B5F8;
      }
      goto L_0889B5F0;
    }
L_0889B5F0:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0889B5F8;
L_0889B5F8:
    aot_gpr[31] = (0x0889B600u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0889B600u) goto L_0889B600;
    return;
L_0889B600:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889B610u);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B610u) goto L_0889B610;
    return;
L_0889B610:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B61C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B658;
      }
      goto L_0889B634;
    }
L_0889B634:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24760));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28636)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889B660;
      }
      goto L_0889B650;
    }
L_0889B650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B680;
      }
      goto L_0889B658;
    }
L_0889B658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B6C8;
      }
      goto L_0889B660;
    }
L_0889B660:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(26536)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889B680;
      }
      goto L_0889B67C;
    }
L_0889B67C:
    aot_gpr[4] = (0u | 0u);
    goto L_0889B680;
L_0889B680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B6C8;
      }
      goto L_0889B688;
    }
L_0889B688:
    aot_gpr[31] = (0x0889B690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 203u, 0x0896FBFCu>(ctx, &aot_mem) && ctx.pc == 0x0889B690u) goto L_0889B690;
    return;
L_0889B690:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B6B0;
      }
      goto L_0889B698;
    }
L_0889B698:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26652)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B6B0;
      }
      goto L_0889B6A8;
    }
L_0889B6A8:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0889B6B0;
L_0889B6B0:
    aot_gpr[31] = (0x0889B6B8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0889B6B8u) goto L_0889B6B8;
    return;
L_0889B6B8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889B6C8u);
    aot_gpr[6] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B6C8u) goto L_0889B6C8;
    return;
L_0889B6C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B6D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x0889B6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889B6E4u) goto L_0889B6E4;
    return;
L_0889B6E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B6F4;
      }
      goto L_0889B6EC;
    }
L_0889B6EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B734;
      }
      goto L_0889B6F4;
    }
L_0889B6F4:
    aot_gpr[31] = (0x0889B6FCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 191u, 0x0895EC84u>(ctx, &aot_mem) && ctx.pc == 0x0889B6FCu) goto L_0889B6FC;
    return;
L_0889B6FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9984));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9980));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0889B728u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 204u, 0x0895ED28u>(ctx, &aot_mem) && ctx.pc == 0x0889B728u) goto L_0889B728;
    return;
L_0889B728:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0889B734u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9944));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 14u, 0x0889D0D0u>(ctx, &aot_mem) && ctx.pc == 0x0889B734u) goto L_0889B734;
    return;
L_0889B734:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B740:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26504)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889B770u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0889B770u) goto L_0889B770;
    return;
L_0889B770:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889B784u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B784u) goto L_0889B784;
    return;
L_0889B784:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889B79Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14440));
    goto L_0889B740;
L_0889B79C:
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
L_0889B7B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B7D8;
      }
      goto L_0889B7C8;
    }
L_0889B7C8:
    aot_gpr[31] = (0x0889B7D0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0889B748;
L_0889B7D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B828;
      }
      goto L_0889B7D8;
    }
L_0889B7D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26504)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0889B7F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B7F8u) goto L_0889B7F8;
    return;
L_0889B7F8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889B80Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B80Cu) goto L_0889B80C;
    return;
L_0889B80C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889B824u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14448));
    goto L_0889B740;
L_0889B824:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_0889B828;
L_0889B828:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14456));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889B85Cu);
    aot_gpr[6] = (0u | 16u);
    goto L_0889B740;
L_0889B85C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26504)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0889B870u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0889B870u) goto L_0889B870;
    return;
L_0889B870:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B87C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889B8ACu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 7u, 0x0891D060u>(ctx, &aot_mem) && ctx.pc == 0x0889B8ACu) goto L_0889B8AC;
    return;
L_0889B8AC:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889B8C4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14464));
    goto L_0889B740;
L_0889B8C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B8D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    aot_gpr[4] = (0u | 222u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[31]);
    aot_gpr[31] = (0x0889B8F8u);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x0889B8F8u) goto L_0889B8F8;
    return;
L_0889B8F8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26492), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-28400), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26500), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26520), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26529), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26537), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26538), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[31] = (0x0889B948u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20620));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 101u, 0x0896276Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B948u) goto L_0889B948;
    return;
L_0889B948:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0889B954u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B954u) goto L_0889B954;
    return;
L_0889B954:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889B988u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889B988u) goto L_0889B988;
    return;
L_0889B988:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_0889B9A0;
      }
      goto L_0889B994;
    }
L_0889B994:
    aot_gpr[31] = (0x0889B99Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0889B99Cu) goto L_0889B99C;
    return;
L_0889B99C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889B9A0;
L_0889B9A0:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26552), aot_gpr[4]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26552)));
    aot_gpr[7] = (0u | 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[6] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26552)));
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26552)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0889BA30;
      }
      goto L_0889BA00;
    }
L_0889BA00:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0889BA28u);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889BA28u) goto L_0889BA28;
    return;
L_0889BA28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889BA3C;
      }
      goto L_0889BA30;
    }
L_0889BA30:
    aot_gpr[31] = (0x0889BA38u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0889BA38u) goto L_0889BA38;
    return;
L_0889BA38:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0889BA3C;
L_0889BA3C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889BA58;
      }
      goto L_0889BA44;
    }
L_0889BA44:
    aot_gpr[5] = (0u | 650u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0889BA54u);
    aot_gpr[6] = (20u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 124u, 0x088C586Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BA54u) goto L_0889BA54;
    return;
L_0889BA54:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    goto L_0889BA58;
L_0889BA58:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26504), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30480), aot_gpr[18]);
    aot_gpr[31] = (0x0889BA70u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 99u, 0x0896274Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BA70u) goto L_0889BA70;
    return;
L_0889BA70:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9944));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18616));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18508));
    aot_gpr[5] = (2186u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18376));
    aot_gpr[6] = (2186u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-18308));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-24952));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889BADCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14472));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0889BADCu) goto L_0889BADC;
    return;
L_0889BADC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x0889BAE8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0889BAE8u) goto L_0889BAE8;
    return;
L_0889BAE8:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-15428));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[31] = (0x0889BAFCu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 70u, 0x089624A4u>(ctx, &aot_mem) && ctx.pc == 0x0889BAFCu) goto L_0889BAFC;
    return;
L_0889BAFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889BB34;
      }
      goto L_0889BB04;
    }
L_0889BB04:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889BC84;
      }
      goto L_0889BB1C;
    }
L_0889BB1C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15216)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF48;
      }
      goto L_0889BB3C;
    }
L_0889BB3C:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BB4Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BB4Cu) goto L_0889BB4C;
    return;
L_0889BB4C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BB54;
    }
L_0889BB54:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BB64u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BB64u) goto L_0889BB64;
    return;
L_0889BB64:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BB6C;
    }
L_0889BB6C:
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BB7Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BB7Cu) goto L_0889BB7C;
    return;
L_0889BB7C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BB84;
    }
L_0889BB84:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BB94u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BB94u) goto L_0889BB94;
    return;
L_0889BB94:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BB9C;
    }
L_0889BB9C:
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BBACu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BBACu) goto L_0889BBAC;
    return;
L_0889BBAC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BBB4;
    }
L_0889BBB4:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BBC4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BBC4u) goto L_0889BBC4;
    return;
L_0889BBC4:
    aot_gpr[4] = (0u | 13u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BBD4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BBD4u) goto L_0889BBD4;
    return;
L_0889BBD4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BBDC;
    }
L_0889BBDC:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BBECu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BBECu) goto L_0889BBEC;
    return;
L_0889BBEC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BBF4;
    }
L_0889BBF4:
    aot_gpr[4] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC04u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC04u) goto L_0889BC04;
    return;
L_0889BC04:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BC0C;
    }
L_0889BC0C:
    aot_gpr[4] = (0u | 18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC1Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC1Cu) goto L_0889BC1C;
    return;
L_0889BC1C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BC24;
    }
L_0889BC24:
    aot_gpr[4] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC34u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC34u) goto L_0889BC34;
    return;
L_0889BC34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BC3C;
    }
L_0889BC3C:
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC4Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC4Cu) goto L_0889BC4C;
    return;
L_0889BC4C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BC54;
    }
L_0889BC54:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC64u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC64u) goto L_0889BC64;
    return;
L_0889BC64:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BC6C;
    }
L_0889BC6C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC7Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC7Cu) goto L_0889BC7C;
    return;
L_0889BC7C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889BC98;
      }
      goto L_0889BC84;
    }
L_0889BC84:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[4]);
    aot_gpr[31] = (0x0889BC94u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 107u, 0x089627E0u>(ctx, &aot_mem) && ctx.pc == 0x0889BC94u) goto L_0889BC94;
    return;
L_0889BC94:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    goto L_0889BC98;
L_0889BC98:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 24u);
    aot_gpr[31] = (0x0889BCD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14488));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0889BCD4u) goto L_0889BCD4;
    return;
L_0889BCD4:
    aot_gpr[5] = (21079u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20558));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (13369u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12336));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (12336u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24370));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0889BD08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 175u, 0x0896FA80u>(ctx, &aot_mem) && ctx.pc == 0x0889BD08u) goto L_0889BD08;
    return;
L_0889BD08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889BD4C;
      }
      goto L_0889BD10;
    }
L_0889BD10:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0889BD1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BD1Cu) goto L_0889BD1C;
    return;
L_0889BD1C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[4]);
    aot_gpr[31] = (0x0889BD38u);
    aot_gpr[4] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 11u, 0x088A10E8u>(ctx, &aot_mem) && ctx.pc == 0x0889BD38u) goto L_0889BD38;
    return;
L_0889BD38:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_0889BD54;
      }
      goto L_0889BD44;
    }
L_0889BD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BD60;
      }
      goto L_0889BD4C;
    }
L_0889BD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF48;
      }
      goto L_0889BD54;
    }
L_0889BD54:
    aot_gpr[31] = (0x0889BD5Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 19u, 0x088A11A0u>(ctx, &aot_mem) && ctx.pc == 0x0889BD5Cu) goto L_0889BD5C;
    return;
L_0889BD5C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0889BD60;
L_0889BD60:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26508), aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0889BD74u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 130u, 0x0889D5F0u>(ctx, &aot_mem) && ctx.pc == 0x0889BD74u) goto L_0889BD74;
    return;
L_0889BD74:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BD8C;
      }
      goto L_0889BD80;
    }
L_0889BD80:
    aot_gpr[31] = (0x0889BD88u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 134u, 0x0889D628u>(ctx, &aot_mem) && ctx.pc == 0x0889BD88u) goto L_0889BD88;
    return;
L_0889BD88:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_0889BD8C;
L_0889BD8C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26512), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0889BDA0u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 43u, 0x088A5440u>(ctx, &aot_mem) && ctx.pc == 0x0889BDA0u) goto L_0889BDA0;
    return;
L_0889BDA0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889BDBC;
      }
      goto L_0889BDAC;
    }
L_0889BDAC:
    aot_gpr[31] = (0x0889BDB4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 47u, 0x088A5478u>(ctx, &aot_mem) && ctx.pc == 0x0889BDB4u) goto L_0889BDB4;
    return;
L_0889BDB4:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_0889BDBC;
L_0889BDBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26516), aot_gpr[17]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30480), aot_gpr[16]);
    aot_gpr[4] = (0u | 4096u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(9992), aot_gpr[4]);
    aot_gpr[6] = (0u | 16384u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(9992));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (2u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[17] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[4] = (0u | 64u);
    aot_gpr[31] = (0x0889BE44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0889BE44u) goto L_0889BE44;
    return;
L_0889BE44:
    aot_gpr[6] = (0u | 65535u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889BE54u);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 238u, 0x089EFEBCu>(ctx, &aot_mem) && ctx.pc == 0x0889BE54u) goto L_0889BE54;
    return;
L_0889BE54:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(204));
    aot_gpr[31] = (0x0889BE60u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 191u, 0x0895EC84u>(ctx, &aot_mem) && ctx.pc == 0x0889BE60u) goto L_0889BE60;
    return;
L_0889BE60:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9980));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9984));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    aot_gpr[4] = (0u | 24576u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[4]);
    aot_gpr[31] = (0x0889BEA0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 145u, 0x0895E9D0u>(ctx, &aot_mem) && ctx.pc == 0x0889BEA0u) goto L_0889BEA0;
    return;
L_0889BEA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889BEE4;
      }
      goto L_0889BEA8;
    }
L_0889BEA8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0889BEB4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9944));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 14u, 0x0889D0D0u>(ctx, &aot_mem) && ctx.pc == 0x0889BEB4u) goto L_0889BEB4;
    return;
L_0889BEB4:
    aot_gpr[31] = (0x0889BEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 192u, 0x0896FB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BEBCu) goto L_0889BEBC;
    return;
L_0889BEBC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889BEDC;
      }
      goto L_0889BEC4;
    }
L_0889BEC4:
    aot_gpr[31] = (0x0889BECCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 14u, 0x089630E8u>(ctx, &aot_mem) && ctx.pc == 0x0889BECCu) goto L_0889BECC;
    return;
L_0889BECC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BEEC;
      }
      goto L_0889BED4;
    }
L_0889BED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF48;
      }
      goto L_0889BEDC;
    }
L_0889BEDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF48;
      }
      goto L_0889BEE4;
    }
L_0889BEE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF48;
      }
      goto L_0889BEEC;
    }
L_0889BEEC:
    aot_gpr[31] = (0x0889BEF4u);
    aot_gpr[4] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0889BEF4u) goto L_0889BEF4;
    return;
L_0889BEF4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(10104), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889BF0Cu);
    aot_gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BF0Cu) goto L_0889BF0C;
    return;
L_0889BF0C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26540), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26544), 0u);
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19100));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(10108), aot_gpr[4]);
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18916));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(10112), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7964), 0u);
    goto L_0889BF48;
L_0889BF48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BF60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF9C;
      }
      goto L_0889BF84;
    }
L_0889BF84:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889BFA4;
      }
      goto L_0889BF94;
    }
L_0889BF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BFFC;
      }
      goto L_0889BF9C;
    }
L_0889BF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 47u, 0x0889C3A4u>(ctx, &aot_mem); return;
      }
      goto L_0889BFA4;
    }
L_0889BFA4:
    aot_gpr[31] = (0x0889BFACu);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BFACu) goto L_0889BFAC;
    return;
L_0889BFAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BFC0;
      }
      goto L_0889BFB4;
    }
L_0889BFB4:
    aot_gpr[31] = (0x0889BFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 264u, 0x0896FF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BFBCu) goto L_0889BFBC;
    return;
L_0889BFBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_0889BFC0;
L_0889BFC0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889BFE0;
      }
      goto L_0889BFD0;
    }
L_0889BFD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0889BFDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 160u, 0x0896E98Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BFDCu) goto L_0889BFDC;
    return;
L_0889BFDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_0889BFE0;
L_0889BFE0:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0889BFFC;
      }
      goto L_0889BFEC;
    }
L_0889BFEC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889BFFC;
      }
      goto L_0889BFF4;
    }
L_0889BFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 47u, 0x0889C3A4u>(ctx, &aot_mem); return;
      }
      goto L_0889BFFC;
    }
L_0889BFFC:
    aot_gpr[31] = (0x0889C004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0151(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0151_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_151(Runtime &runtime) {
    runtime.register_generated_unit(151u, 0x0889B000u, 4096u, &recomp_unit_0151, &recomp_unit_0151_entry);
    runtime.register_function(0x0889B000u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B00Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B024u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B030u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B040u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B04Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B074u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B080u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B090u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B0A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B0ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B0BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B0D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B0E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B0FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B104u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B10Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B114u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B120u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B138u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B148u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B150u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B158u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B160u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B168u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B170u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B17Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B1C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B1C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B1E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B208u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B210u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B224u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B244u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B254u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B26Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B29Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B2E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B2E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B304u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B314u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B32Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B338u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B358u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B368u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B380u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B3B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B3C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B3C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B3D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B3F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B408u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B410u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B420u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B428u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B434u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B450u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B458u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B468u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B46Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B480u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B488u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B48Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B4F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B50Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B524u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B528u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B530u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B544u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B550u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B564u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B57Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B598u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B5F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B600u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B610u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B61Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B634u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B650u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B658u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B660u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B67Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B690u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B6FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B728u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B740u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B748u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B770u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B784u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B79Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B7B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B7C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B7D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B7D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B7F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B80Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B824u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B828u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B838u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B85Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B870u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B87Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B8ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B8C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B8D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B8F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B948u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B988u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B994u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B99Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889B9A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BA70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BADCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BAE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BAFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BB9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BBF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BC98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BCD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BD8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BDA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BDACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BDB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BDBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BE44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BE54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BE60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BECCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BED4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BEF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BF0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BF48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BF60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BF84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BF94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BF9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x0889BFFCu, &recomp_unit_0151, "recomp_unit_0151");
}
} // namespace psprecomp
