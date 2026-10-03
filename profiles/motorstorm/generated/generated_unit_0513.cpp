#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0513[1016] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0,
    90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 99, 0, 100, 0, 0, 0, 0, 0,
    0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 106, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114,
    0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 130, 0, 131, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 174, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191,
    0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0,
    212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 219, 0, 0, 0, 0, 220, 0, 221, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0,
    235, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 242,
};
void recomp_unit_0513_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A05000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0513[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A05000;
    case 2u: goto L_08A0501C;
    case 3u: goto L_08A0502C;
    case 4u: goto L_08A05034;
    case 5u: goto L_08A05050;
    case 6u: goto L_08A05074;
    case 7u: goto L_08A0507C;
    case 8u: goto L_08A050A0;
    case 9u: goto L_08A050B8;
    case 10u: goto L_08A050D0;
    case 11u: goto L_08A050E0;
    case 12u: goto L_08A050E8;
    case 13u: goto L_08A05120;
    case 14u: goto L_08A0512C;
    case 15u: goto L_08A05138;
    case 16u: goto L_08A05140;
    case 17u: goto L_08A0514C;
    case 18u: goto L_08A0515C;
    case 19u: goto L_08A05168;
    case 20u: goto L_08A05174;
    case 21u: goto L_08A05190;
    case 22u: goto L_08A05198;
    case 23u: goto L_08A051A0;
    case 24u: goto L_08A051A8;
    case 25u: goto L_08A051B0;
    case 26u: goto L_08A051B8;
    case 27u: goto L_08A051C0;
    case 28u: goto L_08A051DC;
    case 29u: goto L_08A051E4;
    case 30u: goto L_08A051EC;
    case 31u: goto L_08A05208;
    case 32u: goto L_08A0520C;
    case 33u: goto L_08A05214;
    case 34u: goto L_08A05248;
    case 35u: goto L_08A05254;
    case 36u: goto L_08A05258;
    case 37u: goto L_08A05260;
    case 38u: goto L_08A05270;
    case 39u: goto L_08A05280;
    case 40u: goto L_08A05288;
    case 41u: goto L_08A05290;
    case 42u: goto L_08A05298;
    case 43u: goto L_08A052A4;
    case 44u: goto L_08A052B0;
    case 45u: goto L_08A052B8;
    case 46u: goto L_08A052E4;
    case 47u: goto L_08A052F0;
    case 48u: goto L_08A052F8;
    case 49u: goto L_08A05300;
    case 50u: goto L_08A05324;
    case 51u: goto L_08A0533C;
    case 52u: goto L_08A05358;
    case 53u: goto L_08A05360;
    case 54u: goto L_08A05368;
    case 55u: goto L_08A05384;
    case 56u: goto L_08A05394;
    case 57u: goto L_08A053A8;
    case 58u: goto L_08A053D4;
    case 59u: goto L_08A053DC;
    case 60u: goto L_08A053E4;
    case 61u: goto L_08A05408;
    case 62u: goto L_08A05420;
    case 63u: goto L_08A0543C;
    case 64u: goto L_08A05460;
    case 65u: goto L_08A05468;
    case 66u: goto L_08A05470;
    case 67u: goto L_08A05490;
    case 68u: goto L_08A054A4;
    case 69u: goto L_08A054AC;
    case 70u: goto L_08A054C4;
    case 71u: goto L_08A054CC;
    case 72u: goto L_08A054E8;
    case 73u: goto L_08A054F0;
    case 74u: goto L_08A0551C;
    case 75u: goto L_08A0552C;
    case 76u: goto L_08A05538;
    case 77u: goto L_08A05544;
    case 78u: goto L_08A0554C;
    case 79u: goto L_08A05558;
    case 80u: goto L_08A05560;
    case 81u: goto L_08A0557C;
    case 82u: goto L_08A05584;
    case 83u: goto L_08A055B0;
    case 84u: goto L_08A055C0;
    case 85u: goto L_08A055CC;
    case 86u: goto L_08A055D8;
    case 87u: goto L_08A055E0;
    case 88u: goto L_08A055EC;
    case 89u: goto L_08A055F8;
    case 90u: goto L_08A05600;
    case 91u: goto L_08A05608;
    case 92u: goto L_08A05614;
    case 93u: goto L_08A0561C;
    case 94u: goto L_08A0562C;
    case 95u: goto L_08A0563C;
    case 96u: goto L_08A05648;
    case 97u: goto L_08A05654;
    case 98u: goto L_08A0565C;
    case 99u: goto L_08A05660;
    case 100u: goto L_08A05668;
    case 101u: goto L_08A05684;
    case 102u: goto L_08A0568C;
    case 103u: goto L_08A05698;
    case 104u: goto L_08A056A0;
    case 105u: goto L_08A056A8;
    case 106u: goto L_08A056B0;
    case 107u: goto L_08A056B4;
    case 108u: goto L_08A056BC;
    case 109u: goto L_08A056C4;
    case 110u: goto L_08A056CC;
    case 111u: goto L_08A056D4;
    case 112u: goto L_08A056EC;
    case 113u: goto L_08A056F4;
    case 114u: goto L_08A056FC;
    case 115u: goto L_08A05704;
    case 116u: goto L_08A0570C;
    case 117u: goto L_08A05718;
    case 118u: goto L_08A0572C;
    case 119u: goto L_08A0574C;
    case 120u: goto L_08A05754;
    case 121u: goto L_08A0575C;
    case 122u: goto L_08A05764;
    case 123u: goto L_08A0576C;
    case 124u: goto L_08A0577C;
    case 125u: goto L_08A05794;
    case 126u: goto L_08A057B0;
    case 127u: goto L_08A05828;
    case 128u: goto L_08A0583C;
    case 129u: goto L_08A05858;
    case 130u: goto L_08A0585C;
    case 131u: goto L_08A05864;
    case 132u: goto L_08A05880;
    case 133u: goto L_08A058A0;
    case 134u: goto L_08A058DC;
    case 135u: goto L_08A058F8;
    case 136u: goto L_08A05904;
    case 137u: goto L_08A0590C;
    case 138u: goto L_08A0591C;
    case 139u: goto L_08A05924;
    case 140u: goto L_08A0592C;
    case 141u: goto L_08A05938;
    case 142u: goto L_08A0594C;
    case 143u: goto L_08A05954;
    case 144u: goto L_08A05970;
    case 145u: goto L_08A05980;
    case 146u: goto L_08A05994;
    case 147u: goto L_08A0599C;
    case 148u: goto L_08A059A8;
    case 149u: goto L_08A059B8;
    case 150u: goto L_08A059C0;
    case 151u: goto L_08A059D8;
    case 152u: goto L_08A059E8;
    case 153u: goto L_08A05A00;
    case 154u: goto L_08A05A24;
    case 155u: goto L_08A05A2C;
    case 156u: goto L_08A05A54;
    case 157u: goto L_08A05A58;
    case 158u: goto L_08A05A60;
    case 159u: goto L_08A05A6C;
    case 160u: goto L_08A05A78;
    case 161u: goto L_08A05A88;
    case 162u: goto L_08A05AA0;
    case 163u: goto L_08A05AB4;
    case 164u: goto L_08A05AC8;
    case 165u: goto L_08A05AF8;
    case 166u: goto L_08A05B00;
    case 167u: goto L_08A05B08;
    case 168u: goto L_08A05B14;
    case 169u: goto L_08A05B1C;
    case 170u: goto L_08A05B30;
    case 171u: goto L_08A05B3C;
    case 172u: goto L_08A05B48;
    case 173u: goto L_08A05B50;
    case 174u: goto L_08A05B54;
    case 175u: goto L_08A05B5C;
    case 176u: goto L_08A05B64;
    case 177u: goto L_08A05B70;
    case 178u: goto L_08A05B8C;
    case 179u: goto L_08A05BAC;
    case 180u: goto L_08A05BB8;
    case 181u: goto L_08A05BD8;
    case 182u: goto L_08A05BE0;
    case 183u: goto L_08A05BEC;
    case 184u: goto L_08A05BF4;
    case 185u: goto L_08A05C0C;
    case 186u: goto L_08A05C30;
    case 187u: goto L_08A05C34;
    case 188u: goto L_08A05C48;
    case 189u: goto L_08A05C68;
    case 190u: goto L_08A05C70;
    case 191u: goto L_08A05C7C;
    case 192u: goto L_08A05C84;
    case 193u: goto L_08A05C9C;
    case 194u: goto L_08A05CC0;
    case 195u: goto L_08A05CD0;
    case 196u: goto L_08A05CDC;
    case 197u: goto L_08A05CE8;
    case 198u: goto L_08A05CFC;
    case 199u: goto L_08A05D10;
    case 200u: goto L_08A05D18;
    case 201u: goto L_08A05D34;
    case 202u: goto L_08A05D44;
    case 203u: goto L_08A05D58;
    case 204u: goto L_08A05D60;
    case 205u: goto L_08A05D6C;
    case 206u: goto L_08A05D7C;
    case 207u: goto L_08A05D90;
    case 208u: goto L_08A05DA4;
    case 209u: goto L_08A05DC0;
    case 210u: goto L_08A05DDC;
    case 211u: goto L_08A05DF4;
    case 212u: goto L_08A05E00;
    case 213u: goto L_08A05E0C;
    case 214u: goto L_08A05E14;
    case 215u: goto L_08A05E28;
    case 216u: goto L_08A05E40;
    case 217u: goto L_08A05E50;
    case 218u: goto L_08A05E58;
    case 219u: goto L_08A05E5C;
    case 220u: goto L_08A05E70;
    case 221u: goto L_08A05E78;
    case 222u: goto L_08A05E80;
    case 223u: goto L_08A05EC8;
    case 224u: goto L_08A05ED0;
    case 225u: goto L_08A05ED8;
    case 226u: goto L_08A05EE4;
    case 227u: goto L_08A05F08;
    case 228u: goto L_08A05F10;
    case 229u: goto L_08A05F30;
    case 230u: goto L_08A05F40;
    case 231u: goto L_08A05F50;
    case 232u: goto L_08A05F58;
    case 233u: goto L_08A05F70;
    case 234u: goto L_08A05F78;
    case 235u: goto L_08A05F80;
    case 236u: goto L_08A05F88;
    case 237u: goto L_08A05F9C;
    case 238u: goto L_08A05FA4;
    case 239u: goto L_08A05FC0;
    case 240u: goto L_08A05FC4;
    case 241u: goto L_08A05FCC;
    case 242u: goto L_08A05FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A05000:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(352));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0501Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0501Cu) goto L_08A0501C;
    return;
L_08A0501C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
    aot_gpr[5] = (0u | 302u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A05034;
      }
      goto L_08A0502C;
    }
L_08A0502C:
    aot_gpr[31] = (0x08A05034u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 206u, 0x08A04C88u>(ctx, &aot_mem) && ctx.pc == 0x08A05034u) goto L_08A05034;
    return;
L_08A05034:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A05050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A05074u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A05074u) goto L_08A05074;
    return;
L_08A05074:
    aot_gpr[31] = (0x08A0507Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A0507Cu) goto L_08A0507C;
    return;
L_08A0507C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(352));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A050A0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A050A0u) goto L_08A050A0;
    return;
L_08A050A0:
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
L_08A050B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    aot_gpr[7] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A05140;
      }
      goto L_08A050D0;
    }
L_08A050D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_gpr[7] = (0u | 200u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[7] = (0u | 206u);
      if (branch_taken) {
          goto L_08A050E8;
      }
      goto L_08A050E0;
    }
L_08A050E0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A05140;
      }
      goto L_08A050E8;
    }
L_08A050E8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(280), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05140;
      }
      goto L_08A05120;
    }
L_08A05120:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05140;
      }
      goto L_08A0512C;
    }
L_08A0512C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05140;
      }
      goto L_08A05138;
    }
L_08A05138:
    aot_gpr[31] = (0x08A05140u);
    // nop
    goto L_08A057B0;
L_08A05140:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0514C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05254;
      }
      goto L_08A0515C;
    }
L_08A0515C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A051B8;
      }
      goto L_08A05168;
    }
L_08A05168:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A051B8;
      }
      goto L_08A05174;
    }
L_08A05174:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(288)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[8] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A051A8;
      }
      goto L_08A05190;
    }
L_08A05190:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A051A0;
      }
      goto L_08A05198;
    }
L_08A05198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(284));
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A051A0;
    }
L_08A051A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A051A8;
    }
L_08A051A8:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A051B0;
    }
L_08A051B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(284));
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A051B8;
    }
L_08A051B8:
    if (aot_gpr[8] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
        goto L_08A051E4;
    }
    goto L_08A051C0;
L_08A051C0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(312)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(308)));
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] ^ 1u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    if (aot_gpr[8] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
        goto L_08A051E4;
    }
    goto L_08A051DC;
L_08A051DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A051E4;
    }
L_08A051E4:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A051EC;
    }
L_08A051EC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(288)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(284)));
    aot_gpr[8] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] ^ 1u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0520C;
      }
      goto L_08A05208;
    }
L_08A05208:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(284));
    goto L_08A0520C;
L_08A0520C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05258;
      }
      goto L_08A05214;
    }
L_08A05214:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[7] | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A05258;
      }
      goto L_08A05248;
    }
L_08A05248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05254:
    aot_gpr[2] = (0u | 1u);
    goto L_08A05258;
L_08A05258:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05260:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05280;
      }
      goto L_08A05270;
    }
L_08A05270:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(276)));
    if (aot_gpr[5] == aot_gpr[6]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
        goto L_08A05290;
    }
    goto L_08A05280;
L_08A05280:
    aot_gpr[31] = (0x08A05288u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A058A0;
L_08A05288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A05290;
L_08A05290:
    aot_gpr[31] = (0x08A05298u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 23u, 0x08A46134u>(ctx, &aot_mem) && ctx.pc == 0x08A05298u) goto L_08A05298;
    return;
L_08A05298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A052A4u);
    aot_gpr[5] = (0u | 3u);
    goto L_08A054A4;
L_08A052A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A052B0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A052B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[8];
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A052F0;
      }
      goto L_08A052E4;
    }
L_08A052E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A05324;
      }
      goto L_08A052F0;
    }
L_08A052F0:
    aot_gpr[31] = (0x08A052F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A052F8u) goto L_08A052F8;
    return;
L_08A052F8:
    aot_gpr[31] = (0x08A05300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A05300u) goto L_08A05300;
    return;
L_08A05300:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A05324u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05324u) goto L_08A05324;
    return;
L_08A05324:
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
L_08A0533C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A05394;
      }
      goto L_08A05358;
    }
L_08A05358:
    aot_gpr[31] = (0x08A05360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A05360u) goto L_08A05360;
    return;
L_08A05360:
    aot_gpr[31] = (0x08A05368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A05368u) goto L_08A05368;
    return;
L_08A05368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A05384u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05384u) goto L_08A05384;
    return;
L_08A05384:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05394:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A053A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A05420;
      }
      goto L_08A053D4;
    }
L_08A053D4:
    aot_gpr[31] = (0x08A053DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A053DCu) goto L_08A053DC;
    return;
L_08A053DC:
    aot_gpr[31] = (0x08A053E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A053E4u) goto L_08A053E4;
    return;
L_08A053E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A05408u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05408u) goto L_08A05408;
    return;
L_08A05408:
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
L_08A05420:
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
L_08A0543C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A05490;
      }
      goto L_08A05460;
    }
L_08A05460:
    aot_gpr[31] = (0x08A05468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A05468u) goto L_08A05468;
    return;
L_08A05468:
    aot_gpr[31] = (0x08A05470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A05470u) goto L_08A05470;
    return;
L_08A05470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A05490u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05490u) goto L_08A05490;
    return;
L_08A05490:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A054A4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A054AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0554C;
      }
      goto L_08A054C4;
    }
L_08A054C4:
    aot_gpr[31] = (0x08A054CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A054CCu) goto L_08A054CC;
    return;
L_08A054CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A054E8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A054E8u) goto L_08A054E8;
    return;
L_08A054E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A054F0;
    }
L_08A054F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), 0u);
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A05538;
      }
      goto L_08A0551C;
    }
L_08A0551C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A0552C;
    }
L_08A0552C:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A05538;
    }
L_08A05538:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(308));
    aot_gpr[31] = (0x08A05544u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A057B0;
L_08A05544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A0554C;
    }
L_08A0554C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
        goto L_08A055E0;
    }
    goto L_08A05558;
L_08A05558:
    aot_gpr[31] = (0x08A05560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A05560u) goto L_08A05560;
    return;
L_08A05560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0557Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0557Cu) goto L_08A0557C;
    return;
L_08A0557C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A05584;
    }
L_08A05584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(288)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(312), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(284)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A055CC;
      }
      goto L_08A055B0;
    }
L_08A055B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A055C0;
    }
L_08A055C0:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A055CC;
    }
L_08A055CC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(284));
    aot_gpr[31] = (0x08A055D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A057B0;
L_08A055D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A055E0;
    }
L_08A055E0:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A055EC;
    }
L_08A055EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(284));
      if (branch_taken) {
          goto L_08A05608;
      }
      goto L_08A055F8;
    }
L_08A055F8:
    aot_gpr[31] = (0x08A05600u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A057B0;
L_08A05600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A05608;
    }
L_08A05608:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_08A0561C;
      }
      goto L_08A05614;
    }
L_08A05614:
    aot_gpr[31] = (0x08A0561Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A057B0;
L_08A0561C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0562C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0565C;
      }
      goto L_08A0563C;
    }
L_08A0563C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05660;
      }
      goto L_08A05648;
    }
L_08A05648:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05660;
      }
      goto L_08A05654;
    }
L_08A05654:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0565C:
    aot_gpr[2] = (0u | 1u);
    goto L_08A05660;
L_08A05660:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05668:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0568C;
      }
      goto L_08A05684;
    }
L_08A05684:
    aot_gpr[31] = (0x08A0568Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A054AC;
L_08A0568C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A056B4;
      }
      goto L_08A05698;
    }
L_08A05698:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A056A0;
    }
L_08A056A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A056A8;
    }
L_08A056A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_08A056CC;
      }
      goto L_08A056B0;
    }
L_08A056B0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 3 ? 1u : 0u);
    goto L_08A056B4;
L_08A056B4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A056BC;
    }
L_08A056BC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A056F4;
      }
      goto L_08A056C4;
    }
L_08A056C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A056CC;
    }
L_08A056CC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A056D4;
    }
L_08A056D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A056ECu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A056ECu) goto L_08A056EC;
    return;
L_08A056EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A056F4;
    }
L_08A056F4:
    aot_gpr[31] = (0x08A056FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A0562C;
L_08A056FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05718;
      }
      goto L_08A05704;
    }
L_08A05704:
    aot_gpr[31] = (0x08A0570Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 206u, 0x08A04C88u>(ctx, &aot_mem) && ctx.pc == 0x08A0570Cu) goto L_08A0570C;
    return;
L_08A0570C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A05718u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A054A4;
L_08A05718:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0572C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05794;
      }
      goto L_08A0574C;
    }
L_08A0574C:
    aot_gpr[31] = (0x08A05754u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A05754u) goto L_08A05754;
    return;
L_08A05754:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(133));
      if (branch_taken) {
          goto L_08A05794;
      }
      goto L_08A0575C;
    }
L_08A0575C:
    aot_gpr[31] = (0x08A05764u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A05764u) goto L_08A05764;
    return;
L_08A05764:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A05794;
      }
      goto L_08A0576C;
    }
L_08A0576C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0577Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 168u, 0x08A049B8u>(ctx, &aot_mem) && ctx.pc == 0x08A0577Cu) goto L_08A0577C;
    return;
L_08A0577C:
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
L_08A05794:
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
L_08A057B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(356));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1541));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(276)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[9] ^ 206u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (0u | 206u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    if (aot_gpr[9] == aot_gpr[6]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1832)));
        goto L_08A05828;
    }
    goto L_08A05828;
L_08A05828:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1573));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A0585C;
      }
      goto L_08A0583C;
    }
L_08A0583C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A05858u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05858u) goto L_08A05858;
    return;
L_08A05858:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), 0u);
    goto L_08A0585C;
L_08A0585C:
    aot_gpr[31] = (0x08A05864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A05864u) goto L_08A05864;
    return;
L_08A05864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A05880u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05880u) goto L_08A05880;
    return;
L_08A05880:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A058A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1541));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(276)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08A058DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 240u, 0x089FEED4u>(ctx, &aot_mem) && ctx.pc == 0x08A058DCu) goto L_08A058DC;
    return;
L_08A058DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A058F8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A058F8u) goto L_08A058F8;
    return;
L_08A058F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05904:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0590C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A0592C;
      }
      goto L_08A0591C;
    }
L_08A0591C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0592C;
      }
      goto L_08A05924;
    }
L_08A05924:
    aot_gpr[31] = (0x08A0592Cu);
    // nop
    goto L_08A05980;
L_08A0592C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05938:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0594Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A0594Cu) goto L_08A0594C;
    return;
L_08A0594C:
    aot_gpr[31] = (0x08A05954u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05954u) goto L_08A05954;
    return;
L_08A05954:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 25u);
    aot_gpr[31] = (0x08A05970u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5272));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A05970u) goto L_08A05970;
    return;
L_08A05970:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05980:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A05994u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A05994u) goto L_08A05994;
    return;
L_08A05994:
    aot_gpr[31] = (0x08A0599Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0599Cu) goto L_08A0599C;
    return;
L_08A0599C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A059A8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A059A8u) goto L_08A059A8;
    return;
L_08A059A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A059B8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(133));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A059C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A059D8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A059D8u) goto L_08A059D8;
    return;
L_08A059D8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A059E8:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u | 185u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A05A00;
L_08A05A00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08A05A00;
      }
      goto L_08A05A24;
    }
L_08A05A24:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A05A88;
      }
      goto L_08A05A54;
    }
L_08A05A54:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A05A58;
L_08A05A58:
    aot_gpr[31] = (0x08A05A60u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05A60u) goto L_08A05A60;
    return;
L_08A05A60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A05A6Cu);
    aot_gpr[5] = (0u | 3u);
    goto L_08A0590C;
L_08A05A6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A05A78u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 159u, 0x089F3AE4u>(ctx, &aot_mem) && ctx.pc == 0x08A05A78u) goto L_08A05A78;
    return;
L_08A05A78:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A05A58;
      }
      goto L_08A05A88;
    }
L_08A05A88:
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
L_08A05AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A05AB4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 130u, 0x089F391Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05AB4u) goto L_08A05AB4;
    return;
L_08A05AB4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05AC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[19] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05B30;
      }
      goto L_08A05AF8;
    }
L_08A05AF8:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A05B00;
L_08A05B00:
    aot_gpr[31] = (0x08A05B08u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05B08u) goto L_08A05B08;
    return;
L_08A05B08:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A05B14u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A059C0;
L_08A05B14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05B8C;
      }
      goto L_08A05B1C;
    }
L_08A05B1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A05B00;
      }
      goto L_08A05B30;
    }
L_08A05B30:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08A05B3Cu);
    aot_gpr[4] = (0u | 1484u);
    goto L_08A05938;
L_08A05B3C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05B54;
      }
      goto L_08A05B48;
    }
L_08A05B48:
    aot_gpr[31] = (0x08A05B50u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A05904;
L_08A05B50:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_08A05B54;
L_08A05B54:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A05B8C;
      }
      goto L_08A05B5C;
    }
L_08A05B5C:
    aot_gpr[31] = (0x08A05B64u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A059E8;
L_08A05B64:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A05B70u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 144u, 0x089F39F8u>(ctx, &aot_mem) && ctx.pc == 0x08A05B70u) goto L_08A05B70;
    return;
L_08A05B70:
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
L_08A05B8C:
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
L_08A05BAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05BB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A05BD8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05BD8u) goto L_08A05BD8;
    return;
L_08A05BD8:
    aot_gpr[31] = (0x08A05BE0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A059B8;
L_08A05BE0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A05C34;
      }
      goto L_08A05BEC;
    }
L_08A05BEC:
    aot_gpr[31] = (0x08A05BF4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05BF4u) goto L_08A05BF4;
    return;
L_08A05BF4:
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 185u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A05C0C;
L_08A05C0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A05C0C;
      }
      goto L_08A05C30;
    }
L_08A05C30:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A05C34;
L_08A05C34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05C48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A05C68u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05C68u) goto L_08A05C68;
    return;
L_08A05C68:
    aot_gpr[31] = (0x08A05C70u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A059B8;
L_08A05C70:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A05CE8;
      }
      goto L_08A05C7C;
    }
L_08A05C7C:
    aot_gpr[31] = (0x08A05C84u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05C84u) goto L_08A05C84;
    return;
L_08A05C84:
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[9] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u | 185u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A05C9C;
L_08A05C9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[8]);
      if (branch_taken) {
          goto L_08A05C9C;
      }
      goto L_08A05CC0;
    }
L_08A05CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A05CD0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 177u, 0x089F3BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05CD0u) goto L_08A05CD0;
    return;
L_08A05CD0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A05CDCu);
    aot_gpr[5] = (0u | 3u);
    goto L_08A0590C;
L_08A05CDC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A05CE8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 159u, 0x089F3AE4u>(ctx, &aot_mem) && ctx.pc == 0x08A05CE8u) goto L_08A05CE8;
    return;
L_08A05CE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05CFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A05D10u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A05D10u) goto L_08A05D10;
    return;
L_08A05D10:
    aot_gpr[31] = (0x08A05D18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05D18u) goto L_08A05D18;
    return;
L_08A05D18:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 225u);
    aot_gpr[31] = (0x08A05D34u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5036));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A05D34u) goto L_08A05D34;
    return;
L_08A05D34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05D44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A05D58u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A05D58u) goto L_08A05D58;
    return;
L_08A05D58:
    aot_gpr[31] = (0x08A05D60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05D60u) goto L_08A05D60;
    return;
L_08A05D60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A05D6Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A05D6Cu) goto L_08A05D6C;
    return;
L_08A05D6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A05D90u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 77u, 0x089F13FCu>(ctx, &aot_mem) && ctx.pc == 0x08A05D90u) goto L_08A05D90;
    return;
L_08A05D90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12120));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A05DA4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A05DA4u) goto L_08A05DA4;
    return;
L_08A05DA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(672), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(676), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05DC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05E14;
      }
      goto L_08A05DDC;
    }
L_08A05DDC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12120));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A05DF4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A05DF4u) goto L_08A05DF4;
    return;
L_08A05DF4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A05E00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 71u, 0x089F139Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05E00u) goto L_08A05E00;
    return;
L_08A05E00:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E14;
      }
      goto L_08A05E0C;
    }
L_08A05E0C:
    aot_gpr[31] = (0x08A05E14u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A05D44;
L_08A05E14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05E28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05E5C;
      }
      goto L_08A05E40;
    }
L_08A05E40:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (0u | 6u);
    aot_gpr[31] = (0x08A05E50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4992));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A05E50u) goto L_08A05E50;
    return;
L_08A05E50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E5C;
      }
      goto L_08A05E58;
    }
L_08A05E58:
    aot_gpr[16] = (0u | 1u);
    goto L_08A05E5C;
L_08A05E5C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05E70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05E78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05E80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A05EC8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05EC8u) goto L_08A05EC8;
    return;
L_08A05EC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05EE4;
      }
      goto L_08A05ED0;
    }
L_08A05ED0:
    aot_gpr[31] = (0x08A05ED8u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A05ED8u) goto L_08A05ED8;
    return;
L_08A05ED8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(676), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(672), aot_gpr[17]);
    aot_gpr[20] = (0u | 1u);
    goto L_08A05EE4;
L_08A05EE4:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A05F08:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(672), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A05F30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05F30u) goto L_08A05F30;
    return;
L_08A05F30:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(672)));
    aot_gpr[2] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 1u);
        goto L_08A05F50;
    }
    goto L_08A05F50;
L_08A05F50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    goto L_08A05F70;
L_08A05F70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05FCC;
      }
      goto L_08A05F78;
    }
L_08A05F78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05FCC;
      }
      goto L_08A05F80;
    }
L_08A05F80:
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08A05FC4;
    }
    goto L_08A05F88;
L_08A05F88:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x08A05F9Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A05F9Cu) goto L_08A05F9C;
    return;
L_08A05F9C:
    aot_gpr[31] = (0x08A05FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A05FA4u) goto L_08A05FA4;
    return;
L_08A05FA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A05FC0u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05FC0u) goto L_08A05FC0;
    return;
L_08A05FC0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A05FC4;
L_08A05FC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A05F70;
      }
      goto L_08A05FCC;
    }
L_08A05FCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05FDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(524), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(516), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(520), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(528), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    ctx.pc = 0x08A06000u; return;
}

void recomp_unit_0513(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0513_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_513(Runtime &runtime) {
    runtime.register_generated_unit(513u, 0x08A05000u, 4096u, &recomp_unit_0513, &recomp_unit_0513_entry);
    runtime.register_function(0x08A05000u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0501Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0502Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05034u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05050u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05074u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0507Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A050A0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A050B8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A050D0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A050E0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A050E8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05120u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0512Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05138u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05140u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0514Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0515Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05168u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05174u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05190u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05198u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051A0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051A8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051B0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051B8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051C0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051DCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051E4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A051ECu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05208u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0520Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05214u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05248u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05254u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05258u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05260u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05270u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05280u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05288u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05290u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05298u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A052A4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A052B0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A052B8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A052E4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A052F0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A052F8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05300u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05324u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0533Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05358u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05360u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05368u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05384u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05394u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A053A8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A053D4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A053DCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A053E4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05408u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05420u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0543Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05460u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05468u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05470u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05490u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A054A4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A054ACu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A054C4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A054CCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A054E8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A054F0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0551Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0552Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05538u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05544u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0554Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05558u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05560u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0557Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05584u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055B0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055C0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055CCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055D8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055E0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055ECu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A055F8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05600u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05608u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05614u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0561Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0562Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0563Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05648u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05654u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0565Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05660u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05668u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05684u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0568Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05698u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056A0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056A8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056B0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056B4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056BCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056C4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056CCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056D4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056ECu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056F4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A056FCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05704u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0570Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05718u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0572Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0574Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05754u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0575Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05764u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0576Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0577Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05794u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A057B0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05828u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0583Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05858u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0585Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05864u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05880u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A058A0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A058DCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A058F8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05904u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0590Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0591Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05924u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0592Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05938u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0594Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05954u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05970u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05980u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05994u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A0599Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A059A8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A059B8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A059C0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A059D8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A059E8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A00u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A24u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A2Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A54u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A58u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A60u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A6Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A78u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05A88u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05AA0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05AB4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05AC8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05AF8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B00u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B08u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B14u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B1Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B30u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B3Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B48u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B50u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B54u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B5Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B64u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B70u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05B8Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05BACu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05BB8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05BD8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05BE0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05BECu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05BF4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C0Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C30u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C34u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C48u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C68u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C70u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C7Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C84u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05C9Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05CC0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05CD0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05CDCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05CE8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05CFCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D10u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D18u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D34u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D44u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D58u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D60u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D6Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D7Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05D90u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05DA4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05DC0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05DDCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05DF4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E00u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E0Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E14u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E28u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E40u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E50u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E58u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E5Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E70u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E78u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05E80u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05EC8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05ED0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05ED8u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05EE4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F08u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F10u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F30u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F40u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F50u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F58u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F70u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F78u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F80u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F88u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05F9Cu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05FA4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05FC0u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05FC4u, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05FCCu, &recomp_unit_0513, "recomp_unit_0513");
    runtime.register_function(0x08A05FDCu, &recomp_unit_0513, "recomp_unit_0513");
}
} // namespace psprecomp
