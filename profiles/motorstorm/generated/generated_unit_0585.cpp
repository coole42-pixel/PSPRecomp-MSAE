#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0585[1021] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 7,
    8, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 25, 0, 26, 0, 27, 0,
    28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0,
    82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0,
    0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0,
    119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0,
    159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0,
    0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228,
    0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238,
    0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 246,
};
void recomp_unit_0585_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A4D000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0585[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4D000;
    case 2u: goto L_08A4D00C;
    case 3u: goto L_08A4D018;
    case 4u: goto L_08A4D060;
    case 5u: goto L_08A4D06C;
    case 6u: goto L_08A4D074;
    case 7u: goto L_08A4D07C;
    case 8u: goto L_08A4D080;
    case 9u: goto L_08A4D08C;
    case 10u: goto L_08A4D094;
    case 11u: goto L_08A4D0A0;
    case 12u: goto L_08A4D0AC;
    case 13u: goto L_08A4D0EC;
    case 14u: goto L_08A4D110;
    case 15u: goto L_08A4D15C;
    case 16u: goto L_08A4D164;
    case 17u: goto L_08A4D1A0;
    case 18u: goto L_08A4D1A8;
    case 19u: goto L_08A4D1B0;
    case 20u: goto L_08A4D1C4;
    case 21u: goto L_08A4D1CC;
    case 22u: goto L_08A4D1D4;
    case 23u: goto L_08A4D1DC;
    case 24u: goto L_08A4D1E4;
    case 25u: goto L_08A4D1E8;
    case 26u: goto L_08A4D1F0;
    case 27u: goto L_08A4D1F8;
    case 28u: goto L_08A4D200;
    case 29u: goto L_08A4D208;
    case 30u: goto L_08A4D210;
    case 31u: goto L_08A4D218;
    case 32u: goto L_08A4D220;
    case 33u: goto L_08A4D228;
    case 34u: goto L_08A4D230;
    case 35u: goto L_08A4D238;
    case 36u: goto L_08A4D23C;
    case 37u: goto L_08A4D24C;
    case 38u: goto L_08A4D268;
    case 39u: goto L_08A4D280;
    case 40u: goto L_08A4D2A8;
    case 41u: goto L_08A4D2F4;
    case 42u: goto L_08A4D300;
    case 43u: goto L_08A4D308;
    case 44u: goto L_08A4D334;
    case 45u: goto L_08A4D370;
    case 46u: goto L_08A4D3AC;
    case 47u: goto L_08A4D3B4;
    case 48u: goto L_08A4D3C0;
    case 49u: goto L_08A4D3D0;
    case 50u: goto L_08A4D3F8;
    case 51u: goto L_08A4D400;
    case 52u: goto L_08A4D414;
    case 53u: goto L_08A4D434;
    case 54u: goto L_08A4D460;
    case 55u: goto L_08A4D480;
    case 56u: goto L_08A4D490;
    case 57u: goto L_08A4D49C;
    case 58u: goto L_08A4D4A8;
    case 59u: goto L_08A4D4D8;
    case 60u: goto L_08A4D500;
    case 61u: goto L_08A4D510;
    case 62u: goto L_08A4D51C;
    case 63u: goto L_08A4D534;
    case 64u: goto L_08A4D568;
    case 65u: goto L_08A4D578;
    case 66u: goto L_08A4D58C;
    case 67u: goto L_08A4D594;
    case 68u: goto L_08A4D5A0;
    case 69u: goto L_08A4D5B8;
    case 70u: goto L_08A4D5DC;
    case 71u: goto L_08A4D5F8;
    case 72u: goto L_08A4D604;
    case 73u: goto L_08A4D61C;
    case 74u: goto L_08A4D62C;
    case 75u: goto L_08A4D644;
    case 76u: goto L_08A4D650;
    case 77u: goto L_08A4D658;
    case 78u: goto L_08A4D660;
    case 79u: goto L_08A4D668;
    case 80u: goto L_08A4D670;
    case 81u: goto L_08A4D678;
    case 82u: goto L_08A4D680;
    case 83u: goto L_08A4D688;
    case 84u: goto L_08A4D690;
    case 85u: goto L_08A4D698;
    case 86u: goto L_08A4D6A4;
    case 87u: goto L_08A4D6B4;
    case 88u: goto L_08A4D6C0;
    case 89u: goto L_08A4D6D0;
    case 90u: goto L_08A4D6DC;
    case 91u: goto L_08A4D6E8;
    case 92u: goto L_08A4D708;
    case 93u: goto L_08A4D714;
    case 94u: goto L_08A4D71C;
    case 95u: goto L_08A4D72C;
    case 96u: goto L_08A4D738;
    case 97u: goto L_08A4D740;
    case 98u: goto L_08A4D748;
    case 99u: goto L_08A4D750;
    case 100u: goto L_08A4D758;
    case 101u: goto L_08A4D764;
    case 102u: goto L_08A4D76C;
    case 103u: goto L_08A4D778;
    case 104u: goto L_08A4D784;
    case 105u: goto L_08A4D788;
    case 106u: goto L_08A4D790;
    case 107u: goto L_08A4D7B8;
    case 108u: goto L_08A4D7CC;
    case 109u: goto L_08A4D7E0;
    case 110u: goto L_08A4D7EC;
    case 111u: goto L_08A4D80C;
    case 112u: goto L_08A4D824;
    case 113u: goto L_08A4D82C;
    case 114u: goto L_08A4D83C;
    case 115u: goto L_08A4D844;
    case 116u: goto L_08A4D858;
    case 117u: goto L_08A4D870;
    case 118u: goto L_08A4D878;
    case 119u: goto L_08A4D880;
    case 120u: goto L_08A4D88C;
    case 121u: goto L_08A4D89C;
    case 122u: goto L_08A4D8CC;
    case 123u: goto L_08A4D8D8;
    case 124u: goto L_08A4D904;
    case 125u: goto L_08A4D910;
    case 126u: goto L_08A4D918;
    case 127u: goto L_08A4D928;
    case 128u: goto L_08A4D934;
    case 129u: goto L_08A4D944;
    case 130u: goto L_08A4D950;
    case 131u: goto L_08A4D95C;
    case 132u: goto L_08A4D97C;
    case 133u: goto L_08A4D988;
    case 134u: goto L_08A4D990;
    case 135u: goto L_08A4D998;
    case 136u: goto L_08A4D9A0;
    case 137u: goto L_08A4D9A8;
    case 138u: goto L_08A4D9B0;
    case 139u: goto L_08A4D9E0;
    case 140u: goto L_08A4D9F8;
    case 141u: goto L_08A4DA00;
    case 142u: goto L_08A4DA28;
    case 143u: goto L_08A4DA2C;
    case 144u: goto L_08A4DA34;
    case 145u: goto L_08A4DA64;
    case 146u: goto L_08A4DA7C;
    case 147u: goto L_08A4DA84;
    case 148u: goto L_08A4DAAC;
    case 149u: goto L_08A4DAB0;
    case 150u: goto L_08A4DAB8;
    case 151u: goto L_08A4DAC0;
    case 152u: goto L_08A4DAC8;
    case 153u: goto L_08A4DAD0;
    case 154u: goto L_08A4DAD8;
    case 155u: goto L_08A4DAE0;
    case 156u: goto L_08A4DAE8;
    case 157u: goto L_08A4DAF0;
    case 158u: goto L_08A4DAF8;
    case 159u: goto L_08A4DB00;
    case 160u: goto L_08A4DB10;
    case 161u: goto L_08A4DB1C;
    case 162u: goto L_08A4DB2C;
    case 163u: goto L_08A4DB38;
    case 164u: goto L_08A4DB44;
    case 165u: goto L_08A4DB64;
    case 166u: goto L_08A4DB70;
    case 167u: goto L_08A4DB8C;
    case 168u: goto L_08A4DBA4;
    case 169u: goto L_08A4DBB0;
    case 170u: goto L_08A4DBC0;
    case 171u: goto L_08A4DBDC;
    case 172u: goto L_08A4DBE4;
    case 173u: goto L_08A4DBEC;
    case 174u: goto L_08A4DC00;
    case 175u: goto L_08A4DC10;
    case 176u: goto L_08A4DC20;
    case 177u: goto L_08A4DC34;
    case 178u: goto L_08A4DC4C;
    case 179u: goto L_08A4DC54;
    case 180u: goto L_08A4DC5C;
    case 181u: goto L_08A4DC68;
    case 182u: goto L_08A4DC78;
    case 183u: goto L_08A4DC84;
    case 184u: goto L_08A4DC90;
    case 185u: goto L_08A4DC9C;
    case 186u: goto L_08A4DCAC;
    case 187u: goto L_08A4DCC4;
    case 188u: goto L_08A4DCCC;
    case 189u: goto L_08A4DCD4;
    case 190u: goto L_08A4DCE0;
    case 191u: goto L_08A4DCF0;
    case 192u: goto L_08A4DD00;
    case 193u: goto L_08A4DD14;
    case 194u: goto L_08A4DD2C;
    case 195u: goto L_08A4DD34;
    case 196u: goto L_08A4DD3C;
    case 197u: goto L_08A4DD48;
    case 198u: goto L_08A4DD58;
    case 199u: goto L_08A4DD64;
    case 200u: goto L_08A4DD70;
    case 201u: goto L_08A4DD7C;
    case 202u: goto L_08A4DD8C;
    case 203u: goto L_08A4DDA4;
    case 204u: goto L_08A4DDAC;
    case 205u: goto L_08A4DDB4;
    case 206u: goto L_08A4DDC0;
    case 207u: goto L_08A4DDD0;
    case 208u: goto L_08A4DDE0;
    case 209u: goto L_08A4DDF4;
    case 210u: goto L_08A4DE0C;
    case 211u: goto L_08A4DE14;
    case 212u: goto L_08A4DE1C;
    case 213u: goto L_08A4DE28;
    case 214u: goto L_08A4DE38;
    case 215u: goto L_08A4DE44;
    case 216u: goto L_08A4DE50;
    case 217u: goto L_08A4DE5C;
    case 218u: goto L_08A4DE6C;
    case 219u: goto L_08A4DE84;
    case 220u: goto L_08A4DE8C;
    case 221u: goto L_08A4DE94;
    case 222u: goto L_08A4DEA0;
    case 223u: goto L_08A4DEA8;
    case 224u: goto L_08A4DEB8;
    case 225u: goto L_08A4DEC8;
    case 226u: goto L_08A4DEDC;
    case 227u: goto L_08A4DEF4;
    case 228u: goto L_08A4DEFC;
    case 229u: goto L_08A4DF04;
    case 230u: goto L_08A4DF10;
    case 231u: goto L_08A4DF20;
    case 232u: goto L_08A4DF2C;
    case 233u: goto L_08A4DF38;
    case 234u: goto L_08A4DF44;
    case 235u: goto L_08A4DF54;
    case 236u: goto L_08A4DF6C;
    case 237u: goto L_08A4DF74;
    case 238u: goto L_08A4DF7C;
    case 239u: goto L_08A4DF88;
    case 240u: goto L_08A4DF98;
    case 241u: goto L_08A4DFA8;
    case 242u: goto L_08A4DFBC;
    case 243u: goto L_08A4DFD4;
    case 244u: goto L_08A4DFDC;
    case 245u: goto L_08A4DFE4;
    case 246u: goto L_08A4DFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4D000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4D00Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 200u, 0x08A4CEB8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D00Cu) goto L_08A4D00C;
    return;
L_08A4D00C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D018:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    goto L_08A4D060;
L_08A4D060:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D06Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D06Cu) goto L_08A4D06C;
    return;
L_08A4D06C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D07C;
      }
      goto L_08A4D074;
    }
L_08A4D074:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A4D060;
      }
      goto L_08A4D07C;
    }
L_08A4D07C:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    goto L_08A4D080;
L_08A4D080:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D08Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D08Cu) goto L_08A4D08C;
    return;
L_08A4D08C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D0A0;
      }
      goto L_08A4D094;
    }
L_08A4D094:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(-12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D080;
      }
      goto L_08A4D0A0;
    }
L_08A4D0A0:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D0EC;
      }
      goto L_08A4D0AC;
    }
L_08A4D0AC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08A4D060;
      }
      goto L_08A4D0EC;
    }
L_08A4D0EC:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D110:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[22] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4D280;
      }
      goto L_08A4D15C;
    }
L_08A4D15C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D1B0;
      }
      goto L_08A4D164;
    }
L_08A4D164:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-12));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[21] = (aot_gpr[5] << 2u);
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[21]);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D1A0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D1A0u) goto L_08A4D1A0;
    return;
L_08A4D1A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A4D1CC;
      }
      goto L_08A4D1A8;
    }
L_08A4D1A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D208;
      }
      goto L_08A4D1B0;
    }
L_08A4D1B0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4D1C4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 213u, 0x08A4CFF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4D1C4u) goto L_08A4D1C4;
    return;
L_08A4D1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D280;
      }
      goto L_08A4D1CC;
    }
L_08A4D1CC:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D1D4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D1D4u) goto L_08A4D1D4;
    return;
L_08A4D1D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D1E8;
      }
      goto L_08A4D1DC;
    }
L_08A4D1DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D23C;
      }
      goto L_08A4D1E4;
    }
L_08A4D1E4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A4D1E8;
L_08A4D1E8:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D1F0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D1F0u) goto L_08A4D1F0;
    return;
L_08A4D1F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D200;
      }
      goto L_08A4D1F8;
    }
L_08A4D1F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A4D238;
      }
      goto L_08A4D200;
    }
L_08A4D200:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D238;
      }
      goto L_08A4D208;
    }
L_08A4D208:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D210u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D210u) goto L_08A4D210;
    return;
L_08A4D210:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A4D220;
      }
      goto L_08A4D218;
    }
L_08A4D218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D238;
      }
      goto L_08A4D220;
    }
L_08A4D220:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D228u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D228u) goto L_08A4D228;
    return;
L_08A4D228:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D238;
      }
      goto L_08A4D230;
    }
L_08A4D230:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A4D238;
      }
      goto L_08A4D238;
    }
L_08A4D238:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A4D23C;
L_08A4D23C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A4D24Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4D018;
L_08A4D24C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4D268u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4D110;
L_08A4D268:
    aot_gpr[21] = (aot_gpr[20] - aot_gpr[19]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A4D15C;
      }
      goto L_08A4D280;
    }
L_08A4D280:
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
L_08A4D2A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    goto L_08A4D2F4;
L_08A4D2F4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4D300u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D300u) goto L_08A4D300;
    return;
L_08A4D300:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D334;
      }
      goto L_08A4D308;
    }
L_08A4D308:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4D2F4;
      }
      goto L_08A4D334;
    }
L_08A4D334:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4D3B4;
      }
      goto L_08A4D3AC;
    }
L_08A4D3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D4A8;
      }
      goto L_08A4D3B4;
    }
L_08A4D3B4:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4D4A8;
      }
      goto L_08A4D3C0;
    }
L_08A4D3C0:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(17))))));
    aot_gpr[30] = (0u | 12u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(15))))));
    goto L_08A4D3D0;
L_08A4D3D0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4D3F8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D3F8u) goto L_08A4D3F8;
    return;
L_08A4D3F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A4D480;
      }
      goto L_08A4D400;
    }
L_08A4D400:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(13))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A4D414u);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_08A4D644;
L_08A4D414:
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A4D460;
      }
      goto L_08A4D434;
    }
L_08A4D434:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-12));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A4D434;
      }
      goto L_08A4D460;
    }
L_08A4D460:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4D490;
      }
      goto L_08A4D480;
    }
L_08A4D480:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A4D490u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A4D2A8;
L_08A4D490:
    aot_gpr[19] = (aot_gpr[23] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4D3D0;
      }
      goto L_08A4D49C;
    }
L_08A4D49C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(aot_gpr[22]));
    goto L_08A4D4A8;
L_08A4D4A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D4D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4D51C;
      }
      goto L_08A4D500;
    }
L_08A4D500:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4D510u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4D2A8;
L_08A4D510:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4D500;
      }
      goto L_08A4D51C;
    }
L_08A4D51C:
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
L_08A4D534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4D594;
      }
      goto L_08A4D568;
    }
L_08A4D568:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4D578u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4D370;
L_08A4D578:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4D58Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4D4D8;
L_08A4D58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D5A0;
      }
      goto L_08A4D594;
    }
L_08A4D594:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4D5A0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4D370;
L_08A4D5A0:
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
L_08A4D5B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4D62C;
      }
      goto L_08A4D5DC;
    }
L_08A4D5DC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4D604;
      }
      goto L_08A4D5F8;
    }
L_08A4D5F8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4D5F8;
      }
      goto L_08A4D604;
    }
L_08A4D604:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4D61Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4D110;
L_08A4D61C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4D62Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4D534;
L_08A4D62C:
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
L_08A4D644:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D650:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D658:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D660:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D668:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D670:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D678:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D680:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D688:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D690:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D698:
    aot_gpr[4] = (2218u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D6A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4D708;
      }
      goto L_08A4D6B4;
    }
L_08A4D6B4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7756));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4D6DC;
      }
      goto L_08A4D6C0;
    }
L_08A4D6C0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4D6DC;
      }
      goto L_08A4D6D0;
    }
L_08A4D6D0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4D6DC;
L_08A4D6DC:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4D708;
      }
      goto L_08A4D6E8;
    }
L_08A4D6E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4D708u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D708u) goto L_08A4D708;
    return;
L_08A4D708:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D714:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D71C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D784;
      }
      goto L_08A4D72C;
    }
L_08A4D72C:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A4D758;
      }
      goto L_08A4D738;
    }
L_08A4D738:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A4D764;
      }
      goto L_08A4D740;
    }
L_08A4D740:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4D76C;
      }
      goto L_08A4D748;
    }
L_08A4D748:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A4D778;
      }
      goto L_08A4D750;
    }
L_08A4D750:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4D788;
      }
      goto L_08A4D758;
    }
L_08A4D758:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
      if (branch_taken) {
          goto L_08A4D788;
      }
      goto L_08A4D764;
    }
L_08A4D764:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4D788;
      }
      goto L_08A4D76C;
    }
L_08A4D76C:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
      if (branch_taken) {
          goto L_08A4D788;
      }
      goto L_08A4D778;
    }
L_08A4D778:
    aot_gpr[2] = (aot_gpr[5] ^ aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4D788;
      }
      goto L_08A4D784;
    }
L_08A4D784:
    aot_gpr[2] = (0u | 0u);
    goto L_08A4D788;
L_08A4D788:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A4D7B8u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4D7B8u) goto L_08A4D7B8;
    return;
L_08A4D7B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D7CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D7E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D80C;
      }
      goto L_08A4D7EC;
    }
L_08A4D7EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4D824;
      }
      goto L_08A4D80C;
    }
L_08A4D80C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4D824;
L_08A4D824:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D82C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4D880;
      }
      goto L_08A4D83C;
    }
L_08A4D83C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D880;
      }
      goto L_08A4D844;
    }
L_08A4D844:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D878;
      }
      goto L_08A4D858;
    }
L_08A4D858:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4D870u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D870u) goto L_08A4D870;
    return;
L_08A4D870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4D880;
      }
      goto L_08A4D878;
    }
L_08A4D878:
    aot_gpr[31] = (0x08A4D880u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4D880u) goto L_08A4D880;
    return;
L_08A4D880:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D88C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D89C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4D8CCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D8CCu) goto L_08A4D8CC;
    return;
L_08A4D8CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D8D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4D904u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D904u) goto L_08A4D904;
    return;
L_08A4D904:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D910:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4D97C;
      }
      goto L_08A4D928;
    }
L_08A4D928:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6732));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4D950;
      }
      goto L_08A4D934;
    }
L_08A4D934:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4D950;
      }
      goto L_08A4D944;
    }
L_08A4D944:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4D950;
L_08A4D950:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4D97C;
      }
      goto L_08A4D95C;
    }
L_08A4D95C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4D97Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4D97Cu) goto L_08A4D97C;
    return;
L_08A4D97C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D988:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D990:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D998:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D9A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D9A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4D9B0:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DA28;
      }
      goto L_08A4D9E0;
    }
L_08A4D9E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4DA00;
    }
    goto L_08A4D9F8;
L_08A4D9F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4DA00;
L_08A4DA00:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4DA2C;
      }
      goto L_08A4DA28;
    }
L_08A4DA28:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4DA2C;
L_08A4DA2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DA34:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DAAC;
      }
      goto L_08A4DA64;
    }
L_08A4DA64:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4DA84;
    }
    goto L_08A4DA7C;
L_08A4DA7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4DA84;
L_08A4DA84:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4DAB0;
      }
      goto L_08A4DAAC;
    }
L_08A4DAAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4DAB0;
L_08A4DAB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAD0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAE8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAF0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DAF8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DB00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DB64;
      }
      goto L_08A4DB10;
    }
L_08A4DB10:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6476));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DB38;
      }
      goto L_08A4DB1C;
    }
L_08A4DB1C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DB38;
      }
      goto L_08A4DB2C;
    }
L_08A4DB2C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4DB38;
L_08A4DB38:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DB64;
      }
      goto L_08A4DB44;
    }
L_08A4DB44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4DB64u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DB64u) goto L_08A4DB64;
    return;
L_08A4DB64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DB70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4DBEC;
      }
      goto L_08A4DB8C;
    }
L_08A4DB8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6260));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4DBA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 180u, 0x089EFBA8u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBA4u) goto L_08A4DBA4;
    return;
L_08A4DBA4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4DBEC;
      }
      goto L_08A4DBB0;
    }
L_08A4DBB0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBE4;
      }
      goto L_08A4DBC0;
    }
L_08A4DBC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4DBDCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DBDCu) goto L_08A4DBDC;
    return;
L_08A4DBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DBEC;
      }
      goto L_08A4DBE4;
    }
L_08A4DBE4:
    aot_gpr[31] = (0x08A4DBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DBECu) goto L_08A4DBEC;
    return;
L_08A4DBEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DC00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DC5C;
      }
      goto L_08A4DC10;
    }
L_08A4DC10:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24936));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DC5C;
      }
      goto L_08A4DC20;
    }
L_08A4DC20:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC54;
      }
      goto L_08A4DC34;
    }
L_08A4DC34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DC4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DC4Cu) goto L_08A4DC4C;
    return;
L_08A4DC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DC5C;
      }
      goto L_08A4DC54;
    }
L_08A4DC54:
    aot_gpr[31] = (0x08A4DC5Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DC5Cu) goto L_08A4DC5C;
    return;
L_08A4DC5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DC68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DCD4;
      }
      goto L_08A4DC78;
    }
L_08A4DC78:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5940));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DC90;
      }
      goto L_08A4DC84;
    }
L_08A4DC84:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24936));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4DC90;
L_08A4DC90:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4DCD4;
      }
      goto L_08A4DC9C;
    }
L_08A4DC9C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCCC;
      }
      goto L_08A4DCAC;
    }
L_08A4DCAC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DCC4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DCC4u) goto L_08A4DCC4;
    return;
L_08A4DCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DCD4;
      }
      goto L_08A4DCCC;
    }
L_08A4DCCC:
    aot_gpr[31] = (0x08A4DCD4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DCD4u) goto L_08A4DCD4;
    return;
L_08A4DCD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DCE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DD3C;
      }
      goto L_08A4DCF0;
    }
L_08A4DCF0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25032));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DD3C;
      }
      goto L_08A4DD00;
    }
L_08A4DD00:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD34;
      }
      goto L_08A4DD14;
    }
L_08A4DD14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DD2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DD2Cu) goto L_08A4DD2C;
    return;
L_08A4DD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DD3C;
      }
      goto L_08A4DD34;
    }
L_08A4DD34:
    aot_gpr[31] = (0x08A4DD3Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DD3Cu) goto L_08A4DD3C;
    return;
L_08A4DD3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DD48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DDB4;
      }
      goto L_08A4DD58;
    }
L_08A4DD58:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5808));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DD70;
      }
      goto L_08A4DD64;
    }
L_08A4DD64:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25032));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4DD70;
L_08A4DD70:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4DDB4;
      }
      goto L_08A4DD7C;
    }
L_08A4DD7C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDAC;
      }
      goto L_08A4DD8C;
    }
L_08A4DD8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DDA4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DDA4u) goto L_08A4DDA4;
    return;
L_08A4DDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DDB4;
      }
      goto L_08A4DDAC;
    }
L_08A4DDAC:
    aot_gpr[31] = (0x08A4DDB4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DDB4u) goto L_08A4DDB4;
    return;
L_08A4DDB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DDC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DE1C;
      }
      goto L_08A4DDD0;
    }
L_08A4DDD0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24896));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DE1C;
      }
      goto L_08A4DDE0;
    }
L_08A4DDE0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE14;
      }
      goto L_08A4DDF4;
    }
L_08A4DDF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DE0Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DE0Cu) goto L_08A4DE0C;
    return;
L_08A4DE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE1C;
      }
      goto L_08A4DE14;
    }
L_08A4DE14:
    aot_gpr[31] = (0x08A4DE1Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE1Cu) goto L_08A4DE1C;
    return;
L_08A4DE1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DE28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DE94;
      }
      goto L_08A4DE38;
    }
L_08A4DE38:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5536));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DE50;
      }
      goto L_08A4DE44;
    }
L_08A4DE44:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24896));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4DE50;
L_08A4DE50:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4DE94;
      }
      goto L_08A4DE5C;
    }
L_08A4DE5C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE8C;
      }
      goto L_08A4DE6C;
    }
L_08A4DE6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DE84u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DE84u) goto L_08A4DE84;
    return;
L_08A4DE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DE94;
      }
      goto L_08A4DE8C;
    }
L_08A4DE8C:
    aot_gpr[31] = (0x08A4DE94u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DE94u) goto L_08A4DE94;
    return;
L_08A4DE94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DEA0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DEA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DF04;
      }
      goto L_08A4DEB8;
    }
L_08A4DEB8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25064));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DF04;
      }
      goto L_08A4DEC8;
    }
L_08A4DEC8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DEFC;
      }
      goto L_08A4DEDC;
    }
L_08A4DEDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DEF4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DEF4u) goto L_08A4DEF4;
    return;
L_08A4DEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF04;
      }
      goto L_08A4DEFC;
    }
L_08A4DEFC:
    aot_gpr[31] = (0x08A4DF04u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF04u) goto L_08A4DF04;
    return;
L_08A4DF04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DF10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DF7C;
      }
      goto L_08A4DF20;
    }
L_08A4DF20:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5696));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DF38;
      }
      goto L_08A4DF2C;
    }
L_08A4DF2C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25064));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4DF38;
L_08A4DF38:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4DF7C;
      }
      goto L_08A4DF44;
    }
L_08A4DF44:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF74;
      }
      goto L_08A4DF54;
    }
L_08A4DF54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DF6Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DF6Cu) goto L_08A4DF6C;
    return;
L_08A4DF6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DF7C;
      }
      goto L_08A4DF74;
    }
L_08A4DF74:
    aot_gpr[31] = (0x08A4DF7Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DF7Cu) goto L_08A4DF7C;
    return;
L_08A4DF7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DF88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4DFE4;
      }
      goto L_08A4DF98;
    }
L_08A4DF98:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25160));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4DFE4;
      }
      goto L_08A4DFA8;
    }
L_08A4DFA8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DFDC;
      }
      goto L_08A4DFBC;
    }
L_08A4DFBC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4DFD4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4DFD4u) goto L_08A4DFD4;
    return;
L_08A4DFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4DFE4;
      }
      goto L_08A4DFDC;
    }
L_08A4DFDC:
    aot_gpr[31] = (0x08A4DFE4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4DFE4u) goto L_08A4DFE4;
    return;
L_08A4DFE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4DFF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 6u, 0x08A4E04Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 1u, 0x08A4E000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0585(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0585_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_585(Runtime &runtime) {
    runtime.register_generated_unit(585u, 0x08A4D000u, 4096u, &recomp_unit_0585, &recomp_unit_0585_entry);
    runtime.register_function(0x08A4D000u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D00Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D018u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D060u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D06Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D074u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D07Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D080u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D08Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D094u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D0A0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D0ACu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D0ECu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D110u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D15Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D164u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1A0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1A8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1B0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1C4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1CCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1D4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1DCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1E4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1E8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1F0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D1F8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D200u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D208u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D210u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D218u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D220u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D228u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D230u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D238u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D23Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D24Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D268u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D280u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D2A8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D2F4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D300u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D308u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D334u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D370u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D3ACu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D3B4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D3C0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D3D0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D3F8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D400u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D414u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D434u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D460u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D480u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D490u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D49Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D4A8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D4D8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D500u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D510u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D51Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D534u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D568u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D578u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D58Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D594u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D5A0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D5B8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D5DCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D5F8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D604u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D61Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D62Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D644u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D650u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D658u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D660u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D668u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D670u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D678u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D680u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D688u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D690u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D698u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D6A4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D6B4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D6C0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D6D0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D6DCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D6E8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D708u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D714u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D71Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D72Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D738u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D740u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D748u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D750u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D758u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D764u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D76Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D778u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D784u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D788u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D790u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D7B8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D7CCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D7E0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D7ECu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D80Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D824u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D82Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D83Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D844u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D858u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D870u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D878u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D880u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D88Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D89Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D8CCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D8D8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D904u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D910u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D918u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D928u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D934u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D944u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D950u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D95Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D97Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D988u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D990u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D998u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D9A0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D9A8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D9B0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D9E0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4D9F8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA00u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA28u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA2Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA34u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA64u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA7Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DA84u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAACu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAB0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAB8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAC0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAC8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAD0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAD8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAE0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAE8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAF0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DAF8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB00u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB10u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB1Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB2Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB38u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB44u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB64u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB70u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DB8Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DBA4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DBB0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DBC0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DBDCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DBE4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DBECu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC00u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC10u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC20u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC34u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC4Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC54u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC5Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC68u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC78u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC84u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC90u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DC9Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DCACu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DCC4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DCCCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DCD4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DCE0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DCF0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD00u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD14u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD2Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD34u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD3Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD48u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD58u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD64u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD70u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD7Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DD8Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDA4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDACu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDB4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDC0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDD0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDE0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DDF4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE0Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE14u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE1Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE28u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE38u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE44u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE50u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE5Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE6Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE84u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE8Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DE94u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEA0u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEA8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEB8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEC8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEDCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEF4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DEFCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF04u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF10u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF20u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF2Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF38u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF44u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF54u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF6Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF74u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF7Cu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF88u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DF98u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DFA8u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DFBCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DFD4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DFDCu, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DFE4u, &recomp_unit_0585, "recomp_unit_0585");
    runtime.register_function(0x08A4DFF0u, &recomp_unit_0585, "recomp_unit_0585");
}
} // namespace psprecomp
