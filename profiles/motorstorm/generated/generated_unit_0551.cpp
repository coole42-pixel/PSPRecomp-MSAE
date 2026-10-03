#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0551[1024] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 32, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0,
    0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 106, 107, 108, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0,
    0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0,
    0, 125, 0, 0, 126, 0, 0, 0, 127, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135,
    0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 156, 157, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 161, 0, 162, 0, 0, 163, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199,
    0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221,
};
void recomp_unit_0551_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A2B000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0551[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2B000;
    case 2u: goto L_08A2B018;
    case 3u: goto L_08A2B020;
    case 4u: goto L_08A2B024;
    case 5u: goto L_08A2B030;
    case 6u: goto L_08A2B040;
    case 7u: goto L_08A2B050;
    case 8u: goto L_08A2B060;
    case 9u: goto L_08A2B068;
    case 10u: goto L_08A2B078;
    case 11u: goto L_08A2B088;
    case 12u: goto L_08A2B098;
    case 13u: goto L_08A2B0A8;
    case 14u: goto L_08A2B0D8;
    case 15u: goto L_08A2B0E0;
    case 16u: goto L_08A2B0EC;
    case 17u: goto L_08A2B114;
    case 18u: goto L_08A2B128;
    case 19u: goto L_08A2B13C;
    case 20u: goto L_08A2B17C;
    case 21u: goto L_08A2B1AC;
    case 22u: goto L_08A2B1C4;
    case 23u: goto L_08A2B1D0;
    case 24u: goto L_08A2B1DC;
    case 25u: goto L_08A2B1E0;
    case 26u: goto L_08A2B1FC;
    case 27u: goto L_08A2B20C;
    case 28u: goto L_08A2B218;
    case 29u: goto L_08A2B248;
    case 30u: goto L_08A2B254;
    case 31u: goto L_08A2B264;
    case 32u: goto L_08A2B26C;
    case 33u: goto L_08A2B270;
    case 34u: goto L_08A2B2A4;
    case 35u: goto L_08A2B2B0;
    case 36u: goto L_08A2B2B8;
    case 37u: goto L_08A2B2C0;
    case 38u: goto L_08A2B2C8;
    case 39u: goto L_08A2B2D8;
    case 40u: goto L_08A2B2E0;
    case 41u: goto L_08A2B2F0;
    case 42u: goto L_08A2B2F8;
    case 43u: goto L_08A2B304;
    case 44u: goto L_08A2B314;
    case 45u: goto L_08A2B31C;
    case 46u: goto L_08A2B328;
    case 47u: goto L_08A2B358;
    case 48u: goto L_08A2B374;
    case 49u: goto L_08A2B3C4;
    case 50u: goto L_08A2B3D0;
    case 51u: goto L_08A2B3DC;
    case 52u: goto L_08A2B3EC;
    case 53u: goto L_08A2B400;
    case 54u: goto L_08A2B410;
    case 55u: goto L_08A2B420;
    case 56u: goto L_08A2B42C;
    case 57u: goto L_08A2B434;
    case 58u: goto L_08A2B444;
    case 59u: goto L_08A2B458;
    case 60u: goto L_08A2B468;
    case 61u: goto L_08A2B474;
    case 62u: goto L_08A2B498;
    case 63u: goto L_08A2B4A0;
    case 64u: goto L_08A2B4A4;
    case 65u: goto L_08A2B4C4;
    case 66u: goto L_08A2B4E0;
    case 67u: goto L_08A2B4EC;
    case 68u: goto L_08A2B4F8;
    case 69u: goto L_08A2B500;
    case 70u: goto L_08A2B510;
    case 71u: goto L_08A2B524;
    case 72u: goto L_08A2B534;
    case 73u: goto L_08A2B544;
    case 74u: goto L_08A2B554;
    case 75u: goto L_08A2B55C;
    case 76u: goto L_08A2B56C;
    case 77u: goto L_08A2B580;
    case 78u: goto L_08A2B590;
    case 79u: goto L_08A2B5A0;
    case 80u: goto L_08A2B5A8;
    case 81u: goto L_08A2B62C;
    case 82u: goto L_08A2B648;
    case 83u: goto L_08A2B664;
    case 84u: goto L_08A2B678;
    case 85u: goto L_08A2B68C;
    case 86u: goto L_08A2B6B8;
    case 87u: goto L_08A2B6D8;
    case 88u: goto L_08A2B6E4;
    case 89u: goto L_08A2B70C;
    case 90u: goto L_08A2B714;
    case 91u: goto L_08A2B734;
    case 92u: goto L_08A2B754;
    case 93u: goto L_08A2B7B0;
    case 94u: goto L_08A2B7BC;
    case 95u: goto L_08A2B7D0;
    case 96u: goto L_08A2B7DC;
    case 97u: goto L_08A2B7E4;
    case 98u: goto L_08A2B7EC;
    case 99u: goto L_08A2B7F8;
    case 100u: goto L_08A2B810;
    case 101u: goto L_08A2B820;
    case 102u: goto L_08A2B838;
    case 103u: goto L_08A2B858;
    case 104u: goto L_08A2B864;
    case 105u: goto L_08A2B888;
    case 106u: goto L_08A2B88C;
    case 107u: goto L_08A2B890;
    case 108u: goto L_08A2B894;
    case 109u: goto L_08A2B898;
    case 110u: goto L_08A2B8A0;
    case 111u: goto L_08A2B8AC;
    case 112u: goto L_08A2B8E0;
    case 113u: goto L_08A2B8E8;
    case 114u: goto L_08A2B8F0;
    case 115u: goto L_08A2B8F8;
    case 116u: goto L_08A2B904;
    case 117u: goto L_08A2B914;
    case 118u: goto L_08A2B920;
    case 119u: goto L_08A2B930;
    case 120u: goto L_08A2B93C;
    case 121u: goto L_08A2B950;
    case 122u: goto L_08A2B958;
    case 123u: goto L_08A2B96C;
    case 124u: goto L_08A2B978;
    case 125u: goto L_08A2B984;
    case 126u: goto L_08A2B990;
    case 127u: goto L_08A2B9A0;
    case 128u: goto L_08A2B9A4;
    case 129u: goto L_08A2B9BC;
    case 130u: goto L_08A2B9C8;
    case 131u: goto L_08A2B9D0;
    case 132u: goto L_08A2B9D8;
    case 133u: goto L_08A2B9E0;
    case 134u: goto L_08A2B9EC;
    case 135u: goto L_08A2B9FC;
    case 136u: goto L_08A2BA04;
    case 137u: goto L_08A2BA10;
    case 138u: goto L_08A2BA18;
    case 139u: goto L_08A2BA24;
    case 140u: goto L_08A2BA2C;
    case 141u: goto L_08A2BA54;
    case 142u: goto L_08A2BA5C;
    case 143u: goto L_08A2BA98;
    case 144u: goto L_08A2BAAC;
    case 145u: goto L_08A2BAB4;
    case 146u: goto L_08A2BABC;
    case 147u: goto L_08A2BAC0;
    case 148u: goto L_08A2BAC8;
    case 149u: goto L_08A2BAD0;
    case 150u: goto L_08A2BAE0;
    case 151u: goto L_08A2BAFC;
    case 152u: goto L_08A2BB14;
    case 153u: goto L_08A2BB18;
    case 154u: goto L_08A2BB3C;
    case 155u: goto L_08A2BB6C;
    case 156u: goto L_08A2BB70;
    case 157u: goto L_08A2BB74;
    case 158u: goto L_08A2BB88;
    case 159u: goto L_08A2BBA4;
    case 160u: goto L_08A2BBAC;
    case 161u: goto L_08A2BBB0;
    case 162u: goto L_08A2BBB8;
    case 163u: goto L_08A2BBC4;
    case 164u: goto L_08A2BBC8;
    case 165u: goto L_08A2BBD0;
    case 166u: goto L_08A2BBE0;
    case 167u: goto L_08A2BC18;
    case 168u: goto L_08A2BC20;
    case 169u: goto L_08A2BC30;
    case 170u: goto L_08A2BC3C;
    case 171u: goto L_08A2BC44;
    case 172u: goto L_08A2BC4C;
    case 173u: goto L_08A2BC68;
    case 174u: goto L_08A2BC70;
    case 175u: goto L_08A2BC78;
    case 176u: goto L_08A2BC8C;
    case 177u: goto L_08A2BCA0;
    case 178u: goto L_08A2BCAC;
    case 179u: goto L_08A2BCC8;
    case 180u: goto L_08A2BCDC;
    case 181u: goto L_08A2BCF8;
    case 182u: goto L_08A2BD10;
    case 183u: goto L_08A2BD24;
    case 184u: goto L_08A2BD40;
    case 185u: goto L_08A2BD58;
    case 186u: goto L_08A2BD6C;
    case 187u: goto L_08A2BD78;
    case 188u: goto L_08A2BD84;
    case 189u: goto L_08A2BDAC;
    case 190u: goto L_08A2BDBC;
    case 191u: goto L_08A2BDCC;
    case 192u: goto L_08A2BDD8;
    case 193u: goto L_08A2BDE4;
    case 194u: goto L_08A2BDF4;
    case 195u: goto L_08A2BE30;
    case 196u: goto L_08A2BE3C;
    case 197u: goto L_08A2BE44;
    case 198u: goto L_08A2BE6C;
    case 199u: goto L_08A2BE7C;
    case 200u: goto L_08A2BE84;
    case 201u: goto L_08A2BE98;
    case 202u: goto L_08A2BEAC;
    case 203u: goto L_08A2BEBC;
    case 204u: goto L_08A2BEC8;
    case 205u: goto L_08A2BED0;
    case 206u: goto L_08A2BEE0;
    case 207u: goto L_08A2BEF0;
    case 208u: goto L_08A2BF00;
    case 209u: goto L_08A2BF0C;
    case 210u: goto L_08A2BF38;
    case 211u: goto L_08A2BF48;
    case 212u: goto L_08A2BF50;
    case 213u: goto L_08A2BF7C;
    case 214u: goto L_08A2BF88;
    case 215u: goto L_08A2BF9C;
    case 216u: goto L_08A2BFAC;
    case 217u: goto L_08A2BFBC;
    case 218u: goto L_08A2BFD0;
    case 219u: goto L_08A2BFE0;
    case 220u: goto L_08A2BFF0;
    case 221u: goto L_08A2BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2B000:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 248u, 0x08A2AFECu>(ctx, &aot_mem); return;
      }
      goto L_08A2B018;
    }
L_08A2B018:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A2B0E0;
      }
      goto L_08A2B020;
    }
L_08A2B020:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4608));
    goto L_08A2B024;
L_08A2B024:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2B030u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B030u) goto L_08A2B030;
    return;
L_08A2B030:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B040u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B040u) goto L_08A2B040;
    return;
L_08A2B040:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(4552));
    aot_gpr[31] = (0x08A2B050u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B050u) goto L_08A2B050;
    return;
L_08A2B050:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2B060u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B060u) goto L_08A2B060;
    return;
L_08A2B060:
    aot_gpr[31] = (0x08A2B068u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B068u) goto L_08A2B068;
    return;
L_08A2B068:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B078u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B078u) goto L_08A2B078;
    return;
L_08A2B078:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[22] + static_cast<std::uint32_t>(4504));
    aot_gpr[31] = (0x08A2B088u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B088u) goto L_08A2B088;
    return;
L_08A2B088:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2B098u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B098u) goto L_08A2B098;
    return;
L_08A2B098:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2B0A8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B0A8u) goto L_08A2B0A8;
    return;
L_08A2B0A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B0D8:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4600));
    (void)rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 238u, 0x08A2AF54u>(ctx, &aot_mem); return;
L_08A2B0E0:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(4600));
    goto L_08A2B024;
L_08A2B0EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(36));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x08A2B114u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 234u, 0x08A2AED4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B114u) goto L_08A2B114;
    return;
L_08A2B114:
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[6] = (aot_gpr[2] | aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2B128u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2B128u) goto L_08A2B128;
    return;
L_08A2B128:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2B26C;
      }
      goto L_08A2B17C;
    }
L_08A2B17C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B26C;
      }
      goto L_08A2B1AC;
    }
L_08A2B1AC:
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(436));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[30] = (aot_gpr[23] + static_cast<std::uint32_t>(340));
      if (branch_taken) {
          goto L_08A2B254;
      }
      goto L_08A2B1C4;
    }
L_08A2B1C4:
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_08A2B2B8;
      }
      goto L_08A2B1D0;
    }
L_08A2B1D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[6] = (aot_gpr[19] + 0u);
        goto L_08A2B2A4;
    }
    goto L_08A2B1DC;
L_08A2B1DC:
    aot_gpr[3] = (aot_gpr[19] + 0u);
    goto L_08A2B1E0;
L_08A2B1E0:
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2B1FCu);
    aot_gpr[18] = (aot_gpr[3] + aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B1FCu) goto L_08A2B1FC;
    return;
L_08A2B1FC:
    aot_gpr[4] = (aot_gpr[30] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2B20Cu);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B20Cu) goto L_08A2B20C;
    return;
L_08A2B20C:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B270;
      }
      goto L_08A2B218;
    }
L_08A2B218:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B26C;
      }
      goto L_08A2B248;
    }
L_08A2B248:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[20] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08A2B1C4;
      }
      goto L_08A2B254;
    }
L_08A2B254:
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08A2B264u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 202u, 0x08A2ABC0u>(ctx, &aot_mem) && ctx.pc == 0x08A2B264u) goto L_08A2B264;
    return;
L_08A2B264:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A2B1E0;
L_08A2B26C:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    goto L_08A2B270;
L_08A2B270:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A2B2A4:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08A2B2B0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 225u, 0x08A2ADA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B2B0u) goto L_08A2B2B0;
    return;
L_08A2B2B0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A2B1E0;
L_08A2B2B8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A2B304;
      }
      goto L_08A2B2C0;
    }
L_08A2B2C0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[3] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_08A2B1E0;
      }
      goto L_08A2B2C8;
    }
L_08A2B2C8:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2B2D8u);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    goto L_08A2B0EC;
L_08A2B2D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_08A2B1E0;
      }
      goto L_08A2B2E0;
    }
L_08A2B2E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_08A2B31C;
      }
      goto L_08A2B2F0;
    }
L_08A2B2F0:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[16];
    aot_gpr[3] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_08A2B1E0;
      }
      goto L_08A2B2F8;
    }
L_08A2B2F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A2B1E0;
L_08A2B304:
    aot_gpr[6] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x08A2B314u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 216u, 0x08A2ACD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B314u) goto L_08A2B314;
    return;
L_08A2B314:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A2B1E0;
L_08A2B31C:
    aot_gpr[3] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A2B1E0;
L_08A2B328:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    aot_gpr[13] = (aot_gpr[7] & 255u);
    aot_gpr[20] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2B4C4;
      }
      goto L_08A2B358;
    }
L_08A2B358:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(276));
    aot_gpr[2] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A2B4EC;
      }
      goto L_08A2B374;
    }
L_08A2B374:
    aot_gpr[2] = (aot_gpr[10] >> 24u);
    aot_gpr[3] = (aot_gpr[10] >> 16u);
    aot_gpr[4] = (aot_gpr[10] >> 8u);
    aot_gpr[5] = (aot_gpr[11] >> 24u);
    aot_gpr[6] = (aot_gpr[11] >> 16u);
    aot_gpr[7] = (aot_gpr[11] >> 8u);
    aot_gpr[8] = (aot_gpr[17] >> 8u);
    aot_gpr[9] = (aot_gpr[12] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[10]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[13]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[8]));
    { const bool branch_taken = aot_gpr[9] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_08A2B4A0;
      }
      goto L_08A2B3C4;
    }
L_08A2B3C4:
    aot_gpr[2] = (aot_gpr[12] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2B498;
      }
      goto L_08A2B3D0;
    }
L_08A2B3D0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08A2B3DCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B3DCu) goto L_08A2B3DC;
    return;
L_08A2B3DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2B3ECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B3ECu) goto L_08A2B3EC;
    return;
L_08A2B3EC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4552));
    aot_gpr[31] = (0x08A2B400u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B400u) goto L_08A2B400;
    return;
L_08A2B400:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2B410u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B410u) goto L_08A2B410;
    return;
L_08A2B410:
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2B420u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B420u) goto L_08A2B420;
    return;
L_08A2B420:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2B42Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B42Cu) goto L_08A2B42C;
    return;
L_08A2B42C:
    aot_gpr[31] = (0x08A2B434u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B434u) goto L_08A2B434;
    return;
L_08A2B434:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2B444u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B444u) goto L_08A2B444;
    return;
L_08A2B444:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4504));
    aot_gpr[31] = (0x08A2B458u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B458u) goto L_08A2B458;
    return;
L_08A2B458:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B468u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B468u) goto L_08A2B468;
    return;
L_08A2B468:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B474u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B474u) goto L_08A2B474;
    return;
L_08A2B474:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B498:
    { const bool branch_taken = aot_gpr[12] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A2B4F8;
      }
      goto L_08A2B4A0;
    }
L_08A2B4A0:
    aot_gpr[2] = (0u + 0u);
    goto L_08A2B4A4;
L_08A2B4A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B4C4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(292));
    aot_gpr[2] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A2B374;
      }
      goto L_08A2B4E0;
    }
L_08A2B4E0:
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    goto L_08A2B374;
L_08A2B4EC:
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_08A2B374;
L_08A2B4F8:
    aot_gpr[31] = (0x08A2B500u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B500u) goto L_08A2B500;
    return;
L_08A2B500:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2B510u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B510u) goto L_08A2B510;
    return;
L_08A2B510:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4552));
    aot_gpr[31] = (0x08A2B524u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B524u) goto L_08A2B524;
    return;
L_08A2B524:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2B534u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B534u) goto L_08A2B534;
    return;
L_08A2B534:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x08A2B544u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B544u) goto L_08A2B544;
    return;
L_08A2B544:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08A2B554u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B554u) goto L_08A2B554;
    return;
L_08A2B554:
    aot_gpr[31] = (0x08A2B55Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B55Cu) goto L_08A2B55C;
    return;
L_08A2B55C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2B56Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B56Cu) goto L_08A2B56C;
    return;
L_08A2B56C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4504));
    aot_gpr[31] = (0x08A2B580u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B580u) goto L_08A2B580;
    return;
L_08A2B580:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B590u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B590u) goto L_08A2B590;
    return;
L_08A2B590:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B5A0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B5A0u) goto L_08A2B5A0;
    return;
L_08A2B5A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    goto L_08A2B4A4;
L_08A2B5A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] ^ 5u);
    if (aot_gpr[2] != 0u) aot_gpr[21] = (aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[21] + aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[18] + static_cast<std::uint32_t>(1064));
    aot_gpr[3] = (aot_gpr[8] + static_cast<std::uint32_t>(5));
    aot_gpr[17] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    aot_gpr[20] = (aot_gpr[8] - aot_gpr[21]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[7] + 0u);
    aot_gpr[9] = (aot_gpr[8] >> 8u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[22] = (aot_gpr[19] + aot_gpr[20]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A2B68C;
      }
      goto L_08A2B62C;
    }
L_08A2B62C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08A2B648u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2B648u) goto L_08A2B648;
    return;
L_08A2B648:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[8] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2B664u);
    aot_gpr[9] = (aot_gpr[20] + 0u);
    goto L_08A2B328;
L_08A2B664:
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(532));
    aot_gpr[31] = (0x08A2B678u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 167u, 0x08A44CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B678u) goto L_08A2B678;
    return;
L_08A2B678:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (aot_gpr[22] + aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[17]);
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08A2B68C;
L_08A2B68C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08A2B6B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A2B6D8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    goto L_08A2B5A8;
L_08A2B6D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B6E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2B734;
      }
      goto L_08A2B70C;
    }
L_08A2B70C:
    aot_gpr[31] = (0x08A2B714u);
    // nop
    goto L_08A2B6B8;
L_08A2B714:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(49));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B734:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(49));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B754:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    aot_gpr[30] = (0u + 0u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    goto L_08A2B7B0;
L_08A2B7B0:
    aot_gpr[2] = (aot_gpr[19] | aot_gpr[18]);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
        goto L_08A2B894;
    }
    goto L_08A2B7BC;
L_08A2B7BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
        goto L_08A2B894;
    }
    goto L_08A2B7D0;
L_08A2B7D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
        goto L_08A2B7F8;
    }
    goto L_08A2B7DC;
L_08A2B7DC:
    if (aot_gpr[18] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
        goto L_08A2B7F8;
    }
    goto L_08A2B7E4;
L_08A2B7E4:
    if (aot_gpr[8] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1056)));
        goto L_08A2B9BC;
    }
    goto L_08A2B7EC;
L_08A2B7EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
    goto L_08A2B7F8;
L_08A2B7F8:
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[18] < aot_gpr[16] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[16] = (aot_gpr[18]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2B8E8;
      }
      goto L_08A2B810;
    }
L_08A2B810:
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[22]);
        goto L_08A2B890;
    }
    goto L_08A2B820;
L_08A2B820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1056)));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[31] = (0x08A2B838u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A2B838u) goto L_08A2B838;
    return;
L_08A2B838:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (aot_gpr[18] - aot_gpr[16]);
    aot_gpr[8] = (aot_gpr[16] + aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[30] = (aot_gpr[30] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1056)));
    goto L_08A2B858;
L_08A2B858:
    aot_gpr[3] = (aot_gpr[8] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2B8E0;
      }
      goto L_08A2B864;
    }
L_08A2B864:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] << 8u);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2B8F8;
      }
      goto L_08A2B888;
    }
L_08A2B888:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
    goto L_08A2B88C;
L_08A2B88C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    goto L_08A2B890;
L_08A2B890:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    goto L_08A2B894;
L_08A2B894:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    goto L_08A2B898;
L_08A2B898:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A2B8AC;
      }
      goto L_08A2B8A0;
    }
L_08A2B8A0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    goto L_08A2B8AC;
L_08A2B8AC:
    aot_gpr[2] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A2B8E0:
    aot_gpr[19] = (0u + 0u);
    goto L_08A2B7B0;
L_08A2B8E8:
    if (aot_gpr[19] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1056)));
        goto L_08A2B858;
    }
    goto L_08A2B8F0;
L_08A2B8F0:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    goto L_08A2B898;
L_08A2B8F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1048)));
        goto L_08A2B88C;
    }
    goto L_08A2B904;
L_08A2B904:
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (0u + 0u);
        goto L_08A2B7B0;
    }
    goto L_08A2B914;
L_08A2B914:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2B958;
      }
      goto L_08A2B920;
    }
L_08A2B920:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[22]);
        goto L_08A2B9D0;
    }
    goto L_08A2B930;
L_08A2B930:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(790));
    aot_gpr[31] = (0x08A2B93Cu);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 167u, 0x08A44CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B93Cu) goto L_08A2B93C;
    return;
L_08A2B93C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2B950u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 130u, 0x08A2CDA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B950u) goto L_08A2B950;
    return;
L_08A2B950:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(48), aot_gpr[22]);
        goto L_08A2B9D0;
    }
    goto L_08A2B958;
L_08A2B958:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A2B9A4;
    }
    goto L_08A2B96C;
L_08A2B96C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(21));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2BA04;
      }
      goto L_08A2B978;
    }
L_08A2B978:
    aot_gpr[2] = (aot_gpr[16] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_08A2B9D8;
      }
      goto L_08A2B984;
    }
L_08A2B984:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A2B9A4;
    }
    goto L_08A2B990;
L_08A2B990:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2B9A0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 217u, 0x08A2ACE8u>(ctx, &aot_mem) && ctx.pc == 0x08A2B9A0u) goto L_08A2B9A0;
    return;
L_08A2B9A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A2B9A4;
L_08A2B9A4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    goto L_08A2B7B0;
L_08A2B9BC:
    aot_gpr[6] = (aot_gpr[8] + 0u);
    aot_gpr[31] = (0x08A2B9C8u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A2B9C8u) goto L_08A2B9C8;
    return;
L_08A2B9C8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08A2B7EC;
L_08A2B9D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    goto L_08A2B958;
L_08A2B9D8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2BA18;
      }
      goto L_08A2B9E0;
    }
L_08A2B9E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
    if (aot_gpr[16] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A2B9A4;
    }
    goto L_08A2B9EC;
L_08A2B9EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2B9FCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 200u, 0x08A2AB74u>(ctx, &aot_mem) && ctx.pc == 0x08A2B9FCu) goto L_08A2B9FC;
    return;
L_08A2B9FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A2B9A4;
L_08A2BA04:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2BA10u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08A2B6E4;
L_08A2BA10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A2B9A4;
L_08A2BA18:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08A2BA24u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08A2B13C;
L_08A2BA24:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08A2B9A4;
L_08A2BA2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2BB3C;
      }
      goto L_08A2BA54;
    }
L_08A2BA54:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A2BB3C;
      }
      goto L_08A2BA5C;
    }
L_08A2BA5C:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[5]) {
    aot_gpr[16] = (0u + 0u);
        goto L_08A2BAC0;
    }
    goto L_08A2BA98;
L_08A2BA98:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08A2BDBC;
      }
      goto L_08A2BAAC;
    }
L_08A2BAAC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2BDD8;
      }
      goto L_08A2BAB4;
    }
L_08A2BAB4:
    if (aot_gpr[5] == aot_gpr[2]) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(5));
        goto L_08A2BD84;
    }
    goto L_08A2BABC;
L_08A2BABC:
    aot_gpr[16] = (0u + 0u);
    goto L_08A2BAC0;
L_08A2BAC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_08A2BAC8;
L_08A2BAC8:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A2BB70;
    }
    goto L_08A2BAD0;
L_08A2BAD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2BB6C;
      }
      goto L_08A2BAE0;
    }
L_08A2BAE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1048)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] >> 1u);
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[6] = (aot_gpr[2]);
    aot_gpr[31] = (0x08A2BAFCu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    goto L_08A2B754;
L_08A2BAFC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[8] | aot_gpr[9]);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
        goto L_08A2BAC8;
    }
    goto L_08A2BB14;
L_08A2BB14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A2BB18;
L_08A2BB18:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    aot_gpr[3] = (aot_gpr[9] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BB3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[8] + 0u);
    aot_gpr[3] = (aot_gpr[9] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BB6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A2BB70;
L_08A2BB70:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BB74;
L_08A2BB74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(-9));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(43) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A2BBB0;
    }
    goto L_08A2BB88;
L_08A2BB88:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4644));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BBA4:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BBAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A2BBB0;
L_08A2BBB0:
    if (aot_gpr[5] != aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
        goto L_08A2BB74;
    }
    goto L_08A2BBB8;
L_08A2BBB8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_08A2BC18;
    }
    goto L_08A2BBC4;
L_08A2BBC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_08A2BBC8;
L_08A2BBC8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(1064));
      if (branch_taken) {
          goto L_08A2BC4C;
      }
      goto L_08A2BBD0;
    }
L_08A2BBD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08A2BB14;
      }
      goto L_08A2BBE0;
    }
L_08A2BBE0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1060)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[9] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[8] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A2BC18:
    if (aot_gpr[6] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_08A2BBC8;
    }
    goto L_08A2BC20;
L_08A2BC20:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[2];
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2BB14;
      }
      goto L_08A2BC30;
    }
L_08A2BC30:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2BC3Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(23));
    goto L_08A2B5A8;
L_08A2BC3C:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), 0u);
        goto L_08A2BBC4;
    }
    goto L_08A2BC44;
L_08A2BC44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_08A2BBC8;
L_08A2BC4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08A2BBE0;
      }
      goto L_08A2BC68;
    }
L_08A2BC68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A2BB18;
L_08A2BC70:
    aot_gpr[31] = (0x08A2BC78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0404_entry, 404u, 160u, 0x08998B98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BC78u) goto L_08A2BC78;
    return;
L_08A2BC78:
    aot_gpr[3] = (aot_gpr[2] & 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
        goto L_08A2BDE4;
    }
    goto L_08A2BC8C;
L_08A2BC8C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A2BBAC;
L_08A2BCA0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(51));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BCAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(1064));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[16]);
    aot_gpr[31] = (0x08A2BCC8u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 90u, 0x08A2C8F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2BCC8u) goto L_08A2BCC8;
    return;
L_08A2BCC8:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(18));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BCDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(1064));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[16]);
    aot_gpr[31] = (0x08A2BCF8u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 113u, 0x08A2CB98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BCF8u) goto L_08A2BCF8;
    return;
L_08A2BCF8:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[16]);
    aot_gpr[31] = (0x08A2BD10u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 122u, 0x08A2CC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BD10u) goto L_08A2BD10;
    return;
L_08A2BD10:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BD24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(1064));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[16]);
    aot_gpr[31] = (0x08A2BD40u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 113u, 0x08A2CB98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BD40u) goto L_08A2BD40;
    return;
L_08A2BD40:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[18] - aot_gpr[16]);
    aot_gpr[31] = (0x08A2BD58u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 122u, 0x08A2CC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BD58u) goto L_08A2BD58;
    return;
L_08A2BD58:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BD6C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BD78:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(52));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BBAC;
L_08A2BD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(1064));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x08A2BDACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 67u, 0x08A2C4E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2BDACu) goto L_08A2BDAC;
    return;
L_08A2BDAC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BABC;
L_08A2BDBC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08A2BDCCu);
    aot_gpr[6] = (0u + 0u);
    goto L_08A2B6B8;
L_08A2BDCC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(49));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BABC;
L_08A2BDD8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A2BABC;
L_08A2BDE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A2BBAC;
L_08A2BDF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-3));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 2u, 0x08A2C028u>(ctx, &aot_mem); return;
      }
      goto L_08A2BE30;
    }
L_08A2BE30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2BF38;
      }
      goto L_08A2BE3C;
    }
L_08A2BE3C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_08A2BE6C;
      }
      goto L_08A2BE44;
    }
L_08A2BE44:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BE6C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2BE7Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BE7Cu) goto L_08A2BE7C;
    return;
L_08A2BE7C:
    aot_gpr[31] = (0x08A2BE84u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BE84u) goto L_08A2BE84;
    return;
L_08A2BE84:
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(116));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A2BE98u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BE98u) goto L_08A2BE98;
    return;
L_08A2BE98:
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(148));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2BEACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BEACu) goto L_08A2BEAC;
    return;
L_08A2BEAC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2BEBCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BEBCu) goto L_08A2BEBC;
    return;
L_08A2BEBC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A2BEC8u);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BEC8u) goto L_08A2BEC8;
    return;
L_08A2BEC8:
    aot_gpr[31] = (0x08A2BED0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 27u, 0x0899C77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BED0u) goto L_08A2BED0;
    return;
L_08A2BED0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(5));
    aot_gpr[31] = (0x08A2BEE0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BEE0u) goto L_08A2BEE0;
    return;
L_08A2BEE0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2BEF0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BEF0u) goto L_08A2BEF0;
    return;
L_08A2BEF0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A2BF00u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BF00u) goto L_08A2BF00;
    return;
L_08A2BF00:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A2BF0Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BF0Cu) goto L_08A2BF0C;
    return;
L_08A2BF0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(360)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(352)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(348)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BF38:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(308));
    aot_gpr[31] = (0x08A2BF48u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BF48u) goto L_08A2BF48;
    return;
L_08A2BF48:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    goto L_08A2BF50;
L_08A2BF50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2BF50;
      }
      goto L_08A2BF7C;
    }
L_08A2BF7C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(228));
    aot_gpr[31] = (0x08A2BF88u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 130u, 0x08999DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2BF88u) goto L_08A2BF88;
    return;
L_08A2BF88:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20348));
    aot_gpr[31] = (0x08A2BF9Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BF9Cu) goto L_08A2BF9C;
    return;
L_08A2BF9C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(228));
    aot_gpr[31] = (0x08A2BFACu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BFACu) goto L_08A2BFAC;
    return;
L_08A2BFAC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(148));
    aot_gpr[31] = (0x08A2BFBCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BFBCu) goto L_08A2BFBC;
    return;
L_08A2BFBC:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(116));
    aot_gpr[31] = (0x08A2BFD0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 133u, 0x08999E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BFD0u) goto L_08A2BFD0;
    return;
L_08A2BFD0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2BFE0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0405_entry, 405u, 157u, 0x08999FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BFE0u) goto L_08A2BFE0;
    return;
L_08A2BFE0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08A2BFF0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 28u, 0x0899C7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2BFF0u) goto L_08A2BFF0;
    return;
L_08A2BFF0:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A2BFFCu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0408_entry, 408u, 46u, 0x0899C96Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2BFFCu) goto L_08A2BFFC;
    return;
L_08A2BFFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.pc = 0x08A2C000u; return;
}

void recomp_unit_0551(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0551_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_551(Runtime &runtime) {
    runtime.register_generated_unit(551u, 0x08A2B000u, 4096u, &recomp_unit_0551, &recomp_unit_0551_entry);
    runtime.register_function(0x08A2B000u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B018u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B020u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B024u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B030u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B040u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B050u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B060u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B068u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B078u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B088u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B098u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B0A8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B0D8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B0E0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B0ECu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B114u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B128u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B13Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B17Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B1ACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B1C4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B1D0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B1DCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B1E0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B1FCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B20Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B218u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B248u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B254u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B264u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B26Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B270u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2A4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2B0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2B8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2C0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2C8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2D8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2E0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2F0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B2F8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B304u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B314u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B31Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B328u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B358u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B374u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B3C4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B3D0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B3DCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B3ECu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B400u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B410u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B420u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B42Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B434u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B444u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B458u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B468u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B474u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B498u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B4A0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B4A4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B4C4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B4E0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B4ECu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B4F8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B500u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B510u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B524u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B534u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B544u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B554u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B55Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B56Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B580u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B590u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B5A0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B5A8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B62Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B648u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B664u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B678u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B68Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B6B8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B6D8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B6E4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B70Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B714u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B734u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B754u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7B0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7BCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7D0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7DCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7E4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7ECu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B7F8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B810u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B820u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B838u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B858u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B864u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B888u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B88Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B890u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B894u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B898u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B8A0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B8ACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B8E0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B8E8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B8F0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B8F8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B904u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B914u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B920u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B930u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B93Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B950u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B958u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B96Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B978u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B984u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B990u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9A0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9A4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9BCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9C8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9D0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9D8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9E0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9ECu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2B9FCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA04u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA10u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA18u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA24u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA2Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA54u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA5Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BA98u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAB4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BABCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAC0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAC8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAD0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAE0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BAFCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB14u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB18u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB3Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB6Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB70u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB74u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BB88u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBA4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBB0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBB8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBC4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBC8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBD0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BBE0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC18u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC20u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC30u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC3Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC44u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC4Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC68u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC70u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC78u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BC8Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BCA0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BCACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BCC8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BCDCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BCF8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD10u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD24u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD40u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD58u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD6Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD78u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BD84u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BDACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BDBCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BDCCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BDD8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BDE4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BDF4u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE30u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE3Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE44u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE6Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE7Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE84u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BE98u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BEACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BEBCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BEC8u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BED0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BEE0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BEF0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF00u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF0Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF38u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF48u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF50u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF7Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF88u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BF9Cu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BFACu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BFBCu, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BFD0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BFE0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BFF0u, &recomp_unit_0551, "recomp_unit_0551");
    runtime.register_function(0x08A2BFFCu, &recomp_unit_0551, "recomp_unit_0551");
}
} // namespace psprecomp
