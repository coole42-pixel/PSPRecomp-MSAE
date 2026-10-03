#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0391[1021] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 15, 0, 16,
    0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0,
    47, 48, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 70, 71, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0,
    88, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 93, 94, 95, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    128, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 136, 0, 137, 0, 138, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0,
    168, 0, 169, 0, 170, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0,
    179, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189,
    0, 0, 190, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 205, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 209, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
};
void recomp_unit_0391_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0898B000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0391[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898B000;
    case 2u: goto L_0898B008;
    case 3u: goto L_0898B034;
    case 4u: goto L_0898B044;
    case 5u: goto L_0898B04C;
    case 6u: goto L_0898B054;
    case 7u: goto L_0898B06C;
    case 8u: goto L_0898B074;
    case 9u: goto L_0898B084;
    case 10u: goto L_0898B08C;
    case 11u: goto L_0898B0B8;
    case 12u: goto L_0898B0C8;
    case 13u: goto L_0898B0E8;
    case 14u: goto L_0898B0F0;
    case 15u: goto L_0898B0F4;
    case 16u: goto L_0898B0FC;
    case 17u: goto L_0898B114;
    case 18u: goto L_0898B120;
    case 19u: goto L_0898B134;
    case 20u: goto L_0898B154;
    case 21u: goto L_0898B15C;
    case 22u: goto L_0898B170;
    case 23u: goto L_0898B184;
    case 24u: goto L_0898B18C;
    case 25u: goto L_0898B194;
    case 26u: goto L_0898B1A0;
    case 27u: goto L_0898B1A8;
    case 28u: goto L_0898B1B0;
    case 29u: goto L_0898B1C0;
    case 30u: goto L_0898B1D0;
    case 31u: goto L_0898B1F0;
    case 32u: goto L_0898B200;
    case 33u: goto L_0898B20C;
    case 34u: goto L_0898B218;
    case 35u: goto L_0898B224;
    case 36u: goto L_0898B23C;
    case 37u: goto L_0898B24C;
    case 38u: goto L_0898B264;
    case 39u: goto L_0898B27C;
    case 40u: goto L_0898B290;
    case 41u: goto L_0898B2A8;
    case 42u: goto L_0898B2C8;
    case 43u: goto L_0898B2D0;
    case 44u: goto L_0898B2E0;
    case 45u: goto L_0898B2EC;
    case 46u: goto L_0898B2F8;
    case 47u: goto L_0898B300;
    case 48u: goto L_0898B304;
    case 49u: goto L_0898B308;
    case 50u: goto L_0898B318;
    case 51u: goto L_0898B320;
    case 52u: goto L_0898B330;
    case 53u: goto L_0898B33C;
    case 54u: goto L_0898B348;
    case 55u: goto L_0898B350;
    case 56u: goto L_0898B378;
    case 57u: goto L_0898B3A0;
    case 58u: goto L_0898B3C8;
    case 59u: goto L_0898B3D0;
    case 60u: goto L_0898B408;
    case 61u: goto L_0898B428;
    case 62u: goto L_0898B468;
    case 63u: goto L_0898B484;
    case 64u: goto L_0898B48C;
    case 65u: goto L_0898B494;
    case 66u: goto L_0898B4A0;
    case 67u: goto L_0898B4AC;
    case 68u: goto L_0898B4B4;
    case 69u: goto L_0898B4E8;
    case 70u: goto L_0898B4EC;
    case 71u: goto L_0898B4F0;
    case 72u: goto L_0898B508;
    case 73u: goto L_0898B548;
    case 74u: goto L_0898B560;
    case 75u: goto L_0898B568;
    case 76u: goto L_0898B598;
    case 77u: goto L_0898B5A8;
    case 78u: goto L_0898B5B8;
    case 79u: goto L_0898B5C8;
    case 80u: goto L_0898B634;
    case 81u: goto L_0898B664;
    case 82u: goto L_0898B6A0;
    case 83u: goto L_0898B6C8;
    case 84u: goto L_0898B6D8;
    case 85u: goto L_0898B6E0;
    case 86u: goto L_0898B6EC;
    case 87u: goto L_0898B6F8;
    case 88u: goto L_0898B700;
    case 89u: goto L_0898B710;
    case 90u: goto L_0898B71C;
    case 91u: goto L_0898B724;
    case 92u: goto L_0898B750;
    case 93u: goto L_0898B754;
    case 94u: goto L_0898B758;
    case 95u: goto L_0898B75C;
    case 96u: goto L_0898B76C;
    case 97u: goto L_0898B77C;
    case 98u: goto L_0898B784;
    case 99u: goto L_0898B790;
    case 100u: goto L_0898B7A0;
    case 101u: goto L_0898B7B0;
    case 102u: goto L_0898B7BC;
    case 103u: goto L_0898B7C4;
    case 104u: goto L_0898B7DC;
    case 105u: goto L_0898B7E8;
    case 106u: goto L_0898B7F0;
    case 107u: goto L_0898B800;
    case 108u: goto L_0898B810;
    case 109u: goto L_0898B81C;
    case 110u: goto L_0898B838;
    case 111u: goto L_0898B860;
    case 112u: goto L_0898B86C;
    case 113u: goto L_0898B888;
    case 114u: goto L_0898B890;
    case 115u: goto L_0898B898;
    case 116u: goto L_0898B8AC;
    case 117u: goto L_0898B904;
    case 118u: goto L_0898B90C;
    case 119u: goto L_0898B914;
    case 120u: goto L_0898B924;
    case 121u: goto L_0898B938;
    case 122u: goto L_0898B964;
    case 123u: goto L_0898B96C;
    case 124u: goto L_0898B980;
    case 125u: goto L_0898B9A8;
    case 126u: goto L_0898B9BC;
    case 127u: goto L_0898B9EC;
    case 128u: goto L_0898BA00;
    case 129u: goto L_0898BA0C;
    case 130u: goto L_0898BA1C;
    case 131u: goto L_0898BA24;
    case 132u: goto L_0898BA34;
    case 133u: goto L_0898BA40;
    case 134u: goto L_0898BA54;
    case 135u: goto L_0898BA5C;
    case 136u: goto L_0898BA60;
    case 137u: goto L_0898BA68;
    case 138u: goto L_0898BA70;
    case 139u: goto L_0898BA84;
    case 140u: goto L_0898BA98;
    case 141u: goto L_0898BAA0;
    case 142u: goto L_0898BAA8;
    case 143u: goto L_0898BAC0;
    case 144u: goto L_0898BB0C;
    case 145u: goto L_0898BB1C;
    case 146u: goto L_0898BB28;
    case 147u: goto L_0898BB40;
    case 148u: goto L_0898BB50;
    case 149u: goto L_0898BB78;
    case 150u: goto L_0898BB94;
    case 151u: goto L_0898BBA8;
    case 152u: goto L_0898BBAC;
    case 153u: goto L_0898BBBC;
    case 154u: goto L_0898BBC4;
    case 155u: goto L_0898BBCC;
    case 156u: goto L_0898BBDC;
    case 157u: goto L_0898BBEC;
    case 158u: goto L_0898BBF8;
    case 159u: goto L_0898BC08;
    case 160u: goto L_0898BC14;
    case 161u: goto L_0898BC24;
    case 162u: goto L_0898BC30;
    case 163u: goto L_0898BC40;
    case 164u: goto L_0898BC48;
    case 165u: goto L_0898BC50;
    case 166u: goto L_0898BC68;
    case 167u: goto L_0898BC74;
    case 168u: goto L_0898BC80;
    case 169u: goto L_0898BC88;
    case 170u: goto L_0898BC90;
    case 171u: goto L_0898BC94;
    case 172u: goto L_0898BCA0;
    case 173u: goto L_0898BCB4;
    case 174u: goto L_0898BCC4;
    case 175u: goto L_0898BCCC;
    case 176u: goto L_0898BCDC;
    case 177u: goto L_0898BCEC;
    case 178u: goto L_0898BCF8;
    case 179u: goto L_0898BD00;
    case 180u: goto L_0898BD04;
    case 181u: goto L_0898BD14;
    case 182u: goto L_0898BD2C;
    case 183u: goto L_0898BD40;
    case 184u: goto L_0898BD4C;
    case 185u: goto L_0898BD54;
    case 186u: goto L_0898BD5C;
    case 187u: goto L_0898BD68;
    case 188u: goto L_0898BD74;
    case 189u: goto L_0898BD7C;
    case 190u: goto L_0898BD88;
    case 191u: goto L_0898BD8C;
    case 192u: goto L_0898BD98;
    case 193u: goto L_0898BDA0;
    case 194u: goto L_0898BDA8;
    case 195u: goto L_0898BDC0;
    case 196u: goto L_0898BDCC;
    case 197u: goto L_0898BDD4;
    case 198u: goto L_0898BDF8;
    case 199u: goto L_0898BE18;
    case 200u: goto L_0898BE1C;
    case 201u: goto L_0898BE2C;
    case 202u: goto L_0898BE3C;
    case 203u: goto L_0898BE50;
    case 204u: goto L_0898BE70;
    case 205u: goto L_0898BE74;
    case 206u: goto L_0898BE8C;
    case 207u: goto L_0898BEAC;
    case 208u: goto L_0898BEB4;
    case 209u: goto L_0898BEB8;
    case 210u: goto L_0898BEC8;
    case 211u: goto L_0898BED0;
    case 212u: goto L_0898BED8;
    case 213u: goto L_0898BF08;
    case 214u: goto L_0898BF10;
    case 215u: goto L_0898BF18;
    case 216u: goto L_0898BF20;
    case 217u: goto L_0898BF28;
    case 218u: goto L_0898BF38;
    case 219u: goto L_0898BF3C;
    case 220u: goto L_0898BF58;
    case 221u: goto L_0898BF60;
    case 222u: goto L_0898BF7C;
    case 223u: goto L_0898BF84;
    case 224u: goto L_0898BFA8;
    case 225u: goto L_0898BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898B000:
    aot_gpr[31] = (0x0898B008u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 38u, 0x0898836Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B008u) goto L_0898B008;
    return;
L_0898B008:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B034:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B044u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B044u) goto L_0898B044;
    return;
L_0898B044:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1092)));
    (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 228u, 0x0898AF30u>(ctx, &aot_mem); return;
L_0898B04C:
    aot_gpr[31] = (0x0898B054u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 208u, 0x0898AE34u>(ctx, &aot_mem) && ctx.pc == 0x0898B054u) goto L_0898B054;
    return;
L_0898B054:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0898B06Cu);
    aot_gpr[7] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 38u, 0x0898836Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B06Cu) goto L_0898B06C;
    return;
L_0898B06C:
    aot_gpr[19] = (2217u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 224u, 0x0898AF0Cu>(ctx, &aot_mem); return;
L_0898B074:
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B084u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B084u) goto L_0898B084;
    return;
L_0898B084:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2808)));
    (void)rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 230u, 0x0898AF3Cu>(ctx, &aot_mem); return;
L_0898B08C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898B0C8;
      }
      goto L_0898B0B8;
    }
L_0898B0B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1312)));
        goto L_0898B0E8;
    }
    goto L_0898B0C8;
L_0898B0C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B0E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0898B154;
      }
      goto L_0898B0F0;
    }
L_0898B0F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    goto L_0898B0F4;
L_0898B0F4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898B0C8;
      }
      goto L_0898B0FC;
    }
L_0898B0FC:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[31] = (0x0898B114u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 208u, 0x0898AE34u>(ctx, &aot_mem) && ctx.pc == 0x0898B114u) goto L_0898B114;
    return;
L_0898B114:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x0898B120u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898B120u) goto L_0898B120;
    return;
L_0898B120:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x0898B134u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B134u) goto L_0898B134;
    return;
L_0898B134:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B154:
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[18] = (0u + 0u);
    goto L_0898B15C;
L_0898B15C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1296)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1280)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898B170u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B170u) goto L_0898B170;
    return;
L_0898B170:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1312)));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898B15C;
      }
      goto L_0898B184;
    }
L_0898B184:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    goto L_0898B0F4;
L_0898B18C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898B1A0;
      }
      goto L_0898B194;
    }
L_0898B194:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0898B1A8;
      }
      goto L_0898B1A0;
    }
L_0898B1A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B1A8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (~(0u | aot_gpr[4]));
      if (branch_taken) {
          goto L_0898B1C0;
      }
      goto L_0898B1B0;
    }
L_0898B1B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[2]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1068), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B1C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(1068), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B1D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
      if (branch_taken) {
          goto L_0898B224;
      }
      goto L_0898B1F0;
    }
L_0898B1F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898B264;
      }
      goto L_0898B200;
    }
L_0898B200:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0898B224;
      }
      goto L_0898B20C;
    }
L_0898B20C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B218u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B218u) goto L_0898B218;
    return;
L_0898B218:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898B23C;
      }
      goto L_0898B224;
    }
L_0898B224:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B23C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2808)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(84)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B24Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B24Cu) goto L_0898B24C;
    return;
L_0898B24C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B264:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1068)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1240)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1068), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898B224;
      }
      goto L_0898B27C;
    }
L_0898B27C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898B290u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B290u) goto L_0898B290;
    return;
L_0898B290:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B2A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_0898B300;
      }
      goto L_0898B2C8;
    }
L_0898B2C8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B318;
      }
      goto L_0898B2D0;
    }
L_0898B2D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898B3A0;
      }
      goto L_0898B2E0;
    }
L_0898B2E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898B2EC;
    }
L_0898B2EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B2F8u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B2F8u) goto L_0898B2F8;
    return;
L_0898B2F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_0898B378;
      }
      goto L_0898B300;
    }
L_0898B300:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0898B304;
L_0898B304:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0898B308;
L_0898B308:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B318:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898B320;
    }
L_0898B320:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[17] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898B408;
      }
      goto L_0898B330;
    }
L_0898B330:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_0898B308;
    }
    goto L_0898B33C;
L_0898B33C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B348u);
    aot_gpr[4] = (aot_gpr[6] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B348u) goto L_0898B348;
    return;
L_0898B348:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898B350;
    }
L_0898B350:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2808)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B378:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B3A0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B3C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B3C8u) goto L_0898B3C8;
    return;
L_0898B3C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898B3D0;
    }
L_0898B3D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1080)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1080), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 21u, 0x089871C4u>(ctx, &aot_mem); return;
L_0898B408:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 73u, 0x08987594u>(ctx, &aot_mem); return;
L_0898B428:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898B4E8;
      }
      goto L_0898B468;
    }
L_0898B468:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(1100)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B484u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B484u) goto L_0898B484;
    return;
L_0898B484:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_0898B4E8;
      }
      goto L_0898B48C;
    }
L_0898B48C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
      if (branch_taken) {
          goto L_0898B4AC;
      }
      goto L_0898B494;
    }
L_0898B494:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898B4EC;
      }
      goto L_0898B4A0;
    }
L_0898B4A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0898B4F0;
    }
    goto L_0898B4AC;
L_0898B4AC:
    aot_gpr[31] = (0x0898B4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 15u, 0x089881A4u>(ctx, &aot_mem) && ctx.pc == 0x0898B4B4u) goto L_0898B4B4;
    return;
L_0898B4B4:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[20] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 70u, 0x08987560u>(ctx, &aot_mem); return;
L_0898B4E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0898B4EC;
L_0898B4EC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0898B4F0;
L_0898B4F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B508:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898B568;
      }
      goto L_0898B548;
    }
L_0898B548:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1264)));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[22] = (aot_gpr[30] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[21] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898B598;
      }
      goto L_0898B560;
    }
L_0898B560:
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898B568u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(1268)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B568u) goto L_0898B568;
    return;
L_0898B568:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B598:
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898B5A8u);
    aot_gpr[5] = (aot_gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 255u, 0x0898FFA8u>(ctx, &aot_mem) && ctx.pc == 0x0898B5A8u) goto L_0898B5A8;
    return;
L_0898B5A8:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898B5B8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0898B5B8u) goto L_0898B5B8;
    return;
L_0898B5B8:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x0898B5C8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B5C8u) goto L_0898B5C8;
    return;
L_0898B5C8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[30] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(120), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[31] = (0x0898B634u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(44), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B634u) goto L_0898B634;
    return;
L_0898B634:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B664:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (0x0898B6A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 15u, 0x089881A4u>(ctx, &aot_mem) && ctx.pc == 0x0898B6A0u) goto L_0898B6A0;
    return;
L_0898B6A0:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 70u, 0x08987560u>(ctx, &aot_mem); return;
L_0898B6C8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B6F8;
      }
      goto L_0898B6D8;
    }
L_0898B6D8:
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
        goto L_0898B6EC;
    }
    goto L_0898B6E0;
L_0898B6E0:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B6EC:
    aot_gpr[25] = (aot_gpr[2] + 0u);
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B6F8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B700:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B71C;
      }
      goto L_0898B710;
    }
L_0898B710:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B71C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_0898B76C;
      }
      goto L_0898B750;
    }
L_0898B750:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0898B754;
L_0898B754:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0898B758;
L_0898B758:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0898B75C;
L_0898B75C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B76C:
    aot_gpr[18] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898B754;
      }
      goto L_0898B77C;
    }
L_0898B77C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0898B758;
      }
      goto L_0898B784;
    }
L_0898B784:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(284)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_0898B75C;
    }
    goto L_0898B790;
L_0898B790:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(220)));
    aot_gpr[4] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B7A0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B7A0u) goto L_0898B7A0;
    return;
L_0898B7A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898B754;
      }
      goto L_0898B7B0;
    }
L_0898B7B0:
    aot_gpr[19] = (aot_gpr[17] << 2u);
    aot_gpr[17] = (0u + 0u);
    goto L_0898B7DC;
L_0898B7BC:
    if (aot_gpr[4] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
        goto L_0898B810;
    }
    goto L_0898B7C4;
L_0898B7C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2800)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0898B754;
      }
      goto L_0898B7DC;
    }
L_0898B7DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898B7E8u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B7E8u) goto L_0898B7E8;
    return;
L_0898B7E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B7F0;
    }
L_0898B7F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_0898B7BC;
    }
    goto L_0898B800;
L_0898B800:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898B7C4;
L_0898B810:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898B7C4;
L_0898B81C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1224)));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0898B860;
      }
      goto L_0898B838;
    }
L_0898B838:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1228)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0898B860u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898B860u) goto L_0898B860;
    return;
L_0898B860:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B86C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0898B890;
      }
      goto L_0898B888;
    }
L_0898B888:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B890:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 89u, 0x08990908u>(ctx, &aot_mem); return;
L_0898B898:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 105u, 0x089909C0u>(ctx, &aot_mem); return;
L_0898B8AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(38));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    aot_gpr[20] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0898B904u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-26184), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 117u, 0x0898F7B4u>(ctx, &aot_mem) && ctx.pc == 0x0898B904u) goto L_0898B904;
    return;
L_0898B904:
    aot_gpr[31] = (0x0898B90Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898B90Cu) goto L_0898B90C;
    return;
L_0898B90C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898B938;
      }
      goto L_0898B914;
    }
L_0898B914:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3500));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B938;
      }
      goto L_0898B924;
    }
L_0898B924:
    aot_gpr[17] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(268));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898B964;
      }
      goto L_0898B938;
    }
L_0898B938:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B964:
    aot_gpr[31] = (0x0898B96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B96Cu) goto L_0898B96C;
    return;
L_0898B96C:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x0898B980u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4492));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0898B980u) goto L_0898B980;
    return;
L_0898B980:
    aot_gpr[3] = (aot_gpr[29] + aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17544));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(264), aot_gpr[5]);
    aot_gpr[31] = (0x0898B9A8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 172u, 0x0898ECA4u>(ctx, &aot_mem) && ctx.pc == 0x0898B9A8u) goto L_0898B9A8;
    return;
L_0898B9A8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26184)));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (aot_gpr[16]);
    aot_gpr[31] = (0x0898B9BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-26184), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898B9BCu) goto L_0898B9BC;
    return;
L_0898B9BC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B9EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898BAA8;
      }
      goto L_0898BA00;
    }
L_0898BA00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(268));
      if (branch_taken) {
          goto L_0898BAA8;
      }
      goto L_0898BA0C;
    }
L_0898BA0C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(256))))));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_0898BA84;
      }
      goto L_0898BA1C;
    }
L_0898BA1C:
    aot_gpr[31] = (0x0898BA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898BA24u) goto L_0898BA24;
    return;
L_0898BA24:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898BA34u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0898BA34u) goto L_0898BA34;
    return;
L_0898BA34:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x0898BA40u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x0898BA40u) goto L_0898BA40;
    return;
L_0898BA40:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-17728));
    aot_gpr[31] = (0x0898BA54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 172u, 0x0898ECA4u>(ctx, &aot_mem) && ctx.pc == 0x0898BA54u) goto L_0898BA54;
    return;
L_0898BA54:
    aot_gpr[31] = (0x0898BA5Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898BA5Cu) goto L_0898BA5C;
    return;
L_0898BA5C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_0898BA60;
L_0898BA60:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898BA70;
      }
      goto L_0898BA68;
    }
L_0898BA68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2816), aot_gpr[3]);
    goto L_0898BA70;
L_0898BA70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BA84:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4492));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898BA98u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0898BA98u) goto L_0898BA98;
    return;
L_0898BA98:
    aot_gpr[31] = (0x0898BAA0u);
    aot_gpr[4] = (0u + 0u);
    goto L_0898B8AC;
L_0898BAA0:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_0898BA60;
L_0898BAA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BAC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4492));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[21] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0898BB0Cu);
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(4228));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898BB0Cu) goto L_0898BB0C;
    return;
L_0898BB0C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898BB1Cu);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x0898BB1Cu) goto L_0898BB1C;
    return;
L_0898BB1C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0898BB0C;
      }
      goto L_0898BB28;
    }
L_0898BB28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(128)));
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(4228));
    aot_gpr[17] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(256), aot_gpr[2]);
    aot_gpr[31] = (0x0898BB40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898BB40u) goto L_0898BB40;
    return;
L_0898BB40:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898BB50u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BB50u) goto L_0898BB50;
    return;
L_0898BB50:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2816), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898BBAC;
      }
      goto L_0898BB94;
    }
L_0898BB94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26184)));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0898BBBC;
      }
      goto L_0898BBA8;
    }
L_0898BBA8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_0898BBAC;
L_0898BBAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0898BAC0;
L_0898BBBC:
    aot_gpr[31] = (0x0898BBC4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26184), aot_gpr[3]);
    goto L_0898B8AC;
L_0898BBC4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898BBAC;
      }
      goto L_0898BBCC;
    }
L_0898BBCC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BBDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898BC24;
      }
      goto L_0898BBEC;
    }
L_0898BBEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_0898BC24;
      }
      goto L_0898BBF8;
    }
L_0898BBF8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0898BC24;
      }
      goto L_0898BC08;
    }
L_0898BC08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898BC14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BC14u) goto L_0898BC14;
    return;
L_0898BC14:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem); return;
L_0898BC24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898BC90;
      }
      goto L_0898BC40;
    }
L_0898BC40:
    if (aot_gpr[5] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0898BC94;
    }
    goto L_0898BC48;
L_0898BC48:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898BC90;
      }
      goto L_0898BC50;
    }
L_0898BC50:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1264), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1268), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1032), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0898BC90;
      }
      goto L_0898BC68;
    }
L_0898BC68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898BCA0;
      }
      goto L_0898BC74;
    }
L_0898BC74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898BC80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BC80u) goto L_0898BC80;
    return;
L_0898BC80:
    aot_gpr[31] = (0x0898BC88u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898BC88u) goto L_0898BC88;
    return;
L_0898BC88:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898BCA0;
      }
      goto L_0898BC90;
    }
L_0898BC90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0898BC94;
L_0898BC94:
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BCA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BCB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898BD2C;
      }
      goto L_0898BCC4;
    }
L_0898BCC4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898BD2C;
      }
      goto L_0898BCCC;
    }
L_0898BCCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0898BD04;
      }
      goto L_0898BCDC;
    }
L_0898BCDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898BD14;
      }
      goto L_0898BCEC;
    }
L_0898BCEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898BCF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BCF8u) goto L_0898BCF8;
    return;
L_0898BCF8:
    aot_gpr[31] = (0x0898BD00u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898BD00u) goto L_0898BD00;
    return;
L_0898BD00:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    goto L_0898BD04;
L_0898BD04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(1032)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898BD88;
      }
      goto L_0898BD4C;
    }
L_0898BD4C:
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0898BD8C;
    }
    goto L_0898BD54;
L_0898BD54:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898BD88;
      }
      goto L_0898BD5C;
    }
L_0898BD5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0898BD7C;
      }
      goto L_0898BD68;
    }
L_0898BD68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(168)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898BD74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BD74u) goto L_0898BD74;
    return;
L_0898BD74:
    aot_gpr[31] = (0x0898BD7Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898BD7Cu) goto L_0898BD7C;
    return;
L_0898BD7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0898BD8C;
L_0898BD8C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD98:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BDCC;
      }
      goto L_0898BDA0;
    }
L_0898BDA0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BDCC;
      }
      goto L_0898BDA8;
    }
L_0898BDA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1312)));
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0898BDCC;
      }
      goto L_0898BDC0;
    }
L_0898BDC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1296), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1312), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(1280), aot_gpr[5]);
    goto L_0898BDCC;
L_0898BDCC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BDD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
      if (branch_taken) {
          goto L_0898BE74;
      }
      goto L_0898BDF8;
    }
L_0898BDF8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898BE1C;
      }
      goto L_0898BE18;
    }
L_0898BE18:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(252)));
    goto L_0898BE1C;
L_0898BE1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898BE50;
      }
      goto L_0898BE2C;
    }
L_0898BE2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1536));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0898BE50;
      }
      goto L_0898BE3C;
    }
L_0898BE3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898BE50u);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BE50u) goto L_0898BE50;
    return;
L_0898BE50:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x0898BE70u);
    if (aot_gpr[7] == 0u) aot_gpr[7] = (aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 21u, 0x089871C4u>(ctx, &aot_mem) && ctx.pc == 0x0898BE70u) goto L_0898BE70;
    return;
L_0898BE70:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(76));
    goto L_0898BE74;
L_0898BE74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BE8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1052));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[7] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0898BEB8;
      }
      goto L_0898BEAC;
    }
L_0898BEAC:
    aot_gpr[31] = (0x0898BEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0898BEB4u) goto L_0898BEB4;
    return;
L_0898BEB4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    goto L_0898BEB8;
L_0898BEB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BEC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BED0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BED8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_0898BF58;
      }
      goto L_0898BF08;
    }
L_0898BF08:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_0898BF38;
      }
      goto L_0898BF10;
    }
L_0898BF10:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_0898BF38;
      }
      goto L_0898BF18;
    }
L_0898BF18:
    aot_gpr[31] = (0x0898BF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x0898BF20u) goto L_0898BF20;
    return;
L_0898BF20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0898BF3C;
      }
      goto L_0898BF28;
    }
L_0898BF28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0392_entry, 392u, 2u, 0x0898C024u>(ctx, &aot_mem); return;
      }
      goto L_0898BF38;
    }
L_0898BF38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    goto L_0898BF3C;
L_0898BF3C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BF58:
    aot_gpr[31] = (0x0898BF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x0898BF60u) goto L_0898BF60;
    return;
L_0898BF60:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (aot_gpr[3] << 5u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0898BF3C;
      }
      goto L_0898BF7C;
    }
L_0898BF7C:
    aot_gpr[31] = (0x0898BF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x0898BF84u) goto L_0898BF84;
    return;
L_0898BF84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(184)));
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(164));
    aot_gpr[31] = (0x0898BFA8u);
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x0898BFA8u) goto L_0898BFA8;
    return;
L_0898BFA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[3] = (aot_gpr[3] << 5u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(168)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(164)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (aot_gpr[2] << 5u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x0898BFF0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898BFF0u) goto L_0898BFF0;
    return;
L_0898BFF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (aot_gpr[2] << 5u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    ctx.pc = 0x0898C000u; return;
}

void recomp_unit_0391(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0391_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_391(Runtime &runtime) {
    runtime.register_generated_unit(391u, 0x0898B000u, 4096u, &recomp_unit_0391, &recomp_unit_0391_entry);
    runtime.register_function(0x0898B000u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B008u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B034u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B044u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B04Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B054u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B06Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B074u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B084u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B08Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B0B8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B0C8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B0E8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B0F0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B0F4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B0FCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B114u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B120u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B134u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B154u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B15Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B170u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B184u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B18Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B194u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B1A0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B1A8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B1B0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B1C0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B1D0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B1F0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B200u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B20Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B218u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B224u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B23Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B24Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B264u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B27Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B290u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B2A8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B2C8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B2D0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B2E0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B2ECu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B2F8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B300u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B304u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B308u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B318u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B320u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B330u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B33Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B348u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B350u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B378u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B3A0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B3C8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B3D0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B408u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B428u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B468u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B484u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B48Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B494u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B4A0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B4ACu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B4B4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B4E8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B4ECu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B4F0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B508u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B548u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B560u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B568u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B598u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B5A8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B5B8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B5C8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B634u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B664u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B6A0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B6C8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B6D8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B6E0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B6ECu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B6F8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B700u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B710u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B71Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B724u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B750u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B754u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B758u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B75Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B76Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B77Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B784u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B790u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7A0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7B0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7BCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7C4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7DCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7E8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B7F0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B800u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B810u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B81Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B838u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B860u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B86Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B888u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B890u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B898u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B8ACu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B904u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B90Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B914u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B924u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B938u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B964u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B96Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B980u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B9A8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B9BCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898B9ECu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA00u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA0Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA1Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA24u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA34u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA40u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA54u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA5Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA60u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA68u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA70u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA84u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BA98u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BAA0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BAA8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BAC0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB0Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB1Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB28u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB40u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB50u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB78u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BB94u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBA8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBACu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBBCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBC4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBCCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBDCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBECu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BBF8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC08u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC14u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC24u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC30u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC40u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC48u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC50u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC68u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC74u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC80u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC88u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC90u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BC94u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCA0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCB4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCC4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCCCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCDCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCECu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BCF8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD00u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD04u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD14u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD2Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD40u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD4Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD54u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD5Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD68u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD74u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD7Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD88u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD8Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BD98u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BDA0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BDA8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BDC0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BDCCu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BDD4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BDF8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE18u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE1Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE2Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE3Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE50u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE70u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE74u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BE8Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BEACu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BEB4u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BEB8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BEC8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BED0u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BED8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF08u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF10u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF18u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF20u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF28u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF38u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF3Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF58u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF60u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF7Cu, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BF84u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BFA8u, &recomp_unit_0391, "recomp_unit_0391");
    runtime.register_function(0x0898BFF0u, &recomp_unit_0391, "recomp_unit_0391");
}
} // namespace psprecomp
