#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0584[1023] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 0, 39,
    0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0,
    65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81,
    0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0,
    0, 123, 0, 124, 0, 125, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147,
    0, 148, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0,
    156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0,
    0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 202, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 207, 208, 0, 0, 0, 0, 209, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
};
void recomp_unit_0584_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A4C000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0584[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4C000;
    case 2u: goto L_08A4C014;
    case 3u: goto L_08A4C02C;
    case 4u: goto L_08A4C034;
    case 5u: goto L_08A4C05C;
    case 6u: goto L_08A4C060;
    case 7u: goto L_08A4C068;
    case 8u: goto L_08A4C090;
    case 9u: goto L_08A4C0A8;
    case 10u: goto L_08A4C0B0;
    case 11u: goto L_08A4C0D8;
    case 12u: goto L_08A4C0DC;
    case 13u: goto L_08A4C0E4;
    case 14u: goto L_08A4C10C;
    case 15u: goto L_08A4C124;
    case 16u: goto L_08A4C12C;
    case 17u: goto L_08A4C154;
    case 18u: goto L_08A4C158;
    case 19u: goto L_08A4C160;
    case 20u: goto L_08A4C188;
    case 21u: goto L_08A4C1A0;
    case 22u: goto L_08A4C1A8;
    case 23u: goto L_08A4C1D0;
    case 24u: goto L_08A4C1D4;
    case 25u: goto L_08A4C1DC;
    case 26u: goto L_08A4C1E4;
    case 27u: goto L_08A4C214;
    case 28u: goto L_08A4C22C;
    case 29u: goto L_08A4C234;
    case 30u: goto L_08A4C25C;
    case 31u: goto L_08A4C260;
    case 32u: goto L_08A4C268;
    case 33u: goto L_08A4C298;
    case 34u: goto L_08A4C2B0;
    case 35u: goto L_08A4C2B8;
    case 36u: goto L_08A4C2E0;
    case 37u: goto L_08A4C2E4;
    case 38u: goto L_08A4C2EC;
    case 39u: goto L_08A4C2FC;
    case 40u: goto L_08A4C30C;
    case 41u: goto L_08A4C320;
    case 42u: goto L_08A4C338;
    case 43u: goto L_08A4C340;
    case 44u: goto L_08A4C348;
    case 45u: goto L_08A4C354;
    case 46u: goto L_08A4C368;
    case 47u: goto L_08A4C378;
    case 48u: goto L_08A4C380;
    case 49u: goto L_08A4C394;
    case 50u: goto L_08A4C3AC;
    case 51u: goto L_08A4C3B4;
    case 52u: goto L_08A4C3BC;
    case 53u: goto L_08A4C3C8;
    case 54u: goto L_08A4C3D0;
    case 55u: goto L_08A4C3D8;
    case 56u: goto L_08A4C3E0;
    case 57u: goto L_08A4C3FC;
    case 58u: goto L_08A4C40C;
    case 59u: goto L_08A4C428;
    case 60u: goto L_08A4C43C;
    case 61u: goto L_08A4C454;
    case 62u: goto L_08A4C45C;
    case 63u: goto L_08A4C464;
    case 64u: goto L_08A4C470;
    case 65u: goto L_08A4C480;
    case 66u: goto L_08A4C488;
    case 67u: goto L_08A4C49C;
    case 68u: goto L_08A4C4B4;
    case 69u: goto L_08A4C4BC;
    case 70u: goto L_08A4C4C4;
    case 71u: goto L_08A4C4D0;
    case 72u: goto L_08A4C4E0;
    case 73u: goto L_08A4C4E8;
    case 74u: goto L_08A4C4FC;
    case 75u: goto L_08A4C514;
    case 76u: goto L_08A4C51C;
    case 77u: goto L_08A4C524;
    case 78u: goto L_08A4C530;
    case 79u: goto L_08A4C54C;
    case 80u: goto L_08A4C570;
    case 81u: goto L_08A4C57C;
    case 82u: goto L_08A4C588;
    case 83u: goto L_08A4C594;
    case 84u: goto L_08A4C5A0;
    case 85u: goto L_08A4C5AC;
    case 86u: goto L_08A4C5B8;
    case 87u: goto L_08A4C5C8;
    case 88u: goto L_08A4C5D0;
    case 89u: goto L_08A4C5E0;
    case 90u: goto L_08A4C5E8;
    case 91u: goto L_08A4C608;
    case 92u: goto L_08A4C61C;
    case 93u: goto L_08A4C630;
    case 94u: goto L_08A4C63C;
    case 95u: goto L_08A4C64C;
    case 96u: goto L_08A4C66C;
    case 97u: goto L_08A4C67C;
    case 98u: goto L_08A4C688;
    case 99u: goto L_08A4C690;
    case 100u: goto L_08A4C69C;
    case 101u: goto L_08A4C6AC;
    case 102u: goto L_08A4C6CC;
    case 103u: goto L_08A4C6DC;
    case 104u: goto L_08A4C6E8;
    case 105u: goto L_08A4C6F0;
    case 106u: goto L_08A4C6FC;
    case 107u: goto L_08A4C71C;
    case 108u: goto L_08A4C734;
    case 109u: goto L_08A4C73C;
    case 110u: goto L_08A4C748;
    case 111u: goto L_08A4C758;
    case 112u: goto L_08A4C764;
    case 113u: goto L_08A4C76C;
    case 114u: goto L_08A4C774;
    case 115u: goto L_08A4C778;
    case 116u: goto L_08A4C790;
    case 117u: goto L_08A4C79C;
    case 118u: goto L_08A4C7BC;
    case 119u: goto L_08A4C7D4;
    case 120u: goto L_08A4C7DC;
    case 121u: goto L_08A4C7E8;
    case 122u: goto L_08A4C7F8;
    case 123u: goto L_08A4C804;
    case 124u: goto L_08A4C80C;
    case 125u: goto L_08A4C814;
    case 126u: goto L_08A4C818;
    case 127u: goto L_08A4C830;
    case 128u: goto L_08A4C83C;
    case 129u: goto L_08A4C860;
    case 130u: goto L_08A4C878;
    case 131u: goto L_08A4C880;
    case 132u: goto L_08A4C890;
    case 133u: goto L_08A4C898;
    case 134u: goto L_08A4C8AC;
    case 135u: goto L_08A4C8C4;
    case 136u: goto L_08A4C8CC;
    case 137u: goto L_08A4C8D4;
    case 138u: goto L_08A4C8E0;
    case 139u: goto L_08A4C8F4;
    case 140u: goto L_08A4C908;
    case 141u: goto L_08A4C914;
    case 142u: goto L_08A4C934;
    case 143u: goto L_08A4C94C;
    case 144u: goto L_08A4C954;
    case 145u: goto L_08A4C960;
    case 146u: goto L_08A4C970;
    case 147u: goto L_08A4C97C;
    case 148u: goto L_08A4C984;
    case 149u: goto L_08A4C98C;
    case 150u: goto L_08A4C990;
    case 151u: goto L_08A4C9A8;
    case 152u: goto L_08A4C9B4;
    case 153u: goto L_08A4C9C4;
    case 154u: goto L_08A4C9E4;
    case 155u: goto L_08A4C9F4;
    case 156u: goto L_08A4CA00;
    case 157u: goto L_08A4CA08;
    case 158u: goto L_08A4CA48;
    case 159u: goto L_08A4CA64;
    case 160u: goto L_08A4CA78;
    case 161u: goto L_08A4CA88;
    case 162u: goto L_08A4CA90;
    case 163u: goto L_08A4CAA4;
    case 164u: goto L_08A4CABC;
    case 165u: goto L_08A4CAC4;
    case 166u: goto L_08A4CACC;
    case 167u: goto L_08A4CAD8;
    case 168u: goto L_08A4CAE0;
    case 169u: goto L_08A4CAE8;
    case 170u: goto L_08A4CAF0;
    case 171u: goto L_08A4CAF8;
    case 172u: goto L_08A4CB08;
    case 173u: goto L_08A4CB24;
    case 174u: goto L_08A4CB38;
    case 175u: goto L_08A4CB50;
    case 176u: goto L_08A4CB58;
    case 177u: goto L_08A4CB60;
    case 178u: goto L_08A4CB6C;
    case 179u: goto L_08A4CBC8;
    case 180u: goto L_08A4CBE4;
    case 181u: goto L_08A4CBEC;
    case 182u: goto L_08A4CBF4;
    case 183u: goto L_08A4CC44;
    case 184u: goto L_08A4CC4C;
    case 185u: goto L_08A4CC94;
    case 186u: goto L_08A4CCD0;
    case 187u: goto L_08A4CCD8;
    case 188u: goto L_08A4CCF0;
    case 189u: goto L_08A4CCF8;
    case 190u: goto L_08A4CD48;
    case 191u: goto L_08A4CD4C;
    case 192u: goto L_08A4CD94;
    case 193u: goto L_08A4CDD0;
    case 194u: goto L_08A4CE00;
    case 195u: goto L_08A4CE18;
    case 196u: goto L_08A4CE20;
    case 197u: goto L_08A4CE28;
    case 198u: goto L_08A4CE48;
    case 199u: goto L_08A4CEAC;
    case 200u: goto L_08A4CEB8;
    case 201u: goto L_08A4CF00;
    case 202u: goto L_08A4CF10;
    case 203u: goto L_08A4CF14;
    case 204u: goto L_08A4CF20;
    case 205u: goto L_08A4CF28;
    case 206u: goto L_08A4CF7C;
    case 207u: goto L_08A4CF8C;
    case 208u: goto L_08A4CF90;
    case 209u: goto L_08A4CFA4;
    case 210u: goto L_08A4CFA8;
    case 211u: goto L_08A4CFB8;
    case 212u: goto L_08A4CFD0;
    case 213u: goto L_08A4CFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4C000:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C05C;
      }
      goto L_08A4C014;
    }
L_08A4C014:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4C034;
    }
    goto L_08A4C02C;
L_08A4C02C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4C034;
L_08A4C034:
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
          goto L_08A4C060;
      }
      goto L_08A4C05C;
    }
L_08A4C05C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4C060;
L_08A4C060:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C068:
    aot_gpr[6] = (aot_gpr[6] << 5u);
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
          goto L_08A4C0D8;
      }
      goto L_08A4C090;
    }
L_08A4C090:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4C0B0;
    }
    goto L_08A4C0A8;
L_08A4C0A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4C0B0;
L_08A4C0B0:
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
          goto L_08A4C0DC;
      }
      goto L_08A4C0D8;
    }
L_08A4C0D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4C0DC;
L_08A4C0DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C0E4:
    aot_gpr[6] = (aot_gpr[6] << 4u);
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
          goto L_08A4C154;
      }
      goto L_08A4C10C;
    }
L_08A4C10C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4C12C;
    }
    goto L_08A4C124;
L_08A4C124:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4C12C;
L_08A4C12C:
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
          goto L_08A4C158;
      }
      goto L_08A4C154;
    }
L_08A4C154:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4C158;
L_08A4C158:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C160:
    aot_gpr[6] = (aot_gpr[6] << 6u);
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
          goto L_08A4C1D0;
      }
      goto L_08A4C188;
    }
L_08A4C188:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4C1A8;
    }
    goto L_08A4C1A0;
L_08A4C1A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4C1A8;
L_08A4C1A8:
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
          goto L_08A4C1D4;
      }
      goto L_08A4C1D0;
    }
L_08A4C1D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4C1D4;
L_08A4C1D4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C1DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 25u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C1E4:
    aot_gpr[6] = (aot_gpr[6] << 4u);
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
          goto L_08A4C25C;
      }
      goto L_08A4C214;
    }
L_08A4C214:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4C234;
    }
    goto L_08A4C22C;
L_08A4C22C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4C234;
L_08A4C234:
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
          goto L_08A4C260;
      }
      goto L_08A4C25C;
    }
L_08A4C25C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4C260;
L_08A4C260:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C268:
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
          goto L_08A4C2E0;
      }
      goto L_08A4C298;
    }
L_08A4C298:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4C2B8;
    }
    goto L_08A4C2B0;
L_08A4C2B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4C2B8;
L_08A4C2B8:
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
          goto L_08A4C2E4;
      }
      goto L_08A4C2E0;
    }
L_08A4C2E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4C2E4;
L_08A4C2E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C2EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4C348;
      }
      goto L_08A4C2FC;
    }
L_08A4C2FC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24776));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4C348;
      }
      goto L_08A4C30C;
    }
L_08A4C30C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C340;
      }
      goto L_08A4C320;
    }
L_08A4C320:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C338u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C338u) goto L_08A4C338;
    return;
L_08A4C338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C348;
      }
      goto L_08A4C340;
    }
L_08A4C340:
    aot_gpr[31] = (0x08A4C348u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4C348u) goto L_08A4C348;
    return;
L_08A4C348:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C354:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4C3BC;
      }
      goto L_08A4C378;
    }
L_08A4C378:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3BC;
      }
      goto L_08A4C380;
    }
L_08A4C380:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3B4;
      }
      goto L_08A4C394;
    }
L_08A4C394:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C3ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C3ACu) goto L_08A4C3AC;
    return;
L_08A4C3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C3BC;
      }
      goto L_08A4C3B4;
    }
L_08A4C3B4:
    aot_gpr[31] = (0x08A4C3BCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4C3BCu) goto L_08A4C3BC;
    return;
L_08A4C3BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3E0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24792));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7764), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C3FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C464;
      }
      goto L_08A4C40C;
    }
L_08A4C40C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24792));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-7764), 0u);
      if (branch_taken) {
          goto L_08A4C464;
      }
      goto L_08A4C428;
    }
L_08A4C428:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C45C;
      }
      goto L_08A4C43C;
    }
L_08A4C43C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C454u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C454u) goto L_08A4C454;
    return;
L_08A4C454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C464;
      }
      goto L_08A4C45C;
    }
L_08A4C45C:
    aot_gpr[31] = (0x08A4C464u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4C464u) goto L_08A4C464;
    return;
L_08A4C464:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4C4C4;
      }
      goto L_08A4C480;
    }
L_08A4C480:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4C4;
      }
      goto L_08A4C488;
    }
L_08A4C488:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4BC;
      }
      goto L_08A4C49C;
    }
L_08A4C49C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C4B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C4B4u) goto L_08A4C4B4;
    return;
L_08A4C4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C4C4;
      }
      goto L_08A4C4BC;
    }
L_08A4C4BC:
    aot_gpr[31] = (0x08A4C4C4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4C4C4u) goto L_08A4C4C4;
    return;
L_08A4C4C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C4D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4C524;
      }
      goto L_08A4C4E0;
    }
L_08A4C4E0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C524;
      }
      goto L_08A4C4E8;
    }
L_08A4C4E8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C51C;
      }
      goto L_08A4C4FC;
    }
L_08A4C4FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C514u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C514u) goto L_08A4C514;
    return;
L_08A4C514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C524;
      }
      goto L_08A4C51C;
    }
L_08A4C51C:
    aot_gpr[31] = (0x08A4C524u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4C524u) goto L_08A4C524;
    return;
L_08A4C524:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C530:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4C608;
      }
      goto L_08A4C54C;
    }
L_08A4C54C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7848));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7792));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(156));
    aot_gpr[31] = (0x08A4C570u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A4C470;
L_08A4C570:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    aot_gpr[31] = (0x08A4C57Cu);
    aot_gpr[5] = (0u | 2u);
    goto L_08A4C470;
L_08A4C57C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(132));
    aot_gpr[31] = (0x08A4C588u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A4C470;
L_08A4C588:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (0x08A4C594u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A4C4D0;
L_08A4C594:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x08A4C5A0u);
    aot_gpr[5] = (0u | 2u);
    goto L_08A4C4D0;
L_08A4C5A0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x08A4C5ACu);
    aot_gpr[5] = (0u | 2u);
    goto L_08A4C4D0;
L_08A4C5AC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4C5C8;
      }
      goto L_08A4C5B8;
    }
L_08A4C5B8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24792));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7764), 0u);
    goto L_08A4C5C8;
L_08A4C5C8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A4C5E0;
      }
      goto L_08A4C5D0;
    }
L_08A4C5D0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A4C5E0;
L_08A4C5E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4C608;
      }
      goto L_08A4C5E8;
    }
L_08A4C5E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C608u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C608u) goto L_08A4C608;
    return;
L_08A4C608:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C61C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C630:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C688;
      }
      goto L_08A4C63C;
    }
L_08A4C63C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C66C;
      }
      goto L_08A4C64C;
    }
L_08A4C64C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A4C67C;
      }
      goto L_08A4C66C;
    }
L_08A4C66C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A4C67C;
L_08A4C67C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A4C688;
L_08A4C688:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C690:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6E8;
      }
      goto L_08A4C69C;
    }
L_08A4C69C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C6CC;
      }
      goto L_08A4C6AC;
    }
L_08A4C6AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A4C6DC;
      }
      goto L_08A4C6CC;
    }
L_08A4C6CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A4C6DC;
L_08A4C6DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A4C6E8;
L_08A4C6E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C6F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C71C;
      }
      goto L_08A4C6FC;
    }
L_08A4C6FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4C734;
      }
      goto L_08A4C71C;
    }
L_08A4C71C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4C734;
L_08A4C734:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C73C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C758;
      }
      goto L_08A4C748;
    }
L_08A4C748:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C764;
      }
      goto L_08A4C758;
    }
L_08A4C758:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A4C764;
L_08A4C764:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C774;
      }
      goto L_08A4C76C;
    }
L_08A4C76C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A4C778;
      }
      goto L_08A4C774;
    }
L_08A4C774:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A4C778;
L_08A4C778:
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
L_08A4C790:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C7BC;
      }
      goto L_08A4C79C;
    }
L_08A4C79C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4C7D4;
      }
      goto L_08A4C7BC;
    }
L_08A4C7BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4C7D4;
L_08A4C7D4:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C7DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C7F8;
      }
      goto L_08A4C7E8;
    }
L_08A4C7E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C804;
      }
      goto L_08A4C7F8;
    }
L_08A4C7F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A4C804;
L_08A4C804:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C814;
      }
      goto L_08A4C80C;
    }
L_08A4C80C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A4C818;
      }
      goto L_08A4C814;
    }
L_08A4C814:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A4C818;
L_08A4C818:
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
L_08A4C830:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C860;
      }
      goto L_08A4C83C;
    }
L_08A4C83C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4C878;
      }
      goto L_08A4C860;
    }
L_08A4C860:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4C878;
L_08A4C878:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4C8D4;
      }
      goto L_08A4C890;
    }
L_08A4C890:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8D4;
      }
      goto L_08A4C898;
    }
L_08A4C898:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8CC;
      }
      goto L_08A4C8AC;
    }
L_08A4C8AC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4C8C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4C8C4u) goto L_08A4C8C4;
    return;
L_08A4C8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C8D4;
      }
      goto L_08A4C8CC;
    }
L_08A4C8CC:
    aot_gpr[31] = (0x08A4C8D4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4C8D4u) goto L_08A4C8D4;
    return;
L_08A4C8D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C8E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C8F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C908:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C934;
      }
      goto L_08A4C914;
    }
L_08A4C914:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4C94C;
      }
      goto L_08A4C934;
    }
L_08A4C934:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A4C94C;
L_08A4C94C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4C954:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C970;
      }
      goto L_08A4C960;
    }
L_08A4C960:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4C97C;
      }
      goto L_08A4C970;
    }
L_08A4C970:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A4C97C;
L_08A4C97C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C98C;
      }
      goto L_08A4C984;
    }
L_08A4C984:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A4C990;
      }
      goto L_08A4C98C;
    }
L_08A4C98C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A4C990;
L_08A4C990:
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
L_08A4C9A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CA00;
      }
      goto L_08A4C9B4;
    }
L_08A4C9B4:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4C9E4;
      }
      goto L_08A4C9C4;
    }
L_08A4C9C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A4C9F4;
      }
      goto L_08A4C9E4;
    }
L_08A4C9E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A4C9F4;
L_08A4C9F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A4CA00;
L_08A4CA00:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CA08:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[5] = (0u | 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CA48:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24816));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7760), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CA64:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CA78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A4CACC;
      }
      goto L_08A4CA88;
    }
L_08A4CA88:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CACC;
      }
      goto L_08A4CA90;
    }
L_08A4CA90:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CAC4;
      }
      goto L_08A4CAA4;
    }
L_08A4CAA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4CABCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CABCu) goto L_08A4CABC;
    return;
L_08A4CABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CACC;
      }
      goto L_08A4CAC4;
    }
L_08A4CAC4:
    aot_gpr[31] = (0x08A4CACCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4CACCu) goto L_08A4CACC;
    return;
L_08A4CACC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CAD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CAE0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CAE8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CAF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CAF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB60;
      }
      goto L_08A4CB08;
    }
L_08A4CB08:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24816));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-7760), 0u);
      if (branch_taken) {
          goto L_08A4CB60;
      }
      goto L_08A4CB24;
    }
L_08A4CB24:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB58;
      }
      goto L_08A4CB38;
    }
L_08A4CB38:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4CB50u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CB50u) goto L_08A4CB50;
    return;
L_08A4CB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CB60;
      }
      goto L_08A4CB58;
    }
L_08A4CB58:
    aot_gpr[31] = (0x08A4CB60u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4CB60u) goto L_08A4CB60;
    return;
L_08A4CB60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CB6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4CC44;
      }
      goto L_08A4CBC8;
    }
L_08A4CBC8:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4CBE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CBE4u) goto L_08A4CBE4;
    return;
L_08A4CBE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[23]);
      if (branch_taken) {
          goto L_08A4CBF4;
      }
      goto L_08A4CBEC;
    }
L_08A4CBEC:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[23]);
    goto L_08A4CBF4;
L_08A4CBF4:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[17] = (aot_gpr[23] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CBC8;
      }
      goto L_08A4CC44;
    }
L_08A4CC44:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[23];
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4CC94;
      }
      goto L_08A4CC4C;
    }
L_08A4CC4C:
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A4CC94;
L_08A4CC94:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[5] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    goto L_08A4CCD0;
L_08A4CCD0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A4CD48;
      }
      goto L_08A4CCD8;
    }
L_08A4CCD8:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[4] << 2u);
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4CCF0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CCF0u) goto L_08A4CCF0;
    return;
L_08A4CCF0:
    if (aot_gpr[2] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A4CD4C;
    }
    goto L_08A4CCF8;
L_08A4CCF8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 1u));
    aot_gpr[5] = (aot_gpr[4] >> 31u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[20] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A4CCD0;
      }
      goto L_08A4CD48;
    }
L_08A4CD48:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A4CD4C;
L_08A4CD4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CD94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[17]);
    aot_gpr[20] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4CE28;
      }
      goto L_08A4CDD0;
    }
L_08A4CDD0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[20] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    goto L_08A4CE00;
L_08A4CE00:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4CE18u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4CB6C;
L_08A4CE18:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A4CE28;
      }
      goto L_08A4CE20;
    }
L_08A4CE20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08A4CE00;
      }
      goto L_08A4CE28;
    }
L_08A4CE28:
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
L_08A4CE48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-12));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x08A4CEACu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08A4CB6C;
L_08A4CEAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CEB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    aot_gpr[19] = (0u | 12u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4CF00u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4CD94;
L_08A4CF00:
    aot_gpr[22] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4CF90;
      }
      goto L_08A4CF10;
    }
L_08A4CF10:
    aot_gpr[21] = (aot_gpr[17] - aot_gpr[18]);
    goto L_08A4CF14;
L_08A4CF14:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4CF20u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4CF20u) goto L_08A4CF20;
    return;
L_08A4CF20:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF7C;
      }
      goto L_08A4CF28;
    }
L_08A4CF28:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x08A4CF7Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4CB6C;
L_08A4CF7C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CF14;
      }
      goto L_08A4CF8C;
    }
L_08A4CF8C:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    goto L_08A4CF90;
L_08A4CF90:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4CFD0;
      }
      goto L_08A4CFA4;
    }
L_08A4CFA4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A4CFA8;
L_08A4CFA8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-12));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4CFB8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4CE48;
L_08A4CFB8:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4CFA8;
      }
      goto L_08A4CFD0;
    }
L_08A4CFD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4CFF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    ctx.pc = 0x08A4D000u; return;
}

void recomp_unit_0584(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0584_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_584(Runtime &runtime) {
    runtime.register_generated_unit(584u, 0x08A4C000u, 4096u, &recomp_unit_0584, &recomp_unit_0584_entry);
    runtime.register_function(0x08A4C000u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C014u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C02Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C034u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C05Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C060u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C068u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C090u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C0A8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C0B0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C0D8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C0DCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C0E4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C10Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C124u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C12Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C154u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C158u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C160u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C188u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C1A0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C1A8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C1D0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C1D4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C1DCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C1E4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C214u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C22Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C234u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C25Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C260u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C268u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C298u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C2B0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C2B8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C2E0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C2E4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C2ECu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C2FCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C30Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C320u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C338u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C340u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C348u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C354u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C368u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C378u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C380u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C394u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3ACu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3B4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3BCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3C8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3D0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3D8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3E0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C3FCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C40Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C428u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C43Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C454u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C45Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C464u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C470u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C480u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C488u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C49Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4B4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4BCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4C4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4D0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4E0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4E8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C4FCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C514u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C51Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C524u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C530u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C54Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C570u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C57Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C588u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C594u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5A0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5ACu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5B8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5C8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5D0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5E0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C5E8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C608u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C61Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C630u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C63Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C64Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C66Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C67Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C688u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C690u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C69Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C6ACu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C6CCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C6DCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C6E8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C6F0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C6FCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C71Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C734u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C73Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C748u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C758u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C764u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C76Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C774u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C778u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C790u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C79Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C7BCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C7D4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C7DCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C7E8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C7F8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C804u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C80Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C814u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C818u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C830u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C83Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C860u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C878u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C880u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C890u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C898u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C8ACu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C8C4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C8CCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C8D4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C8E0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C8F4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C908u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C914u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C934u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C94Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C954u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C960u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C970u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C97Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C984u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C98Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C990u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C9A8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C9B4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C9C4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C9E4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4C9F4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA00u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA08u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA48u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA64u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA78u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA88u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CA90u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAA4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CABCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAC4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CACCu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAD8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAE0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAE8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAF0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CAF8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB08u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB24u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB38u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB50u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB58u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB60u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CB6Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CBC8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CBE4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CBECu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CBF4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CC44u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CC4Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CC94u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CCD0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CCD8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CCF0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CCF8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CD48u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CD4Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CD94u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CDD0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CE00u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CE18u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CE20u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CE28u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CE48u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CEACu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CEB8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF00u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF10u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF14u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF20u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF28u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF7Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF8Cu, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CF90u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CFA4u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CFA8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CFB8u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CFD0u, &recomp_unit_0584, "recomp_unit_0584");
    runtime.register_function(0x08A4CFF8u, &recomp_unit_0584, "recomp_unit_0584");
}
} // namespace psprecomp
