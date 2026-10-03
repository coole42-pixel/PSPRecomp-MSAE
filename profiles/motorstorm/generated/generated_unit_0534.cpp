#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0534[1023] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0,
    0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89,
    0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 107, 108, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 113, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    133, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0,
    0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 157, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 167, 0, 0, 0, 168, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 185, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 190, 0, 191, 0, 192, 0,
    0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 201, 202, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219,
};
void recomp_unit_0534_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A1A000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0534[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1A000;
    case 2u: goto L_08A1A008;
    case 3u: goto L_08A1A02C;
    case 4u: goto L_08A1A034;
    case 5u: goto L_08A1A040;
    case 6u: goto L_08A1A048;
    case 7u: goto L_08A1A050;
    case 8u: goto L_08A1A06C;
    case 9u: goto L_08A1A074;
    case 10u: goto L_08A1A088;
    case 11u: goto L_08A1A090;
    case 12u: goto L_08A1A0AC;
    case 13u: goto L_08A1A0BC;
    case 14u: goto L_08A1A0D0;
    case 15u: goto L_08A1A0D8;
    case 16u: goto L_08A1A0E4;
    case 17u: goto L_08A1A0F4;
    case 18u: goto L_08A1A108;
    case 19u: goto L_08A1A12C;
    case 20u: goto L_08A1A140;
    case 21u: goto L_08A1A14C;
    case 22u: goto L_08A1A15C;
    case 23u: goto L_08A1A168;
    case 24u: goto L_08A1A17C;
    case 25u: goto L_08A1A190;
    case 26u: goto L_08A1A1D4;
    case 27u: goto L_08A1A1E0;
    case 28u: goto L_08A1A1F8;
    case 29u: goto L_08A1A1FC;
    case 30u: goto L_08A1A228;
    case 31u: goto L_08A1A230;
    case 32u: goto L_08A1A268;
    case 33u: goto L_08A1A290;
    case 34u: goto L_08A1A29C;
    case 35u: goto L_08A1A2B0;
    case 36u: goto L_08A1A2BC;
    case 37u: goto L_08A1A2D0;
    case 38u: goto L_08A1A2E4;
    case 39u: goto L_08A1A2F0;
    case 40u: goto L_08A1A304;
    case 41u: goto L_08A1A310;
    case 42u: goto L_08A1A324;
    case 43u: goto L_08A1A32C;
    case 44u: goto L_08A1A330;
    case 45u: goto L_08A1A354;
    case 46u: goto L_08A1A37C;
    case 47u: goto L_08A1A384;
    case 48u: goto L_08A1A38C;
    case 49u: goto L_08A1A3A8;
    case 50u: goto L_08A1A3B4;
    case 51u: goto L_08A1A3CC;
    case 52u: goto L_08A1A418;
    case 53u: goto L_08A1A424;
    case 54u: goto L_08A1A43C;
    case 55u: goto L_08A1A458;
    case 56u: goto L_08A1A470;
    case 57u: goto L_08A1A47C;
    case 58u: goto L_08A1A484;
    case 59u: goto L_08A1A498;
    case 60u: goto L_08A1A4AC;
    case 61u: goto L_08A1A4B4;
    case 62u: goto L_08A1A4D0;
    case 63u: goto L_08A1A4E0;
    case 64u: goto L_08A1A4F4;
    case 65u: goto L_08A1A4FC;
    case 66u: goto L_08A1A508;
    case 67u: goto L_08A1A518;
    case 68u: goto L_08A1A564;
    case 69u: goto L_08A1A5B0;
    case 70u: goto L_08A1A5CC;
    case 71u: goto L_08A1A5EC;
    case 72u: goto L_08A1A624;
    case 73u: goto L_08A1A62C;
    case 74u: goto L_08A1A638;
    case 75u: goto L_08A1A640;
    case 76u: goto L_08A1A64C;
    case 77u: goto L_08A1A654;
    case 78u: goto L_08A1A660;
    case 79u: goto L_08A1A668;
    case 80u: goto L_08A1A674;
    case 81u: goto L_08A1A67C;
    case 82u: goto L_08A1A680;
    case 83u: goto L_08A1A6A8;
    case 84u: goto L_08A1A6B0;
    case 85u: goto L_08A1A6D0;
    case 86u: goto L_08A1A6DC;
    case 87u: goto L_08A1A6E4;
    case 88u: goto L_08A1A6EC;
    case 89u: goto L_08A1A6FC;
    case 90u: goto L_08A1A708;
    case 91u: goto L_08A1A710;
    case 92u: goto L_08A1A718;
    case 93u: goto L_08A1A728;
    case 94u: goto L_08A1A730;
    case 95u: goto L_08A1A738;
    case 96u: goto L_08A1A740;
    case 97u: goto L_08A1A748;
    case 98u: goto L_08A1A750;
    case 99u: goto L_08A1A758;
    case 100u: goto L_08A1A764;
    case 101u: goto L_08A1A778;
    case 102u: goto L_08A1A7B4;
    case 103u: goto L_08A1A7CC;
    case 104u: goto L_08A1A7D4;
    case 105u: goto L_08A1A7EC;
    case 106u: goto L_08A1A800;
    case 107u: goto L_08A1A80C;
    case 108u: goto L_08A1A810;
    case 109u: goto L_08A1A814;
    case 110u: goto L_08A1A82C;
    case 111u: goto L_08A1A83C;
    case 112u: goto L_08A1A848;
    case 113u: goto L_08A1A84C;
    case 114u: goto L_08A1A85C;
    case 115u: goto L_08A1A860;
    case 116u: goto L_08A1A880;
    case 117u: goto L_08A1A8A0;
    case 118u: goto L_08A1A8B4;
    case 119u: goto L_08A1A8C4;
    case 120u: goto L_08A1A8CC;
    case 121u: goto L_08A1A8D4;
    case 122u: goto L_08A1A908;
    case 123u: goto L_08A1A910;
    case 124u: goto L_08A1A918;
    case 125u: goto L_08A1A950;
    case 126u: goto L_08A1A958;
    case 127u: goto L_08A1A970;
    case 128u: goto L_08A1A988;
    case 129u: goto L_08A1A9C0;
    case 130u: goto L_08A1A9C8;
    case 131u: goto L_08A1A9E0;
    case 132u: goto L_08A1A9F4;
    case 133u: goto L_08A1AA00;
    case 134u: goto L_08A1AA04;
    case 135u: goto L_08A1AA18;
    case 136u: goto L_08A1AA48;
    case 137u: goto L_08A1AA50;
    case 138u: goto L_08A1AA68;
    case 139u: goto L_08A1AA80;
    case 140u: goto L_08A1AA90;
    case 141u: goto L_08A1AAA4;
    case 142u: goto L_08A1AABC;
    case 143u: goto L_08A1AAD4;
    case 144u: goto L_08A1AAE4;
    case 145u: goto L_08A1AAF4;
    case 146u: goto L_08A1AB1C;
    case 147u: goto L_08A1AB2C;
    case 148u: goto L_08A1AB38;
    case 149u: goto L_08A1AB40;
    case 150u: goto L_08A1AB68;
    case 151u: goto L_08A1AB70;
    case 152u: goto L_08A1AB78;
    case 153u: goto L_08A1AB84;
    case 154u: goto L_08A1AB8C;
    case 155u: goto L_08A1AB94;
    case 156u: goto L_08A1ABA4;
    case 157u: goto L_08A1ABB0;
    case 158u: goto L_08A1ABB4;
    case 159u: goto L_08A1ABBC;
    case 160u: goto L_08A1ABD8;
    case 161u: goto L_08A1ABE0;
    case 162u: goto L_08A1ABE8;
    case 163u: goto L_08A1AC10;
    case 164u: goto L_08A1AC20;
    case 165u: goto L_08A1AC48;
    case 166u: goto L_08A1AC84;
    case 167u: goto L_08A1AC8C;
    case 168u: goto L_08A1AC9C;
    case 169u: goto L_08A1ACA0;
    case 170u: goto L_08A1ACB0;
    case 171u: goto L_08A1ACC4;
    case 172u: goto L_08A1ACCC;
    case 173u: goto L_08A1ACD8;
    case 174u: goto L_08A1ACE0;
    case 175u: goto L_08A1ACE8;
    case 176u: goto L_08A1ACF4;
    case 177u: goto L_08A1AD0C;
    case 178u: goto L_08A1AD28;
    case 179u: goto L_08A1AD34;
    case 180u: goto L_08A1AD40;
    case 181u: goto L_08A1AD4C;
    case 182u: goto L_08A1AD54;
    case 183u: goto L_08A1AD60;
    case 184u: goto L_08A1AD68;
    case 185u: goto L_08A1AD6C;
    case 186u: goto L_08A1AD74;
    case 187u: goto L_08A1AD9C;
    case 188u: goto L_08A1ADDC;
    case 189u: goto L_08A1ADE4;
    case 190u: goto L_08A1ADE8;
    case 191u: goto L_08A1ADF0;
    case 192u: goto L_08A1ADF8;
    case 193u: goto L_08A1AE04;
    case 194u: goto L_08A1AE0C;
    case 195u: goto L_08A1AE14;
    case 196u: goto L_08A1AE20;
    case 197u: goto L_08A1AE3C;
    case 198u: goto L_08A1AE58;
    case 199u: goto L_08A1AE74;
    case 200u: goto L_08A1AE80;
    case 201u: goto L_08A1AE9C;
    case 202u: goto L_08A1AEA0;
    case 203u: goto L_08A1AEA4;
    case 204u: goto L_08A1AEAC;
    case 205u: goto L_08A1AECC;
    case 206u: goto L_08A1AEE4;
    case 207u: goto L_08A1AEF0;
    case 208u: goto L_08A1AEF8;
    case 209u: goto L_08A1AF14;
    case 210u: goto L_08A1AF28;
    case 211u: goto L_08A1AF3C;
    case 212u: goto L_08A1AF44;
    case 213u: goto L_08A1AF54;
    case 214u: goto L_08A1AF68;
    case 215u: goto L_08A1AFB8;
    case 216u: goto L_08A1AFC4;
    case 217u: goto L_08A1AFD4;
    case 218u: goto L_08A1AFE0;
    case 219u: goto L_08A1AFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1A000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1A050;
      }
      goto L_08A1A02C;
    }
L_08A1A02C:
    aot_gpr[31] = (0x08A1A034u);
    aot_gpr[4] = (0u | 12u);
    goto L_08A1A074;
L_08A1A034:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-17984), aot_gpr[17]);
        goto L_08A1A050;
    }
    goto L_08A1A040;
L_08A1A040:
    aot_gpr[31] = (0x08A1A048u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1A0F4;
L_08A1A048:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-17984), aot_gpr[17]);
    goto L_08A1A050;
L_08A1A050:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17984)));
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
L_08A1A06C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A088u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A088u) goto L_08A1A088;
    return;
L_08A1A088:
    aot_gpr[31] = (0x08A1A090u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A090u) goto L_08A1A090;
    return;
L_08A1A090:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 24u);
    aot_gpr[31] = (0x08A1A0ACu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1152));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A0ACu) goto L_08A1A0AC;
    return;
L_08A1A0AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A0BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A0D0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A0D0u) goto L_08A1A0D0;
    return;
L_08A1A0D0:
    aot_gpr[31] = (0x08A1A0D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A0D8u) goto L_08A1A0D8;
    return;
L_08A1A0D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1A0E4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1A0E4u) goto L_08A1A0E4;
    return;
L_08A1A0E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A108u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1A108u) goto L_08A1A108;
    return;
L_08A1A108:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15976));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A12C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A140u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A140u) goto L_08A1A140;
    return;
L_08A1A140:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1A14Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A14Cu) goto L_08A1A14C;
    return;
L_08A1A14C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1A15Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A15Cu) goto L_08A1A15C;
    return;
L_08A1A15C:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A17C;
      }
      goto L_08A1A168;
    }
L_08A1A168:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A17C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A190:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A1D4u);
    aot_gpr[4] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A1D4u) goto L_08A1A1D4;
    return;
L_08A1A1D4:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A1FC;
      }
      goto L_08A1A1E0;
    }
L_08A1A1E0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1A1F8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    goto L_08A1A230;
L_08A1A1F8:
    aot_gpr[22] = (aot_gpr[21] | 0u);
    goto L_08A1A1FC;
L_08A1A1FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[22]);
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
L_08A1A228:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A230:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A268u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A268u) goto L_08A1A268;
    return;
L_08A1A268:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16048));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x08A1A290u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1A38C;
L_08A1A290:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A1A29Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-1088));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A29Cu) goto L_08A1A29C;
    return;
L_08A1A29C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1A2B0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A2B0u) goto L_08A1A2B0;
    return;
L_08A1A2B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A1A2BCu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-1084));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A2BCu) goto L_08A1A2BC;
    return;
L_08A1A2BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1A2D0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A2D0u) goto L_08A1A2D0;
    return;
L_08A1A2D0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1A2E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1068));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 129u, 0x08A008A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1A2E4u) goto L_08A1A2E4;
    return;
L_08A1A2E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A1A2F0u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-1056));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A2F0u) goto L_08A1A2F0;
    return;
L_08A1A2F0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1A304u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A304u) goto L_08A1A304;
    return;
L_08A1A304:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A1A310u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-1028));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A310u) goto L_08A1A310;
    return;
L_08A1A310:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1A324u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A324u) goto L_08A1A324;
    return;
L_08A1A324:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1A330;
      }
      goto L_08A1A32C;
    }
L_08A1A32C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08A1A330;
L_08A1A330:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1A354u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0535_entry, 535u, 63u, 0x08A1B3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A1A354u) goto L_08A1A354;
    return;
L_08A1A354:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A37C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A384:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A38C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A3A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A3A8u) goto L_08A1A3A8;
    return;
L_08A1A3A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A3CCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 53u, 0x08A032C0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A3CCu) goto L_08A1A3CC;
    return;
L_08A1A3CC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16184));
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-6232), 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6228), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6227), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6226), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(5452));
    aot_gpr[6] = (0u | 53840u);
    aot_gpr[31] = (0x08A1A418u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A418u) goto L_08A1A418;
    return;
L_08A1A418:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-6232), 0u);
    aot_gpr[31] = (0x08A1A424u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1A518;
L_08A1A424:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A43C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1A484;
      }
      goto L_08A1A458;
    }
L_08A1A458:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16184));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1A470u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 54u, 0x08A032E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A470u) goto L_08A1A470;
    return;
L_08A1A470:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A484;
      }
      goto L_08A1A47C;
    }
L_08A1A47C:
    aot_gpr[31] = (0x08A1A484u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1A4E0;
L_08A1A484:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A4ACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A4ACu) goto L_08A1A4AC;
    return;
L_08A1A4AC:
    aot_gpr[31] = (0x08A1A4B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A4B4u) goto L_08A1A4B4;
    return;
L_08A1A4B4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 61u);
    aot_gpr[31] = (0x08A1A4D0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-984));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A4D0u) goto L_08A1A4D0;
    return;
L_08A1A4D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A4E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A4F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A4F4u) goto L_08A1A4F4;
    return;
L_08A1A4F4:
    aot_gpr[31] = (0x08A1A4FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A4FCu) goto L_08A1A4FC;
    return;
L_08A1A4FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1A508u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1A508u) goto L_08A1A508;
    return;
L_08A1A508:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6244), 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6240), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6236), 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (0u | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A564u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-948));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08A1A564u) goto L_08A1A564;
    return;
L_08A1A564:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-99));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6224), aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6220), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 59324u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6216), 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1A5B0u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A5B0u) goto L_08A1A5B0;
    return;
L_08A1A5B0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5952), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1A5CCu);
    aot_gpr[6] = (0u | 5384u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A5CCu) goto L_08A1A5CC;
    return;
L_08A1A5CC:
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5948), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A5EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 77u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-940));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    goto L_08A1A624;
L_08A1A624:
    aot_gpr[31] = (0x08A1A62Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A1A62Cu) goto L_08A1A62C;
    return;
L_08A1A62C:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1A680;
      }
      goto L_08A1A638;
    }
L_08A1A638:
    aot_gpr[31] = (0x08A1A640u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A1A640u) goto L_08A1A640;
    return;
L_08A1A640:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A6A8;
      }
      goto L_08A1A64C;
    }
L_08A1A64C:
    aot_gpr[31] = (0x08A1A654u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1A654u) goto L_08A1A654;
    return;
L_08A1A654:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A1A6A8;
      }
      goto L_08A1A660;
    }
L_08A1A660:
    aot_gpr[31] = (0x08A1A668u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1A668u) goto L_08A1A668;
    return;
L_08A1A668:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1A674u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A674u) goto L_08A1A674;
    return;
L_08A1A674:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A6A8;
      }
      goto L_08A1A67C;
    }
L_08A1A67C:
    aot_gpr[20] = (0u | 1u);
    goto L_08A1A680;
L_08A1A680:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A1A6A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1A624;
      }
      goto L_08A1A6B0;
    }
L_08A1A6B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A6D0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 107u, 0x08A03678u>(ctx, &aot_mem) && ctx.pc == 0x08A1A6D0u) goto L_08A1A6D0;
    return;
L_08A1A6D0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1A6DCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 65u, 0x08A033ACu>(ctx, &aot_mem) && ctx.pc == 0x08A1A6DCu) goto L_08A1A6DC;
    return;
L_08A1A6DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A764;
      }
      goto L_08A1A6E4;
    }
L_08A1A6E4:
    aot_gpr[31] = (0x08A1A6ECu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 110u, 0x08A036A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A6ECu) goto L_08A1A6EC;
    return;
L_08A1A6EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 18 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_08A1A730;
      }
      goto L_08A1A6FC;
    }
L_08A1A6FC:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1A764;
      }
      goto L_08A1A708;
    }
L_08A1A708:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1A740;
      }
      goto L_08A1A710;
    }
L_08A1A710:
    aot_gpr[31] = (0x08A1A718u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 109u, 0x08A036A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A718u) goto L_08A1A718;
    return;
L_08A1A718:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1A728u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A1A778;
L_08A1A728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A764;
      }
      goto L_08A1A730;
    }
L_08A1A730:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1A750;
      }
      goto L_08A1A738;
    }
L_08A1A738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A764;
      }
      goto L_08A1A740;
    }
L_08A1A740:
    aot_gpr[31] = (0x08A1A748u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1A880;
L_08A1A748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A764;
      }
      goto L_08A1A750;
    }
L_08A1A750:
    aot_gpr[31] = (0x08A1A758u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 109u, 0x08A036A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A758u) goto L_08A1A758;
    return;
L_08A1A758:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1A764u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A1A988;
L_08A1A764:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (1u << 16u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[19];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1A810;
      }
      goto L_08A1A7B4;
    }
L_08A1A7B4:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6240)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1A814;
      }
      goto L_08A1A7CC;
    }
L_08A1A7CC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1A814;
      }
      goto L_08A1A7D4;
    }
L_08A1A7D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1A7ECu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A7ECu) goto L_08A1A7EC;
    return;
L_08A1A7EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-916)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1A814;
      }
      goto L_08A1A800;
    }
L_08A1A800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1A814;
      }
      goto L_08A1A80C;
    }
L_08A1A80C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    goto L_08A1A810;
L_08A1A810:
    aot_gpr[4] = (1u << 16u);
    goto L_08A1A814;
L_08A1A814:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6216), aot_gpr[19]);
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[18] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1A860;
      }
      goto L_08A1A82C;
    }
L_08A1A82C:
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6220)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1A84C;
      }
      goto L_08A1A83C;
    }
L_08A1A83C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1A848u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A1AECC;
L_08A1A848:
    aot_gpr[4] = (1u << 16u);
    goto L_08A1A84C;
L_08A1A84C:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6236)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A860;
      }
      goto L_08A1A85C;
    }
L_08A1A85C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-6220), 0u);
    goto L_08A1A860;
L_08A1A860:
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
L_08A1A880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A1A8A0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1A8A0u) goto L_08A1A8A0;
    return;
L_08A1A8A0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6220)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1A958;
      }
      goto L_08A1A8B4;
    }
L_08A1A8B4:
    aot_gpr[18] = (0u | 59324u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[31] = (0x08A1A8C4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1A8C4u) goto L_08A1A8C4;
    return;
L_08A1A8C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A910;
      }
      goto L_08A1A8CC;
    }
L_08A1A8CC:
    aot_gpr[31] = (0x08A1A8D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A8D4u) goto L_08A1A8D4;
    return;
L_08A1A8D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-908));
    aot_gpr[6] = (0u | 9u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1A908u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A908u) goto L_08A1A908;
    return;
L_08A1A908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A970;
      }
      goto L_08A1A910;
    }
L_08A1A910:
    aot_gpr[31] = (0x08A1A918u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A918u) goto L_08A1A918;
    return;
L_08A1A918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5952)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1A950u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A950u) goto L_08A1A950;
    return;
L_08A1A950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A970;
      }
      goto L_08A1A958;
    }
L_08A1A958:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6220), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1A970u);
    aot_gpr[6] = (0u | 0u);
    goto L_08A1AD9C;
L_08A1A970:
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
L_08A1A988:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (1u << 16u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[8] = (1u << 16u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-6216), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-6244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1AA04;
      }
      goto L_08A1A9C0;
    }
L_08A1A9C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AA04;
      }
      goto L_08A1A9C8;
    }
L_08A1A9C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1A9E0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A9E0u) goto L_08A1A9E0;
    return;
L_08A1A9E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-916)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1AA04;
      }
      goto L_08A1A9F4;
    }
L_08A1A9F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A1AA04;
      }
      goto L_08A1AA00;
    }
L_08A1AA00:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    goto L_08A1AA04;
L_08A1AA04:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AA18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1AA48u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AA48u) goto L_08A1AA48;
    return;
L_08A1AA48:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AA90;
      }
      goto L_08A1AA50;
    }
L_08A1AA50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1AA68u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AA68u) goto L_08A1AA68;
    return;
L_08A1AA68:
    aot_gpr[17] = (1u << 16u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-6224)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[6] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1AA90;
      }
      goto L_08A1AA80;
    }
L_08A1AA80:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-6216), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-6224), aot_gpr[4]);
    goto L_08A1AA90;
L_08A1AA90:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AAA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1AABCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 128u, 0x08A1D8A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1AABCu) goto L_08A1AABC;
    return;
L_08A1AABC:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6224)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[7] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1AAE4;
      }
      goto L_08A1AAD4;
    }
L_08A1AAD4:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-6216), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6224), aot_gpr[5]);
    goto L_08A1AAE4;
L_08A1AAE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AAF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A1AB1Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB1Cu) goto L_08A1AB1C;
    return;
L_08A1AB1C:
    aot_gpr[20] = (0u | 1u);
    aot_gpr[19] = (0u | 10u);
    aot_gpr[31] = (0x08A1AB2Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 11u, 0x089FF0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB2Cu) goto L_08A1AB2C;
    return;
L_08A1AB2C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1AB40;
      }
      goto L_08A1AB38;
    }
L_08A1AB38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(10576));
      if (branch_taken) {
          goto L_08A1AB68;
      }
      goto L_08A1AB40;
    }
L_08A1AB40:
    aot_gpr[2] = (0u | 10u);
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
L_08A1AB68:
    aot_gpr[31] = (0x08A1AB70u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB70u) goto L_08A1AB70;
    return;
L_08A1AB70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1AB84;
      }
      goto L_08A1AB78;
    }
L_08A1AB78:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (static_cast<std::int32_t>(aot_gpr[19]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1ABB4;
      }
      goto L_08A1AB84;
    }
L_08A1AB84:
    aot_gpr[31] = (0x08A1AB8Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AB8Cu) goto L_08A1AB8C;
    return;
L_08A1AB8C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A1ABA4;
    }
    goto L_08A1AB94;
L_08A1AB94:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[20] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (static_cast<std::int32_t>(aot_gpr[19]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1ABB4;
      }
      goto L_08A1ABA4;
    }
L_08A1ABA4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(5384));
      if (branch_taken) {
          goto L_08A1AB68;
      }
      goto L_08A1ABB0;
    }
L_08A1ABB0:
    aot_gpr[17] = (0u | 0u);
    goto L_08A1ABB4;
L_08A1ABB4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5384));
      if (branch_taken) {
          goto L_08A1ABE8;
      }
      goto L_08A1ABBC;
    }
L_08A1ABBC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 257u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x08A1ABD8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10576));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1ABD8u) goto L_08A1ABD8;
    return;
L_08A1ABD8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1AC10;
      }
      goto L_08A1ABE0;
    }
L_08A1ABE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AC20;
      }
      goto L_08A1ABE8;
    }
L_08A1ABE8:
    aot_gpr[2] = (0u | 10u);
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
L_08A1AC10:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6232)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6232), aot_gpr[5]);
    goto L_08A1AC20;
L_08A1AC20:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A1AC48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(2628));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1AC8C;
      }
      goto L_08A1AC84;
    }
L_08A1AC84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08A1ACA0;
      }
      goto L_08A1AC8C;
    }
L_08A1AC8C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1AC9Cu);
    aot_gpr[6] = (0u | 2560u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AC9Cu) goto L_08A1AC9C;
    return;
L_08A1AC9C:
    aot_gpr[19] = (aot_gpr[21] | 0u);
    goto L_08A1ACA0;
L_08A1ACA0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1ACB0u);
    aot_gpr[6] = (0u | 2560u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1ACB0u) goto L_08A1ACB0;
    return;
L_08A1ACB0:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-904));
    goto L_08A1ACC4;
L_08A1ACC4:
    aot_gpr[31] = (0x08A1ACCCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A1ACCCu) goto L_08A1ACCC;
    return;
L_08A1ACCC:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(128) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1AD74;
      }
      goto L_08A1ACD8;
    }
L_08A1ACD8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1AD74;
      }
      goto L_08A1ACE0;
    }
L_08A1ACE0:
    aot_gpr[31] = (0x08A1ACE8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A1ACE8u) goto L_08A1ACE8;
    return;
L_08A1ACE8:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AD6C;
      }
      goto L_08A1ACF4;
    }
L_08A1ACF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1AD0Cu);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AD0Cu) goto L_08A1AD0C;
    return;
L_08A1AD0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1AD28u);
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AD28u) goto L_08A1AD28;
    return;
L_08A1AD28:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08A1AD34u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 239u, 0x08A00FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A1AD34u) goto L_08A1AD34;
    return;
L_08A1AD34:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08A1AD40u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1AD40u) goto L_08A1AD40;
    return;
L_08A1AD40:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1AD4Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AD4Cu) goto L_08A1AD4C;
    return;
L_08A1AD4C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08A1AD68;
    }
    goto L_08A1AD54;
L_08A1AD54:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[31] = (0x08A1AD60u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 128u, 0x08A1D8A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1AD60u) goto L_08A1AD60;
    return;
L_08A1AD60:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A1AD68;
L_08A1AD68:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    goto L_08A1AD6C;
L_08A1AD6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1ACC4;
      }
      goto L_08A1AD74;
    }
L_08A1AD74:
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
L_08A1AD9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (1u << 16u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-6216), 0u);
    aot_gpr[7] = (1u << 16u);
    aot_gpr[8] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-6220), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1ADE4;
      }
      goto L_08A1ADDC;
    }
L_08A1ADDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08A1ADE8;
      }
      goto L_08A1ADE4;
    }
L_08A1ADE4:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(2628));
    goto L_08A1ADE8;
L_08A1ADE8:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    goto L_08A1ADF0;
L_08A1ADF0:
    aot_gpr[31] = (0x08A1ADF8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A1ADF8u) goto L_08A1ADF8;
    return;
L_08A1ADF8:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(128) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1AEAC;
      }
      goto L_08A1AE04;
    }
L_08A1AE04:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1AEAC;
      }
      goto L_08A1AE0C;
    }
L_08A1AE0C:
    aot_gpr[31] = (0x08A1AE14u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A1AE14u) goto L_08A1AE14;
    return;
L_08A1AE14:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEA4;
      }
      goto L_08A1AE20;
    }
L_08A1AE20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1AE3Cu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AE3Cu) goto L_08A1AE3C;
    return;
L_08A1AE3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1AE58u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AE58u) goto L_08A1AE58;
    return;
L_08A1AE58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1AE74u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AE74u) goto L_08A1AE74;
    return;
L_08A1AE74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A1AEA0;
    }
    goto L_08A1AE80;
L_08A1AE80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1AE9Cu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AE9Cu) goto L_08A1AE9C;
    return;
L_08A1AE9C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A1AEA0;
L_08A1AEA0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    goto L_08A1AEA4;
L_08A1AEA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1ADF0;
      }
      goto L_08A1AEAC;
    }
L_08A1AEAC:
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
L_08A1AECC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1AEE4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A1AAF4;
L_08A1AEE4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1AF54;
      }
      goto L_08A1AEF0;
    }
L_08A1AEF0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5384));
      if (branch_taken) {
          goto L_08A1AF54;
      }
      goto L_08A1AEF8;
    }
L_08A1AEF8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[6] = (0u | 2560u);
    aot_gpr[17] = (ctx.lo);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[31] = (0x08A1AF14u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(5452));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF14u) goto L_08A1AF14;
    return;
L_08A1AF14:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6220)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8012));
      if (branch_taken) {
          goto L_08A1AF44;
      }
      goto L_08A1AF28;
    }
L_08A1AF28:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(10572), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2628));
    aot_gpr[31] = (0x08A1AF3Cu);
    aot_gpr[6] = (0u | 2560u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF3Cu) goto L_08A1AF3C;
    return;
L_08A1AF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF54;
      }
      goto L_08A1AF44;
    }
L_08A1AF44:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(10572), 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1AF54u);
    aot_gpr[6] = (0u | 2560u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AF54u) goto L_08A1AF54;
    return;
L_08A1AF54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AF68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (1u << 16u);
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-6232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (0u | 10u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0535_entry, 535u, 2u, 0x08A1B014u>(ctx, &aot_mem); return;
      }
      goto L_08A1AFB8;
    }
L_08A1AFB8:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(10576));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-892));
    goto L_08A1AFC4;
L_08A1AFC4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A1AFD4u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 149u, 0x08A00A14u>(ctx, &aot_mem) && ctx.pc == 0x08A1AFD4u) goto L_08A1AFD4;
    return;
L_08A1AFD4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-6232)));
        (void)rt.invoke_chained_direct<&recomp_unit_0535_entry, 535u, 1u, 0x08A1B004u>(ctx, &aot_mem); return;
    }
    goto L_08A1AFE0;
L_08A1AFE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1AFF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1AFF8u) goto L_08A1AFF8;
    return;
L_08A1AFF8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0535_entry, 535u, 2u, 0x08A1B014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0535_entry, 535u, 1u, 0x08A1B004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0534(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0534_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_534(Runtime &runtime) {
    runtime.register_generated_unit(534u, 0x08A1A000u, 4096u, &recomp_unit_0534, &recomp_unit_0534_entry);
    runtime.register_function(0x08A1A000u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A008u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A02Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A034u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A040u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A048u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A050u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A06Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A074u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A088u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A090u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A0ACu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A0BCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A0D0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A0D8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A0E4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A0F4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A108u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A12Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A140u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A14Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A15Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A168u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A17Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A190u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A1D4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A1E0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A1F8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A1FCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A228u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A230u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A268u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A290u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A29Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A2B0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A2BCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A2D0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A2E4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A2F0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A304u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A310u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A324u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A32Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A330u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A354u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A37Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A384u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A38Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A3A8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A3B4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A3CCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A418u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A424u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A43Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A458u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A470u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A47Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A484u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A498u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A4ACu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A4B4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A4D0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A4E0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A4F4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A4FCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A508u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A518u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A564u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A5B0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A5CCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A5ECu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A624u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A62Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A638u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A640u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A64Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A654u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A660u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A668u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A674u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A67Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A680u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6A8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6B0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6D0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6DCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6E4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6ECu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A6FCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A708u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A710u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A718u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A728u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A730u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A738u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A740u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A748u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A750u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A758u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A764u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A778u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A7B4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A7CCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A7D4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A7ECu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A800u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A80Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A810u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A814u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A82Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A83Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A848u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A84Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A85Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A860u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A880u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A8A0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A8B4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A8C4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A8CCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A8D4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A908u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A910u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A918u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A950u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A958u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A970u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A988u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A9C0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A9C8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A9E0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1A9F4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA00u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA04u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA18u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA48u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA50u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA68u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA80u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AA90u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AAA4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AABCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AAD4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AAE4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AAF4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB1Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB2Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB38u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB40u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB68u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB70u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB78u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB84u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB8Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AB94u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABA4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABB0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABB4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABBCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABD8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABE0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ABE8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AC10u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AC20u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AC48u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AC84u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AC8Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AC9Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACA0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACB0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACC4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACCCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACD8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACE0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACE8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ACF4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD0Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD28u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD34u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD40u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD4Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD54u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD60u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD68u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD6Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD74u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AD9Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ADDCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ADE4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ADE8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ADF0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1ADF8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE04u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE0Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE14u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE20u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE3Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE58u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE74u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE80u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AE9Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AEA0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AEA4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AEACu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AECCu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AEE4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AEF0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AEF8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AF14u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AF28u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AF3Cu, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AF44u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AF54u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AF68u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AFB8u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AFC4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AFD4u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AFE0u, &recomp_unit_0534, "recomp_unit_0534");
    runtime.register_function(0x08A1AFF8u, &recomp_unit_0534, "recomp_unit_0534");
}
} // namespace psprecomp
