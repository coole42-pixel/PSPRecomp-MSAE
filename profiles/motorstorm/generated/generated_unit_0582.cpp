#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0582[1023] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 21, 0, 0, 0, 0, 22, 0, 23, 0,
    24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32,
    0, 33, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45,
    0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 77, 0, 0, 0, 78, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108,
    0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210,
    0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220,
};
void recomp_unit_0582_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A4A004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0582[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4A004;
    case 2u: goto L_08A4A018;
    case 3u: goto L_08A4A038;
    case 4u: goto L_08A4A040;
    case 5u: goto L_08A4A044;
    case 6u: goto L_08A4A05C;
    case 7u: goto L_08A4A064;
    case 8u: goto L_08A4A06C;
    case 9u: goto L_08A4A098;
    case 10u: goto L_08A4A0AC;
    case 11u: goto L_08A4A0CC;
    case 12u: goto L_08A4A0D4;
    case 13u: goto L_08A4A0D8;
    case 14u: goto L_08A4A0F0;
    case 15u: goto L_08A4A0F8;
    case 16u: goto L_08A4A100;
    case 17u: goto L_08A4A124;
    case 18u: goto L_08A4A138;
    case 19u: goto L_08A4A154;
    case 20u: goto L_08A4A15C;
    case 21u: goto L_08A4A160;
    case 22u: goto L_08A4A174;
    case 23u: goto L_08A4A17C;
    case 24u: goto L_08A4A184;
    case 25u: goto L_08A4A190;
    case 26u: goto L_08A4A1B0;
    case 27u: goto L_08A4A1C8;
    case 28u: goto L_08A4A1D0;
    case 29u: goto L_08A4A1DC;
    case 30u: goto L_08A4A1EC;
    case 31u: goto L_08A4A1F8;
    case 32u: goto L_08A4A200;
    case 33u: goto L_08A4A208;
    case 34u: goto L_08A4A20C;
    case 35u: goto L_08A4A224;
    case 36u: goto L_08A4A22C;
    case 37u: goto L_08A4A25C;
    case 38u: goto L_08A4A274;
    case 39u: goto L_08A4A27C;
    case 40u: goto L_08A4A2A4;
    case 41u: goto L_08A4A2A8;
    case 42u: goto L_08A4A2B0;
    case 43u: goto L_08A4A2CC;
    case 44u: goto L_08A4A2F8;
    case 45u: goto L_08A4A300;
    case 46u: goto L_08A4A310;
    case 47u: goto L_08A4A318;
    case 48u: goto L_08A4A338;
    case 49u: goto L_08A4A34C;
    case 50u: goto L_08A4A358;
    case 51u: goto L_08A4A3A4;
    case 52u: goto L_08A4A3B4;
    case 53u: goto L_08A4A3BC;
    case 54u: goto L_08A4A3C0;
    case 55u: goto L_08A4A3E8;
    case 56u: goto L_08A4A3F0;
    case 57u: goto L_08A4A408;
    case 58u: goto L_08A4A430;
    case 59u: goto L_08A4A438;
    case 60u: goto L_08A4A440;
    case 61u: goto L_08A4A448;
    case 62u: goto L_08A4A47C;
    case 63u: goto L_08A4A4AC;
    case 64u: goto L_08A4A4D8;
    case 65u: goto L_08A4A4F8;
    case 66u: goto L_08A4A510;
    case 67u: goto L_08A4A518;
    case 68u: goto L_08A4A524;
    case 69u: goto L_08A4A540;
    case 70u: goto L_08A4A56C;
    case 71u: goto L_08A4A578;
    case 72u: goto L_08A4A5B8;
    case 73u: goto L_08A4A5C8;
    case 74u: goto L_08A4A5D4;
    case 75u: goto L_08A4A5DC;
    case 76u: goto L_08A4A600;
    case 77u: goto L_08A4A610;
    case 78u: goto L_08A4A620;
    case 79u: goto L_08A4A624;
    case 80u: goto L_08A4A634;
    case 81u: goto L_08A4A644;
    case 82u: goto L_08A4A668;
    case 83u: goto L_08A4A67C;
    case 84u: goto L_08A4A688;
    case 85u: goto L_08A4A6B0;
    case 86u: goto L_08A4A6BC;
    case 87u: goto L_08A4A6C4;
    case 88u: goto L_08A4A6CC;
    case 89u: goto L_08A4A6D0;
    case 90u: goto L_08A4A6DC;
    case 91u: goto L_08A4A6E4;
    case 92u: goto L_08A4A6F0;
    case 93u: goto L_08A4A6FC;
    case 94u: goto L_08A4A718;
    case 95u: goto L_08A4A738;
    case 96u: goto L_08A4A774;
    case 97u: goto L_08A4A77C;
    case 98u: goto L_08A4A7A4;
    case 99u: goto L_08A4A7AC;
    case 100u: goto L_08A4A7B4;
    case 101u: goto L_08A4A7C8;
    case 102u: goto L_08A4A7D0;
    case 103u: goto L_08A4A7D8;
    case 104u: goto L_08A4A7E0;
    case 105u: goto L_08A4A7E8;
    case 106u: goto L_08A4A7F0;
    case 107u: goto L_08A4A7F8;
    case 108u: goto L_08A4A800;
    case 109u: goto L_08A4A808;
    case 110u: goto L_08A4A810;
    case 111u: goto L_08A4A818;
    case 112u: goto L_08A4A820;
    case 113u: goto L_08A4A828;
    case 114u: goto L_08A4A830;
    case 115u: goto L_08A4A838;
    case 116u: goto L_08A4A84C;
    case 117u: goto L_08A4A868;
    case 118u: goto L_08A4A87C;
    case 119u: goto L_08A4A8A0;
    case 120u: goto L_08A4A8CC;
    case 121u: goto L_08A4A8D8;
    case 122u: goto L_08A4A8E0;
    case 123u: goto L_08A4A8F8;
    case 124u: goto L_08A4A91C;
    case 125u: goto L_08A4A954;
    case 126u: goto L_08A4A95C;
    case 127u: goto L_08A4A968;
    case 128u: goto L_08A4A974;
    case 129u: goto L_08A4A988;
    case 130u: goto L_08A4A990;
    case 131u: goto L_08A4A9A4;
    case 132u: goto L_08A4A9B4;
    case 133u: goto L_08A4A9C4;
    case 134u: goto L_08A4A9CC;
    case 135u: goto L_08A4A9D0;
    case 136u: goto L_08A4A9D8;
    case 137u: goto L_08A4A9E8;
    case 138u: goto L_08A4A9F4;
    case 139u: goto L_08A4AA00;
    case 140u: goto L_08A4AA2C;
    case 141u: goto L_08A4AA54;
    case 142u: goto L_08A4AA64;
    case 143u: goto L_08A4AA70;
    case 144u: goto L_08A4AA88;
    case 145u: goto L_08A4AAB0;
    case 146u: goto L_08A4AAC0;
    case 147u: goto L_08A4AAD4;
    case 148u: goto L_08A4AADC;
    case 149u: goto L_08A4AAE8;
    case 150u: goto L_08A4AB00;
    case 151u: goto L_08A4AB24;
    case 152u: goto L_08A4AB34;
    case 153u: goto L_08A4AB40;
    case 154u: goto L_08A4AB58;
    case 155u: goto L_08A4AB68;
    case 156u: goto L_08A4AB80;
    case 157u: goto L_08A4ABC4;
    case 158u: goto L_08A4ABD0;
    case 159u: goto L_08A4AC00;
    case 160u: goto L_08A4AC0C;
    case 161u: goto L_08A4AC38;
    case 162u: goto L_08A4AC44;
    case 163u: goto L_08A4AC4C;
    case 164u: goto L_08A4AC5C;
    case 165u: goto L_08A4AC64;
    case 166u: goto L_08A4AC84;
    case 167u: goto L_08A4AC90;
    case 168u: goto L_08A4ACA0;
    case 169u: goto L_08A4ACAC;
    case 170u: goto L_08A4ACB8;
    case 171u: goto L_08A4ACC4;
    case 172u: goto L_08A4ACE4;
    case 173u: goto L_08A4ACF0;
    case 174u: goto L_08A4AD00;
    case 175u: goto L_08A4AD0C;
    case 176u: goto L_08A4AD1C;
    case 177u: goto L_08A4AD28;
    case 178u: goto L_08A4AD34;
    case 179u: goto L_08A4AD54;
    case 180u: goto L_08A4AD60;
    case 181u: goto L_08A4AD70;
    case 182u: goto L_08A4ADD0;
    case 183u: goto L_08A4ADE4;
    case 184u: goto L_08A4ADEC;
    case 185u: goto L_08A4ADF4;
    case 186u: goto L_08A4AE08;
    case 187u: goto L_08A4AE14;
    case 188u: goto L_08A4AE28;
    case 189u: goto L_08A4AE34;
    case 190u: goto L_08A4AE3C;
    case 191u: goto L_08A4AE4C;
    case 192u: goto L_08A4AE78;
    case 193u: goto L_08A4AE84;
    case 194u: goto L_08A4AEA4;
    case 195u: goto L_08A4AEBC;
    case 196u: goto L_08A4AEC4;
    case 197u: goto L_08A4AEE0;
    case 198u: goto L_08A4AEF8;
    case 199u: goto L_08A4AF04;
    case 200u: goto L_08A4AF24;
    case 201u: goto L_08A4AF38;
    case 202u: goto L_08A4AF40;
    case 203u: goto L_08A4AF48;
    case 204u: goto L_08A4AF50;
    case 205u: goto L_08A4AF58;
    case 206u: goto L_08A4AF60;
    case 207u: goto L_08A4AF68;
    case 208u: goto L_08A4AF70;
    case 209u: goto L_08A4AF78;
    case 210u: goto L_08A4AF80;
    case 211u: goto L_08A4AF88;
    case 212u: goto L_08A4AF90;
    case 213u: goto L_08A4AF98;
    case 214u: goto L_08A4AFA0;
    case 215u: goto L_08A4AFA8;
    case 216u: goto L_08A4AFB8;
    case 217u: goto L_08A4AFC4;
    case 218u: goto L_08A4AFD0;
    case 219u: goto L_08A4AFDC;
    case 220u: goto L_08A4AFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4A004:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
      if (branch_taken) {
          goto L_08A4A05C;
      }
      goto L_08A4A018;
    }
L_08A4A018:
    aot_gpr[9] = (32834u << 16u);
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[3] = (aot_gpr[9] | 36u);
      if (branch_taken) {
          goto L_08A4A044;
      }
      goto L_08A4A038;
    }
L_08A4A038:
    aot_gpr[31] = (0x08A4A040u);
    // nop
    ctx.pc = 0x08A5AB64u;
    return;
L_08A4A040:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A4A044;
L_08A4A044:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A05C:
    aot_gpr[31] = (0x08A4A064u);
    // nop
    ctx.pc = 0x08A5AB4Cu;
    return;
L_08A4A064:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08A4A018;
L_08A4A06C:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (32834u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[3] = (aot_gpr[2] | 256u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A4A0D8;
      }
      goto L_08A4A098;
    }
L_08A4A098:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
      if (branch_taken) {
          goto L_08A4A0F0;
      }
      goto L_08A4A0AC;
    }
L_08A4A0AC:
    aot_gpr[9] = (32834u << 16u);
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[3] = (aot_gpr[9] | 36u);
      if (branch_taken) {
          goto L_08A4A0D8;
      }
      goto L_08A4A0CC;
    }
L_08A4A0CC:
    aot_gpr[31] = (0x08A4A0D4u);
    // nop
    ctx.pc = 0x08A5AB44u;
    return;
L_08A4A0D4:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A4A0D8;
L_08A4A0D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A0F0:
    aot_gpr[31] = (0x08A4A0F8u);
    // nop
    ctx.pc = 0x08A5AB4Cu;
    return;
L_08A4A0F8:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_08A4A0AC;
L_08A4A100:
    aot_gpr[3] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-11340)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (32834u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (aot_gpr[2] | 256u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A4A160;
      }
      goto L_08A4A124;
    }
L_08A4A124:
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[3] + 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-11328));
      if (branch_taken) {
          goto L_08A4A174;
      }
      goto L_08A4A138;
    }
L_08A4A138:
    aot_gpr[9] = (32834u << 16u);
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-11328));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[3] = (aot_gpr[9] | 36u);
      if (branch_taken) {
          goto L_08A4A160;
      }
      goto L_08A4A154;
    }
L_08A4A154:
    aot_gpr[31] = (0x08A4A15Cu);
    // nop
    ctx.pc = 0x08A5AAB4u;
    return;
L_08A4A15C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08A4A160;
L_08A4A160:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A174:
    aot_gpr[31] = (0x08A4A17Cu);
    // nop
    ctx.pc = 0x08A5AB4Cu;
    return;
L_08A4A17C:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    goto L_08A4A138;
L_08A4A184:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A1B0;
      }
      goto L_08A4A190;
    }
L_08A4A190:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4A1C8;
      }
      goto L_08A4A1B0;
    }
L_08A4A1B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4A1C8;
L_08A4A1C8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A1D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A1EC;
      }
      goto L_08A4A1DC;
    }
L_08A4A1DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A1F8;
      }
      goto L_08A4A1EC;
    }
L_08A4A1EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A4A1F8;
L_08A4A1F8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A208;
      }
      goto L_08A4A200;
    }
L_08A4A200:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A4A20C;
      }
      goto L_08A4A208;
    }
L_08A4A208:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A4A20C;
L_08A4A20C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A224:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A22C:
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
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
          goto L_08A4A2A4;
      }
      goto L_08A4A25C;
    }
L_08A4A25C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4A27C;
    }
    goto L_08A4A274;
L_08A4A274:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4A27C;
L_08A4A27C:
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
          goto L_08A4A2A8;
      }
      goto L_08A4A2A4;
    }
L_08A4A2A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4A2A8;
L_08A4A2A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A2B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4A338;
      }
      goto L_08A4A2CC;
    }
L_08A4A2CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-14456));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (2176u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x08A4A2F8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(17488));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A2F8u) goto L_08A4A2F8;
    return;
L_08A4A2F8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A4A310;
      }
      goto L_08A4A300;
    }
L_08A4A300:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A4A310;
L_08A4A310:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4A338;
      }
      goto L_08A4A318;
    }
L_08A4A318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4A338u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A338u) goto L_08A4A338;
    return;
L_08A4A338:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A34C:
    aot_gpr[4] = (2218u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] & 255u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4A3E8;
      }
      goto L_08A4A3A4;
    }
L_08A4A3A4:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[22]);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4A3B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A3B4u) goto L_08A4A3B4;
    return;
L_08A4A3B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3C0;
      }
      goto L_08A4A3BC;
    }
L_08A4A3BC:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4A3C0;
L_08A4A3C0:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3A4;
      }
      goto L_08A4A3E8;
    }
L_08A4A3E8:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    aot_gpr[18] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4A408;
      }
      goto L_08A4A3F0;
    }
L_08A4A3F0:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-1)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08A4A408;
L_08A4A408:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A4A430;
L_08A4A430:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4A47C;
      }
      goto L_08A4A438;
    }
L_08A4A438:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4A440u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A440u) goto L_08A4A440;
    return;
L_08A4A440:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A4A47C;
      }
      goto L_08A4A448;
    }
L_08A4A448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4A430;
      }
      goto L_08A4A47C;
    }
L_08A4A47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A4AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4A524;
      }
      goto L_08A4A4D8;
    }
L_08A4A4D8:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[18]) >> 1u));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A4A4F8;
L_08A4A4F8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A4A510u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4A358;
L_08A4A510:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A4A524;
      }
      goto L_08A4A518;
    }
L_08A4A518:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A4F8;
      }
      goto L_08A4A524;
    }
L_08A4A524:
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
L_08A4A540:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-1)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[9] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4A56Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A4A358;
L_08A4A56C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4A5B8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4A4AC;
L_08A4A5B8:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4A610;
      }
      goto L_08A4A5C8;
    }
L_08A4A5C8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A5D4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A5D4u) goto L_08A4A5D4;
    return;
L_08A4A5D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A600;
      }
      goto L_08A4A5DC;
    }
L_08A4A5DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4A600u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4A358;
L_08A4A600:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A5C8;
      }
      goto L_08A4A610;
    }
L_08A4A610:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A644;
      }
      goto L_08A4A620;
    }
L_08A4A620:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A4A624;
L_08A4A624:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4A634u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4A540;
L_08A4A634:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4A624;
      }
      goto L_08A4A644;
    }
L_08A4A644:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A668:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4A67Cu);
    aot_gpr[7] = (0u | 0u);
    goto L_08A4A578;
L_08A4A67C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A688:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4A6B0;
L_08A4A6B0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A6BCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A6BCu) goto L_08A4A6BC;
    return;
L_08A4A6BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6CC;
      }
      goto L_08A4A6C4;
    }
L_08A4A6C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4A6B0;
      }
      goto L_08A4A6CC;
    }
L_08A4A6CC:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    goto L_08A4A6D0;
L_08A4A6D0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A6DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A6DCu) goto L_08A4A6DC;
    return;
L_08A4A6DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6F0;
      }
      goto L_08A4A6E4;
    }
L_08A4A6E4:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4A6D0;
      }
      goto L_08A4A6F0;
    }
L_08A4A6F0:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A718;
      }
      goto L_08A4A6FC;
    }
L_08A4A6FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A4A6B0;
      }
      goto L_08A4A718;
    }
L_08A4A718:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[21]) < 17 ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4A87C;
      }
      goto L_08A4A774;
    }
L_08A4A774:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A7B4;
      }
      goto L_08A4A77C;
    }
L_08A4A77C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[21]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A7A4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A7A4u) goto L_08A4A7A4;
    return;
L_08A4A7A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A4A7D0;
      }
      goto L_08A4A7AC;
    }
L_08A4A7AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4A808;
      }
      goto L_08A4A7B4;
    }
L_08A4A7B4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4A7C8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4A668;
L_08A4A7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A87C;
      }
      goto L_08A4A7D0;
    }
L_08A4A7D0:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A7D8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A7D8u) goto L_08A4A7D8;
    return;
L_08A4A7D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A4A7E8;
      }
      goto L_08A4A7E0;
    }
L_08A4A7E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A838;
      }
      goto L_08A4A7E8;
    }
L_08A4A7E8:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A7F0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A7F0u) goto L_08A4A7F0;
    return;
L_08A4A7F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A800;
      }
      goto L_08A4A7F8;
    }
L_08A4A7F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A838;
      }
      goto L_08A4A800;
    }
L_08A4A800:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A838;
      }
      goto L_08A4A808;
    }
L_08A4A808:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A810u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A810u) goto L_08A4A810;
    return;
L_08A4A810:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A4A820;
      }
      goto L_08A4A818;
    }
L_08A4A818:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A838;
      }
      goto L_08A4A820;
    }
L_08A4A820:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A828u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A828u) goto L_08A4A828;
    return;
L_08A4A828:
    if (aot_gpr[2] == 0u) {
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08A4A838;
    }
    goto L_08A4A830;
L_08A4A830:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A838;
      }
      goto L_08A4A838;
    }
L_08A4A838:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A4A84Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4A688;
L_08A4A84C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4A868u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4A738;
L_08A4A868:
    aot_gpr[18] = (aot_gpr[21] | 0u);
    aot_gpr[21] = (aot_gpr[21] - aot_gpr[19]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A774;
      }
      goto L_08A4A87C;
    }
L_08A4A87C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A8A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4A8CC;
L_08A4A8CC:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4A8D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A8D8u) goto L_08A4A8D8;
    return;
L_08A4A8D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8F8;
      }
      goto L_08A4A8E0;
    }
L_08A4A8E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A4A8CC;
      }
      goto L_08A4A8F8;
    }
L_08A4A8F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4A91C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4A95C;
      }
      goto L_08A4A954;
    }
L_08A4A954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA00;
      }
      goto L_08A4A95C;
    }
L_08A4A95C:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4AA00;
      }
      goto L_08A4A968;
    }
L_08A4A968:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(6))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    goto L_08A4A974;
L_08A4A974:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4A988u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4A988u) goto L_08A4A988;
    return;
L_08A4A988:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4A9D8;
      }
      goto L_08A4A990;
    }
L_08A4A990:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A4A9A4u);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    goto L_08A4ABC4;
L_08A4A9A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A4A9CC;
      }
      goto L_08A4A9B4;
    }
L_08A4A9B4:
    aot_gpr[4] = (aot_gpr[23] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4A9C4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A4A9C4u) goto L_08A4A9C4;
    return;
L_08A4A9C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4A9D0;
      }
      goto L_08A4A9CC;
    }
L_08A4A9CC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A4A9D0;
L_08A4A9D0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[19]));
      if (branch_taken) {
          goto L_08A4A9E8;
      }
      goto L_08A4A9D8;
    }
L_08A4A9D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A4A9E8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A4A8A0;
L_08A4A9E8:
    aot_gpr[19] = (aot_gpr[23] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4A974;
      }
      goto L_08A4A9F4;
    }
L_08A4A9F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[22]));
    goto L_08A4AA00;
L_08A4AA00:
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
L_08A4AA2C:
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
          goto L_08A4AA70;
      }
      goto L_08A4AA54;
    }
L_08A4AA54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4AA64u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4A8A0;
L_08A4AA64:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4AA54;
      }
      goto L_08A4AA70;
    }
L_08A4AA70:
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
L_08A4AA88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4AADC;
      }
      goto L_08A4AAB0;
    }
L_08A4AAB0:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4AAC0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4A91C;
L_08A4AAC0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4AAD4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4AA2C;
L_08A4AAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAE8;
      }
      goto L_08A4AADC;
    }
L_08A4AADC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4AAE8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4A91C;
L_08A4AAE8:
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
L_08A4AB00:
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
          goto L_08A4AB68;
      }
      goto L_08A4AB24;
    }
L_08A4AB24:
    aot_gpr[6] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4AB40;
      }
      goto L_08A4AB34;
    }
L_08A4AB34:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4AB34;
      }
      goto L_08A4AB40;
    }
L_08A4AB40:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4AB58u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4A738;
L_08A4AB58:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4AB68u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4AA88;
L_08A4AB68:
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
L_08A4AB80:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(22188)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(188)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4ABC4:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4ABD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4AC00u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AC00u) goto L_08A4AC00;
    return;
L_08A4AC00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AC0C:
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
    aot_gpr[31] = (0x08A4AC38u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AC38u) goto L_08A4AC38;
    return;
L_08A4AC38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AC44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AC4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4AC84;
      }
      goto L_08A4AC5C;
    }
L_08A4AC5C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4AC84;
      }
      goto L_08A4AC64;
    }
L_08A4AC64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4AC84u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AC84u) goto L_08A4AC84;
    return;
L_08A4AC84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AC90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4ACE4;
      }
      goto L_08A4ACA0;
    }
L_08A4ACA0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4ACB8;
      }
      goto L_08A4ACAC;
    }
L_08A4ACAC:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4ACB8;
L_08A4ACB8:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4ACE4;
      }
      goto L_08A4ACC4;
    }
L_08A4ACC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4ACE4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4ACE4u) goto L_08A4ACE4;
    return;
L_08A4ACE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4ACF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4AD54;
      }
      goto L_08A4AD00;
    }
L_08A4AD00:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-14408));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4AD28;
      }
      goto L_08A4AD0C;
    }
L_08A4AD0C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4AD28;
      }
      goto L_08A4AD1C;
    }
L_08A4AD1C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4AD28;
L_08A4AD28:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4AD54;
      }
      goto L_08A4AD34;
    }
L_08A4AD34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4AD54u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AD54u) goto L_08A4AD54;
    return;
L_08A4AD54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AD60:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AD70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4AE4C;
      }
      goto L_08A4ADD0;
    }
L_08A4ADD0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A4ADE4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    goto L_08A4AD60;
L_08A4ADE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE08;
      }
      goto L_08A4ADEC;
    }
L_08A4ADEC:
    aot_gpr[31] = (0x08A4ADF4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A4ADF4u) goto L_08A4ADF4;
    return;
L_08A4ADF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A4AE3C;
      }
      goto L_08A4AE08;
    }
L_08A4AE08:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4AE34;
      }
      goto L_08A4AE14;
    }
L_08A4AE14:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4AE28u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 10u, 0x08913304u>(ctx, &aot_mem) && ctx.pc == 0x08A4AE28u) goto L_08A4AE28;
    return;
L_08A4AE28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A4AE34;
L_08A4AE34:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A4AE3C;
L_08A4AE3C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4ADD0;
      }
      goto L_08A4AE4C;
    }
L_08A4AE4C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A4AE78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AEA4;
      }
      goto L_08A4AE84;
    }
L_08A4AE84:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4AEBC;
      }
      goto L_08A4AEA4;
    }
L_08A4AEA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4AEBC;
L_08A4AEBC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AEC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4AF24;
      }
      goto L_08A4AEE0;
    }
L_08A4AEE0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24648));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4AEF8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08A4AEF8u) goto L_08A4AEF8;
    return;
L_08A4AEF8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4AF24;
      }
      goto L_08A4AF04;
    }
L_08A4AF04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4AF24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AF24u) goto L_08A4AF24;
    return;
L_08A4AF24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF40:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF48:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF50:
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AF98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AFA0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AFA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4AFFC;
      }
      goto L_08A4AFB8;
    }
L_08A4AFB8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13984));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4AFD0;
      }
      goto L_08A4AFC4;
    }
L_08A4AFC4:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08A4AFD0;
L_08A4AFD0:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4AFFC;
      }
      goto L_08A4AFDC;
    }
L_08A4AFDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4AFFCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AFFCu) goto L_08A4AFFC;
    return;
L_08A4AFFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A4B000u; return;
}

void recomp_unit_0582(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0582_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_582(Runtime &runtime) {
    runtime.register_generated_unit(582u, 0x08A4A000u, 4096u, &recomp_unit_0582, &recomp_unit_0582_entry);
    runtime.register_function(0x08A4A004u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A018u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A038u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A040u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A044u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A05Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A064u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A06Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A098u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A0ACu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A0CCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A0D4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A0D8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A0F0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A0F8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A100u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A124u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A138u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A154u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A15Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A160u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A174u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A17Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A184u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A190u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A1B0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A1C8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A1D0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A1DCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A1ECu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A1F8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A200u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A208u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A20Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A224u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A22Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A25Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A274u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A27Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A2A4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A2A8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A2B0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A2CCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A2F8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A300u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A310u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A318u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A338u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A34Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A358u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A3A4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A3B4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A3BCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A3C0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A3E8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A3F0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A408u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A430u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A438u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A440u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A448u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A47Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A4ACu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A4D8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A4F8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A510u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A518u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A524u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A540u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A56Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A578u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A5B8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A5C8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A5D4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A5DCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A600u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A610u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A620u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A624u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A634u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A644u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A668u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A67Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A688u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6B0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6BCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6C4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6CCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6D0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6DCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6E4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6F0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A6FCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A718u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A738u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A774u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A77Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7A4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7ACu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7B4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7C8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7D0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7D8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7E0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7E8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7F0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A7F8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A800u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A808u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A810u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A818u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A820u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A828u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A830u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A838u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A84Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A868u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A87Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A8A0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A8CCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A8D8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A8E0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A8F8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A91Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A954u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A95Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A968u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A974u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A988u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A990u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9A4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9B4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9C4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9CCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9D0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9D8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9E8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4A9F4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AA00u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AA2Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AA54u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AA64u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AA70u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AA88u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AAB0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AAC0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AAD4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AADCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AAE8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB00u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB24u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB34u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB40u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB58u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB68u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AB80u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ABC4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ABD0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC00u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC0Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC38u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC44u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC4Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC5Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC64u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC84u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AC90u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ACA0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ACACu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ACB8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ACC4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ACE4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ACF0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD00u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD0Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD1Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD28u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD34u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD54u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD60u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AD70u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ADD0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ADE4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ADECu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4ADF4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE08u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE14u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE28u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE34u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE3Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE4Cu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE78u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AE84u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AEA4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AEBCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AEC4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AEE0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AEF8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF04u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF24u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF38u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF40u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF48u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF50u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF58u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF60u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF68u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF70u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF78u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF80u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF88u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF90u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AF98u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFA0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFA8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFB8u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFC4u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFD0u, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFDCu, &recomp_unit_0582, "recomp_unit_0582");
    runtime.register_function(0x08A4AFFCu, &recomp_unit_0582, "recomp_unit_0582");
}
} // namespace psprecomp
