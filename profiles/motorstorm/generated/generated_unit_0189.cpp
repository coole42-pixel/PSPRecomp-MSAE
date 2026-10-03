#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0189[1018] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0,
    0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38,
    0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0,
    0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103,
    0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0,
    0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0,
    162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178,
};
void recomp_unit_0189_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088C1004u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0189[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C1004;
    case 2u: goto L_088C1008;
    case 3u: goto L_088C1020;
    case 4u: goto L_088C1028;
    case 5u: goto L_088C1038;
    case 6u: goto L_088C1040;
    case 7u: goto L_088C104C;
    case 8u: goto L_088C105C;
    case 9u: goto L_088C106C;
    case 10u: goto L_088C1074;
    case 11u: goto L_088C1088;
    case 12u: goto L_088C1098;
    case 13u: goto L_088C10A0;
    case 14u: goto L_088C10B0;
    case 15u: goto L_088C10B8;
    case 16u: goto L_088C10C0;
    case 17u: goto L_088C10DC;
    case 18u: goto L_088C1114;
    case 19u: goto L_088C1134;
    case 20u: goto L_088C1218;
    case 21u: goto L_088C12A8;
    case 22u: goto L_088C12B4;
    case 23u: goto L_088C1340;
    case 24u: goto L_088C134C;
    case 25u: goto L_088C13E0;
    case 26u: goto L_088C13EC;
    case 27u: goto L_088C1498;
    case 28u: goto L_088C14A4;
    case 29u: goto L_088C14B8;
    case 30u: goto L_088C14C0;
    case 31u: goto L_088C14C8;
    case 32u: goto L_088C14D0;
    case 33u: goto L_088C14D8;
    case 34u: goto L_088C14E0;
    case 35u: goto L_088C14E8;
    case 36u: goto L_088C14F0;
    case 37u: goto L_088C14F8;
    case 38u: goto L_088C1500;
    case 39u: goto L_088C1508;
    case 40u: goto L_088C1510;
    case 41u: goto L_088C1518;
    case 42u: goto L_088C1524;
    case 43u: goto L_088C1608;
    case 44u: goto L_088C1628;
    case 45u: goto L_088C1654;
    case 46u: goto L_088C166C;
    case 47u: goto L_088C1684;
    case 48u: goto L_088C169C;
    case 49u: goto L_088C16B0;
    case 50u: goto L_088C16BC;
    case 51u: goto L_088C16C8;
    case 52u: goto L_088C16D4;
    case 53u: goto L_088C16F0;
    case 54u: goto L_088C171C;
    case 55u: goto L_088C172C;
    case 56u: goto L_088C173C;
    case 57u: goto L_088C174C;
    case 58u: goto L_088C1778;
    case 59u: goto L_088C1790;
    case 60u: goto L_088C179C;
    case 61u: goto L_088C17B4;
    case 62u: goto L_088C17C0;
    case 63u: goto L_088C17E0;
    case 64u: goto L_088C17E8;
    case 65u: goto L_088C17F0;
    case 66u: goto L_088C1808;
    case 67u: goto L_088C1814;
    case 68u: goto L_088C1828;
    case 69u: goto L_088C1840;
    case 70u: goto L_088C184C;
    case 71u: goto L_088C1858;
    case 72u: goto L_088C1860;
    case 73u: goto L_088C1880;
    case 74u: goto L_088C1890;
    case 75u: goto L_088C18A0;
    case 76u: goto L_088C18A8;
    case 77u: goto L_088C18B0;
    case 78u: goto L_088C18BC;
    case 79u: goto L_088C18D0;
    case 80u: goto L_088C18E0;
    case 81u: goto L_088C18E8;
    case 82u: goto L_088C18F0;
    case 83u: goto L_088C1900;
    case 84u: goto L_088C1920;
    case 85u: goto L_088C1930;
    case 86u: goto L_088C193C;
    case 87u: goto L_088C1958;
    case 88u: goto L_088C1960;
    case 89u: goto L_088C196C;
    case 90u: goto L_088C197C;
    case 91u: goto L_088C199C;
    case 92u: goto L_088C19A4;
    case 93u: goto L_088C19AC;
    case 94u: goto L_088C19B4;
    case 95u: goto L_088C19CC;
    case 96u: goto L_088C19D4;
    case 97u: goto L_088C19DC;
    case 98u: goto L_088C19E8;
    case 99u: goto L_088C1A00;
    case 100u: goto L_088C1A0C;
    case 101u: goto L_088C1A2C;
    case 102u: goto L_088C1A68;
    case 103u: goto L_088C1A80;
    case 104u: goto L_088C1A88;
    case 105u: goto L_088C1A9C;
    case 106u: goto L_088C1AA8;
    case 107u: goto L_088C1AB4;
    case 108u: goto L_088C1ABC;
    case 109u: goto L_088C1AC4;
    case 110u: goto L_088C1AD4;
    case 111u: goto L_088C1AEC;
    case 112u: goto L_088C1AF4;
    case 113u: goto L_088C1AFC;
    case 114u: goto L_088C1B18;
    case 115u: goto L_088C1B28;
    case 116u: goto L_088C1B3C;
    case 117u: goto L_088C1B4C;
    case 118u: goto L_088C1B58;
    case 119u: goto L_088C1B60;
    case 120u: goto L_088C1B68;
    case 121u: goto L_088C1B70;
    case 122u: goto L_088C1B7C;
    case 123u: goto L_088C1BB8;
    case 124u: goto L_088C1BD0;
    case 125u: goto L_088C1BD8;
    case 126u: goto L_088C1BEC;
    case 127u: goto L_088C1C00;
    case 128u: goto L_088C1C34;
    case 129u: goto L_088C1C78;
    case 130u: goto L_088C1C80;
    case 131u: goto L_088C1C84;
    case 132u: goto L_088C1C9C;
    case 133u: goto L_088C1CB8;
    case 134u: goto L_088C1CD4;
    case 135u: goto L_088C1CE0;
    case 136u: goto L_088C1D24;
    case 137u: goto L_088C1D30;
    case 138u: goto L_088C1D70;
    case 139u: goto L_088C1D7C;
    case 140u: goto L_088C1DBC;
    case 141u: goto L_088C1DEC;
    case 142u: goto L_088C1E08;
    case 143u: goto L_088C1E28;
    case 144u: goto L_088C1E40;
    case 145u: goto L_088C1E4C;
    case 146u: goto L_088C1E58;
    case 147u: goto L_088C1E64;
    case 148u: goto L_088C1E70;
    case 149u: goto L_088C1E7C;
    case 150u: goto L_088C1E88;
    case 151u: goto L_088C1E94;
    case 152u: goto L_088C1EA0;
    case 153u: goto L_088C1EAC;
    case 154u: goto L_088C1EB4;
    case 155u: goto L_088C1EBC;
    case 156u: goto L_088C1EC4;
    case 157u: goto L_088C1ED8;
    case 158u: goto L_088C1EE0;
    case 159u: goto L_088C1EE8;
    case 160u: goto L_088C1EF0;
    case 161u: goto L_088C1EFC;
    case 162u: goto L_088C1F04;
    case 163u: goto L_088C1F20;
    case 164u: goto L_088C1F30;
    case 165u: goto L_088C1F38;
    case 166u: goto L_088C1F40;
    case 167u: goto L_088C1F48;
    case 168u: goto L_088C1F50;
    case 169u: goto L_088C1F5C;
    case 170u: goto L_088C1F64;
    case 171u: goto L_088C1F6C;
    case 172u: goto L_088C1F78;
    case 173u: goto L_088C1F90;
    case 174u: goto L_088C1FAC;
    case 175u: goto L_088C1FB4;
    case 176u: goto L_088C1FD4;
    case 177u: goto L_088C1FDC;
    case 178u: goto L_088C1FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C1004:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[20]));
    goto L_088C1008;
L_088C1008:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C1020u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x088C1020u) goto L_088C1020;
    return;
L_088C1020:
    aot_gpr[31] = (0x088C1028u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x088C1028u) goto L_088C1028;
    return;
L_088C1028:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088C1038u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x088C1038u) goto L_088C1038;
    return;
L_088C1038:
    aot_gpr[31] = (0x088C1040u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088C1040u) goto L_088C1040;
    return;
L_088C1040:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088C104Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088C104Cu) goto L_088C104C;
    return;
L_088C104C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x088C0F0Cu>(ctx, &aot_mem); return;
      }
      goto L_088C105C;
    }
L_088C105C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088C106Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088C106Cu) goto L_088C106C;
    return;
L_088C106C:
    aot_gpr[31] = (0x088C1074u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088C1074u) goto L_088C1074;
    return;
L_088C1074:
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088C1088u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088C1088u) goto L_088C1088;
    return;
L_088C1088:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088C1098u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 64u, 0x0893F6D8u>(ctx, &aot_mem) && ctx.pc == 0x088C1098u) goto L_088C1098;
    return;
L_088C1098:
    aot_gpr[31] = (0x088C10A0u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 68u, 0x0893F730u>(ctx, &aot_mem) && ctx.pc == 0x088C10A0u) goto L_088C10A0;
    return;
L_088C10A0:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088C10B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 49u, 0x08931588u>(ctx, &aot_mem) && ctx.pc == 0x088C10B0u) goto L_088C10B0;
    return;
L_088C10B0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C10DC;
      }
      goto L_088C10B8;
    }
L_088C10B8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C10DC;
      }
      goto L_088C10C0;
    }
L_088C10C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088C10DCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C10DCu) goto L_088C10DC;
    return;
L_088C10DC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1114:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28352), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1134:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    { const float fs = aot_fpr[16]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = aot_fpr[18]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[19] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[15]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const float fs = aot_fpr[19]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16512u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49344u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (15914u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] | 43691u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C12A8u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_088C1134;
L_088C12A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C12B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (49280u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16448u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1340u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_088C1134;
L_088C1340:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C134C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16384u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (49312u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16512u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C13E0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_088C1134;
L_088C13E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C13EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (49024u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16512u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49440u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16640u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49152u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16448u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16656u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (49424u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1498u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    goto L_088C1134;
L_088C1498:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C14A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C14D8;
      }
      goto L_088C14B8;
    }
L_088C14B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C1518;
      }
      goto L_088C14C0;
    }
L_088C14C0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_088C14F8;
      }
      goto L_088C14C8;
    }
L_088C14C8:
    aot_gpr[31] = (0x088C14D0u);
    // nop
    goto L_088C1218;
L_088C14D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1518;
      }
      goto L_088C14D8;
    }
L_088C14D8:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1508;
      }
      goto L_088C14E0;
    }
L_088C14E0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1518;
      }
      goto L_088C14E8;
    }
L_088C14E8:
    aot_gpr[31] = (0x088C14F0u);
    // nop
    goto L_088C13EC;
L_088C14F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1518;
      }
      goto L_088C14F8;
    }
L_088C14F8:
    aot_gpr[31] = (0x088C1500u);
    // nop
    goto L_088C12B4;
L_088C1500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1518;
      }
      goto L_088C1508;
    }
L_088C1508:
    aot_gpr[31] = (0x088C1510u);
    // nop
    goto L_088C134C;
L_088C1510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1518;
      }
      goto L_088C1518;
    }
L_088C1518:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (16256u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1608:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28360), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1628:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088C1654u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1654u) goto L_088C1654;
    return;
L_088C1654:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28372), aot_gpr[2]);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088C166Cu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C166Cu) goto L_088C166C;
    return;
L_088C166C:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28376), aot_gpr[2]);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088C1684u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1684u) goto L_088C1684;
    return;
L_088C1684:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28380), aot_gpr[2]);
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x088C169Cu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C169Cu) goto L_088C169C;
    return;
L_088C169C:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28372)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28384), aot_gpr[2]);
    aot_gpr[31] = (0x088C16B0u);
    aot_gpr[5] = (0u | 0u);
    goto L_088C14A4;
L_088C16B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28376)));
    aot_gpr[31] = (0x088C16BCu);
    aot_gpr[5] = (0u | 1u);
    goto L_088C14A4;
L_088C16BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28380)));
    aot_gpr[31] = (0x088C16C8u);
    aot_gpr[5] = (0u | 2u);
    goto L_088C14A4;
L_088C16C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28384)));
    aot_gpr[31] = (0x088C16D4u);
    aot_gpr[5] = (0u | 3u);
    goto L_088C14A4;
L_088C16D4:
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
L_088C16F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088C171Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28372));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C171Cu) goto L_088C171C;
    return;
L_088C171C:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C172Cu);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(28376));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C172Cu) goto L_088C172C;
    return;
L_088C172C:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C173Cu);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(28380));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C173Cu) goto L_088C173C;
    return;
L_088C173C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[31] = (0x088C174Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28384));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C174Cu) goto L_088C174C;
    return;
L_088C174C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28372), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28384), 0u);
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
L_088C1778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1790u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28380)));
    goto L_088C1524;
L_088C1790:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C179C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C17B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28384)));
    goto L_088C1524;
L_088C17B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C17C0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28368), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C17E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C17E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C17F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1808u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C1808u) goto L_088C1808;
    return;
L_088C1808:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1814:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 333u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1828u);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C1828u) goto L_088C1828;
    return;
L_088C1828:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x088C1840u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28648), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x08812554u>(ctx, &aot_mem) && ctx.pc == 0x088C1840u) goto L_088C1840;
    return;
L_088C1840:
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x088C184Cu);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C184Cu) goto L_088C184C;
    return;
L_088C184C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1858:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1860:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 197u, 0x08810D44u>(ctx, &aot_mem) && ctx.pc == 0x088C1890u) goto L_088C1890;
    return;
L_088C1890:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C18A8;
      }
      goto L_088C18A0;
    }
L_088C18A0:
    aot_gpr[31] = (0x088C18A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 15u, 0x088930B8u>(ctx, &aot_mem) && ctx.pc == 0x088C18A8u) goto L_088C18A8;
    return;
L_088C18A8:
    aot_gpr[31] = (0x088C18B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 28u, 0x088631FCu>(ctx, &aot_mem) && ctx.pc == 0x088C18B0u) goto L_088C18B0;
    return;
L_088C18B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C18BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C18D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 32u, 0x08931398u>(ctx, &aot_mem) && ctx.pc == 0x088C18D0u) goto L_088C18D0;
    return;
L_088C18D0:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C18E0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 55u, 0x088933C0u>(ctx, &aot_mem) && ctx.pc == 0x088C18E0u) goto L_088C18E0;
    return;
L_088C18E0:
    aot_gpr[31] = (0x088C18E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 222u, 0x08810F24u>(ctx, &aot_mem) && ctx.pc == 0x088C18E8u) goto L_088C18E8;
    return;
L_088C18E8:
    aot_gpr[31] = (0x088C18F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 231u, 0x08893EF8u>(ctx, &aot_mem) && ctx.pc == 0x088C18F0u) goto L_088C18F0;
    return;
L_088C18F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1900:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C1930;
      }
      goto L_088C1920;
    }
L_088C1920:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x088C1930u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C1930u) goto L_088C1930;
    return;
L_088C1930:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C193C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C196C;
      }
      goto L_088C1958;
    }
L_088C1958:
    aot_gpr[31] = (0x088C1960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 80u, 0x088935FCu>(ctx, &aot_mem) && ctx.pc == 0x088C1960u) goto L_088C1960;
    return;
L_088C1960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088C196Cu);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 84u, 0x08893684u>(ctx, &aot_mem) && ctx.pc == 0x088C196Cu) goto L_088C196C;
    return;
L_088C196C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C197C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28400), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C199C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C19A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C19AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C19B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088C19CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088C19CCu) goto L_088C19CC;
    return;
L_088C19CC:
    aot_gpr[31] = (0x088C19D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 107u, 0x088129A0u>(ctx, &aot_mem) && ctx.pc == 0x088C19D4u) goto L_088C19D4;
    return;
L_088C19D4:
    aot_gpr[31] = (0x088C19DCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08811228u>(ctx, &aot_mem) && ctx.pc == 0x088C19DCu) goto L_088C19DC;
    return;
L_088C19DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C19E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088C1A00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C1A00u) goto L_088C1A00;
    return;
L_088C1A00:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1A0C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28408), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[17]);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(25336), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(30880));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    aot_gpr[31] = (0x088C1A68u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(30924));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088C1A68u) goto L_088C1A68;
    return;
L_088C1A68:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x088C1A80u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30934));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088C1A80u) goto L_088C1A80;
    return;
L_088C1A80:
    aot_gpr[31] = (0x088C1A88u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 191u, 0x08933B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1A88u) goto L_088C1A88;
    return;
L_088C1A88:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C1A9Cu);
    aot_gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 226u, 0x08933DB4u>(ctx, &aot_mem) && ctx.pc == 0x088C1A9Cu) goto L_088C1A9C;
    return;
L_088C1A9C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[2]);
      if (branch_taken) {
          goto L_088C1AD4;
      }
      goto L_088C1AA8;
    }
L_088C1AA8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088C1AB4u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x088C1AB4u) goto L_088C1AB4;
    return;
L_088C1AB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1AC4;
      }
      goto L_088C1ABC;
    }
L_088C1ABC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(25336), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088C1AC4;
L_088C1AC4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088C1AD4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x088C1AD4u) goto L_088C1AD4;
    return;
L_088C1AD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1AEC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1AF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1AFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
      if (branch_taken) {
          goto L_088C1B68;
      }
      goto L_088C1B18;
    }
L_088C1B18:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26496)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C1B68;
      }
      goto L_088C1B28;
    }
L_088C1B28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26528)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088C1B68;
      }
      goto L_088C1B3C;
    }
L_088C1B3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1B68;
      }
      goto L_088C1B4C;
    }
L_088C1B4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1B68;
      }
      goto L_088C1B58;
    }
L_088C1B58:
    aot_gpr[31] = (0x088C1B60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C1B60u) goto L_088C1B60;
    return;
L_088C1B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1B70;
      }
      goto L_088C1B68;
    }
L_088C1B68:
    aot_gpr[31] = (0x088C1B70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C1B70u) goto L_088C1B70;
    return;
L_088C1B70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1B7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 333u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    aot_gpr[31] = (0x088C1BB8u);
    aot_gpr[5] = (0u | 166u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C1BB8u) goto L_088C1BB8;
    return;
L_088C1BB8:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C1BD0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30952));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088C1BD0u) goto L_088C1BD0;
    return;
L_088C1BD0:
    aot_gpr[31] = (0x088C1BD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088C1A2C;
L_088C1BD8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C1BECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30980));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x088111ECu>(ctx, &aot_mem) && ctx.pc == 0x088C1BECu) goto L_088C1BEC;
    return;
L_088C1BEC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25548), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088C1C00u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1C00u) goto L_088C1C00;
    return;
L_088C1C00:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088C1C34u);
    aot_gpr[6] = (0u | 52u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C1C34u) goto L_088C1C34;
    return;
L_088C1C34:
    aot_gpr[30] = (28787u << 16u);
    aot_gpr[23] = (30068u << 16u);
    aot_gpr[22] = (26950u << 16u);
    aot_gpr[21] = (23667u << 16u);
    aot_gpr[20] = (28271u << 16u);
    aot_gpr[19] = (25710u << 16u);
    aot_gpr[18] = (28271u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(28767));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(21340));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(26214));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(25964));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(29254));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(17780));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(18015));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088C1C84;
      }
      goto L_088C1C78;
    }
L_088C1C78:
    aot_gpr[31] = (0x088C1C80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 155u, 0x08885EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C1C80u) goto L_088C1C80;
    return;
L_088C1C80:
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_088C1C84;
L_088C1C84:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
    aot_gpr[31] = (0x088C1C9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 125u, 0x08885CF4u>(ctx, &aot_mem) && ctx.pc == 0x088C1C9Cu) goto L_088C1C9C;
    return;
L_088C1C9C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088C1CB8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30996));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x088C1CB8u) goto L_088C1CB8;
    return;
L_088C1CB8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6992))))));
    aot_gpr[5] = (24948u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 9u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24932));
      if (branch_taken) {
          goto L_088C1CE0;
      }
      goto L_088C1CD4;
    }
L_088C1CD4:
    aot_gpr[6] = (0u | 13u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C1D24;
      }
      goto L_088C1CE0;
    }
L_088C1CE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[4] = (21842u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (29486u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21063));
    aot_gpr[5] = (0u | 26228u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_088C1DEC;
      }
      goto L_088C1D24;
    }
L_088C1D24:
    aot_gpr[6] = (0u | 15u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C1D70;
      }
      goto L_088C1D30;
    }
L_088C1D30:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[4] = (20554u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (26228u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29486));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C1DEC;
      }
      goto L_088C1D70;
    }
L_088C1D70:
    aot_gpr[6] = (0u | 14u);
    if (aot_gpr[4] != aot_gpr[6]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
        goto L_088C1DBC;
    }
    goto L_088C1D7C;
L_088C1D7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[4] = (20299u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (26228u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29486));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C1DEC;
      }
      goto L_088C1DBC;
    }
L_088C1DBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[4] = (29486u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29556));
    aot_gpr[5] = (0u | 26228u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_088C1DEC;
L_088C1DEC:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088C1E08u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x088C1E08u) goto L_088C1E08;
    return;
L_088C1E08:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5112), aot_gpr[18]);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), aot_gpr[18]);
    aot_gpr[31] = (0x088C1E28u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 146u, 0x08872B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1E28u) goto L_088C1E28;
    return;
L_088C1E28:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x088C1E40u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28648), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 100u, 0x0881B774u>(ctx, &aot_mem) && ctx.pc == 0x088C1E40u) goto L_088C1E40;
    return;
L_088C1E40:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E4Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31032));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E4Cu) goto L_088C1E4C;
    return;
L_088C1E4C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31048));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E58u) goto L_088C1E58;
    return;
L_088C1E58:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E64u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31064));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E64u) goto L_088C1E64;
    return;
L_088C1E64:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E70u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31076));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E70u) goto L_088C1E70;
    return;
L_088C1E70:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E7Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31084));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E7Cu) goto L_088C1E7C;
    return;
L_088C1E7C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E88u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31096));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E88u) goto L_088C1E88;
    return;
L_088C1E88:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1E94u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31104));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E94u) goto L_088C1E94;
    return;
L_088C1E94:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1EA0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31116));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1EA0u) goto L_088C1EA0;
    return;
L_088C1EA0:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x088C1EACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31124));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 111u, 0x0881B8F0u>(ctx, &aot_mem) && ctx.pc == 0x088C1EACu) goto L_088C1EAC;
    return;
L_088C1EAC:
    aot_gpr[31] = (0x088C1EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 164u, 0x0881BDFCu>(ctx, &aot_mem) && ctx.pc == 0x088C1EB4u) goto L_088C1EB4;
    return;
L_088C1EB4:
    aot_gpr[31] = (0x088C1EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 207u, 0x0886CEACu>(ctx, &aot_mem) && ctx.pc == 0x088C1EBCu) goto L_088C1EBC;
    return;
L_088C1EBC:
    aot_gpr[31] = (0x088C1EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 71u, 0x0884A61Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1EC4u) goto L_088C1EC4;
    return;
L_088C1EC4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5292), aot_gpr[4]);
    aot_gpr[31] = (0x088C1ED8u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 59u, 0x0885B458u>(ctx, &aot_mem) && ctx.pc == 0x088C1ED8u) goto L_088C1ED8;
    return;
L_088C1ED8:
    aot_gpr[31] = (0x088C1EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 33u, 0x08823680u>(ctx, &aot_mem) && ctx.pc == 0x088C1EE0u) goto L_088C1EE0;
    return;
L_088C1EE0:
    aot_gpr[31] = (0x088C1EE8u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C1EE8u) goto L_088C1EE8;
    return;
L_088C1EE8:
    aot_gpr[31] = (0x088C1EF0u);
    aot_gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C1EF0u) goto L_088C1EF0;
    return;
L_088C1EF0:
    aot_gpr[19] = (0u | 5u);
    aot_gpr[31] = (0x088C1EFCu);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C1EFCu) goto L_088C1EFC;
    return;
L_088C1EFC:
    aot_gpr[31] = (0x088C1F04u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 119u, 0x0882FAACu>(ctx, &aot_mem) && ctx.pc == 0x088C1F04u) goto L_088C1F04;
    return;
L_088C1F04:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26112), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (65519u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[31] = (0x088C1F20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10562));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x088C1F20u) goto L_088C1F20;
    return;
L_088C1F20:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088C1F30u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31132));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 67u, 0x08863480u>(ctx, &aot_mem) && ctx.pc == 0x088C1F30u) goto L_088C1F30;
    return;
L_088C1F30:
    aot_gpr[31] = (0x088C1F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 196u, 0x0885AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C1F38u) goto L_088C1F38;
    return;
L_088C1F38:
    aot_gpr[31] = (0x088C1F40u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1F40u) goto L_088C1F40;
    return;
L_088C1F40:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1F50;
      }
      goto L_088C1F48;
    }
L_088C1F48:
    aot_gpr[31] = (0x088C1F50u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1F50u) goto L_088C1F50;
    return;
L_088C1F50:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5112), 0u);
    aot_gpr[31] = (0x088C1F5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7268), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 6u, 0x0885B08Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1F5Cu) goto L_088C1F5C;
    return;
L_088C1F5C:
    aot_gpr[31] = (0x088C1F64u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 6u, 0x08894044u>(ctx, &aot_mem) && ctx.pc == 0x088C1F64u) goto L_088C1F64;
    return;
L_088C1F64:
    aot_gpr[31] = (0x088C1F6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 137u, 0x08885DACu>(ctx, &aot_mem) && ctx.pc == 0x088C1F6Cu) goto L_088C1F6C;
    return;
L_088C1F6C:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[31] = (0x088C1F78u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 30u, 0x0891D23Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1F78u) goto L_088C1F78;
    return;
L_088C1F78:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30480), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1FAC;
      }
      goto L_088C1F90;
    }
L_088C1F90:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088C1FACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C1FACu) goto L_088C1FAC;
    return;
L_088C1FAC:
    aot_gpr[31] = (0x088C1FB4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-30480), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 194u, 0x08810CD8u>(ctx, &aot_mem) && ctx.pc == 0x088C1FB4u) goto L_088C1FB4;
    return;
L_088C1FB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088C1FD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(31148));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 48u, 0x0891C310u>(ctx, &aot_mem) && ctx.pc == 0x088C1FD4u) goto L_088C1FD4;
    return;
L_088C1FD4:
    aot_gpr[31] = (0x088C1FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 165u, 0x08931FC0u>(ctx, &aot_mem) && ctx.pc == 0x088C1FDCu) goto L_088C1FDC;
    return;
L_088C1FDC:
    aot_gpr[4] = (0u | 222u);
    aot_gpr[31] = (0x088C1FE8u);
    aot_gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 149u, 0x08943A90u>(ctx, &aot_mem) && ctx.pc == 0x088C1FE8u) goto L_088C1FE8;
    return;
L_088C1FE8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.pc = 0x088C2000u; return;
}

void recomp_unit_0189(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0189_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_189(Runtime &runtime) {
    runtime.register_generated_unit(189u, 0x088C1000u, 4096u, &recomp_unit_0189, &recomp_unit_0189_entry);
    runtime.register_function(0x088C1004u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1008u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1020u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1028u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1038u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1040u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C104Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C105Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C106Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1074u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1088u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1098u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C10A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C10B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C10B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C10C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C10DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1114u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1134u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1218u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C12A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C12B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1340u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C134Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C13E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C13ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1498u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C14F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1500u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1508u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1510u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1518u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1524u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1608u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1628u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1654u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C166Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1684u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C169Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C16B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C16BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C16C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C16D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C16F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C171Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C172Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C173Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C174Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1778u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1790u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C179Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C17B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C17C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C17E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C17E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C17F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1808u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1814u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1828u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1840u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C184Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1858u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1860u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1880u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1890u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C18F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1900u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1920u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1930u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C193Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1958u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1960u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C196Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C197Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C199Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C19E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1A9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1ABCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1AFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1B7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1BB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1BD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1BD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1BECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1C00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1C34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1C78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1C80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1C84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1C9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1CB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1CD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1CE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1D24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1D30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1D70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1D7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1DBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1DECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1E94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1ED8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1EFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1F90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1FACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1FB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1FD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1FDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x088C1FE8u, &recomp_unit_0189, "recomp_unit_0189");
}
} // namespace psprecomp
