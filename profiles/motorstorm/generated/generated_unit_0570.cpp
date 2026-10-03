#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0570[1018] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0,
    55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0,
    0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 86, 87, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0,
    96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 122, 0, 123, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 135, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 139, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 156, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0,
    0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196,
};
void recomp_unit_0570_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A3E000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0570[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3E000;
    case 2u: goto L_08A3E044;
    case 3u: goto L_08A3E050;
    case 4u: goto L_08A3E090;
    case 5u: goto L_08A3E094;
    case 6u: goto L_08A3E0A0;
    case 7u: goto L_08A3E0B0;
    case 8u: goto L_08A3E0C0;
    case 9u: goto L_08A3E0E8;
    case 10u: goto L_08A3E100;
    case 11u: goto L_08A3E110;
    case 12u: goto L_08A3E130;
    case 13u: goto L_08A3E140;
    case 14u: goto L_08A3E150;
    case 15u: goto L_08A3E164;
    case 16u: goto L_08A3E194;
    case 17u: goto L_08A3E1B4;
    case 18u: goto L_08A3E1D0;
    case 19u: goto L_08A3E1D8;
    case 20u: goto L_08A3E200;
    case 21u: goto L_08A3E20C;
    case 22u: goto L_08A3E218;
    case 23u: goto L_08A3E224;
    case 24u: goto L_08A3E248;
    case 25u: goto L_08A3E250;
    case 26u: goto L_08A3E274;
    case 27u: goto L_08A3E290;
    case 28u: goto L_08A3E2B0;
    case 29u: goto L_08A3E2E8;
    case 30u: goto L_08A3E2F0;
    case 31u: goto L_08A3E2FC;
    case 32u: goto L_08A3E308;
    case 33u: goto L_08A3E318;
    case 34u: goto L_08A3E334;
    case 35u: goto L_08A3E338;
    case 36u: goto L_08A3E34C;
    case 37u: goto L_08A3E354;
    case 38u: goto L_08A3E35C;
    case 39u: goto L_08A3E374;
    case 40u: goto L_08A3E37C;
    case 41u: goto L_08A3E3A0;
    case 42u: goto L_08A3E3B4;
    case 43u: goto L_08A3E3D0;
    case 44u: goto L_08A3E3E8;
    case 45u: goto L_08A3E400;
    case 46u: goto L_08A3E428;
    case 47u: goto L_08A3E450;
    case 48u: goto L_08A3E478;
    case 49u: goto L_08A3E494;
    case 50u: goto L_08A3E4A0;
    case 51u: goto L_08A3E4BC;
    case 52u: goto L_08A3E4C8;
    case 53u: goto L_08A3E4E4;
    case 54u: goto L_08A3E4EC;
    case 55u: goto L_08A3E500;
    case 56u: goto L_08A3E50C;
    case 57u: goto L_08A3E524;
    case 58u: goto L_08A3E53C;
    case 59u: goto L_08A3E54C;
    case 60u: goto L_08A3E560;
    case 61u: goto L_08A3E568;
    case 62u: goto L_08A3E57C;
    case 63u: goto L_08A3E5A0;
    case 64u: goto L_08A3E5B0;
    case 65u: goto L_08A3E5C4;
    case 66u: goto L_08A3E5D4;
    case 67u: goto L_08A3E5EC;
    case 68u: goto L_08A3E5F4;
    case 69u: goto L_08A3E604;
    case 70u: goto L_08A3E60C;
    case 71u: goto L_08A3E624;
    case 72u: goto L_08A3E62C;
    case 73u: goto L_08A3E630;
    case 74u: goto L_08A3E640;
    case 75u: goto L_08A3E668;
    case 76u: goto L_08A3E688;
    case 77u: goto L_08A3E694;
    case 78u: goto L_08A3E6AC;
    case 79u: goto L_08A3E6C8;
    case 80u: goto L_08A3E6F0;
    case 81u: goto L_08A3E70C;
    case 82u: goto L_08A3E720;
    case 83u: goto L_08A3E748;
    case 84u: goto L_08A3E758;
    case 85u: goto L_08A3E764;
    case 86u: goto L_08A3E76C;
    case 87u: goto L_08A3E770;
    case 88u: goto L_08A3E780;
    case 89u: goto L_08A3E7A8;
    case 90u: goto L_08A3E7B8;
    case 91u: goto L_08A3E7C4;
    case 92u: goto L_08A3E7CC;
    case 93u: goto L_08A3E7D0;
    case 94u: goto L_08A3E7E8;
    case 95u: goto L_08A3E7F0;
    case 96u: goto L_08A3E800;
    case 97u: goto L_08A3E80C;
    case 98u: goto L_08A3E820;
    case 99u: goto L_08A3E83C;
    case 100u: goto L_08A3E864;
    case 101u: goto L_08A3E874;
    case 102u: goto L_08A3E884;
    case 103u: goto L_08A3E8AC;
    case 104u: goto L_08A3E8BC;
    case 105u: goto L_08A3E8C8;
    case 106u: goto L_08A3E8D0;
    case 107u: goto L_08A3E8D4;
    case 108u: goto L_08A3E8E4;
    case 109u: goto L_08A3E90C;
    case 110u: goto L_08A3E91C;
    case 111u: goto L_08A3E928;
    case 112u: goto L_08A3E934;
    case 113u: goto L_08A3E964;
    case 114u: goto L_08A3E994;
    case 115u: goto L_08A3E9A4;
    case 116u: goto L_08A3E9B0;
    case 117u: goto L_08A3E9B8;
    case 118u: goto L_08A3E9BC;
    case 119u: goto L_08A3E9CC;
    case 120u: goto L_08A3E9F4;
    case 121u: goto L_08A3EA04;
    case 122u: goto L_08A3EA10;
    case 123u: goto L_08A3EA18;
    case 124u: goto L_08A3EA1C;
    case 125u: goto L_08A3EA28;
    case 126u: goto L_08A3EA38;
    case 127u: goto L_08A3EA54;
    case 128u: goto L_08A3EA70;
    case 129u: goto L_08A3EA98;
    case 130u: goto L_08A3EAB0;
    case 131u: goto L_08A3EAEC;
    case 132u: goto L_08A3EB14;
    case 133u: goto L_08A3EB24;
    case 134u: goto L_08A3EB30;
    case 135u: goto L_08A3EB38;
    case 136u: goto L_08A3EB3C;
    case 137u: goto L_08A3EB4C;
    case 138u: goto L_08A3EB74;
    case 139u: goto L_08A3EB84;
    case 140u: goto L_08A3EB90;
    case 141u: goto L_08A3EB98;
    case 142u: goto L_08A3EB9C;
    case 143u: goto L_08A3EBB8;
    case 144u: goto L_08A3EBD4;
    case 145u: goto L_08A3EBDC;
    case 146u: goto L_08A3EC08;
    case 147u: goto L_08A3EC14;
    case 148u: goto L_08A3EC2C;
    case 149u: goto L_08A3EC48;
    case 150u: goto L_08A3EC70;
    case 151u: goto L_08A3EC8C;
    case 152u: goto L_08A3ECA0;
    case 153u: goto L_08A3ECC4;
    case 154u: goto L_08A3ECD4;
    case 155u: goto L_08A3ECE4;
    case 156u: goto L_08A3ECE8;
    case 157u: goto L_08A3ECF8;
    case 158u: goto L_08A3ED1C;
    case 159u: goto L_08A3ED2C;
    case 160u: goto L_08A3ED3C;
    case 161u: goto L_08A3ED40;
    case 162u: goto L_08A3ED48;
    case 163u: goto L_08A3ED50;
    case 164u: goto L_08A3ED58;
    case 165u: goto L_08A3ED78;
    case 166u: goto L_08A3ED80;
    case 167u: goto L_08A3ED90;
    case 168u: goto L_08A3ED9C;
    case 169u: goto L_08A3EDB0;
    case 170u: goto L_08A3EDCC;
    case 171u: goto L_08A3EDF4;
    case 172u: goto L_08A3EE00;
    case 173u: goto L_08A3EE10;
    case 174u: goto L_08A3EE34;
    case 175u: goto L_08A3EE44;
    case 176u: goto L_08A3EE54;
    case 177u: goto L_08A3EE58;
    case 178u: goto L_08A3EE68;
    case 179u: goto L_08A3EE8C;
    case 180u: goto L_08A3EE9C;
    case 181u: goto L_08A3EEAC;
    case 182u: goto L_08A3EEB4;
    case 183u: goto L_08A3EEE0;
    case 184u: goto L_08A3EF10;
    case 185u: goto L_08A3EF20;
    case 186u: goto L_08A3EF30;
    case 187u: goto L_08A3EF34;
    case 188u: goto L_08A3EF44;
    case 189u: goto L_08A3EF68;
    case 190u: goto L_08A3EF78;
    case 191u: goto L_08A3EF88;
    case 192u: goto L_08A3EF90;
    case 193u: goto L_08A3EF9C;
    case 194u: goto L_08A3EFB0;
    case 195u: goto L_08A3EFC8;
    case 196u: goto L_08A3EFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3E000:
    aot_gpr[13] = (aot_gpr[12] + aot_gpr[3]);
    aot_gpr[10] = (aot_gpr[10] >> 16u);
    aot_gpr[11] = (aot_gpr[11] >> 16u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[13]) >> 16u));
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[3]);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 16u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[12] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[13]));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[12] | 0u);
    aot_gpr[3] = (aot_gpr[11] | 0u);
    aot_gpr[13] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 219u, 0x08A3DFECu>(ctx, &aot_mem); return;
      }
      goto L_08A3E044;
    }
L_08A3E044:
    aot_gpr[5] = (aot_gpr[12] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-4));
        goto L_08A3E094;
    }
    goto L_08A3E050;
L_08A3E050:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[6] = (aot_gpr[6] >> 16u);
    aot_gpr[11] = (aot_gpr[6] + aot_gpr[10]);
    aot_gpr[12] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[8] = (aot_gpr[12] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 16u));
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A3E050;
      }
      goto L_08A3E090;
    }
L_08A3E090:
    aot_gpr[4] = (aot_gpr[10] + static_cast<std::uint32_t>(-4));
    goto L_08A3E094;
L_08A3E094:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E0B0;
      }
      goto L_08A3E0A0;
    }
L_08A3E0A0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3E0A0;
      }
      goto L_08A3E0B0;
    }
L_08A3E0B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E0C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (32752u << 16u);
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (832u << 16u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (0u - aot_gpr[6]);
      if (branch_taken) {
          goto L_08A3E100;
      }
      goto L_08A3E0E8;
    }
L_08A3E0E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E100:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 20u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08A3E130;
      }
      goto L_08A3E110;
    }
L_08A3E110:
    aot_gpr[5] = (8u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> (aot_gpr[4] & 31u)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E130:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3E150;
      }
      goto L_08A3E140;
    }
L_08A3E140:
    aot_gpr[4] = (0u | 31u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] << (aot_gpr[4] & 31u));
    goto L_08A3E150;
L_08A3E150:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4));
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3E194u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 117u, 0x08A3D8BCu>(ctx, &aot_mem) && ctx.pc == 0x08A3E194u) goto L_08A3E194;
    return;
L_08A3E194:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[11] = (0u | 32u);
    aot_gpr[4] = (aot_gpr[11] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 11 ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (16368u << 16u);
      if (branch_taken) {
          goto L_08A3E200;
      }
      goto L_08A3E1B4;
    }
L_08A3E1B4:
    aot_gpr[8] = (0u | 11u);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[6] >> (aot_gpr[8] & 31u));
    aot_gpr[4] = (aot_gpr[9] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3E1D8;
      }
      goto L_08A3E1D0;
    }
L_08A3E1D0:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3E1D8;
L_08A3E1D8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21));
    aot_gpr[5] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    aot_gpr[4] = (aot_gpr[4] >> (aot_gpr[8] & 31u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E200:
    aot_gpr[2] = (aot_gpr[10] | 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3E218;
      }
      goto L_08A3E20C;
    }
L_08A3E20C:
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A3E218;
L_08A3E218:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
        goto L_08A3E274;
    }
    goto L_08A3E224;
L_08A3E224:
    aot_gpr[6] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[11] - aot_gpr[5]);
    aot_gpr[11] = (aot_gpr[10] >> (aot_gpr[4] & 31u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3E250;
      }
      goto L_08A3E248;
    }
L_08A3E248:
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A3E250;
L_08A3E250:
    aot_gpr[5] = (aot_gpr[10] << (aot_gpr[5] & 31u));
    aot_gpr[4] = (aot_gpr[6] >> (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E274:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A3E2B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 79u, 0x08A3D5A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3E2B0u) goto L_08A3E2B0;
    return;
L_08A3E2B0:
    aot_gpr[5] = (16u << 16u);
    aot_gpr[11] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[10] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[12] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[12] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (aot_gpr[4] & aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[10] >> 20u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3E2F0;
      }
      goto L_08A3E2E8;
    }
L_08A3E2E8:
    aot_gpr[4] = (16u << 16u);
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[4]);
    goto L_08A3E2F0;
L_08A3E2F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A3E354;
      }
      goto L_08A3E2FC;
    }
L_08A3E2FC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A3E308u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 129u, 0x08A3D93Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E308u) goto L_08A3E308;
    return;
L_08A3E308:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3E334;
      }
      goto L_08A3E318;
    }
L_08A3E318:
    aot_gpr[7] = (0u | 32u);
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[11] << (aot_gpr[7] & 31u));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[11] >> (aot_gpr[5] & 31u));
      if (branch_taken) {
          goto L_08A3E338;
      }
      goto L_08A3E334;
    }
L_08A3E334:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A3E338;
L_08A3E338:
    aot_gpr[6] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    if (aot_gpr[6] != 0u) {
    aot_gpr[11] = (0u | 2u);
        goto L_08A3E34C;
    }
    goto L_08A3E34C;
L_08A3E34C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(16), aot_gpr[11]);
      if (branch_taken) {
          goto L_08A3E374;
      }
      goto L_08A3E354;
    }
L_08A3E354:
    aot_gpr[31] = (0x08A3E35Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 129u, 0x08A3D93Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E35Cu) goto L_08A3E35C;
    return;
L_08A3E35C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[5]);
    goto L_08A3E374;
L_08A3E374:
    if (aot_gpr[10] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1074));
        goto L_08A3E3A0;
    }
    goto L_08A3E37C;
L_08A3E37C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1075));
    aot_gpr[6] = (0u | 53u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E3A0:
    aot_gpr[5] = (aot_gpr[11] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[31] = (0x08A3E3B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 117u, 0x08A3D8BCu>(ctx, &aot_mem) && ctx.pc == 0x08A3E3B4u) goto L_08A3E3B4;
    return;
L_08A3E3B4:
    aot_gpr[4] = (aot_gpr[11] << 5u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[12] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E3D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[12] = (aot_gpr[5] | 0u);
    aot_gpr[13] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A3E3E8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A3E164;
L_08A3E3E8:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08A3E400u);
    aot_gpr[4] = (aot_gpr[12] | 0u);
    goto L_08A3E164;
L_08A3E400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[14] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A3E450;
      }
      goto L_08A3E428;
    }
L_08A3E428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 20u);
    aot_gpr[4] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3E478;
      }
      goto L_08A3E450;
    }
L_08A3E450:
    aot_gpr[4] = (0u - aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 20u);
    aot_gpr[4] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A3E478;
L_08A3E478:
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A3E494u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A3E494u) goto L_08A3E494;
    return;
L_08A3E494:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E4A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x08A3E4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 94u, 0x08A3C664u>(ctx, &aot_mem) && ctx.pc == 0x08A3E4BCu) goto L_08A3E4BC;
    return;
L_08A3E4BC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A3E4EC;
      }
      goto L_08A3E4C8;
    }
L_08A3E4C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3E500;
      }
      goto L_08A3E4E4;
    }
L_08A3E4E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3E560;
      }
      goto L_08A3E4EC;
    }
L_08A3E4EC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E500:
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3E54C;
      }
      goto L_08A3E50C;
    }
L_08A3E50C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3E54C;
      }
      goto L_08A3E524;
    }
L_08A3E524:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3E54C;
      }
      goto L_08A3E53C;
    }
L_08A3E53C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A3E54C;
L_08A3E54C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A3E568;
      }
      goto L_08A3E560;
    }
L_08A3E560:
    aot_gpr[31] = (0x08A3E568u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E568u) goto L_08A3E568;
    return;
L_08A3E568:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E57C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3E5B0;
      }
      goto L_08A3E5A0;
    }
L_08A3E5A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3E5D4;
      }
      goto L_08A3E5B0;
    }
L_08A3E5B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A3E5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 168u, 0x08911BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3E5C4u) goto L_08A3E5C4;
    return;
L_08A3E5C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E5F4;
      }
      goto L_08A3E5D4;
    }
L_08A3E5D4:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A3E5ECu);
    // nop
    goto L_08A3E624;
L_08A3E5EC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_08A3E5F4;
L_08A3E5F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E604:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E60C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E624:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A3E630;
      }
      goto L_08A3E62C;
    }
L_08A3E62C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A3E630;
L_08A3E630:
    // nop
    // nop
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E640:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[4]) * static_cast<std::uint64_t>(aot_gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[9] = (ctx.hi);
    aot_gpr[2] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E668:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    aot_gpr[10] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[14] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A3EA28;
      }
      goto L_08A3E688;
    }
L_08A3E688:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08A3E7E8;
      }
      goto L_08A3E694;
    }
L_08A3E694:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[4] != 0u) aot_gpr[5] = (0u);
      if (branch_taken) {
          goto L_08A3E6C8;
      }
      goto L_08A3E6AC;
    }
L_08A3E6AC:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[4]);
    goto L_08A3E6C8;
L_08A3E6C8:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[6] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10136));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[2] - aot_gpr[4]);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (aot_gpr[9] >> 16u);
        goto L_08A3E70C;
    }
    goto L_08A3E6F0;
L_08A3E6F0:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[14] >> (aot_gpr[2] & 31u));
    aot_gpr[3] = (aot_gpr[10] << (aot_gpr[7] & 31u));
    aot_gpr[10] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[14] = (aot_gpr[14] << (aot_gpr[7] & 31u));
    aot_gpr[9] = (aot_gpr[9] << (aot_gpr[7] & 31u));
    aot_gpr[7] = (aot_gpr[9] >> 16u);
    goto L_08A3E70C;
L_08A3E70C:
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[12] = (aot_gpr[9] & 65535u);
    aot_gpr[4] = (aot_gpr[14] >> 16u);
    if (aot_gpr[7] == 0u) {
    rt.unsupported(0x08A3E71Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E720;
    }
    goto L_08A3E720;
L_08A3E720:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[11] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[6] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3E76C;
      }
      goto L_08A3E748;
    }
L_08A3E748:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3E76C;
      }
      goto L_08A3E758;
    }
L_08A3E758:
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
        goto L_08A3E770;
    }
    goto L_08A3E764;
L_08A3E764:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    goto L_08A3E76C;
L_08A3E76C:
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
    goto L_08A3E770;
L_08A3E770:
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[14] & 65535u);
    if (aot_gpr[7] == 0u) {
    rt.unsupported(0x08A3E77Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E780;
    }
    goto L_08A3E780;
L_08A3E780:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3E7C4;
      }
      goto L_08A3E7A8;
    }
L_08A3E7A8:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3E7C4;
      }
      goto L_08A3E7B8;
    }
L_08A3E7B8:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[2]);
    goto L_08A3E7C4;
L_08A3E7C4:
    aot_gpr[2] = (aot_gpr[11] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[8]);
    goto L_08A3E7CC;
L_08A3E7CC:
    aot_gpr[6] = (0u + 0u);
    goto L_08A3E7D0;
L_08A3E7D0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[3] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3E7E8:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3E80C;
      }
      goto L_08A3E7F0;
    }
L_08A3E7F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    if (aot_gpr[6] == 0u) {
    rt.unsupported(0x08A3E7FCu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E800;
    }
    goto L_08A3E800;
L_08A3E800:
    aot_gpr[9] = (ctx.lo);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    goto L_08A3E80C;
L_08A3E80C:
    aot_gpr[4] = (aot_gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[4] != 0u) aot_gpr[5] = (0u);
      if (branch_taken) {
          goto L_08A3E83C;
      }
      goto L_08A3E820;
    }
L_08A3E820:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[4]);
    goto L_08A3E83C;
L_08A3E83C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[9] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10136));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[2] - aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3E934;
      }
      goto L_08A3E864;
    }
L_08A3E864:
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[9]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[9] >> 16u);
    aot_gpr[16] = (aot_gpr[9] & 65535u);
    goto L_08A3E874;
L_08A3E874:
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[14] >> 16u);
    if (aot_gpr[8] == 0u) {
    rt.unsupported(0x08A3E880u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E884;
    }
    goto L_08A3E884;
L_08A3E884:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[11] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[7] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3E8D0;
      }
      goto L_08A3E8AC;
    }
L_08A3E8AC:
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3E8D0;
      }
      goto L_08A3E8BC;
    }
L_08A3E8BC:
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[5]);
        goto L_08A3E8D4;
    }
    goto L_08A3E8C8;
L_08A3E8C8:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    goto L_08A3E8D0;
L_08A3E8D0:
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[5]);
    goto L_08A3E8D4;
L_08A3E8D4:
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[14] & 65535u);
    if (aot_gpr[8] == 0u) {
    rt.unsupported(0x08A3E8E0u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E8E4;
    }
    goto L_08A3E8E4;
L_08A3E8E4:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[10] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3E928;
      }
      goto L_08A3E90C;
    }
L_08A3E90C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3E928;
      }
      goto L_08A3E91C;
    }
L_08A3E91C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[2]);
    goto L_08A3E928;
L_08A3E928:
    aot_gpr[2] = (aot_gpr[11] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[10]);
    goto L_08A3E7D0;
L_08A3E934:
    aot_gpr[9] = (aot_gpr[9] << (aot_gpr[7] & 31u));
    aot_gpr[8] = (aot_gpr[9] >> 16u);
    aot_gpr[12] = (aot_gpr[10] >> (aot_gpr[5] & 31u));
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (aot_gpr[9] & 65535u);
    aot_gpr[3] = (aot_gpr[14] >> (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[10] << (aot_gpr[7] & 31u));
    aot_gpr[10] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[10] >> 16u);
    aot_gpr[14] = (aot_gpr[14] << (aot_gpr[7] & 31u));
    if (aot_gpr[8] == 0u) {
    rt.unsupported(0x08A3E960u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E964;
    }
    goto L_08A3E964;
L_08A3E964:
    aot_gpr[11] = (aot_gpr[8] + 0u);
    aot_gpr[17] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[15] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[7] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[13] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3E9B8;
      }
      goto L_08A3E994;
    }
L_08A3E994:
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[15] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3E9B8;
      }
      goto L_08A3E9A4;
    }
L_08A3E9A4:
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[13] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[13]);
        goto L_08A3E9BC;
    }
    goto L_08A3E9B0;
L_08A3E9B0:
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    goto L_08A3E9B8;
L_08A3E9B8:
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[13]);
    goto L_08A3E9BC;
L_08A3E9BC:
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[10] & 65535u);
    if (aot_gpr[11] == 0u) {
    rt.unsupported(0x08A3E9C8u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3E9CC;
    }
    goto L_08A3E9CC;
L_08A3E9CC:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[13] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EA18;
      }
      goto L_08A3E9F4;
    }
L_08A3E9F4:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3EA18;
      }
      goto L_08A3EA04;
    }
L_08A3EA04:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[15] << 16u);
      if (branch_taken) {
          goto L_08A3EA1C;
      }
      goto L_08A3EA10;
    }
L_08A3EA10:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    goto L_08A3EA18;
L_08A3EA18:
    aot_gpr[2] = (aot_gpr[15] << 16u);
    goto L_08A3EA1C;
L_08A3EA1C:
    aot_gpr[6] = (aot_gpr[2] | aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[4] - aot_gpr[13]);
    goto L_08A3E874;
L_08A3EA28:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08A3E7D0;
      }
      goto L_08A3EA38;
    }
L_08A3EA38:
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[4] != 0u) aot_gpr[5] = (0u);
      if (branch_taken) {
          goto L_08A3EA70;
      }
      goto L_08A3EA54;
    }
L_08A3EA54:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[4]);
    goto L_08A3EA70;
L_08A3EA70:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[8] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10136));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[2] - aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3EAB0;
      }
      goto L_08A3EA98;
    }
L_08A3EA98:
    aot_gpr[2] = (aot_gpr[14] < aot_gpr[9] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[4] = (0u < aot_gpr[3] ? 1u : 0u);
    goto L_08A3E7CC;
L_08A3EAB0:
    aot_gpr[2] = (aot_gpr[9] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[8] << (aot_gpr[7] & 31u));
    aot_gpr[8] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[8] >> 16u);
    aot_gpr[12] = (aot_gpr[10] >> (aot_gpr[5] & 31u));
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (aot_gpr[8] & 65535u);
    aot_gpr[3] = (aot_gpr[14] >> (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[10] << (aot_gpr[7] & 31u));
    aot_gpr[10] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[10] >> 16u);
    aot_gpr[14] = (aot_gpr[14] << (aot_gpr[7] & 31u));
    aot_gpr[9] = (aot_gpr[9] << (aot_gpr[7] & 31u));
    if (aot_gpr[11] == 0u) {
    rt.unsupported(0x08A3EAE8u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3EAEC;
    }
    goto L_08A3EAEC;
L_08A3EAEC:
    aot_gpr[6] = (ctx.lo);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[15] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[7] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[13] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EB38;
      }
      goto L_08A3EB14;
    }
L_08A3EB14:
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[15] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3EB38;
      }
      goto L_08A3EB24;
    }
L_08A3EB24:
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[13] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[13]);
        goto L_08A3EB3C;
    }
    goto L_08A3EB30;
L_08A3EB30:
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    goto L_08A3EB38;
L_08A3EB38:
    aot_gpr[7] = (aot_gpr[7] - aot_gpr[13]);
    goto L_08A3EB3C;
L_08A3EB3C:
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[10] & 65535u);
    if (aot_gpr[11] == 0u) {
    rt.unsupported(0x08A3EB48u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3EB4C;
    }
    goto L_08A3EB4C;
L_08A3EB4C:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    aot_gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[13] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EB98;
      }
      goto L_08A3EB74;
    }
L_08A3EB74:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3EB98;
      }
      goto L_08A3EB84;
    }
L_08A3EB84:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[15] << 16u);
      if (branch_taken) {
          goto L_08A3EB9C;
      }
      goto L_08A3EB90;
    }
L_08A3EB90:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08A3EB98;
L_08A3EB98:
    aot_gpr[2] = (aot_gpr[15] << 16u);
    goto L_08A3EB9C;
L_08A3EB9C:
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[13]);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[4]) * static_cast<std::uint64_t>(aot_gpr[9]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[3] = (ctx.hi);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
        goto L_08A3E7CC;
    }
    goto L_08A3EBB8;
L_08A3EBB8:
    aot_gpr[2] = (aot_gpr[3] ^ aot_gpr[5]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[14] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08A3E7D0;
      }
      goto L_08A3EBD4;
    }
L_08A3EBD4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A3E7D0;
L_08A3EBDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[7] + 0u);
    aot_gpr[19] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[11] = (aot_gpr[6] + 0u);
    aot_gpr[15] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[9] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A3EF90;
      }
      goto L_08A3EC08;
    }
L_08A3EC08:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08A3ED78;
      }
      goto L_08A3EC14;
    }
L_08A3EC14:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[4] != 0u) aot_gpr[5] = (0u);
      if (branch_taken) {
          goto L_08A3EC48;
      }
      goto L_08A3EC2C;
    }
L_08A3EC2C:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[4]);
    goto L_08A3EC48;
L_08A3EC48:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[6] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10136));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[11] >> 16u);
      if (branch_taken) {
          goto L_08A3EC8C;
      }
      goto L_08A3EC70;
    }
L_08A3EC70:
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[15] >> (aot_gpr[2] & 31u));
    aot_gpr[3] = (aot_gpr[9] << (aot_gpr[7] & 31u));
    aot_gpr[9] = (aot_gpr[3] | aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[11] << (aot_gpr[7] & 31u));
    aot_gpr[15] = (aot_gpr[15] << (aot_gpr[7] & 31u));
    aot_gpr[6] = (aot_gpr[11] >> 16u);
    goto L_08A3EC8C;
L_08A3EC8C:
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[10] = (aot_gpr[11] & 65535u);
    aot_gpr[4] = (aot_gpr[15] >> 16u);
    if (aot_gpr[6] == 0u) {
    rt.unsupported(0x08A3EC9Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3ECA0;
    }
    goto L_08A3ECA0;
L_08A3ECA0:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[8] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3ECE4;
      }
      goto L_08A3ECC4;
    }
L_08A3ECC4:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[8]);
        goto L_08A3ECE8;
    }
    goto L_08A3ECD4;
L_08A3ECD4:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 0u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[11]);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[3]);
    goto L_08A3ECE4;
L_08A3ECE4:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[8]);
    goto L_08A3ECE8;
L_08A3ECE8:
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[15] & 65535u);
    if (aot_gpr[6] == 0u) {
    rt.unsupported(0x08A3ECF4u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3ECF8;
    }
    goto L_08A3ECF8;
L_08A3ECF8:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[8] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3ED3C;
      }
      goto L_08A3ED1C;
    }
L_08A3ED1C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[15] = (aot_gpr[4] - aot_gpr[8]);
      if (branch_taken) {
          goto L_08A3ED40;
      }
      goto L_08A3ED2C;
    }
L_08A3ED2C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[2] ^ 0u);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[3]);
    goto L_08A3ED3C;
L_08A3ED3C:
    aot_gpr[15] = (aot_gpr[4] - aot_gpr[8]);
    goto L_08A3ED40;
L_08A3ED40:
    aot_gpr[24] = (aot_gpr[15] >> (aot_gpr[7] & 31u));
    aot_gpr[25] = (0u + 0u);
    goto L_08A3ED48;
L_08A3ED48:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ED58;
      }
      goto L_08A3ED50;
    }
L_08A3ED50:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[25]);
    goto L_08A3ED58;
L_08A3ED58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3ED78:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A3ED9C;
      }
      goto L_08A3ED80;
    }
L_08A3ED80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    if (aot_gpr[6] == 0u) {
    rt.unsupported(0x08A3ED8Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3ED90;
    }
    goto L_08A3ED90;
L_08A3ED90:
    aot_gpr[11] = (ctx.lo);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    goto L_08A3ED9C;
L_08A3ED9C:
    aot_gpr[4] = (aot_gpr[11] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[4] != 0u) aot_gpr[5] = (0u);
      if (branch_taken) {
          goto L_08A3EDCC;
      }
      goto L_08A3EDB0;
    }
L_08A3EDB0:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[11] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[4]);
    goto L_08A3EDCC;
L_08A3EDCC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[11] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10136));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[2] - aot_gpr[7]);
      if (branch_taken) {
          goto L_08A3EEB4;
      }
      goto L_08A3EDF4;
    }
L_08A3EDF4:
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[11] >> 16u);
    aot_gpr[14] = (aot_gpr[11] & 65535u);
    goto L_08A3EE00;
L_08A3EE00:
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[15] >> 16u);
    if (aot_gpr[8] == 0u) {
    rt.unsupported(0x08A3EE0Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3EE10;
    }
    goto L_08A3EE10;
L_08A3EE10:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EE54;
      }
      goto L_08A3EE34;
    }
L_08A3EE34:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[11] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
        goto L_08A3EE58;
    }
    goto L_08A3EE44;
L_08A3EE44:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 0u);
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[11]);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[3]);
    goto L_08A3EE54;
L_08A3EE54:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    goto L_08A3EE58;
L_08A3EE58:
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[15] & 65535u);
    if (aot_gpr[8] == 0u) {
    rt.unsupported(0x08A3EE64u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3EE68;
    }
    goto L_08A3EE68;
L_08A3EE68:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EEAC;
      }
      goto L_08A3EE8C;
    }
L_08A3EE8C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[11] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[15] = (aot_gpr[4] - aot_gpr[6]);
        goto L_08A3ED40;
    }
    goto L_08A3EE9C;
L_08A3EE9C:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[2] ^ 0u);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[3]);
    goto L_08A3EEAC;
L_08A3EEAC:
    aot_gpr[15] = (aot_gpr[4] - aot_gpr[6]);
    goto L_08A3ED40;
L_08A3EEB4:
    aot_gpr[11] = (aot_gpr[11] << (aot_gpr[7] & 31u));
    aot_gpr[8] = (aot_gpr[11] >> 16u);
    aot_gpr[13] = (aot_gpr[9] >> (aot_gpr[16] & 31u));
    { const std::uint32_t dividend = aot_gpr[13]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[14] = (aot_gpr[11] & 65535u);
    aot_gpr[3] = (aot_gpr[15] >> (aot_gpr[16] & 31u));
    aot_gpr[2] = (aot_gpr[9] << (aot_gpr[7] & 31u));
    aot_gpr[9] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[9] >> 16u);
    if (aot_gpr[8] == 0u) {
    rt.unsupported(0x08A3EEDCu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3EEE0;
    }
    goto L_08A3EEE0;
L_08A3EEE0:
    aot_gpr[12] = (aot_gpr[8] + 0u);
    aot_gpr[15] = (aot_gpr[15] << (aot_gpr[7] & 31u));
    aot_gpr[16] = (aot_gpr[14] + 0u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[4] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[10] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    { const std::uint32_t dividend = aot_gpr[13]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EF30;
      }
      goto L_08A3EF10;
    }
L_08A3EF10:
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[11] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[6]);
        goto L_08A3EF34;
    }
    goto L_08A3EF20;
L_08A3EF20:
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 0u);
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[11]);
    if (aot_gpr[2] != 0u) aot_gpr[10] = (aot_gpr[3]);
    goto L_08A3EF30;
L_08A3EF30:
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[6]);
    goto L_08A3EF34;
L_08A3EF34:
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[9] & 65535u);
    if (aot_gpr[12] == 0u) {
    rt.unsupported(0x08A3EF40u, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08A3EF44;
    }
    goto L_08A3EF44;
L_08A3EF44:
    aot_gpr[3] = (ctx.lo);
    aot_gpr[2] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (aot_gpr[2] << 16u);
    aot_gpr[4] = (aot_gpr[2] | aot_gpr[4]);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    { const std::uint32_t dividend = aot_gpr[10]; const std::uint32_t divisor = aot_gpr[12]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08A3EF88;
      }
      goto L_08A3EF68;
    }
L_08A3EF68:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[11]);
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[11] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[9] = (aot_gpr[4] - aot_gpr[6]);
        goto L_08A3EE00;
    }
    goto L_08A3EF78;
L_08A3EF78:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 0u);
    aot_gpr[3] = (aot_gpr[4] + aot_gpr[11]);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[3]);
    goto L_08A3EF88;
L_08A3EF88:
    aot_gpr[9] = (aot_gpr[4] - aot_gpr[6]);
    goto L_08A3EE00;
L_08A3EF90:
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u | 65535u);
      if (branch_taken) {
          goto L_08A3EFB0;
      }
      goto L_08A3EF9C;
    }
L_08A3EF9C:
    aot_gpr[24] = (aot_gpr[4] + 0u);
    aot_gpr[25] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[24]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[25]);
    goto L_08A3ED58;
L_08A3EFB0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    if (aot_gpr[4] != 0u) aot_gpr[5] = (0u);
      if (branch_taken) {
          goto L_08A3EFE4;
      }
      goto L_08A3EFC8;
    }
L_08A3EFC8:
    aot_gpr[2] = (255u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 65535u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[3] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[5] = (aot_gpr[4]);
    goto L_08A3EFE4;
L_08A3EFE4:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (aot_gpr[8] >> (aot_gpr[5] & 31u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10136));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    ctx.pc = 0x08A3F000u; return;
}

void recomp_unit_0570(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0570_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_570(Runtime &runtime) {
    runtime.register_generated_unit(570u, 0x08A3E000u, 4096u, &recomp_unit_0570, &recomp_unit_0570_entry);
    runtime.register_function(0x08A3E000u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E044u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E050u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E090u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E094u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E0A0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E0B0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E0C0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E0E8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E100u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E110u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E130u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E140u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E150u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E164u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E194u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E1B4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E1D0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E1D8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E200u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E20Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E218u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E224u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E248u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E250u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E274u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E290u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E2B0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E2E8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E2F0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E2FCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E308u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E318u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E334u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E338u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E34Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E354u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E35Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E374u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E37Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E3A0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E3B4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E3D0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E3E8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E400u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E428u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E450u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E478u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E494u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E4A0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E4BCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E4C8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E4E4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E4ECu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E500u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E50Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E524u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E53Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E54Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E560u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E568u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E57Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E5A0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E5B0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E5C4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E5D4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E5ECu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E5F4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E604u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E60Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E624u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E62Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E630u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E640u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E668u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E688u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E694u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E6ACu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E6C8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E6F0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E70Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E720u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E748u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E758u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E764u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E76Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E770u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E780u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7A8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7B8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7C4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7CCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7D0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7E8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E7F0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E800u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E80Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E820u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E83Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E864u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E874u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E884u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E8ACu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E8BCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E8C8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E8D0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E8D4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E8E4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E90Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E91Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E928u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E934u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E964u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E994u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E9A4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E9B0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E9B8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E9BCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E9CCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3E9F4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA04u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA10u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA18u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA1Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA28u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA38u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA54u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA70u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EA98u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EAB0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EAECu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB14u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB24u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB30u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB38u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB3Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB4Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB74u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB84u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB90u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB98u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EB9Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EBB8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EBD4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EBDCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EC08u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EC14u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EC2Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EC48u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EC70u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EC8Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ECA0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ECC4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ECD4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ECE4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ECE8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ECF8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED1Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED2Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED3Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED40u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED48u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED50u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED58u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED78u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED80u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED90u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3ED9Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EDB0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EDCCu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EDF4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE00u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE10u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE34u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE44u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE54u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE58u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE68u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE8Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EE9Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EEACu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EEB4u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EEE0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF10u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF20u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF30u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF34u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF44u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF68u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF78u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF88u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF90u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EF9Cu, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EFB0u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EFC8u, &recomp_unit_0570, "recomp_unit_0570");
    runtime.register_function(0x08A3EFE4u, &recomp_unit_0570, "recomp_unit_0570");
}
} // namespace psprecomp
