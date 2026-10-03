#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0509[1023] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 41,
    0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52,
    53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 64, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0,
    0, 93, 0, 94, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103,
    0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0,
    0, 113, 0, 0, 114, 0, 0, 115, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0,
    0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0,
    0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0,
    158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171,
    0, 172, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0,
    0, 198, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219,
    0, 220, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240,
};
void recomp_unit_0509_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A01000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0509[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A01000;
    case 2u: goto L_08A01008;
    case 3u: goto L_08A01014;
    case 4u: goto L_08A0101C;
    case 5u: goto L_08A01034;
    case 6u: goto L_08A01040;
    case 7u: goto L_08A01058;
    case 8u: goto L_08A01064;
    case 9u: goto L_08A0106C;
    case 10u: goto L_08A01074;
    case 11u: goto L_08A0107C;
    case 12u: goto L_08A010BC;
    case 13u: goto L_08A010D4;
    case 14u: goto L_08A010F0;
    case 15u: goto L_08A01118;
    case 16u: goto L_08A01128;
    case 17u: goto L_08A01138;
    case 18u: goto L_08A01148;
    case 19u: goto L_08A01158;
    case 20u: goto L_08A01168;
    case 21u: goto L_08A01178;
    case 22u: goto L_08A01188;
    case 23u: goto L_08A011A4;
    case 24u: goto L_08A011B4;
    case 25u: goto L_08A011C4;
    case 26u: goto L_08A011CC;
    case 27u: goto L_08A011D8;
    case 28u: goto L_08A01220;
    case 29u: goto L_08A01228;
    case 30u: goto L_08A01238;
    case 31u: goto L_08A01248;
    case 32u: goto L_08A01260;
    case 33u: goto L_08A01274;
    case 34u: goto L_08A01298;
    case 35u: goto L_08A012A8;
    case 36u: goto L_08A012B8;
    case 37u: goto L_08A012C8;
    case 38u: goto L_08A012D8;
    case 39u: goto L_08A012E0;
    case 40u: goto L_08A012F4;
    case 41u: goto L_08A012FC;
    case 42u: goto L_08A01308;
    case 43u: goto L_08A01310;
    case 44u: goto L_08A0131C;
    case 45u: goto L_08A01328;
    case 46u: goto L_08A01330;
    case 47u: goto L_08A0133C;
    case 48u: goto L_08A01340;
    case 49u: goto L_08A01354;
    case 50u: goto L_08A01368;
    case 51u: goto L_08A01370;
    case 52u: goto L_08A0137C;
    case 53u: goto L_08A01380;
    case 54u: goto L_08A0138C;
    case 55u: goto L_08A013A0;
    case 56u: goto L_08A013B0;
    case 57u: goto L_08A013C4;
    case 58u: goto L_08A013D4;
    case 59u: goto L_08A013E8;
    case 60u: goto L_08A013F4;
    case 61u: goto L_08A01408;
    case 62u: goto L_08A01410;
    case 63u: goto L_08A0141C;
    case 64u: goto L_08A01430;
    case 65u: goto L_08A01434;
    case 66u: goto L_08A0143C;
    case 67u: goto L_08A01450;
    case 68u: goto L_08A01458;
    case 69u: goto L_08A01460;
    case 70u: goto L_08A01474;
    case 71u: goto L_08A0147C;
    case 72u: goto L_08A01484;
    case 73u: goto L_08A0149C;
    case 74u: goto L_08A014A4;
    case 75u: goto L_08A014B8;
    case 76u: goto L_08A014C8;
    case 77u: goto L_08A014E0;
    case 78u: goto L_08A014F4;
    case 79u: goto L_08A01500;
    case 80u: goto L_08A01508;
    case 81u: goto L_08A01518;
    case 82u: goto L_08A01528;
    case 83u: goto L_08A0153C;
    case 84u: goto L_08A01544;
    case 85u: goto L_08A01550;
    case 86u: goto L_08A01564;
    case 87u: goto L_08A0156C;
    case 88u: goto L_08A01570;
    case 89u: goto L_08A015A0;
    case 90u: goto L_08A015E8;
    case 91u: goto L_08A015F0;
    case 92u: goto L_08A015F8;
    case 93u: goto L_08A01604;
    case 94u: goto L_08A0160C;
    case 95u: goto L_08A01610;
    case 96u: goto L_08A0161C;
    case 97u: goto L_08A0162C;
    case 98u: goto L_08A01638;
    case 99u: goto L_08A01644;
    case 100u: goto L_08A01654;
    case 101u: goto L_08A01660;
    case 102u: goto L_08A01670;
    case 103u: goto L_08A0167C;
    case 104u: goto L_08A01688;
    case 105u: goto L_08A01698;
    case 106u: goto L_08A016A4;
    case 107u: goto L_08A016B4;
    case 108u: goto L_08A016C0;
    case 109u: goto L_08A016CC;
    case 110u: goto L_08A016DC;
    case 111u: goto L_08A016E8;
    case 112u: goto L_08A016F8;
    case 113u: goto L_08A01704;
    case 114u: goto L_08A01710;
    case 115u: goto L_08A0171C;
    case 116u: goto L_08A01720;
    case 117u: goto L_08A01738;
    case 118u: goto L_08A01750;
    case 119u: goto L_08A01780;
    case 120u: goto L_08A017AC;
    case 121u: goto L_08A017B4;
    case 122u: goto L_08A017BC;
    case 123u: goto L_08A017E0;
    case 124u: goto L_08A017E8;
    case 125u: goto L_08A01808;
    case 126u: goto L_08A01818;
    case 127u: goto L_08A01820;
    case 128u: goto L_08A01828;
    case 129u: goto L_08A01840;
    case 130u: goto L_08A01848;
    case 131u: goto L_08A01850;
    case 132u: goto L_08A0185C;
    case 133u: goto L_08A01868;
    case 134u: goto L_08A0187C;
    case 135u: goto L_08A01894;
    case 136u: goto L_08A018F0;
    case 137u: goto L_08A018F8;
    case 138u: goto L_08A01908;
    case 139u: goto L_08A01910;
    case 140u: goto L_08A0191C;
    case 141u: goto L_08A01924;
    case 142u: goto L_08A01934;
    case 143u: goto L_08A0193C;
    case 144u: goto L_08A01944;
    case 145u: goto L_08A0194C;
    case 146u: goto L_08A01958;
    case 147u: goto L_08A01960;
    case 148u: goto L_08A01970;
    case 149u: goto L_08A01978;
    case 150u: goto L_08A01984;
    case 151u: goto L_08A0198C;
    case 152u: goto L_08A0199C;
    case 153u: goto L_08A019A4;
    case 154u: goto L_08A019D8;
    case 155u: goto L_08A019E0;
    case 156u: goto L_08A019F0;
    case 157u: goto L_08A019F8;
    case 158u: goto L_08A01A00;
    case 159u: goto L_08A01A08;
    case 160u: goto L_08A01A10;
    case 161u: goto L_08A01A18;
    case 162u: goto L_08A01A20;
    case 163u: goto L_08A01A28;
    case 164u: goto L_08A01A30;
    case 165u: goto L_08A01A34;
    case 166u: goto L_08A01A3C;
    case 167u: goto L_08A01A48;
    case 168u: goto L_08A01A54;
    case 169u: goto L_08A01A6C;
    case 170u: goto L_08A01A74;
    case 171u: goto L_08A01A7C;
    case 172u: goto L_08A01A84;
    case 173u: goto L_08A01A88;
    case 174u: goto L_08A01A90;
    case 175u: goto L_08A01A98;
    case 176u: goto L_08A01AA0;
    case 177u: goto L_08A01AA8;
    case 178u: goto L_08A01AB0;
    case 179u: goto L_08A01AB8;
    case 180u: goto L_08A01AC0;
    case 181u: goto L_08A01ADC;
    case 182u: goto L_08A01AF8;
    case 183u: goto L_08A01B04;
    case 184u: goto L_08A01B0C;
    case 185u: goto L_08A01B2C;
    case 186u: goto L_08A01B40;
    case 187u: goto L_08A01B48;
    case 188u: goto L_08A01B68;
    case 189u: goto L_08A01B78;
    case 190u: goto L_08A01B94;
    case 191u: goto L_08A01BB0;
    case 192u: goto L_08A01BC4;
    case 193u: goto L_08A01BCC;
    case 194u: goto L_08A01BD4;
    case 195u: goto L_08A01BDC;
    case 196u: goto L_08A01BE4;
    case 197u: goto L_08A01BEC;
    case 198u: goto L_08A01C04;
    case 199u: goto L_08A01C08;
    case 200u: goto L_08A01C10;
    case 201u: goto L_08A01C18;
    case 202u: goto L_08A01C30;
    case 203u: goto L_08A01C64;
    case 204u: goto L_08A01D10;
    case 205u: goto L_08A01D1C;
    case 206u: goto L_08A01D2C;
    case 207u: goto L_08A01D4C;
    case 208u: goto L_08A01D60;
    case 209u: goto L_08A01D68;
    case 210u: goto L_08A01D78;
    case 211u: goto L_08A01DBC;
    case 212u: goto L_08A01DC8;
    case 213u: goto L_08A01DD0;
    case 214u: goto L_08A01DE0;
    case 215u: goto L_08A01DE4;
    case 216u: goto L_08A01E24;
    case 217u: goto L_08A01E2C;
    case 218u: goto L_08A01E70;
    case 219u: goto L_08A01E7C;
    case 220u: goto L_08A01E84;
    case 221u: goto L_08A01E94;
    case 222u: goto L_08A01E98;
    case 223u: goto L_08A01ED8;
    case 224u: goto L_08A01EE4;
    case 225u: goto L_08A01EEC;
    case 226u: goto L_08A01EFC;
    case 227u: goto L_08A01F00;
    case 228u: goto L_08A01F3C;
    case 229u: goto L_08A01F5C;
    case 230u: goto L_08A01F6C;
    case 231u: goto L_08A01F8C;
    case 232u: goto L_08A01F98;
    case 233u: goto L_08A01FAC;
    case 234u: goto L_08A01FB0;
    case 235u: goto L_08A01FB8;
    case 236u: goto L_08A01FC4;
    case 237u: goto L_08A01FCC;
    case 238u: goto L_08A01FD8;
    case 239u: goto L_08A01FF0;
    case 240u: goto L_08A01FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A01000:
    aot_gpr[31] = (0x08A01008u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A01008u) goto L_08A01008;
    return;
L_08A01008:
    aot_gpr[5] = (aot_gpr[2] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A01034;
      }
      goto L_08A01014;
    }
L_08A01014:
    aot_gpr[31] = (0x08A0101Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0101Cu) goto L_08A0101C;
    return;
L_08A0101C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01034:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08A01040u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6140));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08A01040u) goto L_08A01040;
    return;
L_08A01040:
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
L_08A01058:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01064:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(284)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0106C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(288), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01074:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(288)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0107C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(48));
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A010BCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A010BCu) goto L_08A010BC;
    return;
L_08A010BC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A010D4u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    goto L_08A01894;
L_08A010D4:
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
L_08A010F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A01118u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6104));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01118u) goto L_08A01118;
    return;
L_08A01118:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01128u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01128u) goto L_08A01128;
    return;
L_08A01128:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08A01138u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6100));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01138u) goto L_08A01138;
    return;
L_08A01138:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01148u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01148u) goto L_08A01148;
    return;
L_08A01148:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A01158u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6092));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01158u) goto L_08A01158;
    return;
L_08A01158:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01168u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01168u) goto L_08A01168;
    return;
L_08A01168:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A01178u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6084));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01178u) goto L_08A01178;
    return;
L_08A01178:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01188u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01188u) goto L_08A01188;
    return;
L_08A01188:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[2]);
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
L_08A011A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A011CC;
      }
      goto L_08A011B4;
    }
L_08A011B4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(11432));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A011CC;
      }
      goto L_08A011C4;
    }
L_08A011C4:
    aot_gpr[31] = (0x08A011CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A011CCu) goto L_08A011CC;
    return;
L_08A011CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A011D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11296));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x08A01220u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 178u, 0x08A00BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A01220u) goto L_08A01220;
    return;
L_08A01220:
    aot_gpr[31] = (0x08A01228u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 233u, 0x08A00F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01228u) goto L_08A01228;
    return;
L_08A01228:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08A01238u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-6076));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01238u) goto L_08A01238;
    return;
L_08A01238:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01248u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01248u) goto L_08A01248;
    return;
L_08A01248:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(132));
    aot_gpr[31] = (0x08A01260u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-6068));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01260u) goto L_08A01260;
    return;
L_08A01260:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01274u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01274u) goto L_08A01274;
    return;
L_08A01274:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18240)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18240), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A01298u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 185u, 0x08A00C48u>(ctx, &aot_mem) && ctx.pc == 0x08A01298u) goto L_08A01298;
    return;
L_08A01298:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x08A012A8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-6060));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A012A8u) goto L_08A012A8;
    return;
L_08A012A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A012B8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A012B8u) goto L_08A012B8;
    return;
L_08A012B8:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08A01340;
      }
      goto L_08A012C8;
    }
L_08A012C8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A012D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A012D8u) goto L_08A012D8;
    return;
L_08A012D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A012FC;
      }
      goto L_08A012E0;
    }
L_08A012E0:
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A012F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 185u, 0x08A00C48u>(ctx, &aot_mem) && ctx.pc == 0x08A012F4u) goto L_08A012F4;
    return;
L_08A012F4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[21]);
      if (branch_taken) {
          goto L_08A01340;
      }
      goto L_08A012FC;
    }
L_08A012FC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A01308u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6040));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01308u) goto L_08A01308;
    return;
L_08A01308:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A0131C;
      }
      goto L_08A01310;
    }
L_08A01310:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A01340;
      }
      goto L_08A0131C;
    }
L_08A0131C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A01328u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6032));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01328u) goto L_08A01328;
    return;
L_08A01328:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0133C;
      }
      goto L_08A01330;
    }
L_08A01330:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(280), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A01340;
      }
      goto L_08A0133C;
    }
L_08A0133C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A01340;
L_08A01340:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (aot_gpr[17] + static_cast<std::uint32_t>(276));
    aot_gpr[31] = (0x08A01354u);
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(-6024));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01354u) goto L_08A01354;
    return;
L_08A01354:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01368u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01368u) goto L_08A01368;
    return;
L_08A01368:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A01380;
      }
      goto L_08A01370;
    }
L_08A01370:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0137Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 238u, 0x08A00FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A0137Cu) goto L_08A0137C;
    return;
L_08A0137C:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A01380;
L_08A01380:
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08A0138Cu);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-6016));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0138Cu) goto L_08A0138C;
    return;
L_08A0138C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A013A0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A013A0u) goto L_08A013A0;
    return;
L_08A013A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x08A013B0u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-6012));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A013B0u) goto L_08A013B0;
    return;
L_08A013B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A013C4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A013C4u) goto L_08A013C4;
    return;
L_08A013C4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x08A013D4u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-6008));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A013D4u) goto L_08A013D4;
    return;
L_08A013D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A013E8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A013E8u) goto L_08A013E8;
    return;
L_08A013E8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A013F4u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-6004));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A013F4u) goto L_08A013F4;
    return;
L_08A013F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01408u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01408u) goto L_08A01408;
    return;
L_08A01408:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A01434;
      }
      goto L_08A01410;
    }
L_08A01410:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A0141Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-5996));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0141Cu) goto L_08A0141C;
    return;
L_08A0141C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01430u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01430u) goto L_08A01430;
    return;
L_08A01430:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A01434;
L_08A01434:
    aot_gpr[31] = (0x08A0143Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-5992));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0143Cu) goto L_08A0143C;
    return;
L_08A0143C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01450u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01450u) goto L_08A01450;
    return;
L_08A01450:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A01474;
      }
      goto L_08A01458;
    }
L_08A01458:
    aot_gpr[31] = (0x08A01460u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-5984));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01460u) goto L_08A01460;
    return;
L_08A01460:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01474u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01474u) goto L_08A01474;
    return;
L_08A01474:
    aot_gpr[31] = (0x08A0147Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0147Cu) goto L_08A0147C;
    return;
L_08A0147C:
    aot_gpr[31] = (0x08A01484u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 7u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x08A01484u) goto L_08A01484;
    return;
L_08A01484:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0149Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0149Cu) goto L_08A0149C;
    return;
L_08A0149C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A014B8;
      }
      goto L_08A014A4;
    }
L_08A014A4:
    aot_gpr[4] = (18499u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 20480u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_08A014C8;
      }
      goto L_08A014B8;
    }
L_08A014B8:
    aot_gpr[4] = (18371u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 20480u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08A014C8;
L_08A014C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A014E0u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-5980));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A014E0u) goto L_08A014E0;
    return;
L_08A014E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A014F4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A014F4u) goto L_08A014F4;
    return;
L_08A014F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A01508;
      }
      goto L_08A01500;
    }
L_08A01500:
    aot_gpr[31] = (0x08A01508u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 241u, 0x08A00FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A01508u) goto L_08A01508;
    return;
L_08A01508:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A01518u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A010F0;
L_08A01518:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x08A01528u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-5972));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01528u) goto L_08A01528;
    return;
L_08A01528:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0153Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0153Cu) goto L_08A0153C;
    return;
L_08A0153C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A01570;
      }
      goto L_08A01544;
    }
L_08A01544:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x08A01550u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-5964));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01550u) goto L_08A01550;
    return;
L_08A01550:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01564u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01564u) goto L_08A01564;
    return;
L_08A01564:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01570;
      }
      goto L_08A0156C;
    }
L_08A0156C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(108), 0u);
    goto L_08A01570;
L_08A01570:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A015A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[20] = (aot_gpr[10] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A015F8;
      }
      goto L_08A015E8;
    }
L_08A015E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A01720;
      }
      goto L_08A015F0;
    }
L_08A015F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08A01610;
      }
      goto L_08A015F8;
    }
L_08A015F8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08A01698;
      }
      goto L_08A01604;
    }
L_08A01604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A01720;
      }
      goto L_08A0160C;
    }
L_08A0160C:
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[5]);
    goto L_08A01610;
L_08A01610:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08A01654;
      }
      goto L_08A0161C;
    }
L_08A0161C:
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[17]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08A0162Cu);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0162Cu) goto L_08A0162C;
    return;
L_08A0162C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A01638u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 251u, 0x08A2EFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A01638u) goto L_08A01638;
    return;
L_08A01638:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A01644u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A01644u) goto L_08A01644;
    return;
L_08A01644:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0171C;
      }
      goto L_08A01654;
    }
L_08A01654:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A01720;
      }
      goto L_08A01660;
    }
L_08A01660:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08A01670u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A01670u) goto L_08A01670;
    return;
L_08A01670:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A0167Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 251u, 0x08A2EFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A0167Cu) goto L_08A0167C;
    return;
L_08A0167C:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A01688u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A01688u) goto L_08A01688;
    return;
L_08A01688:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0171C;
      }
      goto L_08A01698;
    }
L_08A01698:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A016DC;
      }
      goto L_08A016A4;
    }
L_08A016A4:
    aot_gpr[4] = (aot_gpr[18] - aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08A016B4u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A016B4u) goto L_08A016B4;
    return;
L_08A016B4:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A016C0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 251u, 0x08A2EFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A016C0u) goto L_08A016C0;
    return;
L_08A016C0:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A016CCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A016CCu) goto L_08A016CC;
    return;
L_08A016CC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A0171C;
      }
      goto L_08A016DC;
    }
L_08A016DC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A01720;
      }
      goto L_08A016E8;
    }
L_08A016E8:
    aot_gpr[4] = (aot_gpr[18] - aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08A016F8u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A016F8u) goto L_08A016F8;
    return;
L_08A016F8:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A01704u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 251u, 0x08A2EFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A01704u) goto L_08A01704;
    return;
L_08A01704:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A01710u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 206u, 0x08A3FF04u>(ctx, &aot_mem) && ctx.pc == 0x08A01710u) goto L_08A01710;
    return;
L_08A01710:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_08A0171C;
L_08A0171C:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
    goto L_08A01720;
L_08A01720:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[31] = (0x08A01738u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 173u, 0x08A2FB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01738u) goto L_08A01738;
    return;
L_08A01738:
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[18]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[31] = (0x08A01750u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 173u, 0x08A2FB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01750u) goto L_08A01750;
    return;
L_08A01750:
    aot_fpr[0] = aot_fpr[22] + aot_fpr[0];
    aot_fpr[0] = std::sqrt(aot_fpr[0]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01780:
    aot_gpr[4] = (16640u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A017B4;
      }
      goto L_08A017AC;
    }
L_08A017AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A017B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A017BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A017E0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A017E0u) goto L_08A017E0;
    return;
L_08A017E0:
    aot_gpr[31] = (0x08A017E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 235u, 0x089EFEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A017E8u) goto L_08A017E8;
    return;
L_08A017E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01808u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01808u) goto L_08A01808;
    return;
L_08A01808:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01840;
      }
      goto L_08A01818;
    }
L_08A01818:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0187C;
      }
      goto L_08A01820;
    }
L_08A01820:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (50298u << 16u);
      if (branch_taken) {
          goto L_08A0185C;
      }
      goto L_08A01828;
    }
L_08A01828:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (17530u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A0187C;
      }
      goto L_08A01840;
    }
L_08A01840:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01868;
      }
      goto L_08A01848;
    }
L_08A01848:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (50298u << 16u);
      if (branch_taken) {
          goto L_08A0187C;
      }
      goto L_08A01850;
    }
L_08A01850:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A0187C;
      }
      goto L_08A0185C;
    }
L_08A0185C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A0187C;
      }
      goto L_08A01868;
    }
L_08A01868:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (17530u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A0187C;
L_08A0187C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01894:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[8] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08A018F0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A018F0u) goto L_08A018F0;
    return;
L_08A018F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01908;
      }
      goto L_08A018F8;
    }
L_08A018F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 129u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01910;
      }
      goto L_08A01908;
    }
L_08A01908:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A019D8;
      }
      goto L_08A01910;
    }
L_08A01910:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A0191Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0191Cu) goto L_08A0191C;
    return;
L_08A0191C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01934;
      }
      goto L_08A01924;
    }
L_08A01924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 130u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (0u | 136u);
      if (branch_taken) {
          goto L_08A0193C;
      }
      goto L_08A01934;
    }
L_08A01934:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A019D8;
      }
      goto L_08A0193C;
    }
L_08A0193C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0194C;
      }
      goto L_08A01944;
    }
L_08A01944:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A019D8;
      }
      goto L_08A0194C;
    }
L_08A0194C:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A01958u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A01958u) goto L_08A01958;
    return;
L_08A01958:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01970;
      }
      goto L_08A01960;
    }
L_08A01960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 132u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01978;
      }
      goto L_08A01970;
    }
L_08A01970:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_08A019D8;
      }
      goto L_08A01978;
    }
L_08A01978:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A01984u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A01984u) goto L_08A01984;
    return;
L_08A01984:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0199C;
      }
      goto L_08A0198C;
    }
L_08A0198C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 131u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A019A4;
      }
      goto L_08A0199C;
    }
L_08A0199C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_08A019D8;
      }
      goto L_08A019A4;
    }
L_08A019A4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A019D8:
    aot_gpr[31] = (0x08A019E0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 240u, 0x08A00FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A019E0u) goto L_08A019E0;
    return;
L_08A019E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    goto L_08A019F0;
L_08A019F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01A10;
      }
      goto L_08A019F8;
    }
L_08A019F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A01A34;
      }
      goto L_08A01A00;
    }
L_08A01A00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A01A28;
      }
      goto L_08A01A08;
    }
L_08A01A08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A01A34;
      }
      goto L_08A01A10;
    }
L_08A01A10:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A01A30;
      }
      goto L_08A01A18;
    }
L_08A01A18:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A34;
      }
      goto L_08A01A20;
    }
L_08A01A20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A01A34;
      }
      goto L_08A01A28;
    }
L_08A01A28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A01A34;
      }
      goto L_08A01A30;
    }
L_08A01A30:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_08A01A34;
L_08A01A34:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01AA8;
      }
      goto L_08A01A3C;
    }
L_08A01A3C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A01A48u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 138u, 0x08A00954u>(ctx, &aot_mem) && ctx.pc == 0x08A01A48u) goto L_08A01A48;
    return;
L_08A01A48:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01AA0;
      }
      goto L_08A01A54;
    }
L_08A01A54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01A6Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01A6Cu) goto L_08A01A6C;
    return;
L_08A01A6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A01A88;
      }
      goto L_08A01A74;
    }
L_08A01A74:
    aot_gpr[31] = (0x08A01A7Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 239u, 0x08A00FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A01A7Cu) goto L_08A01A7C;
    return;
L_08A01A7C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (0u | 1u);
        goto L_08A01A98;
    }
    goto L_08A01A84;
L_08A01A84:
    aot_gpr[16] = (0u | 1u);
    goto L_08A01A88;
L_08A01A88:
    aot_gpr[31] = (0x08A01A90u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 240u, 0x08A00FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A01A90u) goto L_08A01A90;
    return;
L_08A01A90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A01AA8;
      }
      goto L_08A01A98;
    }
L_08A01A98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01AA8;
      }
      goto L_08A01AA0;
    }
L_08A01AA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01AA8;
      }
      goto L_08A01AA8;
    }
L_08A01AA8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A019F0;
      }
      goto L_08A01AB0;
    }
L_08A01AB0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BD4;
      }
      goto L_08A01AB8;
    }
L_08A01AB8:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A01BCC;
      }
      goto L_08A01AC0;
    }
L_08A01AC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01ADCu);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01ADCu) goto L_08A01ADC;
    return;
L_08A01ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01AF8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01AF8u) goto L_08A01AF8;
    return;
L_08A01AF8:
    aot_gpr[16] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[23];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-5944));
      if (branch_taken) {
          goto L_08A01B40;
      }
      goto L_08A01B04;
    }
L_08A01B04:
    aot_gpr[31] = (0x08A01B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01B0Cu) goto L_08A01B0C;
    return;
L_08A01B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01B2Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01B2Cu) goto L_08A01B2C;
    return;
L_08A01B2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A01B78;
      }
      goto L_08A01B40;
    }
L_08A01B40:
    aot_gpr[31] = (0x08A01B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A01B48u) goto L_08A01B48;
    return;
L_08A01B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01B68u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01B68u) goto L_08A01B68;
    return;
L_08A01B68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(208));
    goto L_08A01B78;
L_08A01B78:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01B94u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01B94u) goto L_08A01B94;
    return;
L_08A01B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01BB0u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01BB0u) goto L_08A01BB0;
    return;
L_08A01BB0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01BC4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01BC4u) goto L_08A01BC4;
    return;
L_08A01BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C08;
      }
      goto L_08A01BCC;
    }
L_08A01BCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01C08;
      }
      goto L_08A01BD4;
    }
L_08A01BD4:
    aot_gpr[31] = (0x08A01BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A01BDCu) goto L_08A01BDC;
    return;
L_08A01BDC:
    aot_gpr[31] = (0x08A01BE4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 43u, 0x089FE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08A01BE4u) goto L_08A01BE4;
    return;
L_08A01BE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C08;
      }
      goto L_08A01BEC;
    }
L_08A01BEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A01C04u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    goto L_08A01C64;
L_08A01C04:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    goto L_08A01C08;
L_08A01C08:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01C30;
      }
      goto L_08A01C10;
    }
L_08A01C10:
    aot_gpr[31] = (0x08A01C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A01C18u) goto L_08A01C18;
    return;
L_08A01C18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(232)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01C30u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01C30u) goto L_08A01C30;
    return;
L_08A01C30:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    aot_gpr[9] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (17948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 15360u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[22]);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[8] | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01D10u);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01D10u) goto L_08A01D10;
    return;
L_08A01D10:
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[9] = (0u | 2u);
        goto L_08A01D1C;
    }
    goto L_08A01D1C;
L_08A01D1C:
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[9]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 51u, 0x08A023A0u>(ctx, &aot_mem); return;
      }
      goto L_08A01D2C;
    }
L_08A01D2C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5940));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[4]);
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[23] | 0u);
    goto L_08A01D4C;
L_08A01D4C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A01D60u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A01D60u) goto L_08A01D60;
    return;
L_08A01D60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A01D78;
      }
      goto L_08A01D68;
    }
L_08A01D68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 129u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01DBC;
      }
      goto L_08A01D78;
    }
L_08A01D78:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A01F3C;
      }
      goto L_08A01DBC;
    }
L_08A01DBC:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A01DC8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A01DC8u) goto L_08A01DC8;
    return;
L_08A01DC8:
    if (aot_gpr[2] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08A01DE4;
    }
    goto L_08A01DD0;
L_08A01DD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 130u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (0u | 136u);
      if (branch_taken) {
          goto L_08A01E24;
      }
      goto L_08A01DE0;
    }
L_08A01DE0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08A01DE4;
L_08A01DE4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A01F3C;
      }
      goto L_08A01E24;
    }
L_08A01E24:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01E70;
      }
      goto L_08A01E2C;
    }
L_08A01E2C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[19] = (0u | 1u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A01F3C;
      }
      goto L_08A01E70;
    }
L_08A01E70:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A01E7Cu);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A01E7Cu) goto L_08A01E7C;
    return;
L_08A01E7C:
    if (aot_gpr[2] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08A01E98;
    }
    goto L_08A01E84;
L_08A01E84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 132u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01ED8;
      }
      goto L_08A01E94;
    }
L_08A01E94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08A01E98;
L_08A01E98:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[19] = (0u | 3u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A01F3C;
      }
      goto L_08A01ED8;
    }
L_08A01ED8:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A01EE4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A01EE4u) goto L_08A01EE4;
    return;
L_08A01EE4:
    if (aot_gpr[2] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08A01F00;
    }
    goto L_08A01EEC;
L_08A01EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 131u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 51u, 0x08A023A0u>(ctx, &aot_mem); return;
      }
      goto L_08A01EFC;
    }
L_08A01EFC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08A01F00;
L_08A01F00:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[19] = (0u | 2u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    goto L_08A01F3C;
L_08A01F3C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (0u | 0u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[14] = aot_fpr[13] + aot_fpr[14];
    goto L_08A01F5C;
L_08A01F5C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
        goto L_08A01F6C;
    }
    goto L_08A01F6C;
L_08A01F6C:
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A01F5C;
      }
      goto L_08A01F8C;
    }
L_08A01F8C:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x08A01F98u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A01F98u) goto L_08A01F98;
    return;
L_08A01F98:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A01FACu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01FACu) goto L_08A01FAC;
    return;
L_08A01FAC:
    aot_gpr[21] = (0u | 0u);
    goto L_08A01FB0;
L_08A01FB0:
    aot_gpr[31] = (0x08A01FB8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A01FB8u) goto L_08A01FB8;
    return;
L_08A01FB8:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 42u, 0x08A02338u>(ctx, &aot_mem); return;
      }
      goto L_08A01FC4;
    }
L_08A01FC4:
    aot_gpr[31] = (0x08A01FCCu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A01FCCu) goto L_08A01FCC;
    return;
L_08A01FCC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 41u, 0x08A02330u>(ctx, &aot_mem); return;
      }
      goto L_08A01FD8;
    }
L_08A01FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A01FF0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01FF0u) goto L_08A01FF0;
    return;
L_08A01FF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 41u, 0x08A02330u>(ctx, &aot_mem); return;
      }
      goto L_08A01FF8;
    }
L_08A01FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    ctx.pc = 0x08A02000u; return;
}

void recomp_unit_0509(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0509_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_509(Runtime &runtime) {
    runtime.register_generated_unit(509u, 0x08A01000u, 4096u, &recomp_unit_0509, &recomp_unit_0509_entry);
    runtime.register_function(0x08A01000u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01008u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01014u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0101Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01034u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01040u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01058u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01064u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0106Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01074u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0107Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A010BCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A010D4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A010F0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01118u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01128u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01138u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01148u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01158u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01168u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01178u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01188u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A011A4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A011B4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A011C4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A011CCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A011D8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01220u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01228u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01238u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01248u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01260u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01274u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01298u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012A8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012B8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012C8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012D8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012E0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012F4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A012FCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01308u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01310u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0131Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01328u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01330u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0133Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01340u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01354u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01368u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01370u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0137Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01380u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0138Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A013A0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A013B0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A013C4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A013D4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A013E8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A013F4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01408u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01410u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0141Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01430u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01434u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0143Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01450u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01458u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01460u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01474u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0147Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01484u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0149Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A014A4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A014B8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A014C8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A014E0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A014F4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01500u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01508u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01518u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01528u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0153Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01544u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01550u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01564u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0156Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01570u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A015A0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A015E8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A015F0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A015F8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01604u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0160Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01610u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0161Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0162Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01638u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01644u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01654u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01660u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01670u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0167Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01688u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01698u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016A4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016B4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016C0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016CCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016DCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016E8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A016F8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01704u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01710u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0171Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01720u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01738u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01750u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01780u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A017ACu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A017B4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A017BCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A017E0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A017E8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01808u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01818u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01820u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01828u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01840u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01848u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01850u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0185Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01868u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0187Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01894u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A018F0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A018F8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01908u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01910u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0191Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01924u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01934u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0193Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01944u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0194Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01958u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01960u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01970u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01978u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01984u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0198Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A0199Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A019A4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A019D8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A019E0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A019F0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A019F8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A00u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A08u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A10u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A18u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A20u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A28u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A30u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A34u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A3Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A48u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A54u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A6Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A74u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A7Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A84u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A88u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A90u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01A98u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01AA0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01AA8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01AB0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01AB8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01AC0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01ADCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01AF8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B04u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B0Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B2Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B40u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B48u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B68u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B78u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01B94u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BB0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BC4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BCCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BD4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BDCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BE4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01BECu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01C04u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01C08u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01C10u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01C18u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01C30u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01C64u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D10u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D1Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D2Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D4Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D60u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D68u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01D78u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01DBCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01DC8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01DD0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01DE0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01DE4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E24u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E2Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E70u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E7Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E84u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E94u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01E98u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01ED8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01EE4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01EECu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01EFCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01F00u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01F3Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01F5Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01F6Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01F8Cu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01F98u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FACu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FB0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FB8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FC4u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FCCu, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FD8u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FF0u, &recomp_unit_0509, "recomp_unit_0509");
    runtime.register_function(0x08A01FF8u, &recomp_unit_0509, "recomp_unit_0509");
}
} // namespace psprecomp
