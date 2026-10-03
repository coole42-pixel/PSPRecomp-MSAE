#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0526[1023] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46,
    47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 67,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0,
    0, 82, 0, 83, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0,
    0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0,
    117, 0, 118, 0, 0, 119, 0, 120, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124,
    0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0,
    139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0,
    180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0,
    0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0,
    0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 216, 0, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0,
    230, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238,
};
void recomp_unit_0526_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A12000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0526[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A12000;
    case 2u: goto L_08A12014;
    case 3u: goto L_08A12024;
    case 4u: goto L_08A12030;
    case 5u: goto L_08A1203C;
    case 6u: goto L_08A1204C;
    case 7u: goto L_08A12054;
    case 8u: goto L_08A12060;
    case 9u: goto L_08A12068;
    case 10u: goto L_08A1206C;
    case 11u: goto L_08A12088;
    case 12u: goto L_08A120BC;
    case 13u: goto L_08A120C8;
    case 14u: goto L_08A120D8;
    case 15u: goto L_08A120DC;
    case 16u: goto L_08A12100;
    case 17u: goto L_08A1211C;
    case 18u: goto L_08A1213C;
    case 19u: goto L_08A12148;
    case 20u: goto L_08A12150;
    case 21u: goto L_08A12164;
    case 22u: goto L_08A12188;
    case 23u: goto L_08A12190;
    case 24u: goto L_08A1219C;
    case 25u: goto L_08A121A4;
    case 26u: goto L_08A121AC;
    case 27u: goto L_08A121C8;
    case 28u: goto L_08A121D0;
    case 29u: goto L_08A121E4;
    case 30u: goto L_08A121EC;
    case 31u: goto L_08A12208;
    case 32u: goto L_08A12218;
    case 33u: goto L_08A1222C;
    case 34u: goto L_08A12234;
    case 35u: goto L_08A12240;
    case 36u: goto L_08A12250;
    case 37u: goto L_08A12264;
    case 38u: goto L_08A12284;
    case 39u: goto L_08A122A8;
    case 40u: goto L_08A122B8;
    case 41u: goto L_08A122C4;
    case 42u: goto L_08A122D0;
    case 43u: goto L_08A122E0;
    case 44u: goto L_08A122E8;
    case 45u: goto L_08A122F4;
    case 46u: goto L_08A122FC;
    case 47u: goto L_08A12300;
    case 48u: goto L_08A1231C;
    case 49u: goto L_08A12350;
    case 50u: goto L_08A1235C;
    case 51u: goto L_08A12368;
    case 52u: goto L_08A1236C;
    case 53u: goto L_08A12390;
    case 54u: goto L_08A123AC;
    case 55u: goto L_08A123CC;
    case 56u: goto L_08A123D8;
    case 57u: goto L_08A123E0;
    case 58u: goto L_08A123F4;
    case 59u: goto L_08A12418;
    case 60u: goto L_08A12420;
    case 61u: goto L_08A1242C;
    case 62u: goto L_08A12434;
    case 63u: goto L_08A1243C;
    case 64u: goto L_08A12458;
    case 65u: goto L_08A12460;
    case 66u: goto L_08A12474;
    case 67u: goto L_08A1247C;
    case 68u: goto L_08A12498;
    case 69u: goto L_08A124A8;
    case 70u: goto L_08A124BC;
    case 71u: goto L_08A124C4;
    case 72u: goto L_08A124D0;
    case 73u: goto L_08A124E0;
    case 74u: goto L_08A124F4;
    case 75u: goto L_08A12514;
    case 76u: goto L_08A12538;
    case 77u: goto L_08A12548;
    case 78u: goto L_08A12554;
    case 79u: goto L_08A12560;
    case 80u: goto L_08A12570;
    case 81u: goto L_08A12578;
    case 82u: goto L_08A12584;
    case 83u: goto L_08A1258C;
    case 84u: goto L_08A12590;
    case 85u: goto L_08A125AC;
    case 86u: goto L_08A125E0;
    case 87u: goto L_08A125EC;
    case 88u: goto L_08A125F8;
    case 89u: goto L_08A125FC;
    case 90u: goto L_08A12620;
    case 91u: goto L_08A1263C;
    case 92u: goto L_08A1265C;
    case 93u: goto L_08A12668;
    case 94u: goto L_08A12670;
    case 95u: goto L_08A12684;
    case 96u: goto L_08A126A8;
    case 97u: goto L_08A126B0;
    case 98u: goto L_08A126BC;
    case 99u: goto L_08A126C4;
    case 100u: goto L_08A126CC;
    case 101u: goto L_08A126E8;
    case 102u: goto L_08A126F0;
    case 103u: goto L_08A12704;
    case 104u: goto L_08A1270C;
    case 105u: goto L_08A12728;
    case 106u: goto L_08A12738;
    case 107u: goto L_08A1274C;
    case 108u: goto L_08A12754;
    case 109u: goto L_08A12760;
    case 110u: goto L_08A12770;
    case 111u: goto L_08A12784;
    case 112u: goto L_08A127A4;
    case 113u: goto L_08A127C8;
    case 114u: goto L_08A127D8;
    case 115u: goto L_08A127E4;
    case 116u: goto L_08A127F0;
    case 117u: goto L_08A12800;
    case 118u: goto L_08A12808;
    case 119u: goto L_08A12814;
    case 120u: goto L_08A1281C;
    case 121u: goto L_08A12820;
    case 122u: goto L_08A1283C;
    case 123u: goto L_08A12870;
    case 124u: goto L_08A1287C;
    case 125u: goto L_08A12888;
    case 126u: goto L_08A1288C;
    case 127u: goto L_08A128B0;
    case 128u: goto L_08A128CC;
    case 129u: goto L_08A128EC;
    case 130u: goto L_08A128F8;
    case 131u: goto L_08A12900;
    case 132u: goto L_08A12914;
    case 133u: goto L_08A12938;
    case 134u: goto L_08A12940;
    case 135u: goto L_08A1294C;
    case 136u: goto L_08A12954;
    case 137u: goto L_08A1295C;
    case 138u: goto L_08A12978;
    case 139u: goto L_08A12980;
    case 140u: goto L_08A12994;
    case 141u: goto L_08A1299C;
    case 142u: goto L_08A129B8;
    case 143u: goto L_08A129C8;
    case 144u: goto L_08A129DC;
    case 145u: goto L_08A129E4;
    case 146u: goto L_08A129F0;
    case 147u: goto L_08A12A00;
    case 148u: goto L_08A12A14;
    case 149u: goto L_08A12A34;
    case 150u: goto L_08A12A48;
    case 151u: goto L_08A12A54;
    case 152u: goto L_08A12A64;
    case 153u: goto L_08A12A78;
    case 154u: goto L_08A12AA4;
    case 155u: goto L_08A12AB0;
    case 156u: goto L_08A12AB8;
    case 157u: goto L_08A12ABC;
    case 158u: goto L_08A12ADC;
    case 159u: goto L_08A12B08;
    case 160u: goto L_08A12B10;
    case 161u: goto L_08A12B1C;
    case 162u: goto L_08A12B24;
    case 163u: goto L_08A12B2C;
    case 164u: goto L_08A12B38;
    case 165u: goto L_08A12B44;
    case 166u: goto L_08A12B4C;
    case 167u: goto L_08A12B54;
    case 168u: goto L_08A12B60;
    case 169u: goto L_08A12B6C;
    case 170u: goto L_08A12B8C;
    case 171u: goto L_08A12B94;
    case 172u: goto L_08A12BA4;
    case 173u: goto L_08A12BAC;
    case 174u: goto L_08A12BB4;
    case 175u: goto L_08A12BC0;
    case 176u: goto L_08A12BC8;
    case 177u: goto L_08A12BD4;
    case 178u: goto L_08A12BEC;
    case 179u: goto L_08A12BF8;
    case 180u: goto L_08A12C00;
    case 181u: goto L_08A12C08;
    case 182u: goto L_08A12C28;
    case 183u: goto L_08A12C44;
    case 184u: goto L_08A12C64;
    case 185u: goto L_08A12C70;
    case 186u: goto L_08A12C78;
    case 187u: goto L_08A12C8C;
    case 188u: goto L_08A12CB0;
    case 189u: goto L_08A12CB8;
    case 190u: goto L_08A12CC4;
    case 191u: goto L_08A12CCC;
    case 192u: goto L_08A12CD4;
    case 193u: goto L_08A12CF0;
    case 194u: goto L_08A12CF8;
    case 195u: goto L_08A12D0C;
    case 196u: goto L_08A12D14;
    case 197u: goto L_08A12D30;
    case 198u: goto L_08A12D40;
    case 199u: goto L_08A12D54;
    case 200u: goto L_08A12D5C;
    case 201u: goto L_08A12D68;
    case 202u: goto L_08A12D78;
    case 203u: goto L_08A12D8C;
    case 204u: goto L_08A12DAC;
    case 205u: goto L_08A12DD0;
    case 206u: goto L_08A12DE0;
    case 207u: goto L_08A12DEC;
    case 208u: goto L_08A12DF8;
    case 209u: goto L_08A12E08;
    case 210u: goto L_08A12E10;
    case 211u: goto L_08A12E1C;
    case 212u: goto L_08A12E24;
    case 213u: goto L_08A12E28;
    case 214u: goto L_08A12E44;
    case 215u: goto L_08A12E78;
    case 216u: goto L_08A12E84;
    case 217u: goto L_08A12E90;
    case 218u: goto L_08A12E94;
    case 219u: goto L_08A12EB8;
    case 220u: goto L_08A12ED4;
    case 221u: goto L_08A12EF4;
    case 222u: goto L_08A12F00;
    case 223u: goto L_08A12F08;
    case 224u: goto L_08A12F1C;
    case 225u: goto L_08A12F40;
    case 226u: goto L_08A12F48;
    case 227u: goto L_08A12F54;
    case 228u: goto L_08A12F5C;
    case 229u: goto L_08A12F64;
    case 230u: goto L_08A12F80;
    case 231u: goto L_08A12F88;
    case 232u: goto L_08A12F9C;
    case 233u: goto L_08A12FA4;
    case 234u: goto L_08A12FC0;
    case 235u: goto L_08A12FD0;
    case 236u: goto L_08A12FE4;
    case 237u: goto L_08A12FEC;
    case 238u: goto L_08A12FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A12000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A12014u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-3124));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12014u) goto L_08A12014;
    return;
L_08A12014:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A12024u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12024u) goto L_08A12024;
    return;
L_08A12024:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12030u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12030u) goto L_08A12030;
    return;
L_08A12030:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1203Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1203Cu) goto L_08A1203C;
    return;
L_08A1203C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1204Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3116));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1204Cu) goto L_08A1204C;
    return;
L_08A1204C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1206C;
      }
      goto L_08A12054;
    }
L_08A12054:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A12060u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12060u) goto L_08A12060;
    return;
L_08A12060:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1206C;
      }
      goto L_08A12068;
    }
L_08A12068:
    aot_gpr[16] = (0u | 1u);
    goto L_08A1206C;
L_08A1206C:
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
L_08A12088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A120BCu);
    aot_gpr[4] = (0u | 912u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A120BCu) goto L_08A120BC;
    return;
L_08A120BC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A120DC;
      }
      goto L_08A120C8;
    }
L_08A120C8:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A120D8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 59u, 0x08A2051Cu>(ctx, &aot_mem) && ctx.pc == 0x08A120D8u) goto L_08A120D8;
    return;
L_08A120D8:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A120DC;
L_08A120DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A12100:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A12150;
      }
      goto L_08A1211C;
    }
L_08A1211C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14392));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18128), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1213Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1213Cu) goto L_08A1213C;
    return;
L_08A1213C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12150;
      }
      goto L_08A12148;
    }
L_08A12148:
    aot_gpr[31] = (0x08A12150u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A12218;
L_08A12150:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A121AC;
      }
      goto L_08A12188;
    }
L_08A12188:
    aot_gpr[31] = (0x08A12190u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A121D0;
L_08A12190:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18128), aot_gpr[17]);
        goto L_08A121AC;
    }
    goto L_08A1219C;
L_08A1219C:
    aot_gpr[31] = (0x08A121A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A12250;
L_08A121A4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18128), aot_gpr[17]);
    goto L_08A121AC;
L_08A121AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18128)));
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
L_08A121C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A121D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A121E4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A121E4u) goto L_08A121E4;
    return;
L_08A121E4:
    aot_gpr[31] = (0x08A121ECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A121ECu) goto L_08A121EC;
    return;
L_08A121EC:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A12208u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3096));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12208u) goto L_08A12208;
    return;
L_08A12208:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1222Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1222Cu) goto L_08A1222C;
    return;
L_08A1222C:
    aot_gpr[31] = (0x08A12234u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12234u) goto L_08A12234;
    return;
L_08A12234:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12240u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A12240u) goto L_08A12240;
    return;
L_08A12240:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12264u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A12264u) goto L_08A12264;
    return;
L_08A12264:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14392));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12284:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A122A8u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-3056));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A122A8u) goto L_08A122A8;
    return;
L_08A122A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A122B8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A122B8u) goto L_08A122B8;
    return;
L_08A122B8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A122C4u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A122C4u) goto L_08A122C4;
    return;
L_08A122C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A122D0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A122D0u) goto L_08A122D0;
    return;
L_08A122D0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A122E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3048));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A122E0u) goto L_08A122E0;
    return;
L_08A122E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A12300;
      }
      goto L_08A122E8;
    }
L_08A122E8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A122F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3040));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A122F4u) goto L_08A122F4;
    return;
L_08A122F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12300;
      }
      goto L_08A122FC;
    }
L_08A122FC:
    aot_gpr[16] = (0u | 1u);
    goto L_08A12300;
L_08A12300:
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
L_08A1231C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A12350u);
    aot_gpr[4] = (0u | 912u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12350u) goto L_08A12350;
    return;
L_08A12350:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1236C;
      }
      goto L_08A1235C;
    }
L_08A1235C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A12368u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 147u, 0x08A21A38u>(ctx, &aot_mem) && ctx.pc == 0x08A12368u) goto L_08A12368;
    return;
L_08A12368:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A1236C;
L_08A1236C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A12390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A123E0;
      }
      goto L_08A123AC;
    }
L_08A123AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14456));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18120), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A123CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A123CCu) goto L_08A123CC;
    return;
L_08A123CC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A123E0;
      }
      goto L_08A123D8;
    }
L_08A123D8:
    aot_gpr[31] = (0x08A123E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A124A8;
L_08A123E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A123F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1243C;
      }
      goto L_08A12418;
    }
L_08A12418:
    aot_gpr[31] = (0x08A12420u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A12460;
L_08A12420:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18120), aot_gpr[17]);
        goto L_08A1243C;
    }
    goto L_08A1242C;
L_08A1242C:
    aot_gpr[31] = (0x08A12434u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A124E0;
L_08A12434:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18120), aot_gpr[17]);
    goto L_08A1243C;
L_08A1243C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18120)));
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
L_08A12458:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12460:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12474u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12474u) goto L_08A12474;
    return;
L_08A12474:
    aot_gpr[31] = (0x08A1247Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1247Cu) goto L_08A1247C;
    return;
L_08A1247C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A12498u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3024));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12498u) goto L_08A12498;
    return;
L_08A12498:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A124A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A124BCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A124BCu) goto L_08A124BC;
    return;
L_08A124BC:
    aot_gpr[31] = (0x08A124C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A124C4u) goto L_08A124C4;
    return;
L_08A124C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A124D0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A124D0u) goto L_08A124D0;
    return;
L_08A124D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A124E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A124F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A124F4u) goto L_08A124F4;
    return;
L_08A124F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14456));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12514:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A12538u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-2984));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12538u) goto L_08A12538;
    return;
L_08A12538:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A12548u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12548u) goto L_08A12548;
    return;
L_08A12548:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12554u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12554u) goto L_08A12554;
    return;
L_08A12554:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A12560u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12560u) goto L_08A12560;
    return;
L_08A12560:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12570u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2976));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12570u) goto L_08A12570;
    return;
L_08A12570:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A12590;
      }
      goto L_08A12578;
    }
L_08A12578:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A12584u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2968));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12584u) goto L_08A12584;
    return;
L_08A12584:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12590;
      }
      goto L_08A1258C;
    }
L_08A1258C:
    aot_gpr[16] = (0u | 1u);
    goto L_08A12590;
L_08A12590:
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
L_08A125AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A125E0u);
    aot_gpr[4] = (0u | 540u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A125E0u) goto L_08A125E0;
    return;
L_08A125E0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A125FC;
      }
      goto L_08A125EC;
    }
L_08A125EC:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A125F8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0541_entry, 541u, 168u, 0x08A21C14u>(ctx, &aot_mem) && ctx.pc == 0x08A125F8u) goto L_08A125F8;
    return;
L_08A125F8:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A125FC;
L_08A125FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A12620:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A12670;
      }
      goto L_08A1263C;
    }
L_08A1263C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14520));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18112), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1265Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1265Cu) goto L_08A1265C;
    return;
L_08A1265C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12670;
      }
      goto L_08A12668;
    }
L_08A12668:
    aot_gpr[31] = (0x08A12670u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A12738;
L_08A12670:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12684:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A126CC;
      }
      goto L_08A126A8;
    }
L_08A126A8:
    aot_gpr[31] = (0x08A126B0u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A126F0;
L_08A126B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18112), aot_gpr[17]);
        goto L_08A126CC;
    }
    goto L_08A126BC;
L_08A126BC:
    aot_gpr[31] = (0x08A126C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A12770;
L_08A126C4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18112), aot_gpr[17]);
    goto L_08A126CC;
L_08A126CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18112)));
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
L_08A126E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A126F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12704u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12704u) goto L_08A12704;
    return;
L_08A12704:
    aot_gpr[31] = (0x08A1270Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1270Cu) goto L_08A1270C;
    return;
L_08A1270C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 15u);
    aot_gpr[31] = (0x08A12728u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2960));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12728u) goto L_08A12728;
    return;
L_08A12728:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1274Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1274Cu) goto L_08A1274C;
    return;
L_08A1274C:
    aot_gpr[31] = (0x08A12754u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12754u) goto L_08A12754;
    return;
L_08A12754:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12760u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A12760u) goto L_08A12760;
    return;
L_08A12760:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12770:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12784u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A12784u) goto L_08A12784;
    return;
L_08A12784:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14520));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A127A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A127C8u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-2920));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A127C8u) goto L_08A127C8;
    return;
L_08A127C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A127D8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A127D8u) goto L_08A127D8;
    return;
L_08A127D8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A127E4u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A127E4u) goto L_08A127E4;
    return;
L_08A127E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A127F0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A127F0u) goto L_08A127F0;
    return;
L_08A127F0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12800u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2912));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12800u) goto L_08A12800;
    return;
L_08A12800:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A12820;
      }
      goto L_08A12808;
    }
L_08A12808:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A12814u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2904));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12814u) goto L_08A12814;
    return;
L_08A12814:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12820;
      }
      goto L_08A1281C;
    }
L_08A1281C:
    aot_gpr[16] = (0u | 1u);
    goto L_08A12820;
L_08A12820:
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
L_08A1283C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A12870u);
    aot_gpr[4] = (0u | 536u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12870u) goto L_08A12870;
    return;
L_08A12870:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1288C;
      }
      goto L_08A1287C;
    }
L_08A1287C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A12888u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 12u, 0x08A220DCu>(ctx, &aot_mem) && ctx.pc == 0x08A12888u) goto L_08A12888;
    return;
L_08A12888:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A1288C;
L_08A1288C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A128B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A12900;
      }
      goto L_08A128CC;
    }
L_08A128CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14592));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18104), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A128ECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A128ECu) goto L_08A128EC;
    return;
L_08A128EC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12900;
      }
      goto L_08A128F8;
    }
L_08A128F8:
    aot_gpr[31] = (0x08A12900u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A129C8;
L_08A12900:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1295C;
      }
      goto L_08A12938;
    }
L_08A12938:
    aot_gpr[31] = (0x08A12940u);
    aot_gpr[4] = (0u | 12u);
    goto L_08A12980;
L_08A12940:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18104), aot_gpr[17]);
        goto L_08A1295C;
    }
    goto L_08A1294C;
L_08A1294C:
    aot_gpr[31] = (0x08A12954u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A12A00;
L_08A12954:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18104), aot_gpr[17]);
    goto L_08A1295C;
L_08A1295C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18104)));
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
L_08A12978:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12980:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12994u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12994u) goto L_08A12994;
    return;
L_08A12994:
    aot_gpr[31] = (0x08A1299Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1299Cu) goto L_08A1299C;
    return;
L_08A1299C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 17u);
    aot_gpr[31] = (0x08A129B8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2888));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A129B8u) goto L_08A129B8;
    return;
L_08A129B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A129C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A129DCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A129DCu) goto L_08A129DC;
    return;
L_08A129DC:
    aot_gpr[31] = (0x08A129E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A129E4u) goto L_08A129E4;
    return;
L_08A129E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A129F0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A129F0u) goto L_08A129F0;
    return;
L_08A129F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12A00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12A14u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A12A14u) goto L_08A12A14;
    return;
L_08A12A14:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14592));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12A34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12A48u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12A48u) goto L_08A12A48;
    return;
L_08A12A48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A12A54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12A54u) goto L_08A12A54;
    return;
L_08A12A54:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12A64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2856));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12A64u) goto L_08A12A64;
    return;
L_08A12A64:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12A78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A12AA4u);
    aot_gpr[4] = (0u | 25536u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12AA4u) goto L_08A12AA4;
    return;
L_08A12AA4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A12ABC;
      }
      goto L_08A12AB0;
    }
L_08A12AB0:
    aot_gpr[31] = (0x08A12AB8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 88u, 0x08A2266Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12AB8u) goto L_08A12AB8;
    return;
L_08A12AB8:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A12ABC;
L_08A12ABC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A12ADC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-2856));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_08A12B08;
L_08A12B08:
    aot_gpr[31] = (0x08A12B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12B10u) goto L_08A12B10;
    return;
L_08A12B10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A12B1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12B1Cu) goto L_08A12B1C;
    return;
L_08A12B1C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A12B4C;
      }
      goto L_08A12B24;
    }
L_08A12B24:
    aot_gpr[31] = (0x08A12B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12B2Cu) goto L_08A12B2C;
    return;
L_08A12B2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A12B38u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12B38u) goto L_08A12B38;
    return;
L_08A12B38:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12B44u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12B44u) goto L_08A12B44;
    return;
L_08A12B44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A12B8C;
      }
      goto L_08A12B4C;
    }
L_08A12B4C:
    aot_gpr[31] = (0x08A12B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12B54u) goto L_08A12B54;
    return;
L_08A12B54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A12B60u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12B60u) goto L_08A12B60;
    return;
L_08A12B60:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12B08;
      }
      goto L_08A12B6C;
    }
L_08A12B6C:
    aot_gpr[2] = (0u | 0u);
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
L_08A12B8C:
    aot_gpr[31] = (0x08A12B94u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-2848));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12B94u) goto L_08A12B94;
    return;
L_08A12B94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A12BA4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12BA4u) goto L_08A12BA4;
    return;
L_08A12BA4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_08A12BAC;
L_08A12BAC:
    aot_gpr[31] = (0x08A12BB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A12BB4u) goto L_08A12BB4;
    return;
L_08A12BB4:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A12B6C;
      }
      goto L_08A12BC0;
    }
L_08A12BC0:
    aot_gpr[31] = (0x08A12BC8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A12BC8u) goto L_08A12BC8;
    return;
L_08A12BC8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12C00;
      }
      goto L_08A12BD4;
    }
L_08A12BD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A12BECu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12BECu) goto L_08A12BEC;
    return;
L_08A12BEC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12BF8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12BF8u) goto L_08A12BF8;
    return;
L_08A12BF8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12C08;
      }
      goto L_08A12C00;
    }
L_08A12C00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A12BAC;
      }
      goto L_08A12C08;
    }
L_08A12C08:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A12C28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A12C78;
      }
      goto L_08A12C44;
    }
L_08A12C44:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14664));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18096), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A12C64u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12C64u) goto L_08A12C64;
    return;
L_08A12C64:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12C78;
      }
      goto L_08A12C70;
    }
L_08A12C70:
    aot_gpr[31] = (0x08A12C78u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A12D40;
L_08A12C78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12C8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18096)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A12CD4;
      }
      goto L_08A12CB0;
    }
L_08A12CB0:
    aot_gpr[31] = (0x08A12CB8u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A12CF8;
L_08A12CB8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18096), aot_gpr[17]);
        goto L_08A12CD4;
    }
    goto L_08A12CC4;
L_08A12CC4:
    aot_gpr[31] = (0x08A12CCCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A12D78;
L_08A12CCC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18096), aot_gpr[17]);
    goto L_08A12CD4;
L_08A12CD4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18096)));
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
L_08A12CF0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12CF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12D0Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12D0Cu) goto L_08A12D0C;
    return;
L_08A12D0C:
    aot_gpr[31] = (0x08A12D14u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12D14u) goto L_08A12D14;
    return;
L_08A12D14:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A12D30u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2840));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12D30u) goto L_08A12D30;
    return;
L_08A12D30:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12D40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12D54u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12D54u) goto L_08A12D54;
    return;
L_08A12D54:
    aot_gpr[31] = (0x08A12D5Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12D5Cu) goto L_08A12D5C;
    return;
L_08A12D5C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12D68u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A12D68u) goto L_08A12D68;
    return;
L_08A12D68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12D78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12D8Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A12D8Cu) goto L_08A12D8C;
    return;
L_08A12D8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14664));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A12DD0u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-2800));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12DD0u) goto L_08A12DD0;
    return;
L_08A12DD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A12DE0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12DE0u) goto L_08A12DE0;
    return;
L_08A12DE0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12DECu);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A12DECu) goto L_08A12DEC;
    return;
L_08A12DEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A12DF8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A12DF8u) goto L_08A12DF8;
    return;
L_08A12DF8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12E08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2792));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12E08u) goto L_08A12E08;
    return;
L_08A12E08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A12E28;
      }
      goto L_08A12E10;
    }
L_08A12E10:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A12E1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2784));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12E1Cu) goto L_08A12E1C;
    return;
L_08A12E1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12E28;
      }
      goto L_08A12E24;
    }
L_08A12E24:
    aot_gpr[16] = (0u | 1u);
    goto L_08A12E28;
L_08A12E28:
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
L_08A12E44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A12E78u);
    aot_gpr[4] = (0u | 596u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12E78u) goto L_08A12E78;
    return;
L_08A12E78:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A12E94;
      }
      goto L_08A12E84;
    }
L_08A12E84:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A12E90u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 17u, 0x08A240B4u>(ctx, &aot_mem) && ctx.pc == 0x08A12E90u) goto L_08A12E90;
    return;
L_08A12E90:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A12E94;
L_08A12E94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A12EB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A12F08;
      }
      goto L_08A12ED4;
    }
L_08A12ED4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14728));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18088), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A12EF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12EF4u) goto L_08A12EF4;
    return;
L_08A12EF4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12F08;
      }
      goto L_08A12F00;
    }
L_08A12F00:
    aot_gpr[31] = (0x08A12F08u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A12FD0;
L_08A12F08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12F1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18088)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A12F64;
      }
      goto L_08A12F40;
    }
L_08A12F40:
    aot_gpr[31] = (0x08A12F48u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A12F88;
L_08A12F48:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18088), aot_gpr[17]);
        goto L_08A12F64;
    }
    goto L_08A12F54;
L_08A12F54:
    aot_gpr[31] = (0x08A12F5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 2u, 0x08A13008u>(ctx, &aot_mem) && ctx.pc == 0x08A12F5Cu) goto L_08A12F5C;
    return;
L_08A12F5C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18088), aot_gpr[17]);
    goto L_08A12F64;
L_08A12F64:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18088)));
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
L_08A12F80:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12F88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12F9Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12F9Cu) goto L_08A12F9C;
    return;
L_08A12F9C:
    aot_gpr[31] = (0x08A12FA4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12FA4u) goto L_08A12FA4;
    return;
L_08A12FA4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A12FC0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2776));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12FC0u) goto L_08A12FC0;
    return;
L_08A12FC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12FD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A12FE4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A12FE4u) goto L_08A12FE4;
    return;
L_08A12FE4:
    aot_gpr[31] = (0x08A12FECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12FECu) goto L_08A12FEC;
    return;
L_08A12FEC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A12FF8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A12FF8u) goto L_08A12FF8;
    return;
L_08A12FF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A13000u; return;
}

void recomp_unit_0526(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0526_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_526(Runtime &runtime) {
    runtime.register_generated_unit(526u, 0x08A12000u, 4096u, &recomp_unit_0526, &recomp_unit_0526_entry);
    runtime.register_function(0x08A12000u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12014u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12024u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12030u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1203Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1204Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12054u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12060u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12068u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1206Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12088u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A120BCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A120C8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A120D8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A120DCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12100u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1211Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1213Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12148u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12150u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12164u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12188u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12190u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1219Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A121A4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A121ACu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A121C8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A121D0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A121E4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A121ECu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12208u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12218u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1222Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12234u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12240u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12250u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12264u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12284u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122A8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122B8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122C4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122D0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122E0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122E8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122F4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A122FCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12300u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1231Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12350u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1235Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12368u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1236Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12390u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A123ACu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A123CCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A123D8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A123E0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A123F4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12418u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12420u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1242Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12434u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1243Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12458u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12460u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12474u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1247Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12498u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A124A8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A124BCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A124C4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A124D0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A124E0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A124F4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12514u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12538u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12548u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12554u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12560u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12570u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12578u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12584u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1258Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12590u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A125ACu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A125E0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A125ECu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A125F8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A125FCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12620u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1263Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1265Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12668u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12670u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12684u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126A8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126B0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126BCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126C4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126CCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126E8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A126F0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12704u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1270Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12728u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12738u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1274Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12754u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12760u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12770u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12784u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A127A4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A127C8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A127D8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A127E4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A127F0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12800u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12808u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12814u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1281Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12820u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1283Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12870u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1287Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12888u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1288Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A128B0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A128CCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A128ECu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A128F8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12900u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12914u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12938u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12940u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1294Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12954u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1295Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12978u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12980u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12994u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A1299Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A129B8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A129C8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A129DCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A129E4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A129F0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A00u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A14u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A34u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A48u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A54u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A64u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12A78u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12AA4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12AB0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12AB8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12ABCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12ADCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B08u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B10u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B1Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B24u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B2Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B38u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B44u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B4Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B54u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B60u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B6Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B8Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12B94u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BA4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BACu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BB4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BC0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BC8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BD4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BECu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12BF8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C00u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C08u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C28u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C44u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C64u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C70u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C78u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12C8Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CB0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CB8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CC4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CCCu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CD4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CF0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12CF8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D0Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D14u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D30u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D40u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D54u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D5Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D68u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D78u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12D8Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12DACu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12DD0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12DE0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12DECu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12DF8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E08u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E10u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E1Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E24u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E28u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E44u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E78u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E84u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E90u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12E94u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12EB8u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12ED4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12EF4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F00u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F08u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F1Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F40u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F48u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F54u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F5Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F64u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F80u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F88u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12F9Cu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12FA4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12FC0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12FD0u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12FE4u, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12FECu, &recomp_unit_0526, "recomp_unit_0526");
    runtime.register_function(0x08A12FF8u, &recomp_unit_0526, "recomp_unit_0526");
}
} // namespace psprecomp
