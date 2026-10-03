#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0227[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27,
    0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0,
    37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65,
    0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85,
    0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195,
};
void recomp_unit_0227_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E7000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0227[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E7000;
    case 2u: goto L_088E7010;
    case 3u: goto L_088E7024;
    case 4u: goto L_088E7038;
    case 5u: goto L_088E703C;
    case 6u: goto L_088E706C;
    case 7u: goto L_088E708C;
    case 8u: goto L_088E70A8;
    case 9u: goto L_088E70BC;
    case 10u: goto L_088E70F4;
    case 11u: goto L_088E711C;
    case 12u: goto L_088E7124;
    case 13u: goto L_088E712C;
    case 14u: goto L_088E7134;
    case 15u: goto L_088E7140;
    case 16u: goto L_088E714C;
    case 17u: goto L_088E715C;
    case 18u: goto L_088E7198;
    case 19u: goto L_088E71BC;
    case 20u: goto L_088E71C0;
    case 21u: goto L_088E71C8;
    case 22u: goto L_088E71D0;
    case 23u: goto L_088E71DC;
    case 24u: goto L_088E71E4;
    case 25u: goto L_088E71EC;
    case 26u: goto L_088E71F4;
    case 27u: goto L_088E71FC;
    case 28u: goto L_088E7204;
    case 29u: goto L_088E7214;
    case 30u: goto L_088E721C;
    case 31u: goto L_088E7228;
    case 32u: goto L_088E7250;
    case 33u: goto L_088E725C;
    case 34u: goto L_088E7268;
    case 35u: goto L_088E7270;
    case 36u: goto L_088E7278;
    case 37u: goto L_088E7280;
    case 38u: goto L_088E7288;
    case 39u: goto L_088E7298;
    case 40u: goto L_088E72A0;
    case 41u: goto L_088E72B0;
    case 42u: goto L_088E72B4;
    case 43u: goto L_088E72BC;
    case 44u: goto L_088E72F4;
    case 45u: goto L_088E7300;
    case 46u: goto L_088E7308;
    case 47u: goto L_088E7310;
    case 48u: goto L_088E732C;
    case 49u: goto L_088E7330;
    case 50u: goto L_088E7348;
    case 51u: goto L_088E7360;
    case 52u: goto L_088E736C;
    case 53u: goto L_088E7384;
    case 54u: goto L_088E73A4;
    case 55u: goto L_088E73B0;
    case 56u: goto L_088E73D0;
    case 57u: goto L_088E73E4;
    case 58u: goto L_088E73EC;
    case 59u: goto L_088E743C;
    case 60u: goto L_088E744C;
    case 61u: goto L_088E7454;
    case 62u: goto L_088E745C;
    case 63u: goto L_088E7464;
    case 64u: goto L_088E746C;
    case 65u: goto L_088E747C;
    case 66u: goto L_088E7488;
    case 67u: goto L_088E7494;
    case 68u: goto L_088E74A0;
    case 69u: goto L_088E74A8;
    case 70u: goto L_088E74B0;
    case 71u: goto L_088E74B8;
    case 72u: goto L_088E74CC;
    case 73u: goto L_088E74D4;
    case 74u: goto L_088E74DC;
    case 75u: goto L_088E74F8;
    case 76u: goto L_088E751C;
    case 77u: goto L_088E7530;
    case 78u: goto L_088E7534;
    case 79u: goto L_088E7540;
    case 80u: goto L_088E7550;
    case 81u: goto L_088E755C;
    case 82u: goto L_088E7564;
    case 83u: goto L_088E756C;
    case 84u: goto L_088E7574;
    case 85u: goto L_088E757C;
    case 86u: goto L_088E758C;
    case 87u: goto L_088E7598;
    case 88u: goto L_088E75A0;
    case 89u: goto L_088E75A8;
    case 90u: goto L_088E75B0;
    case 91u: goto L_088E75B8;
    case 92u: goto L_088E75CC;
    case 93u: goto L_088E75D4;
    case 94u: goto L_088E75DC;
    case 95u: goto L_088E75F8;
    case 96u: goto L_088E761C;
    case 97u: goto L_088E7630;
    case 98u: goto L_088E7634;
    case 99u: goto L_088E7640;
    case 100u: goto L_088E7648;
    case 101u: goto L_088E7650;
    case 102u: goto L_088E7664;
    case 103u: goto L_088E7678;
    case 104u: goto L_088E7680;
    case 105u: goto L_088E7688;
    case 106u: goto L_088E7690;
    case 107u: goto L_088E7698;
    case 108u: goto L_088E76A8;
    case 109u: goto L_088E76B4;
    case 110u: goto L_088E76BC;
    case 111u: goto L_088E76C4;
    case 112u: goto L_088E76CC;
    case 113u: goto L_088E76D4;
    case 114u: goto L_088E76E8;
    case 115u: goto L_088E76F0;
    case 116u: goto L_088E76F8;
    case 117u: goto L_088E7714;
    case 118u: goto L_088E7738;
    case 119u: goto L_088E774C;
    case 120u: goto L_088E7750;
    case 121u: goto L_088E7758;
    case 122u: goto L_088E7798;
    case 123u: goto L_088E77A4;
    case 124u: goto L_088E77B8;
    case 125u: goto L_088E77C0;
    case 126u: goto L_088E77C8;
    case 127u: goto L_088E77D0;
    case 128u: goto L_088E77D8;
    case 129u: goto L_088E77EC;
    case 130u: goto L_088E77F4;
    case 131u: goto L_088E77FC;
    case 132u: goto L_088E7830;
    case 133u: goto L_088E7844;
    case 134u: goto L_088E7848;
    case 135u: goto L_088E7850;
    case 136u: goto L_088E7880;
    case 137u: goto L_088E78A0;
    case 138u: goto L_088E78B4;
    case 139u: goto L_088E78D4;
    case 140u: goto L_088E7928;
    case 141u: goto L_088E7960;
    case 142u: goto L_088E7988;
    case 143u: goto L_088E79A0;
    case 144u: goto L_088E79AC;
    case 145u: goto L_088E79C8;
    case 146u: goto L_088E79D4;
    case 147u: goto L_088E79E0;
    case 148u: goto L_088E7A00;
    case 149u: goto L_088E7A10;
    case 150u: goto L_088E7A58;
    case 151u: goto L_088E7AA4;
    case 152u: goto L_088E7AE8;
    case 153u: goto L_088E7AF4;
    case 154u: goto L_088E7B3C;
    case 155u: goto L_088E7B5C;
    case 156u: goto L_088E7B7C;
    case 157u: goto L_088E7B90;
    case 158u: goto L_088E7BB0;
    case 159u: goto L_088E7C04;
    case 160u: goto L_088E7C3C;
    case 161u: goto L_088E7C64;
    case 162u: goto L_088E7C7C;
    case 163u: goto L_088E7C88;
    case 164u: goto L_088E7CC0;
    case 165u: goto L_088E7CD8;
    case 166u: goto L_088E7CDC;
    case 167u: goto L_088E7CF0;
    case 168u: goto L_088E7D08;
    case 169u: goto L_088E7D3C;
    case 170u: goto L_088E7D48;
    case 171u: goto L_088E7DC0;
    case 172u: goto L_088E7DE0;
    case 173u: goto L_088E7DF4;
    case 174u: goto L_088E7E04;
    case 175u: goto L_088E7E14;
    case 176u: goto L_088E7E24;
    case 177u: goto L_088E7E48;
    case 178u: goto L_088E7E7C;
    case 179u: goto L_088E7EAC;
    case 180u: goto L_088E7EF0;
    case 181u: goto L_088E7EFC;
    case 182u: goto L_088E7F28;
    case 183u: goto L_088E7F2C;
    case 184u: goto L_088E7F3C;
    case 185u: goto L_088E7F50;
    case 186u: goto L_088E7F58;
    case 187u: goto L_088E7F68;
    case 188u: goto L_088E7F70;
    case 189u: goto L_088E7F8C;
    case 190u: goto L_088E7F98;
    case 191u: goto L_088E7FB8;
    case 192u: goto L_088E7FC4;
    case 193u: goto L_088E7FDC;
    case 194u: goto L_088E7FF0;
    case 195u: goto L_088E7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E7000:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7038;
      }
      goto L_088E7010;
    }
L_088E7010:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E7024u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 149u, 0x088E2A54u>(ctx, &aot_mem) && ctx.pc == 0x088E7024u) goto L_088E7024;
    return;
L_088E7024:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7010;
      }
      goto L_088E7038;
    }
L_088E7038:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_088E703C;
L_088E703C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E706C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32760), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E708C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E70A8u);
    aot_gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E70A8u) goto L_088E70A8;
    return;
L_088E70A8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E70BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_088E712C;
      }
      goto L_088E70F4;
    }
L_088E70F4:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088E711Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E711Cu) goto L_088E711C;
    return;
L_088E711C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7134;
      }
      goto L_088E7124;
    }
L_088E7124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71C0;
      }
      goto L_088E712C;
    }
L_088E712C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E7228;
      }
      goto L_088E7134;
    }
L_088E7134:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088E7140u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7140u) goto L_088E7140;
    return;
L_088E7140:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71C0;
      }
      goto L_088E714C;
    }
L_088E714C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E715Cu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088E715Cu) goto L_088E715C;
    return;
L_088E715C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (24948u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088E7198u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088E7198u) goto L_088E7198;
    return;
L_088E7198:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088E71BCu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E71BCu) goto L_088E71BC;
    return;
L_088E71BC:
    aot_gpr[20] = (0u | 1u);
    goto L_088E71C0;
L_088E71C0:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71EC;
      }
      goto L_088E71C8;
    }
L_088E71C8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E71EC;
      }
      goto L_088E71D0;
    }
L_088E71D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[31] = (0x088E71DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E71DCu) goto L_088E71DC;
    return;
L_088E71DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E71EC;
      }
      goto L_088E71E4;
    }
L_088E71E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7228;
      }
      goto L_088E71EC;
    }
L_088E71EC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E721C;
      }
      goto L_088E71F4;
    }
L_088E71F4:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7204;
      }
      goto L_088E71FC;
    }
L_088E71FC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088E7204;
L_088E7204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E7214u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088E7214u) goto L_088E7214;
    return;
L_088E7214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7228;
      }
      goto L_088E721C;
    }
L_088E721C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[31] = (0x088E7228u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 62u, 0x088C0498u>(ctx, &aot_mem) && ctx.pc == 0x088E7228u) goto L_088E7228;
    return;
L_088E7228:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7250:
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088E72B4;
      }
      goto L_088E725C;
    }
L_088E725C:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088E7298;
      }
      goto L_088E7268;
    }
L_088E7268:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088E72A0;
      }
      goto L_088E7270;
    }
L_088E7270:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E72A0;
      }
      goto L_088E7278;
    }
L_088E7278:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088E72A0;
      }
      goto L_088E7280;
    }
L_088E7280:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088E72B0;
      }
      goto L_088E7288;
    }
L_088E7288:
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088E72B4;
      }
      goto L_088E7298;
    }
L_088E7298:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E72B4;
      }
      goto L_088E72A0;
    }
L_088E72A0:
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088E72B4;
      }
      goto L_088E72B0;
    }
L_088E72B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088E72B4;
L_088E72B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E72BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E732C;
      }
      goto L_088E72F4;
    }
L_088E72F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088E7300u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7300u) goto L_088E7300;
    return;
L_088E7300:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7310;
      }
      goto L_088E7308;
    }
L_088E7308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7330;
      }
      goto L_088E7310;
    }
L_088E7310:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E72F4;
      }
      goto L_088E732C;
    }
L_088E732C:
    aot_gpr[2] = (0u | 0u);
    goto L_088E7330;
L_088E7330:
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
L_088E7348:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (0u | 30u);
      if (branch_taken) {
          goto L_088E73E4;
      }
      goto L_088E7360;
    }
L_088E7360:
    aot_gpr[7] = (0u | 31u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[8] = (1u << 16u);
    goto L_088E736C;
L_088E736C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_088E73A4;
      }
      goto L_088E7384;
    }
L_088E7384:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] | 32u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_088E73A4;
L_088E73A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E73D0;
      }
      goto L_088E73B0;
    }
L_088E73B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] | 32u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_088E73D0;
L_088E73D0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E736C;
      }
      goto L_088E73E4;
    }
L_088E73E4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E73EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
      if (branch_taken) {
          goto L_088E7534;
      }
      goto L_088E743C;
    }
L_088E743C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E745C;
      }
      goto L_088E744C;
    }
L_088E744C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7464;
      }
      goto L_088E7454;
    }
L_088E7454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7488;
      }
      goto L_088E745C;
    }
L_088E745C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E7464;
    }
L_088E7464:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7488;
      }
      goto L_088E746C;
    }
L_088E746C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E7488;
      }
      goto L_088E747C;
    }
L_088E747C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E74A8;
      }
      goto L_088E7488;
    }
L_088E7488:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E7494u);
    aot_gpr[5] = (0u | 150u);
    goto L_088E72BC;
L_088E7494:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E74B0;
      }
      goto L_088E74A0;
    }
L_088E74A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E74CC;
      }
      goto L_088E74A8;
    }
L_088E74A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E74B0;
    }
L_088E74B0:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E74CC;
      }
      goto L_088E74B8;
    }
L_088E74B8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E74CCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E74CCu) goto L_088E74CC;
    return;
L_088E74CC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7530;
      }
      goto L_088E74D4;
    }
L_088E74D4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088E751C;
      }
      goto L_088E74DC;
    }
L_088E74DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E74F8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088E7348;
L_088E74F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(210)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E7530;
      }
      goto L_088E751C;
    }
L_088E751C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), 0u);
    goto L_088E7530;
L_088E7530:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_088E7534;
L_088E7534:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E7634;
      }
      goto L_088E7540;
    }
L_088E7540:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E7550u);
    aot_gpr[5] = (0u | 155u);
    goto L_088E72BC;
L_088E7550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E756C;
      }
      goto L_088E755C;
    }
L_088E755C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7574;
      }
      goto L_088E7564;
    }
L_088E7564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7598;
      }
      goto L_088E756C;
    }
L_088E756C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E7574;
    }
L_088E7574:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7598;
      }
      goto L_088E757C;
    }
L_088E757C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E7598;
      }
      goto L_088E758C;
    }
L_088E758C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E75A8;
      }
      goto L_088E7598;
    }
L_088E7598:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E75B0;
      }
      goto L_088E75A0;
    }
L_088E75A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E75CC;
      }
      goto L_088E75A8;
    }
L_088E75A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E75B0;
    }
L_088E75B0:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E75CC;
      }
      goto L_088E75B8;
    }
L_088E75B8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E75CCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E75CCu) goto L_088E75CC;
    return;
L_088E75CC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7630;
      }
      goto L_088E75D4;
    }
L_088E75D4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088E761C;
      }
      goto L_088E75DC;
    }
L_088E75DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E75F8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088E7348;
L_088E75F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(210)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E7630;
      }
      goto L_088E761C;
    }
L_088E761C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(304), 0u);
    goto L_088E7630;
L_088E7630:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    goto L_088E7634;
L_088E7634:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E7650;
      }
      goto L_088E7640;
    }
L_088E7640:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088E7650;
      }
      goto L_088E7648;
    }
L_088E7648:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E7750;
      }
      goto L_088E7650;
    }
L_088E7650:
    aot_gpr[16] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(151));
    aot_gpr[31] = (0x088E7664u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088E72BC;
L_088E7664:
    aot_gpr[19] = (aot_gpr[16] << 2u);
    aot_gpr[19] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E7688;
      }
      goto L_088E7678;
    }
L_088E7678:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7690;
      }
      goto L_088E7680;
    }
L_088E7680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E76B4;
      }
      goto L_088E7688;
    }
L_088E7688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E7690;
    }
L_088E7690:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E76B4;
      }
      goto L_088E7698;
    }
L_088E7698:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088E76B4;
      }
      goto L_088E76A8;
    }
L_088E76A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(3492)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E76C4;
      }
      goto L_088E76B4;
    }
L_088E76B4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E76CC;
      }
      goto L_088E76BC;
    }
L_088E76BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E76E8;
      }
      goto L_088E76C4;
    }
L_088E76C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E76CC;
    }
L_088E76CC:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E76E8;
      }
      goto L_088E76D4;
    }
L_088E76D4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E76E8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E76E8u) goto L_088E76E8;
    return;
L_088E76E8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E774C;
      }
      goto L_088E76F0;
    }
L_088E76F0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7738;
      }
      goto L_088E76F8;
    }
L_088E76F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E7714u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    goto L_088E7348;
L_088E7714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(210)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E774C;
      }
      goto L_088E7738;
    }
L_088E7738:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), 0u);
    goto L_088E774C;
L_088E774C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    goto L_088E7750;
L_088E7750:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7848;
      }
      goto L_088E7758;
    }
L_088E7758:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(20))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_gpr[31] = (0x088E7798u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_088E72BC;
L_088E7798:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E7848;
      }
      goto L_088E77A4;
    }
L_088E77A4:
    aot_gpr[30] = (aot_gpr[30] << 2u);
    aot_gpr[30] = (aot_gpr[18] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[23] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E77C8;
      }
      goto L_088E77B8;
    }
L_088E77B8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E77D0;
      }
      goto L_088E77C0;
    }
L_088E77C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E77EC;
      }
      goto L_088E77C8;
    }
L_088E77C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7850;
      }
      goto L_088E77D0;
    }
L_088E77D0:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E77EC;
      }
      goto L_088E77D8;
    }
L_088E77D8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E77ECu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 87u, 0x088999ECu>(ctx, &aot_mem) && ctx.pc == 0x088E77ECu) goto L_088E77EC;
    return;
L_088E77EC:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7844;
      }
      goto L_088E77F4;
    }
L_088E77F4:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E7830;
      }
      goto L_088E77FC;
    }
L_088E77FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(308)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(210)));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(308), aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(304), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E7844;
      }
      goto L_088E7830;
    }
L_088E7830:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(304), 0u);
    goto L_088E7844;
L_088E7844:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), aot_gpr[23]);
    goto L_088E7848;
L_088E7848:
    aot_gpr[31] = (0x088E7850u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088E7850u) goto L_088E7850;
    return;
L_088E7850:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7880:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32760), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E78A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E78B4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088E78B4u) goto L_088E78B4;
    return;
L_088E78B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1080));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E78D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1080));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088E7928u);
    aot_gpr[6] = (0u | 1040u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E7928u) goto L_088E7928;
    return;
L_088E7928:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1040));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(972)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x088E7960u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7960u) goto L_088E7960;
    return;
L_088E7960:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_088E7988:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1040));
    aot_gpr[31] = (0x088E79A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 90u, 0x088E2538u>(ctx, &aot_mem) && ctx.pc == 0x088E79A0u) goto L_088E79A0;
    return;
L_088E79A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E79AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E79C8u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0224_entry, 224u, 173u, 0x088E4D38u>(ctx, &aot_mem) && ctx.pc == 0x088E79C8u) goto L_088E79C8;
    return;
L_088E79C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x088E79D4u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E79D4u) goto L_088E79D4;
    return;
L_088E79D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A00;
      }
      goto L_088E79E0;
    }
L_088E79E0:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(976);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(992);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1008);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1024);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E7A00;
L_088E7A00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7A10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1912));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    aot_gpr[31] = (0x088E7A58u);
    aot_gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7A58u) goto L_088E7A58;
    return;
L_088E7A58:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), ctx.vfpu_scalar_bits_ct<16u>());
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 19u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088E7AA4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7AA4u) goto L_088E7AA4;
    return;
L_088E7AA4:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x088E7AE8u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7AE8u) goto L_088E7AE8;
    return;
L_088E7AE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7B3C;
      }
      goto L_088E7AF4;
    }
L_088E7AF4:
    ctx.set_vfpu_scalar_bits_ct<16u>(PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(976);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(992);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1008);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(1024);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[17]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E7B3C;
L_088E7B3C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7B5C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32752), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7B7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088E7B90u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0221_entry, 221u, 199u, 0x088E1FC8u>(ctx, &aot_mem) && ctx.pc == 0x088E7B90u) goto L_088E7B90;
    return;
L_088E7B90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-960));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-960));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(972), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088E7C04u);
    aot_gpr[6] = (0u | 1328u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088E7C04u) goto L_088E7C04;
    return;
L_088E7C04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1328));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(972)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x088E7C3Cu);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7C3Cu) goto L_088E7C3C;
    return;
L_088E7C3C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_088E7C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1328));
    aot_gpr[31] = (0x088E7C7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 90u, 0x088E2538u>(ctx, &aot_mem) && ctx.pc == 0x088E7C7Cu) goto L_088E7C7C;
    return;
L_088E7C7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7C88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    aot_gpr[31] = (0x088E7CC0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 4u, 0x088E5050u>(ctx, &aot_mem) && ctx.pc == 0x088E7CC0u) goto L_088E7CC0;
    return;
L_088E7CC0:
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(192))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7CDC;
      }
      goto L_088E7CD8;
    }
L_088E7CD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    goto L_088E7CDC;
L_088E7CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E7E7C;
      }
      goto L_088E7CF0;
    }
L_088E7CF0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[30] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    goto L_088E7D08;
L_088E7D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (aot_gpr[4] << 2u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[5] << 2u);
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[16] | 0u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    goto L_088E7D3C;
L_088E7D3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7E24;
      }
      goto L_088E7D48;
    }
L_088E7D48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[30]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7DE0;
      }
      goto L_088E7DC0;
    }
L_088E7DC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(1280)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(1280)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(1224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(1224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088E7DE0;
L_088E7DE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088E7DF4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 198u, 0x08921E98u>(ctx, &aot_mem) && ctx.pc == 0x088E7DF4u) goto L_088E7DF4;
    return;
L_088E7DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1192)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(95));
    aot_gpr[31] = (0x088E7E04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7E04u) goto L_088E7E04;
    return;
L_088E7E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088E7E14u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7E14u) goto L_088E7E14;
    return;
L_088E7E14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[30]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_088E7E24;
L_088E7E24:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088E7D3C;
      }
      goto L_088E7E48;
    }
L_088E7E48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[5]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[6]);
      if (branch_taken) {
          goto L_088E7D08;
      }
      goto L_088E7E7C;
    }
L_088E7E7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7EAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[17] = (0u | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(360));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[16] | 0u);
    goto L_088E7EF0;
L_088E7EF0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
      if (branch_taken) {
          goto L_088E7F68;
      }
      goto L_088E7EFC;
    }
L_088E7EFC:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7F68;
      }
      goto L_088E7F28;
    }
L_088E7F28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088E7F2C;
L_088E7F2C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E7F58;
      }
      goto L_088E7F3C;
    }
L_088E7F3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088E7F50u);
    aot_gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 68u, 0x08828A20u>(ctx, &aot_mem) && ctx.pc == 0x088E7F50u) goto L_088E7F50;
    return;
L_088E7F50:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(836), aot_gpr[19]);
      if (branch_taken) {
          goto L_088E7F68;
      }
      goto L_088E7F58;
    }
L_088E7F58:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E7F2C;
      }
      goto L_088E7F68;
    }
L_088E7F68:
    aot_gpr[31] = (0x088E7F70u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 74u, 0x08828AD0u>(ctx, &aot_mem) && ctx.pc == 0x088E7F70u) goto L_088E7F70;
    return;
L_088E7F70:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(32));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
      if (branch_taken) {
          goto L_088E7EF0;
      }
      goto L_088E7F8C;
    }
L_088E7F8C:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 4u, 0x088E8034u>(ctx, &aot_mem); return;
      }
      goto L_088E7F98;
    }
L_088E7F98:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 4u, 0x088E8034u>(ctx, &aot_mem); return;
      }
      goto L_088E7FB8;
    }
L_088E7FB8:
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(392));
    aot_gpr[21] = (0u | 21u);
    aot_gpr[16] = (0u | 0u);
    goto L_088E7FC4;
L_088E7FC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E7FF8;
      }
      goto L_088E7FDC;
    }
L_088E7FDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088E7FF0u);
    aot_gpr[7] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 68u, 0x08828A20u>(ctx, &aot_mem) && ctx.pc == 0x088E7FF0u) goto L_088E7FF0;
    return;
L_088E7FF0:
    aot_gpr[31] = (0x088E7FF8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 74u, 0x08828AD0u>(ctx, &aot_mem) && ctx.pc == 0x088E7FF8u) goto L_088E7FF8;
    return;
L_088E7FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 3u, 0x088E8020u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0228_entry, 228u, 1u, 0x088E8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0227(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0227_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_227(Runtime &runtime) {
    runtime.register_generated_unit(227u, 0x088E7000u, 4096u, &recomp_unit_0227, &recomp_unit_0227_entry);
    runtime.register_function(0x088E7000u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7010u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7024u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7038u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E703Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E706Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E708Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E70A8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E70BCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E70F4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E711Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7124u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E712Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7134u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7140u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E714Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E715Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7198u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71BCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71C0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71C8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71D0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71DCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71E4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71ECu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71F4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E71FCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7204u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7214u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E721Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7228u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7250u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E725Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7268u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7270u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7278u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7280u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7288u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7298u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E72A0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E72B0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E72B4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E72BCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E72F4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7300u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7308u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7310u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E732Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7330u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7348u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7360u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E736Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7384u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E73A4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E73B0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E73D0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E73E4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E73ECu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E743Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E744Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7454u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E745Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7464u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E746Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E747Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7488u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7494u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74A0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74A8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74B0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74B8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74CCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74D4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74DCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E74F8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E751Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7530u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7534u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7540u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7550u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E755Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7564u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E756Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7574u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E757Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E758Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7598u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75A0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75A8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75B0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75B8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75CCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75D4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75DCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E75F8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E761Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7630u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7634u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7640u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7648u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7650u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7664u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7678u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7680u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7688u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7690u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7698u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76A8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76B4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76BCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76C4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76CCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76D4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76E8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76F0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E76F8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7714u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7738u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E774Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7750u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7758u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7798u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77A4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77B8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77C0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77C8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77D0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77D8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77ECu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77F4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E77FCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7830u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7844u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7848u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7850u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7880u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E78A0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E78B4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E78D4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7928u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7960u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7988u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E79A0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E79ACu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E79C8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E79D4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E79E0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7A00u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7A10u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7A58u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7AA4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7AE8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7AF4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7B3Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7B5Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7B7Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7B90u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7BB0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7C04u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7C3Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7C64u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7C7Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7C88u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7CC0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7CD8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7CDCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7CF0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7D08u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7D3Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7D48u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7DC0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7DE0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7DF4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7E04u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7E14u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7E24u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7E48u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7E7Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7EACu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7EF0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7EFCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F28u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F2Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F3Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F50u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F58u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F68u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F70u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F8Cu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7F98u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7FB8u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7FC4u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7FDCu, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7FF0u, &recomp_unit_0227, "recomp_unit_0227");
    runtime.register_function(0x088E7FF8u, &recomp_unit_0227, "recomp_unit_0227");
}
} // namespace psprecomp
